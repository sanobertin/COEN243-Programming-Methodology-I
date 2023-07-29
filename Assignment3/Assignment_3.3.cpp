/* Assignment 3
 * Question 2
 * Recursive function to check whether number is palindrome or not
 * Worked in a group of 2
 * Kruti Patel. Student ID:
 * Bertin Mihigo Sano. Student ID: 40157663
 */

#include <iostream>
#include <vector>
using namespace std;

char robot[10]; // define the array of the robot position
static int position=0;
vector <pair<int, int>> history; // a dynamic array to store last operations executed; <operation(see menu), number of shifts>
vector <pair<int, int>> cancelled;// a dynamic array to store all cancelled operations.

void exit(void){ // calling the function will exit the program
    exit(EXIT_SUCCESS);
}

void showGrid(int current_position){
    for(int i=0;i<10;i++){
        if(i==current_position)
            robot[i]= '^';
        else
            robot[i]= '*';

        cout << robot[i];
    }
    cout << endl << endl;
    history.push_back(make_pair(5, 0));
}

void display(int current_position){
    for(int i=0;i<10;i++){
        if(i==current_position)
            robot[i]= '^';
        else
            robot[i]= ' '; // whitespace

        cout << robot[i];
    }
    cout << endl << endl;
    history.emplace_back(make_pair(3, 0));
}


void reboot(){
    // Robot position will be set back to zero
    position = 0;
    history.emplace_back(make_pair(4, 0));
}
void rightShift(int current_position){
    cout << "How many cells you want to move to the right from " << position<<endl;
    int shift_cells;
    cin >> shift_cells;
    int new_position = shift_cells + current_position;
    if(new_position <=9 && new_position >=0){
         position = new_position;
    }
    else {
        cout << "Invalid number of shifts!\n";
        return rightShift(current_position);
    }
    history.emplace_back(make_pair(1, current_position));
}
void leftShift(int current_position){
    cout << "How many cells you want to move to the left from " << position << endl;
    int shift_cells;
    cin >> shift_cells;
    int new_position = current_position - shift_cells;
    if(new_position <=9 && new_position >=0){
        position = new_position;
    }
    else {
        cout << "Invalid number of shifts!\n";
        return rightShift(position);
    }
    history.emplace_back(make_pair(2, current_position));
}


void cancel(){
    int n;
    cout << "how many operations you\'d like to cancel ? \n";
    cin >> n;
    cancelled.clear(); // flash the memory of all cancelled operations
    int size = history.size(); // size of history array
    if(n <= size){
        for(int i=size-1;i>=0;i--){
            if(history[i].first == 1) {
                position = position - history[i].second;
                history.pop_back();
                cancelled.emplace_back(make_pair(history[i].first, history[i].second));
            }
            else if(history[i].first == 2) {
                position = position + history[i].second;
                history.pop_back();
                cancelled.emplace_back(make_pair(history[i].first, history[i].second));
            }
            else {
                position = position + history[i].second;
                history.pop_back();
                cancelled.emplace_back(make_pair(history[i].first, history[i].second));
            }
        }
    }
    else
        cout << " Invalid numbers of operations completed!\n"; return cancel();

}

void replay(){
    int size = cancelled.size();
    for(int i = size-1;i>=0;i--)
        position = position+cancelled[i].second;
}

void menu(){
    cout << endl << "Controller Menu:" << endl << endl;
    cout << "1. Right" << endl;
    cout << "2. Left" << endl;
    cout << "3. Display" << endl;
    cout << "4. Reboot" << endl;
    cout << "5. Show array " << endl;
    cout << "6. Exit" << endl;
    cout << "7. Replay all cancelled operations" << endl;
    cout << "8. Cancel n operations" << endl;
    int option;
    cin >>option;
    if(option>=1 && option<=6){
        //int next_position;
        switch (option) {
            case 1:
                rightShift(position);
                break;
            case 2:
                leftShift(position);
                break;
            case 3:
                display(position);
                break;
            case 4:
                reboot();
                break;
            case 5:
                showGrid(position);
                break;
            case 6:
                exit();
                break;
            case 7:
                replay();
                break;
            case 8:
                cancel();
                break;
            default:
                break;

        }
        menu();
    }
    else{
        cout <<"Please enter a valid option\n";
        menu();
    }
}

// Cancel function

int main(){
    cout << endl << endl << "*****Robots Movements App*****" << endl << endl;
    menu();
    return 0; // program to end here.
}

