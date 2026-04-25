#include <stdio.h>

int main() {
    int satarnmak[999];
    int kaopj, gong = 0;
    while (1) {
        scanf("%d", &kaopj);
        if (kaopj == -1) break;
        satarnmak[gong] = kaopj;
        gong++;
    }
    for (int i=0;i<gong;i++){
        int year = satarnmak[i];
        int worker = 1;
        int tahan = 0;
        int queen = 1;
        for (int j=1;j<=year;j++){
        int prev_worker = worker;
        int prev_tahan = tahan;
            worker = 1 + prev_worker + prev_tahan;
            tahan = prev_worker;
        }
        int total=worker+tahan+queen;
        printf("%d %d\n",worker,total);
    }

    return 0;
}
