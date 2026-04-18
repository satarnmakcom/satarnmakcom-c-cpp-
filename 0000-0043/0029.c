#include <stdio.h>

int main()
{
 int x,y;
 scanf("%d %d",&x,&y);
 if(x == y){
    printf("1");
 }
 if(x>y){
    printf("2");
 }
 if(x<y){
    printf("%d",(x+y-1)/x);
 }
 return 0;
}
