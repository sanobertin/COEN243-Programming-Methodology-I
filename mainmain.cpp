//
// Created by Bertin Mihigo Sano on 2023-07-15.
//
#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    int a;
    cout << "Hello!" << endl << "Type something" << endl;
    cin >> a;
    if(a==1)
        exit(EXIT_FAILURE);
    else if(a==2)
        //exit(EXIT_SUCCESS);
        abort();
    //cout << argv[0] << endl;
    else
        system("ping www.google.com -c 10");
        return main(argc, argv);
    //return 0;
}