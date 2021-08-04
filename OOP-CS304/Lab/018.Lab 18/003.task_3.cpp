/*
  Q3. Predict the output of following programs.
*/

// Program 1
#include<iostream>

using namespace std;
class A
{
  int x;
  public:
    void setX(int i) {x = i;}
    void print() { cout << x; }
};
class B: public A
{
  public:
  B() { setX(10); }
};
class C: public A
{
  public:
  C() { setX(20); }
};
class D: public B, public C { };

int main()
{
  D d;
  d.B::print();
  return 0;
}

// Program 2
#include<iostream>
using namespace std;
class A
{
  int x;
  public:
  A(int i) { x = i; }
  void print() { cout << x; }
};
class B:  public A
{
  public:
  B():A(20) { }
};
class C: public A
{
  public:
  C():A(30) { }
};
class D: virtual public B, virtual public C { };
int main()
{
  B *b;
  D d;
  b=&d;
  b->print();
return 0;
}