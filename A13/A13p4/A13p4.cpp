/*
CH-230-A
a13_p4.cpp
Krishna Gautam
kgautam@jacobs-university.de
*/

#include<iostream>
using namespace std;
 
class A
{
  int x;
public:
  void setX(int i) {x = i;}
  void print() { cout << x; }
};
 
class B:  public virtual A
{
public:
  B()  { setX(10); }
};
 
class C:  public  virtual A  
{
public:
  C()  { setX(20); }
};
 
class D: public B, public C {
};
 
int main()
{
    D d;
    d.print();
    return 0;
}
//As the class D is inherited from both B and C
//when the code runs the error says request for member print() is ambigious
//beacuse the compiler is confused as it is inherited from both B and C
//In order to solve this problem we add virtual in line 19 and 25 before A


/****************************************************
 *                -----------
 *                |   A    |
 *                ----------
 *               /          \
 *              /            \
 *       --------           -----------
 *       |   B  |           |     C   |
 *        -------            ----------
 *               \          /
 *                \        /
 *                ----------
 *                |   D    |
 *                ----------

*/