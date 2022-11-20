#include <stdio.h>
#include <stdlib.h>
//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//int a,b,c,sum;
//for(a=1;a<100;a++)
//for(b=1;b<100;b++)
//   for(c=1;c<100;c++){
//   	        sum=a+5*b+c*10;
//   	 if(sum>100&&sum%100==0&&18*a==15*b&&18*a==20*c)
//   	   printf("%d,%d,%d,%d\n",a,b,c,sum/10);
//   	 }
//}
//int main()
//{
//    int i,j,x,sum=0;
//    for(i=1;i<100;i++){
//        for(j=1;i<100;j++){
//            for(x=1;x<100;x++){
//                    sum=i+5*j+10*x;
//                    if((i*18==j*15)&&(j*15==x*20)){
//                        if((sum>=10)&&(sum%100==0))
//                        {
//                            printf("%d,%d,%d,%d\n",i,j,x,sum/10);
//                            break;
//                        }
//                    }
//            }
//        }
//    }
//    return 0;
//}
//int main()
//{
//    double a=3.1;
//    int b=(int)a;
//    printf("%d",b);
////    if(a==b)
////        printf("hehe\n");
////    else printf("haa");
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    int n,num,cot=0;
//    scanf("%d%d",&n,&num);
//    int a[n];
//    for(int i=0;i<n;i++){
//        scanf("%d",&a[i]);
//    }
//    for(int i=0;i<n;i++){
//        if(a[i]==num) {printf("%d",i);
//        break;}
//    }
//    return 0;
//}
int main()
{
    int n,tmp,i,j,flag=1,haha=1,F;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //
    for(i=0;i<n;i++){
            F=1;
            for(int h=i-1;h>=0;h--){
                if(a[i]==a[h]||F==0)
                {
                    haha=0;break;
                }
                else
                    flag=1;
        for(j=i+1;j<n;j++){
            if(a[i]==a[j])
                {
                    flag--;
                    if(flag==0)
                    printf("%d ",a[i]);
                    F=0;
                }
        }
            }

    }
    if(haha==1)
    printf("Not Found");
    return 0;
}
//Ô­°æ
//int main()
//{
//    int n,tmp,i,j,flag=1,haha=1;
//    scanf("%d",&n);
//    int a[n],b[n];
//    for(int i=0;i<n;i++){
//        scanf("%d",&a[i]);
//    }
//    for(i=0;i<n-1;i++){
//        flag=1;
//        for(j=i+1;j<n;j++){
//            if(a[i]==a[j])
//                {
//                    haha=0;flag--;
//                    if(flag==0)
//                    printf("%d ",a[i]);
//
//                }
//        }
//    }
//    if(haha==1)
//    printf("Not Found");
//    return 0;
//}
