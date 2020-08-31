#include <stdio.h>

int main()
{
	int num;
	int a[100];
	scanf("%d", &num); 
	for(int i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	} 
	
	for(int j=0; j<num; j++)
	{
		
		if(a[j]>0 && a[j]<13)
			{
				int seat = 13-a[j];
				printf("%d",seat);
			}
			else if(a[j]>=13 && a[j]<25)
			{
				int seat = 37-a[j];
				printf("%d ",seat);
			}
			else if(a[j]>=25 && a[j]<37)
			{
				int seat = 61-a[j];
				printf("%d ",seat);
			}
			else if(a[j]>=37 && a[j]<49)
			{
				int seat = 85-a[j];
				printf("%d ",seat);
			}
			else if(a[j]>=49 && a[j]<61)
			{
				int seat = 109-a[j];
				printf("%d ",seat);
			}
			else if(a[j]>=61 && a[j]<73)
			{
				int seat = 133-a[j];
				printf("%d ",seat);
			}
			else if(a[j]>=73 && a[j]<85)
			{
				int seat = 157-a[j];
				printf("%d ",seat);
			}
			else if(a[j]>=85 && a[j]<97)
			{
				int seat = 181-a[j];
				printf("%d ",seat);
			}		
			else
			{		
				int seat = 205-a[j];
				printf("%d ",seat);
			}
		
		
		
			if(a[j]%12 == 1 || a[j]%12 ==6 || a[j]%12==7 || a[j]%12==0)
			{
				printf("WS");
			}
			else if(a[j]%12 ==2  || a[j]%12 ==5 || a[j]%12 ==8 || a[j]%12 ==11)
			{
				printf("MS");
			}
			else
			{
				printf("AS");
			}
			
		printf("\n");
	}
}






