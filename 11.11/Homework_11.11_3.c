#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int diff(int a, int b);

int main() {

    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    int ret = diff(a, b);
    printf("%d", ret);

    return 0;
}

int diff(int a, int b) {
    int mask = a ^ b;
    //下面即为求这个异或后的结果中有多少1
    int count = 0;
    while (mask) {
        if ((mask & 1) == 1) {
            count++;
        }
        mask >>= 1;
    }

    //方法2：
    /*while (mask) {
        mask = (mask - 1) & mask; 每次去除掉mask的二进制序列的最右边的一个1
        count++;
    }*/

    //方法3：分别与1来与相比较，然后同时右移
    /*int i = 0;
    for (i = 0; i < 32; i++) {
        if ((i & a) == (i & b)) {
            count++;
        }
        a >>= 1;
        b >>= 1;
    }*/

    return count;
}


