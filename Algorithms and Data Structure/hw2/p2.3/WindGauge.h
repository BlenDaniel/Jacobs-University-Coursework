/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <iostream>
#include <deque>

class WindGauge {
    public:
        WindGauge(int period = 12);
        void currentWindSpeed(const int speed);
        int highest() const;
        int lowest() const;
        int average() const;
        std::deque<int> getHistory();
    private:
        std::deque<int> history;
        int period;


};