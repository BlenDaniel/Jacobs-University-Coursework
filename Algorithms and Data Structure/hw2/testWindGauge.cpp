/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <iostream>
#include "WindGauge.h"

using namespace std;

int main(int argc, char **argv){
    WindGauge windGauge; 

    windGauge.currentWindSpeed(15);
    windGauge.currentWindSpeed(16);
    windGauge.currentWindSpeed(12);
    windGauge.currentWindSpeed(15);
    windGauge.currentWindSpeed(15);

    for(auto i : windGauge.getHistory()){
        cout << i << " " ;
    }
    
    cout << endl;

    windGauge.currentWindSpeed(16);
    windGauge.currentWindSpeed(17);
    windGauge.currentWindSpeed(16);
    windGauge.currentWindSpeed(20);
    windGauge.currentWindSpeed(17);
    windGauge.currentWindSpeed(16);
    windGauge.currentWindSpeed(15);
    windGauge.currentWindSpeed(16);
    windGauge.currentWindSpeed(20);
    windGauge.currentWindSpeed(20);

    for(auto i : windGauge.getHistory()){
        cout << i  << " ";
    }

    return 0;
}