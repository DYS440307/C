#pragma once//防止重复包含
#include <iostream>
using namespace std;

//设计点类  留住函数和变量的声明就行
class Point
{
public:
    //设置x
    void setX(int x);
   
//    获取x
    int getX();
    
    
        //设置y
    void setY(int y);
       
    //    获取y
    int getY();
      
    
private:
    int m_X;
    int m_Y;
};


