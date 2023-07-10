/*
 *Created by Bertin Mihigo Sano on 2023-07-12.
 * 40157663
 */


// Details of the question will be added later.
#include <iostream>
using namespace std;


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




void ConstructHouse(unsigned width, unsigned height){
    void RoofDraw(width){
        int s, i, j;
        for(i = 1; i <= width; i++)
        {
//for loop to put space
            for(s = i; s < width; s++)
                cout << " ";

//for loop for displaying star
            for(j = 1; j <= i; j++)
                cout << "* ";
// ending line after each row
            cout << endl;
        }
    }

    void HouseBody(height, width){
        int house_length = height+1;
        int empty_space = (width-2)*2;
        for(int i=1; i<=house_length;i++){
            cout<<"|";
            for(int j=1; j<=empty_space;j++) {
                cout << " ";
            }
            cout <<"|" << endl;
        }
    }

}


int main(){
    Title();
    string client_name;
    unsigned int width, height;
    cout << "What\'s your name ?" << endl;
    cin >> client_name;
    Welcome(client_name);
    cout << "What is the preferred dimensions of your house ?" << endl << "Enter the width followed by the height" << endl;
    int counter =1;
    // while loop below input and validate width
    while( cin>> width ){
        if(width%2 ==0 && width >2){
            break;
        }
        else {
            if(counter<3){
                cout << "Ensure your width is larger than 2 and divisible by 2." << endl;
                counter++;
                continue;
            }
            else{
                cout << "End of 3 trys! I am terminating this program" << endl;
                return 0; // Terminate main here ()
            }

        }
    }
    // height doesn't need validation;
    cin >> height;
    // Draw a roof by  specified height
    ConstructHouse(width, height);
    int constructedHouseCounter = 1;
    cout << "Would you like to draw another house ?" << endl;
    string ans;
    while(cin >> ans){
        transform(ans.begin(), ans.end(), ans.begin(), ::tolower);
        if(ans=="no")
            break;
        else if(ans=="yes")
            counter++;
            ConstructHouse(width, height);
        else
            cout << "Invalid Response. I am ending the program here" << endl;
    }





    cout << "Total houses built: " << counter << endl;
    cout << "We hope you liked your house(s)" << endl;
    return 0;
}





