#include <stdio.h>
//計算梯型面積https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6855
int main(){
    int up, down, height;
    while (scanf("%d %d %d", &up, &down, &height) != EOF) {
        double ans = (up + down)*height;
        ans/=2;
        printf("Trapezoid area:%.1f\n", ans);
    }
    return 0;
}
