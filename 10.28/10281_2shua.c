#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// ������ʵ��

void meun1() {
    // �ǵû��з�
    printf("-------------\n");
    printf("---1  ����---\n");
    printf("---0  �˳�---\n");
    printf("-------------\n");
    printf("-------------\n");

}

void game1() {

    // �����������Ӧ�÷���ѭ�����棬�����ѭ���ÿ��ִ��ѭ�����Ҫ�µ�������һ��
    // RAND_MAX-32767
    // 1.���������
    // ����rand����
    int num = rand() % 100 + 1; //1-99                           //���ǣ�����������
    int user = 0;
    do {
        printf("���������µ�����\n");//���и�������������
        scanf("%d", &user);
        if (user == num) {
            printf("bingo\n");//���и�������������
            //�¶Ծ�break
            break;
        }
        if (user != num) {
            if (user > num) {
                printf("too big\n");//���и�������������
            }
            else {
                printf("too small\n");//���и�������������
            }
        }
        
    } while (1);
}

int main() {

    // ����rand����ǰ�����������������srand�����仯����ʹ�������������
    srand((unsigned int)time(NULL));                              //����������������
    int n = 0;
    // �������ѭ��������û��������������Ƿ��ټ���
    // dowhile��ʾ���ٻ��ӡһ�β˵����û�������һ��
    do{
        // ��ӡ�˵�
        meun1();
        // �û����뿪ʼ�������Ϸ
        scanf("%d", &n);
        // �÷�֧�������û������������Ƿ����
        switch (n) {
        case 1:
            //����Ϸ��������������ͨ��ѭ�����û����룬ֱ���¶�   //�������տ�ʼ���������ֲ���������������
            game1();
            break;
        case 0:
            // nҲ��ѭ�����ж�������Ϊ0����٣��������´�ѭ��
            printf("���˳�");
            break;
        default:
            printf("�����������������");
            break;
        }
    // ����n���ж�ѭ���Ƿ������ȥ
    } while (n);

    return 0;
}


//���棺
//int main() {
//
//    int num = 188;
//    int user = 0;
//    while (scanf("%d", &user) != EOF) {
//        if (user == num) {
//            printf("bingo\n");
//        }
//        else if(user > num) {
//            printf("too big\n");
//        }
//        else {
//            printf("too small\n");
//        }
//    }
//
//    return 0;
//}