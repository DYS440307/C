/*
 类在设计时，可以把属性和行为放在不同的权限下，加以控制
 权限由三种
 1.public  公共权限      类内可以访问   类外可以访问
 2.protected 保护权限    类内可以访问   类外不可以访问  父亲中的一些内容儿子也可以访问
 3.private 私有权限      类内可以访问   类外不可以访问  儿子不可以访问私有内容
                                    {}里叫类内
 让儿子拿到的叫保护不让儿子拿到的叫私有
 继承关系   父类子类
 */

#include <iostream>
using namespace std;
#include <string>
class person
{
  //公共权限
public:
    string m_name;

    //保护权限
protected:
    string m_car;
    
    //私有权限
private:
    int m_password;
    
public:
    void func()
    {
        m_name = "张三";
        m_car = "拖拉机";
        m_password = 123456;
        
    }
    
};


int main()
{
    //实例化
    person p1;
    
    p1.m_name = "李四";
    p1.m_car = "奔驰";//保护权限,类外无法访问
    p1.m_password = 123;//私有权限,类外无法访问
    
    p1.func();
    return 0;
}
