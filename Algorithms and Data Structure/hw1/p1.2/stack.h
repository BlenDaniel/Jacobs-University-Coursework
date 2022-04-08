/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <iostream>
using namespace std;

template<class T>
class Stack{
    private:
        T *array;
        int size;
        int currentIndex;
        void expand();

    public:
        Stack();
        Stack(const Stack&);
        Stack(int size);
        ~Stack();
        bool push(T& element);
        bool pop(T& out);
        T back(void);
        int getNumEntries();

};

template<class T>
Stack<T>::Stack(){
    array = new T[5];
    size = 5;
    currentIndex = -1;
}

template<class T>
Stack<T>::Stack(int newSize) {
    array = new T[newSize];
    size = newSize;
    currentIndex = newSize - 1;
}

template<class T>
Stack<T>::Stack(const Stack& stack) {
    this->size = stack.size;
    this->currentIndex = stack.currentIndex;
    for (int i = 0; i < size; i++)
    {
       array[i] = stack.array[i];
    }
}

template<class T>
Stack<T>::~Stack() {
    cout << "Destructor is called" << endl;
    delete[] array;
}

template<class T>
bool Stack<T>::push(T& element){
    if(currentIndex + 1 == size){
        return false;
    }
    array[currentIndex] = element;
    currentIndex++;
    size++;
    return true;
}

template<class T>
bool Stack<T>::pop(T& out){
    if(currentIndex < 0){
        return false;
    }
    out = array[currentIndex--];
    size--;
    return true;
}

template<class T>
void Stack<T>::expand(){
    T *newSize = new T[2 * size];
    for (int i = 0; i < size; i++)
    {
       newSize[i] = array[i];
    }
    delete[] array;
    array = newSize;
    size = 2 * size;    
}

template<class T>
T Stack<T>::back(){
    return array[currentIndex];
}

template<class T>
int Stack<T>::getNumEntries(){
    return this->size;
}
