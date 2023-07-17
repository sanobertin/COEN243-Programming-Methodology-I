/* Write a program that takes the income of an employee and
 * calculates the corresponding net income and tax portion based on the following information:
 * tax = 45%: income >= 110,000 $
• tax = 35%: 90 K <= income < 110 K
• tax = 25%: 70 K <= income <90 K
• tax = 15%: 40 K <= income <70 K
• tax = 5%: income <40 K
 */


// Author 40157663 Concordia student ID

#include <iostream>

using namespace std;

int main()
{
    cout << "Hi there! \n I am going to help you calculate your income taxes. Let's start by writing down your annum income \n";
    double gross_income;
    double total_tax;
    double net_income;
    cin >> gross_income;
    cout <<"Thanks! Here is your income breakdown and your tax bracket is: \n";
    if(gross_income>=0) // condition that income can not be less than 0
    {
        if(gross_income>=110000)
        {
            //
            cout << "Your tax rate is 45% \n";
            total_tax = (gross_income/100)*45;
            net_income = gross_income - total_tax;
            cout << "Total tax: " <<total_tax <<endl;
            cout << "Net your income: "<<net_income<<endl;
        }
        else if(gross_income>=90000 && gross_income<110000)
        {
            cout << "Your tax rate is 35% \n";
            total_tax = (gross_income/100)*35;
            net_income = gross_income - total_tax;
            cout << "Total tax: " <<total_tax <<endl;
            cout << "Net your income: "<<net_income<<endl;
        }
        else if(gross_income>=70000 && gross_income<90000)
        {
            //
            cout << "Your tax rate is 25% \n";
            total_tax = (gross_income/100)*25;
            net_income = gross_income - total_tax;
            cout << "Total tax: " <<total_tax <<endl;
            cout << "Net your income: "<<net_income<<endl;
        }
        else if(gross_income>=40000 && gross_income<70000)
        {
            //
            cout << "Your tax rate is 15% \n";
            total_tax = (gross_income/100)*15;
            net_income = gross_income - total_tax;
            cout << "Total tax: " <<total_tax <<endl;
            cout << "Net your income: "<<net_income<<endl;
        }
        else if(gross_income <40000)
        {
            //
            cout << "Your tax rate is 5% \n";
            total_tax = (gross_income/100)*5;
            net_income = gross_income - total_tax;
            cout << "Total tax: " <<total_tax <<endl;
            cout << "Net your income: "<<net_income<<endl;
        }
        else
            cout << "DNE\n";
    }
    else
        cout << " Your income cannot be less than zero\n";

    cout << "\nThanks and see you next time!\n";

    return 0;
}