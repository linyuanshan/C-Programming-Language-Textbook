#include <stdio.h>
#include <stdlib.h>
void exam(void (*qz)(void));
void poem();
void prose();
void ci();
int main()
{
    int choice;
    while(1){
        printf("�����뿼�����ͣ�1.ʫ��2.�ʣ�3.���ģ�0.�˳�\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:exam(poem);break;
            case 2:exam(ci);break;
            case 3:exam(prose);break;
            case 0:exit(0);
        }
    }
    return 0;
}
void exam(void (*qz)(void))
{
    printf("����ǰ׼������\n");
    printf("��ʾ��Ŀ��\n");
    (*qz)();
    printf("�����С���\n");
    printf("���Խ���\n");
}
void poem()
{
    printf("���ϱ�ҵ\n");
    printf("���ơ���ά\n");
    printf("�����ĺõ��������ɽ�\n");
    printf("����ÿ������ʤ�¿���֪��\n");
    printf("�е�ˮ�����������ʱ��\n");
    printf("żȻֵ���ţ�̸Ц�޻��ڡ�\n");
}
void prose()
{
    printf("ª����\n");
    printf("���ơ�������\n");
    printf("ɽ���ڸߣ�����������\n");
    printf("ˮ������������顣\n");
    printf("˹��ª�ң�Ω���ܰ��\n");
    printf("̦���Ͻ��̣���ɫ�����ࡣ\n");
    printf("̸Ц�к��壬�����ް׶���\n");
    printf("���Ե����٣��Ľ𾭡�\n");
    printf("��˿��֮�Ҷ����ް��֮���Ρ�\n");
    printf("�������®����������ͤ��\n");
    printf("�����ƣ���ª֮�У�\n");
}
void ci()
{
    printf("������\n");
    printf("���Ρ�������\n");
    printf("����Ϫͤ��ĺ������֪��·��\n");
    printf("�˾�����ۣ�����ź�����\n");
    printf("���ɣ����ɣ�����һ̲Ÿ�ء�\n");
}


