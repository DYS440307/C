/*
 用const来防止误操作
 */

#include<iostream>
using namespace std;
#include<string>

struct student
{
    string name ;
    int age;
    int score;
    
    
};
//将函数 的形参改为指针，可以减少内存空间，而且不会赋值新的副本出来
//void printstudent(student s)
//{
////    s.age= 200;
//    cout<<"姓名"<<s.name<<"年龄"<<s.age<<"得分"<<s.score<<endl;
//}

//地址传递
void printstudent(const student *s)
{
//    s->age=260;加入const后有修改会报错
    cout<<"姓名"<<s->name<<"年龄"<<s->age<<"得分"<<s->score<<endl;
}




int main()
{
    //创建结构体变量
    struct student s = {"张三",25,70};
    //通过函数来打印结构体变量信息
//    printstudent(s);
    printstudent(&s);
    cout<<"年龄"<<s.age;
    
    return 0;
}
