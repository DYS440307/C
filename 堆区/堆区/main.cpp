/*
 由程序员分配释放，若程序员不释放则在程序结束时由操作系统释放
 c++中利用new在堆区中开辟内存
 */

#include <iostream>
using namespace std;

int *func()
{
//利用new将数据开辟到堆区
    //指针 本质上也是局部变量，放在栈上，指针保存的数据是放在堆区
  int * p =  new int(10);
    return p;
//
//    int a = 10;//释放就后再对这个内存操作就是非法操作（栈区）
//    return &a;
}


int main()
{
    //在堆区开辟数据
    int *p = func();
    cout<<*p<<endl;
     cout<<*p<<endl;
     cout<<*p<<endl;
     cout<<*p<<endl;
    
    
    return 0;
}
