#include <stdio.h>
#include <string.h>

char* transform(int n);

int main() {
    int i, len;
    int a1, a2, a3;
    char n[100];
    char *b1, *b2, *b3;
    scanf("%s",&n);
    int sum = 0;

    len = strlen(n);
    for(i=0;i<len;i++){
        sum += n[i]-'0';
    }
    a1 = sum/100;
    a2 = sum%100/10;
    a3 = sum%10;

    b1 = transform(a1);
    b2 = transform(a2);
    b3 = transform(a3);

    if(a1 > 0)
        printf("%s %s %s", b1, b2, b3);
    else{
        if(a2 > 0)
            printf("%s %s", b2, b3);
        else
            printf("%s", b3);
    }

    return 0;
}

char* transform(int n){
    char *b;
    if(n==0)
        b="ling";
    else if(n==1)
        b="yi";
    else if(n==2)
        b="er";
    else if(n==3)
        b="san";
    else if(n==4)
        b="si";
    else if(n==5)
        b="wu";
    else if(n==6)
        b="liu";
    else if(n==7)
        b="qi";
    else if(n==8)
        b="ba";
    else
        b="jiu";
    return b;
}

