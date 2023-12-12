#include<stdio.h>

int main(){

    int num;

    scanf("%d",&num);

    for(int i=0;i<=num;i++){
        if(i%3==0)  continue;
        printf("%d ",i);
    }

    return 0;
}