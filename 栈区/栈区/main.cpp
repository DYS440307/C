//编译器自动分配，存放函数的参数值，局部变量
//注意：不要返回局部变量的地址,栈区开辟的数据由编译器自动释放
#include <iostream>
using namespace std;

int *func()//int *func(int b)形式参数也会放在栈区
{
//    b = 100;//
    int a = 10;//局部变量  存放在栈区，函数执行完由编译器自动释放
    return &a;//返回局部变量地址
}





int main()
{
    //接受func返回值
    int * p = func();
    cout<<*p<<endl;//10，第一次可以打印正确的数据,编译器做了保留
    cout<<*p<<endl;//32767  乱码，第二次不保留


    
    return 0;
}
