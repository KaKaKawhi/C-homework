#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>

// ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
// ʵ�֣��������ַ����е��ַ��������У����������ӡ��
// Ҫ�󣺲���ʹ��C�������е��ַ�������������


// д�ķ��������ƶ�ָ���ʱ�򣬺�֮ǰ��ͬ��֮ǰ�������Լ�д�����ַ������Ⱥ�������ʵû��Ҫ
// �ǵݹ飺
//void Re_Str(char str[]) 
// {
//	assert(str);
//	char* left = str;
//	char* right = str;
//	// �൱while('\0' != (*right))
//	while (*right) {
//		right++;
//	}
//	// ��rightָ��ָ��'\0'֮ǰ
//	right--;
//	
//	if (left < right) {
//		// ������ָ������ú�ָ��ı������ݽ�����������
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}


// �ݹ飺�����󣬵ݹ������жϴ�������
// ˼����
// abcde --> bcd
// �޶�������*str����'\0'�����󣡣���������������������������
// �ӽ��޶�������ʽ����ָ��str����ƶ���ͬʱ��β'\0'��ǰ�ƶ�һλ
//void Re_Str(char str[]) 
//{
//	assert(str);
//	char* left = str;
//	char* right = str;
//	while (*right) {
//		right++;
//	}
//	right--;
//	// ����ɵ�һ�ֽ����Ĳ��ֽ���
//	char tmp = *left;
//	*left = *right;
//	// ���ұ�Ԫ����ʱ���'\0'Ϊ���ڵݹ�ʱ����֤����ĺ͵�һ�ε��ַ�����ʽ��ͬ
//	*right = '\0';
//	// �൱��if('\0' != (*str)) ������ĵݹ��޶��������󣡣�������������������������
//	if (*str) {
//		Re_Str(str + 1);
//	}
//	// ���Ժ��ٽ����ֽ����������
//	*right = tmp;
//}


int main()
{
	// ǧ��Ҫ���˳�ʼ����Ҫôֱ��ͨ����ֵ�ַ�����Ҫô����ָ���ַ������С������
	char str[20] = { 0 };
	scanf("%s", str);
	Re_Str(str);
	printf("%s\n", str);

	return 0;
}



// �ݹ���ʦ���ķ�����
int My_Strlen(char str[]) {
    char* mask = str;
    //�൱'\0' != *mask
    if (*mask) {
        return 1 + My_Strlen(mask + 1);
    }
    else {
        return 0;
    }
    // ���˾��ô���else��������
}

void Reverse_Str(char* str) {

    // �ڵݹ�֮ǰ�Ĵ��붼���������ģ�����ÿ�� �� ����������ʼ����
    // ��ִ��if (My_Strlen(str + 1) > 1)֮ǰ�Ĵ��룬
    // ֮��Ĵ����� �� ��������ݾͷ��ص����ʱ�᷵��ִ��  ������������������������������������
    int len = My_Strlen(str);

    // ��һ�β��ֽ���
    *str = *(str + len - 1);

    // ��*(str + len - 1)������Ϊ'\0'�������ݹ�Ļ���
    // str+1����һ����֮ǰһģһ�����ַ�������'\0'��β��
    *(str + len - 1) = '\0';

    // ��ʣ����ַ������ȴ���1�٣��ݹ飬���򲻱�
    if (My_Strlen(str + 1) > 1) {
        Reverse_Str(str + 1);
    }
    else {
        ;
    }

    // ��ɵ�һ�����н���
}