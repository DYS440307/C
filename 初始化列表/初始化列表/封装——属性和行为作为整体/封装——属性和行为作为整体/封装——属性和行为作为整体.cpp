/*
类和对象：
 面向对象的三大特性：封装，继承，多态
 具有相同性质的对象，我们可以抽象称为类
 
 封装的意义：
 将属性和行为作为一个整体，表现生活中的事物
 将属性和行为加以权限控制
 
 封装的意义：在设计类的时候，属性和行为写在一起，表现事物
 语法：class 类名{访问权限：属性/行为}；
 */

//设计一个圆类求圆的周长:2*PI*r*r   类：class  代表要设计一个类
#include <iostream>
using namespace std;

const double PI = 3.14;

class circle
{
    //访问权限
//公共权限
public:
  //属性
    int m_r;//半径
    //行为
    //获取圆的周长
    double calculateZC()
    {
        return 2*PI*m_r;
    }
};

int main()
{
//通过圆类  创建具体的对象
    circle c1;
    //给圆对象 的属性进行赋值
    c1.m_r=10;
    //2*PI*m_r
    cout<<"圆的周长: "<<c1.calculateZC()<<endl;
    
    return 0;
}
