#include <stdio.h>
// Driver code
int main(){
	char a[100];
	scanf("%s",a);
	int cz=0;
	int co=0;            			
	for(int i =0;i< strlen(a);i++)
	{
		if(a[i] == 'z' || a[i] == 'Z')
		{
			cz =cz+1;
		}
		if (a[i]=='o' || a[i] == 'O')
		{
			co = co + 1;
		}
	}
	if(2*cz == co)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}

	 
}
