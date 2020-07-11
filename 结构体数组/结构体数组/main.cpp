/*
 作用：将定义的结构放入数组中方便维护
 语法：struct 结构体名称{元素个数}={{},{},...{}}
 */
#include<iostream>
using namespace std;
#include<string>

//结构体数组
//1.定义哟个结构体数组
struct student
{
    string name;
    int age;
    int score;
};

int main()
{
    //2创建结构体数组
struct student stuarray[3] =
    {
        {"张三",18,100},
        {"李四",28,99},
        {"王五",38,66}
    };

    //3.给结构体数组中元素赋值
    stuarray[2].name = "赵六";//可以重新改数值,王五改赵六
    stuarray[2].age = 80;
    stuarray[2].score = 60;
    
    //4.遍历结构体数组
    for(int i =0;i<3;i++)
    {
    cout<<"姓名"<<stuarray[i].name
        <<"年龄"<<stuarray[i].age
        <<"分数"<<stuarray[i].score<<endl;
    }


    
    
    
    return 0;
}
