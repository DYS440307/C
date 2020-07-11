#include<iostream>
using namespace std;

int main()
{
    //1.定义指针
    int a=10;
    //指针定义的语法：数据类型*指针变量名
    int*p;
    //让指针记录变量a的地址
    p=&a;
    
    cout<<"the address of a="<<&a<<endl;
    cout<<"指针p为为："<<p<<endl;
    
    
    //2使用指针
    //通过解引用的方式找到指针指向的内存
    //指针前加*代表解引用，找到指针指向的内存中的数据
    *p=1000;
    cout<<"a="<<a<<endl;
    cout<<"*p="<<*p<<endl;




    return 0;
}
