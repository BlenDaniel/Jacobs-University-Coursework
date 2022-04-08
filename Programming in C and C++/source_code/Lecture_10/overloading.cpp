#include <iostream>
#include <string>

/* 
This example illustrates how function overloading works.
Two dummy classes, Student and Car, are defined. The print
functions have the same logic behaviour, so they have the same
name. Calling is not ambiguous as parameters type determines
which one should be called
*/

using namespace std;

class Student {
  private: 
    string name;
    char major; //majors are coded with a char

  public:
    Student(const string& n,char m) { name = n; major = m; };
    // getter methods
    string getname() const { return name; };
    char getmajor() const { return major; };
};

class Car {
  private:
    string model;
    int engine;

  public:
    Car(const char* m,int e) : model(m) , engine(e) {};
    string getmodel() const { return model; };
    int getengine() const { return engine; };
};

// This print function requires a Student
void print(const Student& s) {
  cout << s.getname() << " " << s.getmajor() << endl;
}

// This one requires a Car
void print(const Car& c) {
  cout << c.getmodel() << " " << c.getengine() << endl;
}

/*
int print(const Car& c){
  //WRONG : return type is not in the signature
  return 1;
}
*/

int main() 
{
  Student first("ABRC", 'c');
  Car second("Ferrari", 3000);

  print(first);  // parameters determine which one will be called
  print(second);
  
  return 0;
}