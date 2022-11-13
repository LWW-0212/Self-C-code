#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//   int n,i,j,cot=0,co=0;
//   scanf("%d",&n);
//   int a[n][n];
//   for(i=0;i<n;i++)
//   for(j=0;j<n;j++)
//    scanf("%d",&a[i][j]);
//    int min=a[0][0];
//   for(i=0;i<n;i++){
//    for(j=0;j<n;j++){
//        if((i+j==n-1)||(i==j)){
//            if(min>a[i][j]){
//                min=a[i][j];
//            }
//        }
//        else
//            cot+=a[i][j];
//    }
//   }
//   for(i=0;i<n;i++){
//    for(j=0;j<n;j++){
//        if((i+j==n-1)||(i==j))
//            cot+=a[i][j]-min;
//    }
//   }
//    printf("%d",cot*2);
//
//    return 0;
//}
//int main()
//{
//    int n,p;
//
//    scanf("%d%d",&n,&p);
//    int a[n];
//    for(int i=0;i<n;i++){
//        scanf("%d",&a[i]);
//    }
//    int p1=p,n1=n;
//    for(int i=1;i<=p1+1;i++){
//        int tmp=a[p];
//        a[p]=a[n-1];
//        a[n-1]=tmp;
//        p--;
//        n--;
//    }
//    for(int i=0;i<n1;i++){
//        printf("%d ",a[i]);
//    }
//    return 0;
//}

//int main()
//{
//    int n,m,p,t;
//    scanf("%d%d",&n,&p);
//    int a[n];
//    int b[n+p+1];
//    for(int i=0;i<n;i++){
//        scanf("%d",&t);
//        a[i]=t;
//        b[i]=t;
//    }
//    for(int i=0;i<=p;i++){
//        b[n+i]=b[i];
//
//    }
//    for(int i=0;i<n;i++)
//        a[i]=b[p+i+1];
//    for(int i=0;i<n;i++)
//    {
//        printf("%d ",a[i]);
//    }
//    return 0;
//}
//int main()
//{
//    int n=0;
//    scanf("%d",&n);
//    int a[n];
//    for(int i=0;i<n;i++)
//        scanf("%d",&a[i]);
//
//    int left=0,ri=n-1;
//    while(left<ri)
//    {
//        int tmp=a[left];
//        a[left]=a[ri];
//        a[ri]=tmp;
//        left++;
//        ri--;
//    }
//    for(int i=0;i<n;i++)
//    printf("%d ",a[i]);
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    char a[1000];
//    int b[9]={0};
//    int i=0;
//    fgets(a,1000,stdin);
//    while(a[i]!="\0")
//    {
//        if(a[i]==0) b[0]++;
//        else if(a[i]=='1') b[1]++;
//        else if(a[i]=='2') b[2]++;
//        else if(a[i]=='3') b[3]++;
//        else if(a[i]=='4') b[4]++;
//        else if(a[i]=='5') b[5]++;
//        else if(a[i]=='6') b[6]++;
//        else if(a[i]=='7') b[7]++;
//        else if(a[i]=='8') b[8]++;
//        else if(a[i]=='9') b[9]++;
//        i++;
//
//    }
//    for(i=0;i<10;i++)
//    {
//        if(b[i]!=0)
//        printf("%d:%d\n",i,b[i]);
//    }
//
//    return 0;
//}
//void main()
//
//{
//    int num[10]={0},i;
//    char c;
//    while((c=getchar())!='\n')
//    {
//        if(c<'0'||c>'9') continue;
//        num[c-48]++;
//    }
//    for(i=0;i<10;i++){
//        if(num[i]!=0)
//            printf("%d:%d\n",i,num[i]);
//    }
//}
int main()
{
    char a[1000];

    int cot=0,i=0;
    fgets(a,1000,stdin);
    while(a[i]!='s'&&a[i+1]!='t'&&a[i+2]!='o'&&a[i+3]!='p')
    {
        if((a[i]==' '||a[i]=='\n')&&(a[i]!=' '||a[i]!='\n'))
            cot++;
        i++;
    }

        printf("%d",cot);
    return 0;
}
