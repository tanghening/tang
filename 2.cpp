#include <iostream>

using namespace std;

int main()
{
    void Myswap(int&p1,int&p2);
    int a,b;
    int &p1=a,&p2=b;
    cout<<"请分别输入a和b的值："<<endl;
    cin>>a>>b;
    Myswap(p1,p2);
    cout<<"a="<<a<<" "<<"b="<<b<<endl;
    system("pause");
    return 0;
}
void Myswap(int&p1,int&p2)
{
    int temp;
    temp=p1;
    p1=p2;
    p2=temp;
}
