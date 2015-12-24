#include <iostream>
using namespace std;

#include "stackapp.h"
int main()
{
    cout<<"Введите количество элементов стека"<<endl;
    int n;
    cin>>n;
    Stackapp st(n);
    st.launch();


    return 0;
}
