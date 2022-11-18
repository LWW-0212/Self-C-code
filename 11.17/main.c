#include <stdio.h>
#include <stdlib.h>

//#include<stdio.h>
//int main()
//{
//
//    do{
//        int cot=0,a,b;
//        double sum=0;
//        sum=0;
//        scanf("%d%d",&a,&b);
//        if((a==0)||(b==0)) break;
//        for(int i=1;i<=10000;i++)
//        {
//            if(a==b)
//            cot=a;
//            else if (sum<1.0)
//            {
//                if(i%2!=0)
//                sum+=1.0/a;
//                else
//                sum+=1.0/b;
//                cot++;
//            }
//            else
//            break;
//        }
//        printf("%d\n",cot);
//    }while(1);
//    return 0;
//}
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    int i,a,b,c,x,y,z;
//    for(i=0;i<n;i++){
//        scanf("%d%d%d%d%d%d",&a,&b,&c,&x,&y,&z);
//        if(a==x&&b==y&&c==z){
//            printf("Same\n");
//        }
//        else if(a>x) printf("First\n");
//        else if(a<x) printf("Second\n");
//        else if(a==x) {
//            if(b>y)printf("First\n");
//            else if(b<y) printf("Second\n");
//            else {
//                if(c>z)printf("First\n");
//                else if(c<z)printf("Second\n");
//            }
//        }
//
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a,b,c,d,n,m,t,h,cot=0,flag=1,i=0,re;
//    scanf("%d",&n);
//    scanf("%d:%d %d:%d",&a,&b,&c,&d);
//    for(i=0;i<7;i++){
//        scanf("%d:%d %d:%d",&m,&n,&t,&h);
//        if(60*(c-a)+d-b>60*(t-m)+h-n)
//        {
//            a=m;b=n;c=t;d=h;
//            cot=i;
//            re=(c-a)*60+d-b;
//        }
//    }
//
//    if(((i+n)%7)==1) printf("Monday");
//    else if(((i+n)%7)==2) printf("Tuesday");
//    else if(((i+n)%7)==3) printf("Wednesday");
//    else if(((i+n)%7)==4) printf("Thursday");
//    else if(((i+n)%7)==5) printf("Friday");
//    else if(((i+n)%7)==6) printf("Saturday");
//    else if(((i+n)%7)==0) printf("Sunday");
//printf(" %d",re);
//    return 0;int
//}
//
//int main()
//{
//    int h1,h2,m1,m2,n;
//    scanf("%2d:%2d %2d:%2d",&h1,&m1,&h2,&m2);
//    scanf("%d",&n);
//    int re=(h2-h1)*60+m2-m1;
//    printf("%d",re+n*20);
//    return 0;
//}
/////////////////分数计算器！！！
//int Bei(int a,int b)
//{
//    if(a%b==0) return a;
//    else if(b%a==0) return b;
//    else {
//        int ma=a>b?a:b;
//        while(1){
//            if(ma%a==0&&ma%b==0){
//                return ma;
//                break;
//            }
//            ma++;
//        }
//    }
//
//}
//int Yue(int a,int b)
//{
//    int mi=a<b?a:b;
//    for(int i=mi;i>0;i--){
//        if(a%mi==0&&b%mi==0){
//            return mi;
//            break;
//        }
//    }
//
//}
//int main()
//{
//    int m1,n1,m2,n2,a,zi,mu;char ch;
//    scanf("%d/%d%c%d/%d",&m1,&n1,&ch,&m2,&n2);
//    if(ch=='+'){
//        int a=Bei(n1,n2);//分母的最小公倍数
//        zi=a/n1*m1+a/n2*m2;//算出最终的分子
//        int b=Yue(zi,a);//算出分子分母的约束
//        printf("%d/%d%c%d/%d=%d/%d",m1,n1,ch,m2,n2,zi/b,a/b);
//    }
//    else if(ch=='-'){
//        int a=Bei(n1,n2);//分母的最小公倍数
//        zi=a/n1*m1-a/n2*m2;//算出最终的分子
//        int b=Yue(zi,a);//算出分子分母的约束
//        printf("%d/%d%c%d/%d=%d/%d",m1,n1,ch,m2,n2,zi/b,a/b);
//    }
//    else if(ch=='*'){
//        zi=m1*m2;
//        mu=n1*n2;
//        int b=Yue(zi,mu);
//        printf("%d/%d%c%d/%d=%d/%d",m1,n1,ch,m2,n2,zi/b,mu/b);
//    }
//        else if(ch=='/'){
//            zi=m1*n2;
//            mu=n1*m2;
//            int b=Yue(zi,mu);
//            printf("%d/%d%c%d/%d=%d/%d",m1,n1,ch,m2,n2,zi/b,mu/b);
//        }
//    return 0;
//}
int main()
{
    int n,sum=0,ha=0;
    scanf("%d",&n);
    for(int i=n-1;i>0;i--){
        if(n%i==0){
            sum+=i;
        }
    }
    for(int j=sum;j>0;j--){
        if(sum%j==0){
            ha+=j;
        }
    }
    if(ha==n) printf("%d-%d",n,sum);
    else printf("No output\n");
    return 0;
}
