#include <stdio.h>
#include <stdlib.h>
int Add(int a,int b);
int Sub(int a,int b);
int Mul(int a,int b);
int Div(int a,int b);
//int main()
//{
//    int input=0,a,b;
//    int (*pArr[5])(int,int)={0,Add,Sub,Mul,Div};
//    do{
//         menu();
//        printf("请选择：");
//         scanf("%d",&input);
//
//        if((input>=1)&&(input<=4))
//        {
//            printf("请输入两个操作数：\n");
//            scanf("%d%d",&a,&b);
//            int ret=pArr[input](a,b);
//            printf("%d\n",ret);
//        }
//        else if(input==0)
//        {
//            printf("退出\n");
//            break;
//        }
//        else
//        {
//            printf("输入错误。请重新输入!\n");
//        }
//    }while(1);
//    return 0;
//}
////////////////////////////////////////////////////////////////////
//int main()
//{
//    int input =0,a,b;
//    do
//    {
//        menu();
//        printf("请输入选项:\n");
//        scanf("%d",&input);
//        if(input!=0)
//        {
//            printf("请输入两个数：\n");
//            scanf("%d%d",&a,&b);
//        }
//        else if(input ==0)
//            break;
//        switch(input)
//        {
//        case 1:
//            printf("%d\n",Add(a,b));
//            break;
//        case 2:
//            printf("%d\n",Sub(a,b));
//            break;
//        case 3:
//            printf("%d\n",Mul(a,b));
//            break;
//        case 4:
//            printf("%d\n",Div(a,b));
//            break;
//        default:
//            printf("输入错误！！\n");
//        }
//    }while(1);
//    return 0;
//}
//method 3
void Calc(int (*pf)(int,int))
{
    int a,b;
    printf("请输入两个数：\n");
    scanf("%d%d",&a,&b);
    printf("%d\n",pf(a,b));
}
int main()
{
    int input;
    do
    {
        menu();
        printf("请输入选项:\n");
        scanf("%d",&input);
        switch(input)
        {
        case 1:
            Calc(Add);
            break;
        case 2:
            Calc(Sub);
            break;
        case 3:
            Calc(Mul);
            break;
        case 4:
            Calc(Div);
            break;
        default:
            printf("输入错误！！\n");
        }
    }while(1);
    return 0;
}

void menu()
{
    printf("********1.Add  2.Sub******\n");
    printf("********3.Mul  4.Div******\n");
    printf("********   0.exit  *******\n");
}
int Add(int a,int b)
{
    return a+b;
}
int Sub(int a,int b)
{
    return a-b;
}
int Mul(int a,int b)
{
    return  a*b;
}
int Div(int a,int b)
{
    return a/b;
}
