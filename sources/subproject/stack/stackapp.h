#ifndef STACKAPP_H
#define STACKAPP_H

#include<iostream>
#include "stacklib.h"

class Stackapp
{
public:
    Stackapp(int=10);
    ~Stackapp();
    void launch();
    int maxSize;
private:
    const int size;
    Stack* st;
    void getStack();
    void printStack();

};

#endif // STACKAPP_H
