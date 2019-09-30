#include <stdio.h>

int main ()
{
    long int n;
    int a[100],i,l;
    while (scanf("%ld",&n)==1){
        if (n<0)
            break;
            l=0;
        for (i=0;n>0;i++){
         a[i]=n%3;
         l++;
         n=n/3;
        }
        if (l==0)
        printf("0");
    for (i=i-1;i>=0;i--){
    printf("%d",a[i]);
    }
    printf("\n");
}
  return 0;
}
