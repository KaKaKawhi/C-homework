#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

// ʵ��һ�����������������ַ����е�k���ַ���
// ���磺
// ABCD����һ���ַ��õ�BCDA
// ABCD���������ַ��õ�CDAB

// ��һ���Լ�д�ģ�(����������д���)
// 
//char* Spin(char str[], int num) 
//{
//    int len = strlen(str);
//    char nstr[5] = { 0 };
//    int count = num % 4;
//    char* ps = str + count;
//    int i = 0;
//    while (*ps != '\0') {
//        nstr[i] = *ps;
//        i++;
//        ps++;
//    }
//    
//    while (count) {
//        nstr[i] = *str;
//        str++;
//        i++;
//        count--;
//    }
//    
//    nstr[i] = *ps;
//
//    return nstr;
//}
//
//int main()
//{
//    char str[] = "abcd";
//    int num = 0;
//    scanf("%d", &num);
//    char* pr = Spin(str, num);
//    printf("%s\n", pr);
//
//    return 0;
//}




// ��ʦ��������һ��ÿ����תһ���ַ�����
//
//void Left_Spin(char arr[], int num)
//{
//	int len = strlen(arr);
//	int count = num % len;
//
//	while (count) {
//		char tmp = *arr;
//		int i = 0;
//		// ע��������i<len-1
//		for (i = 0; i < len - 1; i++) {
//			*(arr + i) = *(arr + i + 1);
//		}
//		// ע������ֱ�����ַ������һ���ַ�����ֵ��һ���ַ�
//		*(arr + len - 1) = tmp;
//		count--;
//
//	}// ����û�ж����ַ�������'\0'�����Բ���Ҫ�������
//}
//
//int main()
//{
//	char arr[] = "abcd";
//	int num = 0;
//	scanf("%d", &num);
//	Left_Spin(arr, num);
//	printf("%s\n", arr);
//
//	return 0;
//}

   


// ��ʦ�������������ֱ����򲿷��ַ���������������һ����˼·���ۣ�������
//
//void Reverse(char* left, char* right) {
//	while (left < right) {
//		char tmp = *right;
//		*right = *left;
//		*left = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcd";
//	int num = 0;
//	scanf("%d", &num);
//	int len = strlen(arr);
//	// ����ǰnum���ַ�
//	Reverse(arr, arr + num - 1);
//	// ����ʣ���ַ�
//	Reverse(arr + num, arr + len - 1);
//	// ��������
//	Reverse(arr, arr + len - 1);
//	printf("%s\n", arr);
//
//	return 0;
//}



// �������·����������ÿ⺯����
//
void leftRound(char* src, int time)
{
	int len = strlen(src);
	int pos = time % len; //�Ͽ�λ�õ��±�
	char tmp[256] = { 0 }; //��׼ȷ�Ļ�����ѡ��malloc len + 1���ֽڵĿռ��������tmp

	strcpy(tmp, src + pos); //�Ƚ������ȫ��������
	strncat(tmp, src, pos); //Ȼ��ǰ�漸������
	strcpy(src, tmp); //��󿽻�ȥ
}

int main()
{
	char arr[] = "abcd";
	int num = 0;
	scanf("%d", &num);
	leftRound(arr, num);
	printf("%s\n", arr);

	return 0;
}