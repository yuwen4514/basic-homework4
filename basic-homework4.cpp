#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int sec=0;

    printf("�z����J����ơG");
    scanf("%d",&sec);

    printf("�ഫ���ɶ���=%02d��:%02d��:%02d��\n",sec/3600%60,sec/60%60,sec%60);
    system("pause");  

    return 0;
}
