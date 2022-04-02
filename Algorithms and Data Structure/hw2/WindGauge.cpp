/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include "WindGauge.h"
#include <queue>

using namespace std;

WindGauge::WindGauge(int period){
    this->period = period;
}


void WindGauge::currentWindSpeed(const int speed){
    if(history.size() == 12){
        history.pop_front();
    }
    history.push_back(speed);
}

int WindGauge::highest() const{
    int max = 0;
    deque<int>::const_iterator pos;
    pos = history.begin();
    for(unsigned int i = 0; i < history.size(); i++)
    {
        if(*pos > max){
            max = *pos;
        }
        pos++;
    }
    return max;
}

int WindGauge::lowest() const{
    int min = 0;
    deque<int>::const_iterator pos;
    pos = history.begin();
    for(unsigned int i = 0; i < history.size(); i++)
    {
        if(*pos < min){
            min = *pos;
        }
        pos++;
    }
    return min;
}

int WindGauge::average() const{
    int ave = 0;
    deque<int>::const_iterator pos;
    pos = history.begin();
    for(unsigned int i = 0; i < history.size(); i++)
    {
        ave += *pos;
        pos++;
    }
    return ave / (history.size() - 1);
}

deque<int> WindGauge::getHistory(){
    return this->history;
}
