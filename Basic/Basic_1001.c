//
// Created by wsx on 2017/7/26.
//
#include <stdio.h>

void Basic_1001() {
    int n;
    int flag;
    flag=0;
    scanf("%d",&n);
    while(n!=1){
        if(n%2==0){
            n=n/2;
            flag++;
        }
        else{
            n=(3*n+1)/2;
            flag++;
        }
    }
    printf("%d",flag);

}
