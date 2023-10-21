// Created by Bertin Mihigo Sano on 2023-08-28.
//
#include <list>
#include <iostream>
#include <queue>
using namespace std;

int main(){
    priority_queue<uint, vector<uint>> corn;
    for (int i = 0; i < 100; ++i) {
        corn.push((rand()%23)) ;
    }// end of init
    // now printed my sorted queue
    while(!corn.size()==0) {
        cout << corn.top() << '\t';
        corn.pop();
    }
    // end
}