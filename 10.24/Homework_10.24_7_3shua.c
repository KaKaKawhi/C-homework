#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// ��ˢ������ˢ���ʼ���д��
//д���뽫�������������Ӵ�С�����
//���磺
//���룺2 3 1
//�����3 2 1

// ����1������ǰ���a b c˳���ӡ��ͨ������������      Ҳ̫��������
//int main() {
//
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d %d %d", &a, &b, &c);
//    
//    // ���ȵõ�a b�еĽϴ���
//    // a = a > b ? a : b;
//    // �ٵõ�a b c�е������������a
//    // a = a > c ? a : c;
//    // ����ҵ�
//    // �϶δ�����󣬲���ֱ�Ӹ�ֵ��������Щֵ�ᱻ���ǣ������޷�ʵ��Ŀ��
//
//    if ((a > b) && (a > c)) {
//        // ���ֵ��Ϊa�����轻��a
//        if (c > b) {
//            int tmp = c;
//            c = b;
//            b = tmp;
//        }
//    }
//    if ((b > a) && (b > c)) {
//        // ab����
//        int tmp = a;
//        a = b;
//        b = tmp;
//        if (c > b) {
//            int tmp = c;
//            c = b;
//            b = tmp;
//        }
//    }
//    if ((c > a) && (c > b)) {
//        // ac����
//        int tmp = a;
//        a = c;
//        c = tmp;
//        if (c > b) {
//            int tmp = c;
//            c = b;
//            b = tmp;
//        }
//    }
//    printf("%d %d %d\n", a, b, c);
//    
//    return 0;
//}

// ����2���ҳ����ֵ��ӡ���ҳ�������֮���ӡ          ̫����������
int main() {

	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);

	if (a > b) {
		if (b > c) {
			printf("%d %d %d\n", a, b, c);
		}
		else {
			if (a > c) {
				printf("%d %d %d\n", a, c, b);
			}
			else {
				printf("%d %d %d\n", c, a, b);
			}
		}	
	}
	else {
		if (a > c) {
			printf("%d %d %d\n", b, a, c);
		}
		else {
			if (b > c) {
				printf("%d %d %d\n", b, c, a);
			}
			else {
				printf("%d %d %d\n", c, b, a);
			}
		}
	}

	return 0;
}