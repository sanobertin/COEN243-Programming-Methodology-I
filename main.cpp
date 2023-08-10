#include<iostream>
#include <vector>
using namespace std;
/*
template <class T>
void printArray(T arr[]){
    int s = sizeof(arr)/sizeof(T);
    for(size_t i=0;i<s;i++)
        cout << arr[i] << endl;
}
*/
int main(){
    vector<float> A {1.0, 2.0, 3.0, 4.0};
    vector<float*> p;
    array <double, 4> C;
    //C = {1.0, 2.0, 3.0, 4.0};
    float *CC = nullptr;
    CC = A.data();
    cout << A.data()<< endl << A.size() << endl;





}