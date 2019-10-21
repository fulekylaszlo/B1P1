#include <stdio.h>

int main()
  {
    int a=1;
    int i=1;
    
    while(a<<=1)
      {
        i++;
      }
    printf("A méret:%d\n",i);
    return 0;
  }
