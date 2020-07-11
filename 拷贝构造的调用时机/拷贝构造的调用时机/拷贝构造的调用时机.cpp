/*
拷贝构造函数的调用时机通常有三种情况：
 1.使用一个已经创建完毕的对象来初始化一个新对象
 2.值传递的方式给函数参数传值
 3.以值方式返回局部对象
 */
#include <iostream>
using namespace std;




class Person
{
public:
    Person()
    {
   cout<<"Person的默认（无参）构造函数的调用"<<endl;
    }
    
    Person(int age)
    {
        cout<<"Person有参构造函数的调用"<<endl;
        m_Age = age;
    }
    
    Person(const Person &p)
    {
        cout<<"Person拷贝构造函数调用"<<endl;
        m_Age = p.m_Age;
    }
    
    ~Person()
    {
        cout<<"Person析构函数的调用"<<endl;
    }
    int m_Age;
};

//1.使用一个已经创建完毕的对象来初始化一个新对象
void test01()
{
    Person p1(20);
    Person p2(p1);
    
    cout<<"the age of p2"<<p2.m_Age<<endl;
}

//2.值传递的方式给函数参数传值(值传递会拷贝一个临时的副本出来）
void doWork(Person p)//临时的副本不会影响下面的数据
{
    
}

void test02()
{
    Person p;
    doWork(p);
}

//3.以值方式返回局部对象(函数执行完就会被释放掉)
Person doWork2()
{
    Person p1;
    cout<<(int*)&p1<<endl;
    return p1;
}
void test03()
{
    Person p = doWork2();
      cout<<(int*)&p<<endl;
}


int main()
{
//    test01();
//    test02();
    test03();
    
    
    
    return 0;
}

