#include <iostream>
#include "stack.h"
using namespace std;

int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);


    cout<<st.pop();


    return 0;
}

