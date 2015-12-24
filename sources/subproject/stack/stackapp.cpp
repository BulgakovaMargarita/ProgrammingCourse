#include "stackapp.h"
#include "stacklib.h"
#include <iostream>
using namespace std;

Stackapp::Stackapp(const int maxSize):
size(maxSize)
{
  st = new Stack(size);
}

Stackapp::~Stackapp()
{
    delete st;
}
void Stackapp::launch()
{
   cout<<"Введите значения элементов стека"<<endl;
   try{
   getStack();
   }
   catch(int thr){
       cerr << " Слишком большое число!!!" << endl;
   }
    printStack();
}

void Stackapp::getStack()
{
    int number;
    for(int i=0; i<size; i++){
    cin >> number;
    if (number>100000)
        throw 1;
    st->push(number);}
}

void Stackapp::printStack()
{
    st->printStack();
}
