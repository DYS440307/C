//作用：常量引用主要用来修饰形参，防止误操作
//在函数星灿列表中，可以加const修饰形参，防止形参改变实参

#include <iostream>
using namespace std;

void showvalue( const int&val)//加了const  val = 1000;无效
{
//    val = 1000;
    cout<<"val= "<<val<<endl;
}
    
    
    
    
    int main()
{
//    //常量引用
//    //使用场景：用来修饰形参，防止误操作
//
//    int a= 10;
//    //加上const之后，编译器将代码修改int temp = 10;const int &ref = temp;
//   const int & ref = 10;//引用必须引一块合法的内存空间
////    ref = 20;加入const变成只读不可修改

    int a = 100;
    showvalue(a);
    cout<<"a= "<<a<<endl;

    
    return 0;
}
