#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//ģ���û����볡����ֻ���������������룬���������ȷ����ʾ��½�ɹ������ζ��������˳�����

void meun() {
    printf("--------------------\n");
    printf("--------------------\n");
    printf("--------------------\n");
    printf("------����������----\n");
    printf("--------------------\n");
    printf("--------------------\n");
    printf("--------------------\n");
}

int main() {

    meun();
    char secret[] = "123456";
    char input[10] = "";   //��ʦ��ʼ��""
    int count = 3;//����
    while (count) {
        scanf("%s", input);//input����ȡ��ַ���������������������ǵ�ַ
        if (strcmp(input, secret) == 0) {  //�Ƚ��ַ�����ͬ������==
            printf("��½�ɹ�\n");
            break;          //��½�ɹ�����Ҫ��ִ����
        }
        else {
            printf("�������\n");
        }
        count--;
    }
    if (0 == count) {
         printf("�������붼�����˳�����\n");  //�˳������ӡ��������,��Ϊ��һ������return 0
    }

    return 0;
}



// ģ���û���½�龰������ֻ�ܵ�½���Σ�ֻ���������������룬
// ���������ȷ����ʾ��¼�ɹ���������ξ��������˳�����
// ��ˢ
 
int main() {

    char str[20] = { 0 };  //�����ʼ�����Գ�ʼ��Ϊ""�����ַ�����
    char pass[] = "abc123456";
    int count = 3;
    // �жϵ�½�ɹ�ָ��
    int index = 0;
    int i = 0;
    for (i = 0; i < count; i++) {
        printf("����������\n");
        scanf("%s", str);
        if (0 == strcmp(str, pass)) {
            printf("��¼�ɹ�\n");
            index = 1;
            break;
        }
        else {
            printf("�����������������\n");
        }
    }
    if (0 == index) {
        printf("��¼ʧ��\n");
    }

    return 0;
}