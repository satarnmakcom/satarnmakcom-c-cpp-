#include <stdio.h>

int main()
{
 int x;
 int y;
 int z;
 int sum;
 scanf("%d %d %d",&x,&y,&z);
 sum = x+y+z;
 if(80<=sum&&sum<=100){
    printf("A");
 }
 if(75<=sum&&sum<=79){
    printf("B+");
 }
 if(70<=sum&&sum<=74){
    printf("B");
 }
 if(65<=sum&&sum<=69){
    printf("C+");
 }
 if(60<=sum&&sum<=64){
    printf("C");
 }
 if(55<=sum&&sum<=59){
    printf("D+");
 }
 if(50<=sum&&sum<=54){
    printf("D");
 }
 if(0<=sum&&sum<=49){
    printf("F");
 }
 return 0;
}
