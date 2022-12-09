#include <stdio.h>
main()
{
    int m, n, temp;
    int a[ ]={8,3,5,1};
    for(m=0; m<=2; m++) // 0 1 2
    {
        for(n=0; n<=2-m; n++)// 012 01 0
          if(a[n] > a[n+1])
          {
              temp=a[n];  //
              a[n]=a[n+1];//
              a[n+1]=temp;//
          }// 3518  3158  1358
        
        printf("\n%d 회전\n", m+1);
      for(n=0; n<=3; n++)
        printf("%d ", a[n]);
        
    }
}
