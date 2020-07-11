/*
 作用：通过指针访问结构体中的成员
 利用操作符：->通过结构体指针访问鹏载体属性
 */
#include<iostream>
using namespace std;
#include<string>

//结构体指针
struct student
{
    string name;
    int age ;
    int score ;
};

int main()
{
    //1.创建学生结构体变量
    struct student s = {"张三",18,100};
    //2.通过指针指向结构体变量
    struct student * p = &s;
    //3.通过指针访问结构体变量中的数据
    cout<<"姓名"<<p->name<<"年龄"<<p->age<<"分数"<<p->score<<endl;
    
    
    
    return 0;
}
