//设计一个学生类，属性有姓名学号，可以给姓名和学号赋值，可以现实学生的姓名和学号
#include <iostream>
using namespace std;
#include <string>

class student
{
//    公共权限
public:
    //属性 （成员属性/成员变量）                            属性和行为统一称为成员
    string m_name;
    int m_id;
//    行为（成员函数/成员方法）
    //显示姓名和学号
    void showstudent()
    {
        cout<<"name: "<<m_name<<"id: "<<m_id<<endl;
    }
    //给姓名赋值
    void setname(string name)
    {
        m_name = name;
    }
    //
//    给学号赋值
    void setid(int id )
    {
        m_id = id;
    }
    
    
};


int main()
{
    //创建一个具体的学生   实例化
    student s1;
    //给s1对象   进行属性赋值
//    s1.m_name ="张三";
    s1.setname("张三");
//    s1.m_id = 1;
    s1.setid(1);
    //显示学生信息
    s1.showstudent();
    
    student s2;
    s2.m_name = "李四";
    s2.m_id = 2;
    s2.showstudent();
    
    return 0;
}
