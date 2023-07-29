
#include <iostream>
#include <cmath>


using namespace std;

// a function to multiple every member in the array by x1000
void multiplier(float& arr[]){
    int size; // size of the passed array
    size = sizeof(arr)/sizeof(float );
    size--;
    for(int i=0; i<=size;i++){
        //*(arr + i ) = *(arr+i)*1000;
        arr[i]= arr[i]*100;
    }
}

int main(){
    int N;
    cout << "How many employees you need? :";
    cin >> N;
    float grades[N];
    int range = 100 - 0 + 1;
    for (int i = 0; i < N; i++) {
        grades[i] = (float) (rand() % range + 0);
        cout << grades[i] << endl;
    }
    cout << endl << endl << endl;
    multiplier(grades);
    for(int i=0;i<N;i++){
        cout << grades[i] << endl;
    }
    cout <<"End program here" << endl;

    return 0;
}