#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

int main() {

    // ������λ������100-999
    int i = 0;
    // ������
    int sum = 0;
    for (i = 100; i <= 999; i++) {
        int j = 0;
        // �ж�������ָ��
        int index = 1;
        for (j = 2; j <= sqrt(i); j++) {
            if (0 == i % j) {
                index = 0;
                break;
            }
        }
        //�൱index����1
        if (index) {
            sum++;
        }
    }
    printf("%d\n", sum);

    return 0;
}