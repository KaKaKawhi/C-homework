#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//����1!+2!+3!+...+10!
int main() {

    int a = 1;
    int b = 10;
    int j = 0;
    int sum = 0;
    for (j = a; j <= b; j++) {
        int i = 0;
        int mul = 1;   //����Ҫ�����λ�ã�ÿ��j�ı䣬mul��Ҫ��ʼ��1
        for (i = 1; i <= j; i++) {
            mul *= i;
        }
        sum += mul;
    }
    //����������û��Ҫÿ��ÿ����׳˶�Ҫ��1��ʼ���㣩
    //int mul = 1;
    //int sum = 0;
    //for (j = a; j <= b; j++) {
    //    mul *= j;         //2!=1!*2 3!=2!*3 ...  
    //    sum += mul;
    //}
    printf("%d", sum);
    
    
    

    return 0;
}

