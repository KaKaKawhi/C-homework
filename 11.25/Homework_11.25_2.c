#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <string.h>

//����������
//��һ�а���һ��������n����ʾ��ʦ������������n��������������n�У�
//ÿ��һ��������k��Ϊ������ÿһ��Ԫ�ص�ֵ��(1 �� n �� 105��1 �� k �� n)
//���������
//���һ�У�Ϊȥ�����������У�ÿ����������һ���ո�
//���룺
//4
//2
//2
//1
//1
//�����
//1 2
//���룺
//5
//5
//4
//3
//2
//1
//�����
//1 2 3 4 5

int main() {

    int n = 0;
    scanf("%d", &n);
    int arr[100000] = { 0 };
    int i = 0;
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    //�����������������򣬶����ظ�������һ��
    int count = n;//��¼�����ظ����ֻ��м�����
    int j = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] == arr[i - 1]) 
        {
            n--;
            count--;
            for (j = i; j < n; j++) 
            {
                arr[j] = arr[j + 1];
            }
        }
    }
    //����
    for (i = 0; i < count - 1; i++)  //�Ƚ�n-1��
    {
        for (j = 0; j < count - 1 - i; j++)  //ÿ�ֱȽ�n-1-i��,
        {
            if (arr[j + 1] < arr[j])  //������j����������������i
            {
                int buf = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = buf;
            }
        }
    }
    for (i = 0; i < count; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

//�𰸾��ˣ�
//int main()
//{
//    int n = 0;
//    int arr[100000] = { 0 };
//    int i = 0;
//    int tmp = 0;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &tmp);
//        arr[tmp] = tmp;    //�����洢���ݣ�С�����浽�±�С������Ԫ�����һ�����ظ��ͻḲ��
//    }
//    for (i = 0; i < 100000; i++)
//    {
//        if (arr[i] != 0)
//            printf("%d ", arr[i]);   //������ӡ��ֱ�Ӱ����洢��Ĳ�Ϊ������ݵĴ�С�����ӡ��
//    }
//    return 0;
//}