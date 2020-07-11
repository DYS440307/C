/*
 作用：结构体中的成员可以是另一个结构体
 例如：每个老师辅导一个学生，一的老师的结构体体中，记录一个学生是结构体
 */

#include<iostream>
using namespace std;
#include<string>
 
//定义学生的结构体
struct student
{
    string name;
    int age;
    int score;
};

//定义老师的结构体
struct teacher
{
    int id;
    string name;
    int age;
    struct student stu;//辅导的学生
};

int main()
{//创建老师
    teacher t;
    t.id = 1000;
    t.name = "老王";
    t.age = 50;
    t.stu.name = "小王";
    t.stu.age = 20;
    t.stu.score = 60;
    
cout<<"The name of the teacher:"<<t.name
    <<"the id of the teacher"<<t.id
    <<"the name of the student"<<t.stu.name
    <<"the score of the student"<<t.stu.score;
    
    
    return 0;
}
