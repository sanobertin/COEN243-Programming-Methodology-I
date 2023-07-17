/*
 *Created by Bertin Mihigo Sano on 2023-07-12.
 * Author: Concordia ID 40157663
 */

// Details of the question will be added later.
#include <iostream>
#include <string>

using namespace std;

void Title();
void Welcome(string name);
void ConstructHouse();
// All function details are to be found just under main()
int constructedHouseCounter = 0; // A variable to track how many times the house has been constructed

int main(){
    Title();
    string client_name;
    cout << "What\'s your name ?" << endl;
    cin >> client_name;
    Welcome(client_name);
    ConstructHouse(); // Draw a house by  specified height and width
    cout << "Total houses built: " << constructedHouseCounter << endl;
    cout << "We hope you liked your house(s)" << endl;
    return 0; // end my cpp program here
}




void Title(){
    // a function to print welcome banner on the screen
    cout << "-------------------------------------------------------------------------" << endl;
    cout << "\t\t\t House Drawing Console\t\t\t" << endl;
    cout << "-------------------------------------------------------------------------" << endl;
}

void Welcome(string name){
    // Print name of client
    cout << "Hi " << name << " .Welcome to the House Drawing Console!" << endl;
}




void ConstructHouse(void){ // this fx accepts no arguments
    int width, height;
    int counter =1;
    cout << "What is the preferred dimensions of your house ?" << endl << "Enter the width followed by the height" << endl;
    // while loop below to input and validate width
    while( cin>> width ){
        if(width%2 ==0 && width >2){ // Width condition to be met
            break;
        }
        else { // continue looping until user tries 3x
            if(counter<3){
                cout << "Ensure your width is larger than 2 and divisible by 2." << endl;
                counter++;
                continue;
            }
            else{
                cout << "End of " << counter <<" trys! I am terminating this program now." << endl;
                exit(EXIT_SUCCESS); // Terminate main here ()
            }

        }
    }
    cin >> height; // height doesn't need validation;
    // Roof drawing starts here
        for(int i = 2; i <= width; i=i+2){
            for(int s = i; s < width; s++)
                cout << " ";
            for(int j = 1; j <= i; j++)
                cout << "* ";
            cout << endl;
        }
    // Roof drawing ends here


    // House body drawing starts here
    int empty_space = (width-2)*2;
    for(int i=1; i<=height;i++){
        cout<<"|";
        for(int j=0; j<=empty_space;j++) {
            cout << " ";
        }
        cout <<"|" << endl;
    }
    for(int i=1;i<=width;i++)
        cout <<"- ";
    cout << endl << endl;
    // House body drawing ends here
    constructedHouseCounter++;
    cout << "Would you like to draw another house ?  yes or no" << endl;
    string ans;
    cin >> ans;
    transform(ans.begin(), ans.end(), ans.begin(), ::tolower); // transform() learned from internet
    if(ans == "no")
        return; // This line is to end this fx is user inputs no
    else if(ans == "yes"){
        ConstructHouse(); // recursive function
    }
    else{
        cout << "Invalid Response. I am ending the program here" << endl;
        exit(EXIT_SUCCESS); // end whole program early
    }



}





