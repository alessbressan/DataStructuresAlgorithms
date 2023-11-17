// DataStructuresAlgo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
// Class Refresher
// Class for simulating an integer cell

class IntCell {
private:
    int storedValue;
public:
    /*
    Construct the IntCell with initial value of 0
    */
    //Explicit Constructor
    // Making all 1 parameter constructors explicit avoids type conversions
    //
    IntCell(int initialValue = 0){
        storedValue = initialValue;
    }
        
    int read() {
        return storedValue;
    }

    void write(int x) {
        storedValue = x;
    }
};


