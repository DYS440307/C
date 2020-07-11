/*
构造函数调用规则
默认情况下c++编译器至少给一个类添加3个函数
 1.默认构造函数（无参，函数体为为空）
 2.默认析构函数（无参，函数体为空）
 3.默认拷贝函数，对属性进行值拷贝
 
 构造函数调用规则如下：
 如果用户定义有参构造函数，c++不再提供默认无参构造，但会提供默认拷贝构造
 如果用户定义拷贝构造函数，c+—=不会再提供其他的构造函数
 */
#include <iostream>
using namespace std;

//1.创建一个类，默认情况下c++编译器至少给一个类添加3个函数
//默认构造函数（无参，函数体为为空）  (空实现)
//默认析构函数（无参，函数体为空）    （空实现）
//默认拷贝函数，对属性进行值拷贝     （值拷贝）

//2.如果用户定义有参构造函数，c++不再提供默认无参构造，但会提供默认拷贝构造
// 如果用户定义拷贝构造函数，c+—=不会再提供其他的构造函数
class Person
{
public:
    
    Person()
    {
        cout<<"Person的默认构造函数调用"<<endl;
    }
    
    Person(int age)
    {
        cout<<"Person的有参构造函数调用"<<endl;
        m_Age = age;
    }
    
    Person(const Person & p)
    {
        m_Age = p.m_Age;//编译器帮你写了所p2年龄挡雨18
    }
    ~Person()
    {
        cout<<"Person的析构函数调用"<<endl;
    }
    
    int m_Age;
};
void test01()
{
    Person p;
    p.m_Age = 18;
    
    Person p2(p);
    
    cout<<"the age of p2= "<<p2.m_Age<<endl;
}

 void test02()
{
    Person p(28);
    
    Person p2(p);
    cout<<"p2的年龄为： "<<p2.m_Age<<endl;
}



int main()
{
//    test01();
    test02();
    
    
    return 0;
}
