/*
 两种分类：
 按参分类：  有参构造和无参构造
 按照类型分类：普通构造和拷贝构造
 
 三种调用方式：
 括号法
 显示法
 隐式转换法
 */#include <iostream>
using namespace std;

//1.构造函数的分类和调用
//分类
// 按参分类：  有参构造和无参构造
//按照类型分类：普通购构造和拷贝构造
class Person
{
public:
    //构造函数
    Person()//无参构造函数（编译器默认提供 ）
    {
        cout<<"Person的无参构造函数调用"<<endl;
        
    }
   
    Person(int a)//有参构造
    {
        age = a;
        cout<<"Person的有参构造函数调用"<<endl;
        
    }
    //拷贝构造函数
    Person( const Person &p)//括号内的属性拷贝一份给person(const限制p不被改变)
    {
        //将传入的人身上的所有属性，拷贝到我身上
        cout<<"Person的拷贝构造函数调用"<<endl;
        age = p.age;
    }
    
    
    
    
    
    ~Person()
    {
        cout<<"person的析构函数调用"<<endl;
    }
    int age;
};
//调用
void test01()
{
//    1⃣️括号法
//       Person p1;  //调用默认构造
//       Person p2(10);//调用有参构造
//       Person p3(p2); //拷贝构造函数
//
////注意⚠️：调用默认构造函数的时候不要加（）
////下面这行代码编译器会认为是一个函数的声明，不会认为在创建对象
////  Person p1();
//    cout<<"p2的年龄为： "<<p2.age<<endl;
//    cout<<"p3的年龄为： "<<p3.age<<endl;
    //    2⃣️显示法
//    Person p1;
//    Person p2 = Person(10);//有参构造
//    Person  p3 = Person(p2);//拷贝构造
    
//    Person(10);//匿名对象，特点：当前行执行结束后，系统会立即回收掉你看对象
//    cout<<"aaaaa"<<endl;
//⚠️：不要利用拷贝构造函数  初始化匿名对象  编译器认为Person(p3) == Person p3;对象的声明
//    Person(p3);
//    3.隐式转换法
    Person p4 = 10;//相当于写了Person p4 = Person(10);  有参构造
    Person p5 = p4;//拷贝构造
}


int main()
{
    test01();
    
    return 0;
}
