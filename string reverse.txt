/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
int main()
{
    int n,i;
    char a[100];
    scanf("%s",&a);
    n=strlen(a);
    for(i=n-1;i>=0;i--){
        printf("%c",a[i]);
    }
    return 0;
}
