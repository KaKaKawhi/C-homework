#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//д���뽫�������������Ӵ�С�����
//���磺
//���룺2 3 1
//�����3 2 1

// ˼��������1����ӡ˳�򲻱�Ϊabc��a��󣬽�abc�е�ֵ����
//       ����2�������������Ӵ�С��ӡabc

// ����1��
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d %d %d", &a, &b, &c);
//    int tmp = 0;
//    if (b > a) {
//        tmp = b;
//        b = a;
//        a = tmp;
//    }
//    if (c > a) {
//        tmp = c;
//        c = a;
//        a = tmp;
//    }
//    if (c > b) {
//        tmp = b;
//        b = c;
//        c = tmp;
//    }
//    printf("%d %d %d", a, b, c);
//
//    return 0;
//}


// ����2��
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);
	if ((a > b) && (a > c)) {
		if (b > c) {
			printf("%d %d %d", a, b, c);
		}
		else {
			printf("%d %d %d", a, c, b);
		}
	}

	if ((b > a) && (b > c)) {
		if (a > c) {
			printf("%d %d %d", b, a, c);
		}
		else {
			printf("%d %d %d", b, c, a);
		}
	}

	if ((c > a) && (c > b)) {
		if (a > b) {
			printf("%d %d %d", c, a, b);
		}
		else {
			printf("%d %d %d", c, b, a);
		}
	}

	return 0;
}

// ð�����鵹Ҳ���Ҫ