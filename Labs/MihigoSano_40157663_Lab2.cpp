//
// Created by Bertin Mihigo Sano on 2023-07-12.
//


#include <iostream>
#include <string>

using namespace std;

int main(){
    int s;
    int day, month, year;
    string phone_number; // 514 --
    phone_number = "514";
    cout << "Enter any number" << endl;
    cin >> s;

    switch (s) {
        case 1:
        // Generate Phone number
        {
            cout << "Enter 3 digits that represents your birthday. Start by the day followed by month then year" << endl;
            cin >> day >> month >> year;
            static string str_day = to_string(day);
            static string str_month = to_string(month);
            static string str_year = to_string(year);

            if(str_day.size() == 1 ) // single value day condition
            {
                str_day = "0" + str_day;
                phone_number = phone_number + str_day;
                //break;
            }
            else {
                phone_number = phone_number  + str_day;
            }

            if(month%4==0 && month%3 !=0)
            {
                int value_67 = month*5;
                string str_value_67 = to_string(value_67);
                phone_number = phone_number + str_value_67;
                //break;
            }
            else if(month%3==0 && month%3 !=4)
            {
                string str_value_67 = str_month + str_day[1] ; // last digit of day
                phone_number = phone_number +str_value_67;
                //break;
            }
            else{
                string str_value_67 = to_string((month*7));
                phone_number = phone_number + str_value_67;
                //break;
            }
            // 6th, 7th, 8th digits now!
            //string part3;
            //part3= str_year[1]


            phone_number = phone_number;
            cout << "Here is your phone number:" << endl << phone_number << str_year[1] << str_year[2] << str_year[3]  << endl;
            break;

        break; // break case 1 here
        }
        default:
            cout << "I was expecting 1 :) \n Bye bye!" << endl;
            break;

    }

return 0;
}