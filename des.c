#include<stdio.h>

int main(){
    int n,i,max,ans=0,j,m;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
     max=a[0];
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]<a[j])
            {
                m=a[i];
                a[i]=a[j];
                a[j]=m;
            }
        }
        
    }
   
    
    for(i=0;i<n;i++){
        
       ans=ans*10+a[i];
           
    }
    
    printf("%d",ans);
}