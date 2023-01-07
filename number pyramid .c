#include<stdio.h>
int main(){
    int n,a,b;
    printf("enter the value of n=");
    scanf("%d",&n);
    for( int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        a=1;
        b=i-1;
            for(int k=1;k<=i;k++){
                printf("%d",a);
                a++;
            }
            
            for(int l=1;l<=i-1;l++){
                printf("%d",b);
                b--;
                            }
            printf("\n");                
    }
        return 0;
    }
    

