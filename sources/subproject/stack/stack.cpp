#include "stack.h"
#include <math.h>
#include <iostream>
using namespace std;

Stack::Stack()
{
   array=new int[6];
   i=0;
}

Stack::Stack(const Stack &oStack):
    array(oStack.array),
    i(oStack.i)


{

    for (i=0; i<=5; i++)
        array[i]=oStack.array[i];

}

Stack::~Stack()
{
  delete[] array;

}

void Stack::push()
{
i=0;
   while(i<6){
  cin>>array[i];
   i++;
}

}

int Stack::pop()
{
    i=5;
    while(i>=0){
        cout<<array[i];
        i--;
    }
return 0;

}



