/*
 优点：
 1.将所有成员属性设置为私有，可以自己控制读与写的权限
 2.对于写权限，我们可以检测数据的有效性
 */
#include <iostream>
using namespace std;
#include <string>
//某些类目对外留下可读可写接口

//设计人的类
class person
{
    public :
    //设置姓名
    void setname(string name)          //可读可写
    {
        m_name = name;
    }
    //获取姓名
    string getname()
    {
        return m_name;
    };
    
//    int getage()                     //只读
//    {
//        m_age = 0;//初始化
//        return m_age;
//    };
    //如果想修改年龄为可读可写（0～150）
    void setage(int age)
    {
        if(age<0||age>150)
        {
            m_age = 0;
            cout<<"incorrect"<<endl;
            return ;
        }
        m_age = age;
    }
    
    
    
    
    void setlover(string lover)    //set只写
    {
        m_lover = lover;
    }
    
    
    
    
private:
    string m_name;//可读可写
    int m_age;//只读
    string m_lover;//只写
    
};




int main()
{
    person p;
//    p.m_name = "张三";//无权
    p.setname("张三");
    
    cout<<"姓名为： "<<p.getname()<<endl;
//    p.m_age = 19;//无权
//    p.setage(18);//只读不可设置
    p.setage(1000);
    p.setlover("吴淑静");
//    cout<<"lover is :"<<p.getlover<<endl;//只能写不可访问
//    cout<<"age is: "<<p.getage()<<endl;
    return 0;
}


