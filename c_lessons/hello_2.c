#include <stdio.h>

int main(void) {

/*
ポインタ： アドレスを格納するための変数
メモリ（記憶領域）
& : アドレス演算子
* : 間接演算子
*/

    int a;
    a = 10;

    int *pa; // aの領域のポインタの意
    pa = &a;
    printf("%d\n", *pa); // paアドレスにある領域の値の意

    return 0;
}