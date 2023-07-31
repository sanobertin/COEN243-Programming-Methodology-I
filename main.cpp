#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> v = {5,8,6,3,2,0,1,4};
    v.erase(0,1);
    for(int i = 0; i<v.size(); i++){
        cout << v[i] << " ";
    }
}