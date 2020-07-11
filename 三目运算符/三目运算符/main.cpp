//
//  main.cpp
//  三个数比大小赋值
//
//  Created by gaga on 2020/4/7.
//  Copyright © 2020 三目运算符. All rights reserved.
//

#include<iostream>
using namespace std;

int main()
{
    //创建abc三个变量
    //ab比较，将变量的大的赋给c
    int a = 10;
    int b = 20;
    int c = 0;
    c = (a>b?a:b);
    
    cout<<"c = "<<c<<endl;
    
    //在c++中三目运算符的返回值是变量，可以继续赋值
    (a>b?a:b) = 100;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    return 0;
}
