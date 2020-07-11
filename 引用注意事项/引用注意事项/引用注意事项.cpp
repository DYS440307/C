/*
 引用必须初始化  int &b;//错误
 在初始化后，不可以改变

 */

#include <iostream>
using namespace std;

int main()
{
        int a = 10;
    //1. 引用必须初始化
    // int &b;//错误
    int &b = a;
    //2.在初始化后，不可以改变
    int c = 20;
//    b = c;//赋值了而不是更改引用，引用不允许更改
    
    cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
        cout<<"c = "<<c<<endl;
    
    return 0;
}
