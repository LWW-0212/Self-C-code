
#include <stdio.h>
//int main()
//{
//	int n,i,j,cnt2=1,t=1,max=0;//nΪ�������ֵ�������i��j��ѭ��ʹ�ã�t���ڼ�ÿ�������ȴﵽ2���Ⱥ�˳��
//	printf("���������ֵĸ���");
//	scanf("%d",&n);
//	int arr[n],brr[100][2];
//	for(i=0;i<n;i++)//�������ֲ���¼���������Ǽ�
//	{
//		scanf("%d",&arr[i]);
//		if(arr[i]>max)
//		{
//			max=arr[i];
//		}
//	}
//	for(i=0;i<100;i++)//���ڶ�������Ԫ�س�ʼ��Ϊ0��
//	{
//		brr[i][0]=0;
//		brr[i][1]=0;
//	}
//	for(i=0;i<n;i++)
//	{
//		brr[arr[i]][0]++;
//		if(brr[arr[i]][0]==2)//���������ֵĴ������õ���2�����������һ����ţ�������ż�һ�����������浽��2����Ŷ�������
//		{
//			brr[arr[i]][1]=cnt2;
//			cnt2++;
//		}
//	}
//	for(i=0;i<=max;i++)
//	{
//		for(j=0;j<=max;j++)
//		{
//			if(brr[j][1]==t)//����ѭ������Ŵ�һ��ʼ�������ֵ�������õ���һʱ����������������ż�һ����ʼ��2
//			{
//				printf("%d�Ĵ�����%d\n",j,brr[j][0]);
//				t++;
//			}
//		}
//	}
//
//
//
//	return 0;
// }


// int main()
//{
//    int n,tmp,i,j,flag=1,FLAG=1;
//    scanf("%d",&n);
//    int a[n],b[n];
//    for(int i=0;i<n;i++){
//        scanf("%d",&a[i]);
//    }
//
//    for(i=0;i<n;i++){
//            flag=1;
//        for(j=i+1;j<n;j++){     //����ѭ����Ŀ��
//            if((a[i]==a[j])&&(a[i]>0))
//                {
//                    FLAG=0;
//                    flag--;
//                    if(flag==0){
//                        printf("%d ",a[i]);
//                        a[j]=-1;
//                    }
//                    else a[j]=-1;
//
//                }
//
//        }
//    }
//    if(FLAG==1)
//    printf("Not Found");
//    return 0;
//}
int main()
{
    int n,m,flag=1;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&m);
    int b[m];
    for(int i=0;i<n;i++) scanf("%d",&b[i]);
    int c[n+m]={0};
    for(int i=0;i<n;i++)
    {
        flag=1;
        for(int j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                flag=0;
            }
        }
        if(flag==1)
            {
                c[num]=a[i];
                num++;
            }
    }

    for(int i=0;i<m;i++)
    {
        flag=1;
        for(int j=0;j<n;j++)
        {
            if(b[i]==a[j])
            {
                flag=0;
            }
        }
        if(flag==1)
        {
            c[num]=b[i];
                num++;
        }

    }
    for(int i=0;i<)
    return 0;
}
