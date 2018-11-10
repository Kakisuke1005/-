#include<stdio.h>
void error_message(void);
int get_month(void);

int main(void)
{
    int month_now,month_birth,month_remain;
    printf("＜誕生日の月＞\n");
    month_birth=get_month();
    printf("＜現在の月＞\n");
    month_now=get_month();
    month_remain=month_birth-month_now;
    if(month_now==month_birth){
        printf("今月が誕生日ですね\n");
    }else if(month_remain<0){
        printf("誕生日まであと%dヶ月ですね\n",month_remain+12);
    }else{
        printf("誕生日まであと%dヶ月ですね\n",month_remain);
    }
    return 0;
}

void error_message(void)
{
    printf("入力ミスです！\n");
}

int get_month(void)
{
    int month;
    while(1){
        printf("月：");
        scanf("%d",&month);
        if(month>=1&&month<=12){
            break;
        }else{
            error_message();
        }
    }
    return month;
}