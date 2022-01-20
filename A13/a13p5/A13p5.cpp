/*
CH-230-A
a13_p5.cpp
Krishna Gautam
kgautam@jacobs-university.de
*/
#include<iostream>
using namespace std;
 
class A
{
private: //private added here
  int x;
public:
  A(int i) { x = i; }
  void print() { cout << x; }
};
 
class B:  public virtual A//the order is public virtual not virtual public
{
public:
  B():A(10) {  }
};
 
class C:   public virtual A //the order is public virtual not virtual public
{
public:
  C():A(10) {  }
};
 
class D: public B, public C {
public://public added here and it should have a constructor
    D(): A(10),B(),C(){}
};
 
int main()
{
    D d;
    d.print();
    return 0;
}

//