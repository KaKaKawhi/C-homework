#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <string.h>

//输入描述：输入两个正整数A和B。
//输出描述：输出A和B的最小公倍数。
//数据范围：1<=a,b<=100000

int main() {

    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    if (a >= 1 && a <= 100000 && b >= 1 && b <= 100000) {
        //方法一,常规思路
        //先求两个数相对大的，这是他们有可能的最小的最小公倍数，
        //从他开始向后依次算
        /*int max = a > b ? a : b;
        while(1){
            if((max % a == 0) && (max % b == 0)){
                printf("%d\n", max);
                break;
            }
            max++;
        }*/
        //方法二
        /*int i = 1;
        for (i = 1;; i++) {
            if ((i * a) % b == 0) {
                printf("%d\n", i * a);
                break;
            }
        }*/
        //方法二写法2
        int i = 1;
        while ((i * a) % b != 0) {
            i++;
        }
        printf("%d\n", a * i);

        //讲！！！
        //法1：
        /*int max = a > b ? a : b;
        while(1){
            if((max % a == 0) && (max % b == 0)){
                break;
            }
            max++;
        }
        printf("%d\n", max);
        */
        //法2：
        /*int i = 1;
        while ((i * a) % b != 0) {
            i++;
        }
        printf("%d\n", i * a);*/
    }

    return 0;
}


