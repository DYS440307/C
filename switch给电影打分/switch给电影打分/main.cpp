//
//  main.cpp
//  switch给电影打分
//
//  Created by gaga on 2020/4/7.
//  Copyright © 2020 多分支. All rights reserved.
#include<iostream>
using namespace std;
int main()
{
    //给电影打分
    //10～9经典
    //8～7非常好
    //6～5一般
    //5分以下
    
    cout<<"请给电影打分"<<endl; //1提示用户评分
    //2用户开始打分
    int score = 0;
    cin>>score;
    cout<<"您打的分数为："<<score<<endl;
    
    //3提示用户呢最后的结果
    switch(score)
    {
            case  10:
            cout<<"您认为是经典电影"<<endl;
            break;//退出当前分支
            case 9:
            cout<<"您认为是经典电影"<<endl;
             break;
            case 8:
             cout<<"您认为是电影非常好"<<endl;
           break;
            case 7:
             cout<<"您认为是电影非常好"<<endl;
            break;
            case 6:
             cout<<"您认为是电影一般"<<endl;
             break;
            case 5:
             cout<<"您认为是电影一般"<<endl;
             break;
        default:
            cout<<"烂片"<<endl;
            break;

    }
    return 0;
}
