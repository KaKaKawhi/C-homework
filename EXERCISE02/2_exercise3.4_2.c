#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//计算1!+2!+3!+...+10!
int main() {

    int a = 1;
    int b = 10;
    int j = 0;
    int sum = 0;
    for (j = a; j <= b; j++) {
        int i = 0;
        int mul = 1;   //必须要在这个位置，每次j改变，mul都要初始化1
        for (i = 1; i <= j; i++) {
            mul *= i;
        }
        sum += mul;
    }
    //方法二：（没必要每次每次算阶乘都要从1开始计算）
    //int mul = 1;
    //int sum = 0;
    //for (j = a; j <= b; j++) {
    //    mul *= j;         //2!=1!*2 3!=2!*3 ...  
    //    sum += mul;
    //}
    printf("%d", sum);
    
    
    

    return 0;
}


//二刷
//int fak(int n) {
//	int ret = 1;
//	int i = 1;
//	for (i = n; i >= 1; i--) {
//		ret *= i;
//	}
//	return ret;
//}
//
//int main() {
//
//	int count = 10;
//	int sum = 0;
//	int i = 0;
//	for (i = 1; i <= count; i++) {
//		sum += fak(i);
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}

// 看一眼提示：没必要每次都从1开始求阶乘，2！= 1! * 2
int main() {

    int n = 10;
    int sum = 0;
    int fak = 1;
    int i = 0;
    for (i = 1; i <= 10; i++) {
        fak *= i;
        sum += fak;
    }
    printf("%d\n", sum);

    return 0;
}