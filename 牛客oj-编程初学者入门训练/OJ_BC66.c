#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main() {
//
//    int n = 0;
//    while (~scanf("%d", &n)) {
//        // ��������
//        int i = 0;
//        // ����ÿ�еĴ�ӡ
//        int j = 0;
//        // ֱ�ӽ���һ�е�һ��*��ӡ��
//        printf("*\n");
//        // �ӵڶ��п�ʼ��ӡ
//        for (i = 2; i <= n; i++) {
//            for (j = 1; j <= i - 1; j++) {
//                printf(" ");
//            }
//            printf("*\n");
//        }
//    }
//
//    return 0;
//}

//���ˣ�
//int main()
//{
//    int num;
//    while (scanf("%d", &num) != EOF)
//    {
//        int i, j;//����
//        for (i = 0; i < num; i++)//����
//        {
//            for (j = i; j > 0; j--)//ÿ��ǰ�Ŀո�
//            {
//                printf(" ");
//            }
//            printf("*\n");
//        }
//
//    }
//}

// ˼�����Ż���
int main() {

    int n = 0;
    while (~scanf("%d", &n)) {
        // ��������
        int i = 0;
        // ����ÿ�еĴ�ӡ
        int j = 0;

        // ֱ�ӽ���һ�е�һ��*��ӡ��        ����Ҫ������
        //printf("*\n");
       
        // �ӵ�1�п�ʼ��ӡ
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= i - 1; j++) {
                printf(" ");
            }
            printf("*\n");
        }
    }

    return 0;
}