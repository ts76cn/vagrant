#include <stdio.h>

/*
変数：データにつけるラベル

データ型
int(整数) %d
float(実数) %f
char(1文字) %c
*/

/*
関数：複数の処理
返り値の型 関数名(引数), ...) {
    処理;
    return 返り値;
}

プロトタイプ宣言
*/

// float getMax(float a, float b);

// void sayHi(void) { // 引数がない場合void
//     printf("hi!\n");
// }

/*
変数の有効範囲
*/


// void f(void) {
//     // int a = 0; // 自動変数、ローカル変数 ⇔ グローバル変数
//     static int a = 0; // 静的変数
//     a++;
    // printf("a:%d\n", a);
// }

void f(long *pa) {
    *pa += 100;
    printf("%ld\n", *pa);
}


void swap(int *pa, int *pb) {
    int tmp;
    tmp = *pa;
    *pa = *pb;
    *pb = tmp;
};


int main(void) {

    // float result;
    // result = getMax(2.3, 5.2);
    // // printf("%f\n", result);

    // // sayHi();

    // f();
    // f();
    // f();
    // // printf("[main]a:%d\n", a);

    // int sales[3];
    // sales[0] = 200;
    // sales[1] = 400;
    // sales[2] = 300;
    // // sales[3] = 300;

    // int sales2[] = {200, 400, 300};

    // printf("%d\n", sales2[2]);


/*
文字列：charの配列（※ 終端は「\0」）
int i; // 整数の場合
✗ string s;
"abc"
char s[] = {'a','b','c','\0'};
char s[] = "abc";
char s[4] = "abc";
*/

    // char s[] = "abc";
    // printf("%c\n", s[1]);


/*
ポインタ： アドレスを格納するための変数
メモリ（記憶領域）
& : アドレス演算子
* : 間接演算子
*/

    // int a; // ポインタ（変数）
    // a = 10; // ポインタに変数の値を代入

    // int *pa; // aの領域のポインタ（変数）
    // pa = &a; // aの先頭のアドレス#0001を代入
    // printf("%d\n", *pa); // ポインタpaのアドレス→#0005にある領域の値→アドレス#0001の値→10の意

    // long a = 1000;
    // f(&a);

    // int x = 10; // %d
    // float y = 5.2; // %f
    // char c = 'A'; // %c
    // printf("x = %d, y = %f, c = %c\n", x, y, c);

    // int x;
    // x = 10 % 3; /* 1 */
    // x += 3; /* 4 */
    // x++;  /* 5 */
    // printf("%d\n", x);

    // int score = 55;
    // if (score >= 60) {
    //     printf("OK!\n");
    // } else if (score >= 50) {
    //     printf("so so...\n");
    // } else {
    //     printf("NG!\n");
    // }

    // int rank = 20;
    // switch(rank) {
    //     case 1:
    //         printf("Gold!\n");
    //         break;
    //     case 2:
    //         printf("Silver!\n");
    //         break;
    //     case 3:
    //         printf("Bronze!\n");
    //         break;
    //     default:
    //         printf("no medal...\n");
    //         break;
    // }


    // ループ(for)
    // continue; 一回スキップ
    // break; ループを抜ける

    // int m;
    // for (m = 0; m < 10; m++) {
    //     if (m == 3) {
    //         continue;
    //     }
    //     if (m ==8) {
    //         break;
    //     }
    //     printf("m: %d\n", m);
    // }

    // int m = 20;
    // while (m < 10) {
    //     printf("m: %d\n", m);
    //     m++;
    // }

    // int n = 20;
    // do {
    //     printf("n: %d\n", n);
    //     n++;
    // } while (n < 10);


/*
ポインタ
    値渡し それぞれの値を保持できる
    参照渡し メモリ効率が良い
*/

    int a = 5;
    int b = 10;
    swap(&a, &b);
    printf("a:%d, b:%d\n", a, b);

    return 0;
}

/*
三項演算子
if (条件) {
    return A;
} else {
    return B;
}

返り値 = (条件) ? A : B;
*/

// float getMax(float a, float b)
// {
// /*
//     if (a >= b)
//     {
//         return a;
//     }
//     else
//     {
//         return b;
//     }
// */
//     return (a >= b) ? a : b;
// }