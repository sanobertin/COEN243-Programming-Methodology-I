//
// Created by Bertin Mihigo Sano on 2023-07-13.
//

#include <iostream>
using namespace std;
template<typename Tp>
class Anything{
private:
    Tp hold;
public:
    Anything(Tp hold){
        this->hold = hold;
    }
    Tp getHold(){
        return hold;
    }
};

int main(){
    Anything<double> obj(12.34);
    cout << obj.getHold() << endl;
}