#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//���ֲ���
//��д������һ���������������в��Ҿ����ĳ����
//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����

int main() {

	int arr[] = {0,1,2,3,4,5,6,7,8,9};
	int user = 0;//��������
	scanf("%d", &user);
	int index = 0;//�±�
	int length = sizeof(arr) / sizeof(arr[0]);
	int a = 0;
	int b = length - 1;

	while (a <= b) {// rightλ�������ݣ�����Ҫ���=��
		if (arr[(a + b) / 2] >= user) {   //ֱ���������Խ��ӦΪa + (b - a) / 2
			b = (a + b) / 2 - 1;
			index = (a + b) / 2;
		}
		if (arr[(a + b) / 2] <= user) {
			a = (a + b) / 2 + 1;
			index = (a + b) / 2;
		}
	}
	if (a <= b) {  //Ӧ�� a > b
		printf("�Ҳ���");
	}
	else {
		printf("%d\n", index);
	}
	return 0;
}

