////#include<stdio.h>
////int main()
////{
////    float n=1.0;
////    int i=1;
////    int count=0;
////    while(1.0/i>0.0001)
////    {
////        if(i%4==1)
////        {
////            n=n+1.0/i;
////            count++;
////        }
////        else if(i%4==3)
////        {
////            n=n-1.0/i;
////            count++;
////        }
////        i+=2;
////    }
////    printf("pi=%.5f count=%d",(n-1)*4.0,count);
////    return  0;
////}
//
////#include<stdio.h>
////#include<math.h>
////int main()
////{
////    int sum=0;
////    for(int a=1;a<=500;a++)
////    {
////        int b=a;
////        while(b)
////        {
////            sum+=pow((b%10),3);
////            b/10;
////        }
////        if(sum==b)
////        {
////            printf("%d\n",b);
////        }
////    }
////}
//
////#include<stdio.h>
////int main()
////{
////    for(int i=1;i<=9;i++)
////    {
////        for(int j=1;j<=9;i++)
////        {
////            for(int h=1;h<=9;i++)
////            {
////                if((100*i+10*j+h)==(i*i*i+j*j*j+h*h*h))
////                printf("%d\n",100*i+10*j+h);
////            }
////        }
////    }
////}
////
////#include<stdio.h>
////int main()
////{
////    for(int i=100;i<=1000;i++)
////    {
////        int b=i%10,c=i/10%10,d=i/100;
////            int sum1=0,sum2=0,sum3=0;
////            for(int j=1;j<=b;j++)
////            {
////                sum1+=j;
////            }
////            for(int k=1;k<=c;k++)
////            {
////                sum2+=k;
////            }
////            for(int l=1;l<=d;l++)
////            {
////                sum3+=l;
////            }
////            if(sum1+sum2+sum3==i)
////            printf("%d\n",i);
////    }
////    return 0;
////}
////#include<stdio.h>
////int main()
////{
////    int n;
////    scanf("%d",&n);
////    int a=n*n%10;
////    int b=n*n%100;
////    int c=n*n%1000;
////    int d=n*n%10000;
////    if((n*n==a)||(n*n==b)||(n*n==c)||(n*n==d))
////    printf("Yes");
////    else
////    printf("No");
////    return 0;
////}
//
////#include<stdio.h>
////int main()
////{
////    int m,n;
////    scanf("%d%d",&m,&n);
////    for(int i=m;i<=n;i++)
////    {
////        if(i==1)
////        printf("2");
////        for(int j=2;j<=i;j++)
////        {
////            if(i%j==0)
////            break;
////            else if(j==i-1)
////                printf(" %d",i);
////        }
////    }
////    return 0;
////}
//#include<stdio.h>
//int main()
//{
//    int m,n;
//    scanf("%d%d",&m,&n);
//    if(m%n==0)
//    {
//        printf("the greatest common divisor is %d\n",n);
//        printf("the least common multiple is %d\n",m);
//    }
//    else if(n%m==0)
//    {
//         printf("the greatest common divisor is %d\n",m);
//         printf("the least common multiple is %d\n",n);
//    }
//    else
//    {
//        for(int i=m<n?m:n;i>=1;i--)
//        {
//            if((m%i==0)&&(n%i==0))
//            {
//                printf("the greatest common divisor is %d\n",i);
//                break;
//            }
//        }
//        for(int j=m>n?m:n;j<2000;j++)
//        {
//            if((j%m==0)&&(j%n==0))
//            {
//                printf("the least common multiple is %d\n",j);
//                break;
//            }
//        }
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int arr[10]={0};
//    scanf("%d%d%d%d%d%d%d%d%d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4],&arr[5],&arr[6],&arr[7],&arr[8]);
//
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int arr[10]={0};
//    int sum=0;
//    scanf("%d%d%d%d%d%d%d%d%d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4],&arr[5],&arr[6],&arr[7],&arr[8]);
//    for(int i=0;i<=8;i++)
//    {
//        sum=arr[i]>arr[i+1]?arr[i]:arr[i+1];
//    }
//    printf("%d\n",sum);
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int i=0,n,sum=0,min=0,max=0;
//    scanf("%d",&n);
//    if(n<4)
//    goto re;
//    for(i=1;i<=n;i++)
//    {
//        if((i%4==0)&&(n/10%10!=4))
//        {
//            sum+=i;
//            min=4;
//            if(n-i<4)
//                break;
//        }
//    }
//        re:
//    printf("sum=%d min=%d max=%d",sum,min,i);
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n,cot=0,flag=1;
//    scanf("%d",&n);
////    printf("2 ");
//    for(int i=2;i<=n;i++)
//    {
//        flag=1;
//        for(int j=2;j<=sqrt(i);j++)
//        {
//            if(i%j==0)
//            {
//                flag=0;
//                break;
//            }
//            else
//            continue;
//
//        }
//        if(flag==1)
//           {
//               printf("%d ",i);
//                cot++;
//           }
//
//    }
//    printf("%d",cot);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    float a=sqrt(10);
//    int b=(int)sqrt(10);
//    if(a==b)
//    printf("%f",a);
//    else printf("!");
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    char ch[2*n-1][2*n-1]={ };
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n,i=1,j=1,k=1;
//    scanf("%d",&n);
//    int hh=2*n-3;
//    for(i=1;i<=n;i++)
//    {
//        for(j=1;j<i;j++)
//        printf(" ");
//        printf("*");
//        for(k=1;k<=hh;k++)
//        {
//            printf(" ");
//
//        }
//        if(i!=n)
//        printf("*");
//        printf("\n");
//         hh-=2;
//    }
//for(i=1;i<=n-1;i++)
//    {
//        for(j=1;j<=n-i-1;j++)
//        printf(" ");
//        printf("*");
//        for(k=1;k<=2*i-1;k++)
//        printf(" ");
//        printf("*\n");
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int n,i=1,j=1,k=1;
//    scanf("%d",&n);
//    int h=2*n-3;
//    for(i=1;i<=n;i++)
//    {
//        int m=n-i;
//        for(j=1;j<=m;j++)
//        printf(" ");
//        for(k=1;k<=2*i-1;k++)
//        printf("*");
//        printf("\n");
//    }
//    for(i=1;i<=n-1;i++)
//    {
//        for(j=1;j<=i;j++)
//        printf(" ");
//        for(k=1;k<=h;k++)
//        printf("*");
//        printf("\n");
//        h-=2;
//    }
//    return 0;
//}
#include<stdio.h>
//int main()
//{
//    int n,sum=1;
//    scanf("%d",&n);
//    for(int i=n-1;i>=1;i--)
//    {
//        sum=(sum+i)*2;
//    }
//    printf("The monkey got %d peachs in first day.",sum);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int j=89;
//    printf("%03d",j);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int m,n;
//    scanf("%d%d",&m,&n);
//    long long t=pow(m,n);
//    int c=t%10;
//    int b=t/10%10;
//    int a=t/100%10;
//    int re=a*100+b*10+c;
//    printf("The last 3 digits of %d ** %d is: %03d",m,n,re);
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    long long m,n;
//    int re=1;
//    scanf("%ld %ld",&m,&n);
//    for(int i=1;i<=m;i++)
//    {
//        re=re*m%1000;
////    }
////    printf("The last 3 digits of %ld ** %ld is: %03d",m,n,re);
////    return 0;
////}
//
////#include<stdio.h>
////int main()
////{
////    int n,cot=0;
////    long long ret=1;
////    scanf("%d",&n);
////    for(int i=1;i<=n;i++)
////    {
////        ret=ret*i%100;
////        if((ret%10==0)&&(i>=4))
////        {
////            cot++;
//////            ret=ret/10;
////
////        }
////
////    }
////    printf("The number of 0 in the end of %d! is:%d.",n,cot);
////    return 0;
////#include<stdio.h>
////int main()
////{
////
////    do{
////        int cot=0,a,b;
////        double sum=0;
////        sum=0;
////        scanf("%d%d",&a,&b);
////        if((a==0)||(b==0)) break;
////        for(int i=1;i<=10000;i++)
////        {
////            if(a==b)
////            cot=a;
////            else if (sum<1.0)
////            {
////                if(i%2!=0)
////                sum+=1.0/a;
////                else
////                sum+=1.0/b;
////                cot++;
////            }
////            else
////            break;
////        }
////        printf("%d\n",cot);
////    }while(1);
////    return 0;
////}
//#include<math.h>
//
//int Facto(int m)
//{
//    int sum=1;
//    for(int i=2;i<=m;i++)
//    {
//        sum*=i;
//    }
//    return sum;
//}
//float fun(double x,int n)
//{
//    float s=1,zho;
//    int jie;
//    for(int i=1;i<=n;i++)
//    {
//       int jie=Facto(i);
//       int shang=pow(x,i);
//        s+=1.0*shang/jie;
//    }
//    return s;
//}
//int main()
//
//{
//
//    double x;
//
//    int n;
//
//    scanf("%lf%d", &x, &n);
//
//    printf("%f\n", fun(x, n));
//
//    return 0;
//
//}
///Æ½·½¸ù
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//   double a,b,n;
//    scanf("%lf",&n);
//    b=n/2;
//    a=(b+n/b)/2.0;
//    while(fabs(b-a)>0.00001)
//    {
//        double tmp=a;
//        a=(a+n/a)/2.0;
//        b=tmp;
//    }
//printf("The square root of %.2f is %.5f",n,a);
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n,ret=1,i;
//    scanf("%d",&n);
//    if(n==0)
//    printf("0!=1");
//    for(i=1;i<=n;i++)
//    {
//        ret=ret*i;
//    }
//    printf("%d!=%d",n,ret);
//    return 0;
//}
#include<stdio.h>
int main()
{
    char ch;
    int i=1,j;

    scanf("%c",&ch);

    int fa=ch-64;
    int fu=fa;
    for(int i=1;i<=fa;i++)
    {
        for(j=0;j<=fu-1;j++)
        printf("%c",ch-j);
            for(int k=1;k<=i-1;k++)
            printf("%c",65+k);
        printf("\n");
        fu-=1;
        ch-=1;
    }
    return 0;
}
