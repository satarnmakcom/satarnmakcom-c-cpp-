#include <stdio.h>

int main(){
int a,b,gcd;
scanf("%d %d",&a,&b);
while(b!=0){
    gcd=b;
    b=a%b;
    a=gcd;
}
printf("%d",a);
return 0;
}
