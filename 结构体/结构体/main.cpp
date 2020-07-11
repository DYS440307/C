/*
 结构体属于用户自动的数据类型，允许用户存储不同的数据类型
 语法： struct 结构体名 （结构体成员列表）
 
 struct 结构体名 变量名
 struct 结构体名 变量名={成员1值，成员2值}；
 定义结构体时顺便创建变量
 
 总结：1.创建结构体变量时关键字可以省略，2.定义时不可以省略
 3.用操作符"."来访问成员
 */

#include<iostream>
using namespace std;
#include<string>
//1.创建学生数据类型：学生包括（姓名，年龄，分数）
//自定义数据类型，一些类型集合组成的一个类型
//语法：struct 类型名称 {成员列表}
struct Student//struct定义时不可以省略
{
    //成员列表
    
    //姓名
    string name;//构造对象
   //年龄
   int age;
    //分数
    int score;

}s3;//顺便创建变量

int main()
{
    //2.1 struct Student s1
        // student s1;创建结构体变量时关键字可以省略，定义时不可以省略
    struct Student s1;
    //给s1属性赋值，通过，访问结构体变量中的属性
    s1.name = "张三";
    s1.age = 18;
    s1.score = 100;
cout<<"姓名: "<<s1.name<<"年龄: "<<s1.age<<"分数: "<<s1.score<<endl;
 
    
    //2.2struct Student s2={...}
    struct Student s2 = {"李四",19,80};
cout<<"姓名: "<<s2.name<<"年龄: "<<s2.age<<"分数: "<<s2.score<<endl;
   
    
    //2.3定义结构体时顺便创建变量
    s3.name = "王五";
    s3.age = 20;
    s3. score = 60;
cout<<"姓名: "<<s3.name<<"年龄: "<<s3.age<<"分数: "<<s3.score<<endl;
    
    return 0;
}
