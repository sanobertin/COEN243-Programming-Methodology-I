//
// Created by Bertin Mihigo Sano on 2023-08-18.
//

#include <iostream>
#include <ctime>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main(){
    auto start =  high_resolution_clock::now() ;
    time_t now = time(0);
    char* Time = ctime(&now);
    cout << "Local time: " << Time << endl;
    // convert now to tm struct for UTC
    tm *gmtm = gmtime(&now);
    Time = asctime(gmtm);
    cout << "The UTC: "<< Time << endl;
    ///
    //
    //

    auto stop =  high_resolution_clock::now() ;
    auto duration = stop - start;
    duration = duration_cast<minutes>(duration);
    cout <<"Program elapsed for: "<< duration.count() <<" seconds" <<endl;
    return 0; // end main here
}