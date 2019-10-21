#include "std_lib_facilities.h"

  int main()
  {
    int a= 7;
    int b= 1;
    a= a*b;
    b= a/b;
    a= a/b;
    if(a==0)
      {
        a= b;
        b= 0;
      }
       else if(b==0)
        {
          b= a;
          a= 0;
  
        }
  cout <<a <<endl;
  cout <<b <<endl;
  return 0;
  }
