/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int n,i,max=0,j,c=0,t,k=0;
   scanf("%d",&n);
   int a[n],b[0];
   for(i=0;i<n;i++){
       scanf("%d",&a[i]);
   } 
   
   for(i=0;i<n;i++){
       if(a[i]>a[i+1])
      { t=a[i];
       a[i]=a[i+1];
       a[i]=t;
      }
   }
   for(i=0;i<n;i++){
       for(j=i+1;j<n;j++){
          
           if(a[i]==a[j]){
               c++;
            b[k++]=a[i];
           }
       }
       
   }
   for(i=0;i<c;i++){
       printf("%d ",b[i]);
   } 
    return 0;
}
