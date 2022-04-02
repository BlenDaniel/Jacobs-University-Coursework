/*
CH-230-A
a4 p2.[c]
Blen Assefa
bassefa@jacobs-university.de
*/

#include <iostream>
#include <list>
#include <cassert>

using namespace std;

template <typename T>
class Node{
    public:
        T value;
        Node* next;
        Node* prev;
};


template <typename T>
class List{
    private:
        Node<T> *front;
        Node<T> *back;
        int size;

    public:
        List(){
            size = 0;
            front = NULL;
            back = NULL;
        }
        List(const T value){
            Node<T>* node = new Node<T>;
            node.value = value;
            node.next = NULL, node.prev = NULL;
            back = node;
            front = node;
            size = 1;
        };
        List(const List& list){
            this->size = list.size;
            Node<T>* temp = list.head;
            while(temp != NULL) {
                this->push_back(temp->value);
                temp = temp->next;
            }
        };
        ~List(){
            cout << "Destructor Called" << endl;
            while (front != NULL) {
                Node<T> *temp = front;
                front = front->next;
                delete temp;
            } 
        }
        void push_front(T elem){
            Node<T>* node = new Node<T>;
            node->value = elem;
            if (size == 0) {
                node->next = NULL;
                node->prev = NULL;
                front = node;
                back = node;
            } else {
                node->next = front;
                node->prev = NULL;
                front->prev = node;
                front = node;
            }
            size++;
        }
        void push_back(T elem){
            Node<T>* node = new Node<T>;
            node->value = elem;
            if (size == 0) {
                node->next = NULL;
                node->prev = NULL;
                front = node;
                back = node;
            } else {
                node->prev = back;
                node->next = NULL;
                back->next = node;
                back = node;
            }
            size++;
        }
        void pop_front(T& node){
            assert(size != 0 && back != NULL);
            node = front->value;
            if (size == 1) {
                delete front;
                front = NULL, back = NULL;
            } else {
                Node<T> *temp = front;
                front = front->next;
                delete temp;
                front->prev = NULL;
            }
            size--;

        }
        void pop_back(T& node){
            assert(size != 0 && back != NULL);
            node = back->value;
            if (size == 1) {
                delete back;
                front = NULL, back = NULL;
            } else {
                Node<T>* temp = back;
                back = back->prev;
                back->next = NULL;
                delete temp;
            }
            size--;
        }
        const T& getFront(){
            assert(front != NULL);
            return front->value;
        }
        const T& getBack(){
            assert(back != NULL);
            return back->value;
        }
        int get_size(){
            return size;
        }

};

