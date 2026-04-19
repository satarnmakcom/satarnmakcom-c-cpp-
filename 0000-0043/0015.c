#include <stdio.h>

int main(){
int a,b,c,d,e;
scanf("%d %d %d",&a,&b,&c);
d=c-b-1;
e=b-a-1;
if(d>=e){
printf("%d",d);
}
else{
printf("%d",e);
}
return 0;
}
