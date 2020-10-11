#include <stdio.h>

int main()
{	
	int n,i,j;
	printf("请输入桥的个数：");
	scanf("%d",&n) ;
	int bridges[n][3];
	printf("请输入桥的数据："); 
	for(i=0;i<n;i++)
	{
		for(j=0;j<3;j++)
		{
			
			scanf("%d",&bridges[i][j]);
			
			
		}
	} 
	printf("打印表咯\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",bridges[i][j]);
		}
		printf("\n");
	} 
	int sum=0;
	int a; 
	for(i=0;i<n;i++) 
	{
		a=bridges[i][2]-bridges[i][1]+2*bridges[i][0]-1;
		sum=sum+a;
	}
	printf("%d",sum);
	//排h的序
	int min1,min2; 
	if(bridges[0][0]>=bridges[1][0]&&bridges[0][0]>=bridges[2][0])
		{
			min1=bridges[1][0];
			min2=bridges[2][0];
		} 
	else  if(bridges[1][0]>=bridges[0][0]&&bridges[1][0]>=bridges[2][0])
		{
			min1=bridges[0][0];
			min2=bridges[2][0];
		} 
	else
		{
			min1=bridges[0][0];
			min2=bridges[1][0];
		}
	int outcome;
	outcome=sum-(min1+min2);
	printf("吉吉所需的最少材料是：%d",outcome) ;
		
		
	
	
	return 0;
}
