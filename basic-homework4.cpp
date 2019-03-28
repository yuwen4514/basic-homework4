#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int sec=0;

    printf("您的輸入的秒數：");
    scanf("%d",&sec);

    printf("轉換的時間為=%02d時:%02d分:%02d秒\n",sec/3600%60,sec/60%60,sec%60);
    system("pause");  

    return 0;
}
