#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//����������
//�������룬һ��������3~20������ʾ�����������Ҳ��ʾ��������αߵġ� * ����������
//���������
//���ÿ�����룬����á� * ����ɵġ����ġ������Σ�ÿ���� * ��������һ���ո�

int main() {

    int n = 0;
    while (scanf("%d", &n) != EOF) {
        if (n >= 3 && n <= 20) {
            //˼·���ȴ�ӡʵ��������
            //int i = 0;
            //for (i = 1; i <= n; i++) {
            //    int mask = i;//����iȥ�仯����ÿ�����¶���
            //    while (mask) {
            //        printf("* ");
            //        mask--;
            //    }
            //    printf("\n");
            //}
            //˼·����ת��Ϊ��ӡ����������
            int i = 0;
            //��������
            for (i = 1; i <= n - 1; i++) {
                //��ӡÿ�еĵ�һ��Ԫ�ض�Ϊ*
                printf("* ");
                //����ÿһ�еĴ�ӡ���ӵ�n-1 >= 3�������п�ʼ���п���һ˵
                if (i >= 3) {
                    int mask = i - 2;//����iȥ�ı�
                    while (mask) {
                        printf("  ");
                        mask--;
                    }
                }
                //�ڶ��п�ʼ��������*
                if (i >= 2) {
                    printf("*");
                }
                printf("\n");
            }
            //���һ�У���n�е�����ӡ��
            for (i = 1; i < n; i++) {
                printf("* ");
            }
            printf("*\n");
        }
    }

    return 0;
}

//�𰸷�����
int main() {
    
    int n = 0;
    while (scanf("%d", &n) != EOF) {
        if (n >= 3 && n <= 20) {
            int i = 0;
            //������
            for (i = 1; i <= n; i++) {
                //������
                int j = 0;
                for (j = 1; j <= n; j++) {
                    //�ҳ�Ӧ�ô�ӡ*��λ��
                    if (j == 1 || i == n || j == i) {
                        printf("* ");
                    }
                    else {
                        //��ͼ��Ӧ�ô�ӡ�����ո�
                        printf("  ");
                    }
                }
                printf("\n");
            }
        }
    }


    return 0;
}

//��ˢ
#include <stdio.h>

int main() {

    // ��������
    int n = 0;
    while (~scanf("%d", &n)) {
        // �ȴ�ӡʵ�ĵ�
        // ��������
        int i = 0;
        // ����ÿ�еĴ�ӡ
        int j = 0;
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= i; j++) {
                //printf("* ");//ʵ��
                //ת��Ϊ��ӡ����,j <= i��Ϊi-1
                if (i < n) {
                    if ((j == 1) || (j == i)) {
                        printf("* ");
                    }
                    else {
                        printf("  ");
                    }
                }
                else {
                    printf("* ");  //���Ժ�����Ĵ�ӡ* ��||�������
                }

            }
            printf("\n");
        }
    }

    return 0;
}