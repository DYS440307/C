/*
 默认的访问权限不同
 struct默认权限公共
 class默认权限私有
 */
#include <iostream>
using namespace std;

class C1
{
    int m_A;//默认 私有
};

struct C2
{
    int m_A;//默认 公共
};




int main()
{
//    struct默认权限公共  public
//    class默认权限私有    private
    C1  c1 ;
    c1.m_A = 100;//私有类外不可访问
    C2  c2;
     c2.m_A = 100;
    
    return 0;
    
}
