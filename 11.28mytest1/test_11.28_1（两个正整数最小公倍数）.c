#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <string.h>

//������������������������A��B��
//������������A��B����С��������
//���ݷ�Χ��1<=a,b<=100000

int main() {

    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    if (a >= 1 && a <= 100000 && b >= 1 && b <= 100000) {
        //����һ,����˼·
        //������������Դ�ģ����������п��ܵ���С����С��������
        //������ʼ���������
        /*int max = a > b ? a : b;
        while(1){
            if((max % a == 0) && (max % b == 0)){
                printf("%d\n", max);
                break;
            }
            max++;
        }*/
        //������
        /*int i = 1;
        for (i = 1;; i++) {
            if ((i * a) % b == 0) {
                printf("%d\n", i * a);
                break;
            }
        }*/
        //������д��2
        int i = 1;
        while ((i * a) % b != 0) {
            i++;
        }
        printf("%d\n", a * i);

        //��������
        //��1��
        /*int max = a > b ? a : b;
        while(1){
            if((max % a == 0) && (max % b == 0)){
                break;
            }
            max++;
        }
        printf("%d\n", max);
        */
        //��2��
        /*int i = 1;
        while ((i * a) % b != 0) {
            i++;
        }
        printf("%d\n", i * a);*/
    }

    return 0;
}


