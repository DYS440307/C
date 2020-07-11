//
//  main.cpp
//  三只小猪比大小
//
//  Created by gaga on 2020/4/7.
//  Copyright © 2020 判断和选择语句的嵌套. All rights reserved.
//
#include<iostream>
using namespace std;
int main()
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;//三只小猪的体重变量
    cout<<"enter the weight of the apig"<<endl;
    cin>>num1;
    
    cout<<"enter the weight of the bpig"<<endl;
       cin>>num2;
    
    cout<<"enter the weight of the cpig"<<endl;
       cin>>num3;
    
    cout<<"the weight of the apig is:"<<num1<<endl;
    cout<<"the weight of the bpig is:"<<num2<<endl;
    cout<<"the weight of the cpig is:"<<num3<<endl;
    //先判断a和b
    if(num1>num2)//a比b重
    {
      if(num1>num3)//a>c
      {
          cout<<"a pig is the most heave"<<endl;
      }
else//c>a
{
 cout<<"c pig is the most heave"<<endl;
}
    }
    else//b比a重
    {
      if(num2>num3)//b>c
      {
        cout<<"b pig is the most heave"<<endl;
      }
        else
        {
           cout<<"c pig is the most heave"<<endl;
        }
    }
    return 0;
    
}
