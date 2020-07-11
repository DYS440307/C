/*
 浅拷贝：  简单的赋值操作  等号就是浅拷贝
带来的问题是堆区的内存重复释放
 如果属性有在堆区开辟的，一定要自己提供拷贝构造函数，防止拷贝构造函数带来的问题
 深拷贝：在堆区重新申请空间，进行拷贝操作
 栈：先进后出
 */
#include <iostream>
using namespace std;

//深拷贝语浅拷贝

class Person
{
public:
    Person()
    {
        cout<<"Person的默认函数调用"<<endl;
    }
    
    Person(int age,int height)
     {
         m_Age = age;
      m_Hight =  new int(height);//手动开辟，手动释放
         cout<<"Person的有参函数调用"<<endl;
     }
    
    //自己实现拷贝构造函数，解决浅拷贝带来的问题
    Person(const Person &p)
    {
        cout<<"拷贝构造函数的调用"<<endl;
        m_Age = p.m_Age;
       // m_Hight = p.m_Hight;编译器默认发实现的就是这行代码
        //深拷贝操作
         
        m_Hight =  new int(*p.m_Hight);
    }
    ~Person()
        {
          //析构代码，将堆区块皮数据做释放操作
        
            cout<<"Person的析构函数调用"<<endl;
        }
    
    int m_Age;//年龄
    int *m_Hight;//身高
};

void test01()
{
    Person p1(18,160);
    
    cout<<"p1的年龄为："<<p1.m_Age<<"身高: "<<*p1.m_Hight<<endl;

    Person p2(p1);
    cout<<"p2的年龄为："<<p2.m_Age<<"身高: "<<*p2.m_Hight<<endl;


}

int main()
{
    test01();
    
}
