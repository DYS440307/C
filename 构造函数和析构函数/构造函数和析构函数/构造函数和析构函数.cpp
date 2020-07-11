//4.2对象的初始化和清理（每个对象也会有初始设置以及对象销毁前的清理数据设置:利用构造和析构函数）
//由编译器自动调用；如果我们不提供构造和析构，编译器会提供编译器提供的构造函数和析构师空实现

//构造函数:主要作用于创建对象时为对象成员的成员属性赋值，构造函数是有编译器自动调用，无需手动调用
//析构函数：主要作用于对象的销毁前系统自动调用，执行一些工作


//构造函数语法：   类名（）{}
/*
 1构造函数，没有返回值也不写void
 2.函数名与类名相同
 3.构造函数可以有参数，因此可以发生重载
 4.程序在调用对象的时候会会自动调用构造，无需手动调用，而且只会调用一次
 */

//析构函数的语法：～类名（）{}
/*
 1构造函数，没有返回值也不写void
 2.函数名与类名相同,在名称前加～
 3.析构函数不可以有参数，因此不可以发生重载
 4.程序在对象销毁前候会自动调用构析，无需手动调用，而且只会调用一次
 */

#include <iostream>
using namespace std;

//对象的初始化和清理

class Person
{
public:
    /*
      1.构造函数，进行初始化操作
           1.1构造函数
           没有返回值，不用void
           函数名 与类名相同
       构造函数可以有参数， 可以发生重载
      创建对象的时候,函数会自动调用且只调用一次
      */
       
    Person()
    {
        cout << "Person的构造函数调用" << endl;//（次行为空）你不写系统自动创建一个空的
    }
   
    //2.析构函数，进行清理
       /*
        没有返回值 进行清理操作
        函数名和类名相同  在名称前加~
        析构函数不可以有参数的，不可以发生重载
        对象在销毁前会自动调用析构函数时，且只会调用一次
        */
    ~Person()
    {
        cout << "Person的析构函数调用" << endl;
    }

};
//构造函和析构都是必须有的实现，如果我们自己提供 ,编译器就会自己提供一个空实现的构造和析构

void test01()
{
    Person p;//在栈上的数据（局部变量,局部对象 test01执行完毕后就会释放这个对象）
}

int main()
{
    //    test01();
    Person p;

    system("pause");

    return 0;
}
