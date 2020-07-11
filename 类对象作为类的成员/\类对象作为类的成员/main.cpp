/*
 c++种的类可以是另一个类的对象，我们称该成员为对象成员
 class A{}
 class B
 {
 A a;
 }
 B类中有对象A作为成员，A为对象成员
 那么当创建B对象时，A与B的构造和析构的顺序是谁先谁后？
 */

#include <iostream>
using namespace std;
#include <string>
//类对象作为类成员

//手机类
class Phone
{
public:
    
   Phone(string pName)
    {
        cout<<"phone的构造函数调调用 "<<endl;
        m_PName = pName;
    }
    
    ~Phone()
    {
        cout<<"phone的析构函数调用"<<endl;
    }
    //手机品牌名
    string m_PName;
};
//人类
class Person
{
public:
//Phone m_Phone = pHame 隐式转换法
    Person(string name, string pName):m_Name(name),m_Phone(pName)
    {
        cout<<"person的构造函数调调用 "<<endl;
    }
    
    ~Person()
    {
        cout<<"Person的析构函数调用"<<endl;
    }
    //姓名
    string m_Name;
    //手机
    Phone m_Phone;
    
};
//当其他类对象作为本类成员，构造时候先构造类对象，再构造自身，析构的顺序

void test01()
{
    Person p("张三","苹果MAX");
    cout<<p.m_Name<<"拿着： "<<p.m_Phone.m_PName<<endl;
}

int main()
{
    test01();
}
