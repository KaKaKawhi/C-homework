#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <time.h>

//�����֣�ѭ���棬1������0�˳�������С������

void meun() {
    printf("--------------------\n");
    printf("--------------------\n");
    printf("���������֣�1����0�˳���\n");
    printf("--------------------\n");
    printf("--------------------\n");
}
void game()
{
    //1.���������������������ɱ�����ѭ���⣬����������һ�Σ�������ı�һ�Σ�
    int ret = rand() % 100 + 1;//�κ�һ������%100�����Ϊ1-99
    int num = 0;
    //2.������
    while (1)
    {
        printf("�������:>");
        scanf("%d", &num);
        if (num == ret)
        {
            printf("��ϲ�㣬�¶���\n");
            break;                      //�¶Ծ�break
        }
        else if (num > ret)
        {
            printf("�´���\n");
        }
        else
        {
            printf("��С��\n");
        }
    }
}

int main()
{
    int input = 0;
    srand((unsigned int)time(NULL));//����rand����ǰ�����������������srand�����仯����ʹ�������������
    do
    {
        menu();
        printf("��ѡ��:>");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("�˳���Ϸ\n");
            break;
        default:
            printf("ѡ�����\n");
            break;
        }
    } while (input);//while ��дinput������Ϊ��ʱ���Ͳ�������Ϸ���˳�ѭ��
    return 0;
}


//����
    //meun();
    //int num = 99;
    //int user = 0;
    //int count = 0;//����
    //while ((scanf("%d", &user)) != EOF) {    
    //    count++;
    //    if (num == user) {
    //        printf("�¶���");
    //    }
    //    else if(user > num){
    //        printf("����");
    //    }
    //    else {
    //        printf("С��");
    //    }
    //}