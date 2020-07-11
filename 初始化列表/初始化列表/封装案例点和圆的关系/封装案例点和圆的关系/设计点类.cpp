#include "设计点类.hpp"

//设计点类  留住函数的实现就行
//void setX(int x)属于全局函数
//setX成员函数,要告诉是point作用于下的setx
//Point::作用域

 
void Point::setX(int x)
{
m_X = x;
}
//获取x
int Point::getX()
{
return m_X;
}

//设置y
void Point::setY(int y)
{
m_X = y;
}
// 获取y
int Point::getY()
{
return m_Y;
}


