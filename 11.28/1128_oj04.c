#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main() {
//
//    int n = 0;
//    while (scanf("%d", &n) != EOF) {
//        int i = 0;
//        // i��������
//        for (i = 1; i <= n; i++) {
//            // ��ӡ�ո�
//            int space = n - i;
//            while (space) {
//                printf("  ");
//                space--;
//            }
//            // ��ӡ*
//            // i�������ұ䶯����num����i������
//            int num = i;
//            while (num) {
//                printf("* ");
//                num--;
//            }
//            printf("\n");
//        }
//    }
//
//    return 0;
//}

//�Ż���
int main() {

    int i = 0;
    int j = 0;
    int n = 0;
    while (~scanf("%d", &n)) {
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= (n - i); j++) {
                printf("  ");
            }
            for (j = 1; j <= i; j++) {
                printf("* ");
            }
            printf("\n");
        }
    }

    return 0;
}

//��ˢ���ã�������������������������������������������������������������������������
int main() {

    int n = 0;
    while (~scanf("%d", &n)) {
        // ���ƴ�ӡ����
        int i = 0;
        // ����ÿ�еĴ�ӡ
        int j = 0;
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n - i; j++) {  
                printf("  ");
            }
            for (j = 1; j <= i; j++) {
                printf("* ");
            }
            printf("\n");
        }
    }

    return 0;
}

// �𰸣�
/*
int main()
{
    int n = 0;
    while(scanf("%d", &n) != EOF)
    {
        int i = 0;
        //��������
        for(i=0; i<n; i++)
        {
            //�ո�
            int j = 0;
            for(j=0; j<n-1-i; j++)  //��j<n-i-1ͬ��
            {
                printf("  ");
            }
            //*
            for(j=0; j<=i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }

    }
    return 0;
}


*/

//��2
int main()
{
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        int i = 0;
        int j = 0;
        //����
        for (i = 0; i < n; i++)
        {
            //һ��
            for (j = 0; j < n; j++)
            {
                //�к��еĺ�
                //������԰�������������������ܿ����ף��ã�������������������������������������������������
                if (i + j < n - 1)
                {
                    printf("  ");
                }
                else
                {
                    printf("* ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}