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
*/

float getMax(float a, float b) {
    if (a >= b) {
        return a;
    } else {
        return b;
    }
}

void sayHi(void) {
    printf("hi!\n");
}

int main(void) {

    float result;
    result = getMax(2.3, 5.2);
    printf("%f\n", result);

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


    return 0;
}