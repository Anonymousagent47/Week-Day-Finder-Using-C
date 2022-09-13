#include<stdio.h>
int main()
{
    int day;
    printf("Enter Day (1-7):");
    scanf("%d",&day);
    switch(day){
        case 1 : printf("Monday!");
        break;
        case 2 : printf("Tuesday!");
        break;
        case 3 : printf("Wednesday!");
        break;
        case 4 : printf("Thursday!");
        break;
        case 5 : printf("Friday!");
        break;
        case 6 : printf("Saturday!");
        break;
        case 7 : printf("Sunday!");
        break;
        default : printf("Not A Valid Day!!");
    }
    return 0;
}

//To Do it in If..Else Statement


#include<stdio.h>
int main()
{
    int day;
    printf("Enter Day (1-7):");
    scanf("%d",&day);
    if(day==1){
        printf("Sunday");
    }else if(day==2){
        printf("Monday");
    }else if(day==3){
        printf("Tuesday");
    }else if(day==4){
        printf("Wednesday");
    }else if(day==5){
        printf("thursday");
    }else if(day==6){
        printf("Friday"):
    }else if(day==7){
        printf("Saturday");
    }else{
        printf("Enter Valid Number !");
    }
    return 0;
}
