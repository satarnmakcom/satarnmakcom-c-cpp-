#include <stdio.h>

int main() {
    int n;
     scanf("%d",&n);
     int satarnmak[1001]={0};
     
    for (int x=0;x<=16;x++){     
        for (int y=0; y<=11;y++){ 
            for (int z=0;z<=5;z++){
        int sum=6*x+9*y+20*z;
        if (sum>0 && sum<=n) {
                    satarnmak[sum]=1;
                }
            }
        }
    }
    int gong=0;
    for (int i=1;i<=n;i++) {
        if (satarnmak[i]) {
            printf("%d\n",i);
            gong=1;
        } 
        }
  if (gong==0){
            printf("no\n");
    }
    return 0;
}
