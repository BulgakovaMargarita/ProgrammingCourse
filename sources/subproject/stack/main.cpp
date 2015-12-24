#include <iostream>
#include "stack.h"
using namespace std;

int main()
{
    Stack st;
    int i=0;
    int a;
    while (i<10){
        cin>>a;
        st.push(a);
        i++;
    }


    cout<<st.b;


    return 0;
}

