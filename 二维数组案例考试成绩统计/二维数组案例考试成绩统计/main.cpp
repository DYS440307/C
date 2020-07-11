/*
       语文       数学       英语
 张三   100       100        100
 李四   90        50          100
 王五    60       70          80
 */
//分别输出三个同学的总成绩
//1.创建二维数组，三行三列
//2.每行三列相加统计总和
#include<iostream>
using namespace std;
#include<string>

int main()
{
    //1.创建二维数组，三行三列
    int scores[3][3]=
    {
        {100,100,100},
        {90,50,100},
        {60,70,80}
    };
    
    string names[3]={"张三","李四","王五"};
    //2.统计每个人的总和分数
    for(int i=0;i<3;i++)
    {
        int sum=0;//统计
        for(int j=0;j<3;j++)
       {
           sum+=scores[i][j];
//        cout<<scores[i][j]<<" ";
       }
        cout<<names[i]<<"的总分为： "<<sum<<endl;
    }
    return 0;
}
