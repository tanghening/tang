#include <iostream>

using namespace std;
struct Complex{
float a;//ʵ��
float b;//�鲿
};

int main()
{
Complex x,y,z;
Complex *p1,*p2;
const Complex &q1=x,&q2=y;

p1=&x;p2=&y;

void set_value(Complex *p1,Complex *p2);
void display(const Complex &q1,const Complex &q2);
void addi1(Complex x,Complex y);
Complex addi2(Complex x,Complex y);
Complex &addi3(Complex x,Complex y);

set_value(p1,p2);
display(q1,q2);
addi1(x,y);
z=addi2(x,y);
Complex &w=addi3(x,y);

cout<<"���������ĺ���(addi2)��"<<noshowpos<<z.a<<showpos<<z.b<<"i"<<endl;
cout<<"���������ĺ���(addi3)��"<<noshowpos<<w.a<<showpos<<w.b<<"i"<<endl;
system("pause");
return 0;

}
void set_value(Complex *p1,Complex *p2)
{
    float a0,b0;
    cout<<"��ֱ������һ��������ʵ�����鲿��"<<endl;
    cin>>a0>>b0;
    p1->a=a0;p1->b=b0;
    cout<<"��ֱ�����ڶ���������ʵ�����鲿��"<<endl;
    cin>>a0>>b0;
    p2->a=a0;p2->b=b0;
};
void display(const Complex &q1,const Complex &q2)
{
    if(q1.b>1e-2||q1.b<-1e-5) {cout<<"��һ�������ǣ�"<<noshowpos<<q1.a<<showpos<<q1.b<<"i"<<endl;}
    else cout<<q1.a<<endl;
    if(q2.b>1e-2||q2.b<-1e-5) {cout<<"�ڶ��������ǣ�"<<noshowpos<<q2.a<<showpos<<q2.b<<"i"<<endl;}
    else cout<<q1.a<<endl;

}
void addi1(Complex x,Complex y)
{
    float a1,b1;
    a1=x.a+y.a;
    b1=x.b+y.b;
    if(b1>1e-2||b1<-1e-5) {cout<<"���������ĺ���(addi1)��"<<noshowpos<<a1<<showpos<<b1<<"i"<<endl;}
    else cout<<a1<<endl;

}
 Complex addi2(Complex x,Complex y)
{
    Complex z;
    z.a=x.a+y.a;
    z.b=x.b+y.b;
    return z;
};
 Complex & addi3(Complex x,Complex y)
{
    Complex z;
    z.a=x.a+y.a;
    z.b=x.b+y.b;
    Complex &w=z;
    return w;
};
