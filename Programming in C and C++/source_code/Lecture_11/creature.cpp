#include <iostream>

using namespace std;c.printName();

class Creature {
    protected:
		int distance;

	public:
		Creature();  
		void run() const;
};

Creature::Creature(): distance(10) {
}    

void Creature::run() const { 
    cout << "running " << distance << " meters!\n";
}  

class Wizard : public Creature {
    private:
		int distFactor;

	public:
		Wizard();
		void hover() const;
};

Wizard::Wizard() : distFactor(3) {
}  

void Wizard::hover() const {
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

int main() { 
    cout << "Creating an Creature." << endl;
    Creature c;
    c.run();
    //c.hover();

    cout << "Creating a Wizard." << endl;
    Wizard w;
    w.run();
    w.hover();

    return 0;
} 