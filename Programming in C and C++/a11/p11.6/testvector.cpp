/*
CH-230-A
a4 p5.[c]
Blen Assefa
bassefa@jacobs-university.de
*/
#include <iostream>
#include "Vector.h" 

using namespace std;

int main(){
    /* Double list declaration */
    double *c, *c2;
    /* Size of the list */
    int size = 2;
    c = new double[size];
    c[0] = 3.9;
    c[1] = 5.6;
    c2 = new double[size];
    c2[0] = 8.2;
    c2[1] = 2.8;
    /* Vectors for testing */
    Vector v1;
    Vector v2(size, c);
    Vector v3(v2);
    Vector v4(size, c2);
    /* Printing the vectors */
    cout << "\nPrinting the vectors" << endl;
    v1.print();
    v2.print();
    v3.print();
    v4.print();
    /* To get the sum of two vectors */
    cout << "\nSum of vector 2 and vector 4: " << endl;
    (v2.add(v4)).print();
    /* To get the Difference of two vectors */
    cout << "\nDifference of vector 2 and vector 4: " << endl;
    (v2.difference(v4)).print();
    /* To print the maginitude of the vectors */
    cout << "\nMaginitude of Vector 1 is: " << v1.norm() << endl;
    cout << "Maginitude of Vector 2 is: " << v2.norm() << endl;
    cout << "Maginitude of Vector 3 is: " << v3.norm() << endl;
    cout << "Maginitude of Vector 4 is: " << v4.norm() << endl;
    /* To print the Scalar product of the vectors */
    cout << "\nScalar product of vector 1 and 2 is: " << v1.product(v2) << endl;
    cout << "Scalar product of vector 2 and 3 is: " << v2.product(v3) << endl;
    cout << "Scalar product of vector 3 and 4 is: " << v3.product(v4) << endl;
    
}
