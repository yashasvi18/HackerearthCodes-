#include <stdio.h>

int main()
{
	int num;
	int cost_a;
	int cost_b;
	int participants;
	int a;
	int b;
	scanf("%d", &num);
    for(int i=0;i<num;i++)
    {
		int sum =0;		
	    scanf("%d",&cost_a);
	    scanf("%d",&cost_b);
		int min;
		scanf("%d",&participants);
		int ca=0;
		int cb=0;
		while(participants>0)
		{	
			
				scanf("%d",&a);
				scanf("%d",&b);
				participants-- ;
				ca += a;
				cb += b;
		}
		if(ca > cb && cost_a <= cost_b)
		{
		    sum = ca * cost_a + cb* cost_b; 
        }
        else if ( ca > cb && cost_b < cost_a) 
		{
			sum = ca * cost_b + cb* cost_b;
		}
		else if(cb > ca && cost_a < cost_b)
		{
			sum = cb * cost_a +ca *cost_b;
        }    
		else if( cb > ca && cost_b < cost_a)
		{
					sum = cb * cost_b + ca* cost_a;
		}
		else{
			sum = ca * cost_a + cb * cost_b;
		}
		
		printf("%d \n",sum);
	}
	
}	
		
#include <stdio.h>

int main()
{
	int num;
	int cost_a;
	int cost_b;
	int participants;
	int a;
	int b;
	scanf("%d", &num);
    for(int i=0;i<num;i++)
    {
		int sum =0;		
	    scanf("%d",&cost_a);
	    scanf("%d",&cost_b);
		int min;
		scanf("%d",&participants);
		int ca=0;
		int cb=0;
		while(participants>0)
		{	
			
				scanf("%d",&a);
				scanf("%d",&b);
				participants-- ;
				ca += a;
				cb += b;
		}
		if(ca > cb && cost_a <= cost_b)
		{
		    sum = ca * cost_a + cb* cost_b; 
        }
        else if ( ca > cb && cost_b < cost_a) 
		{
			sum = ca * cost_b + cb* cost_b;
		}
		else if(cb > ca && cost_a < cost_b)
		{
			sum = cb * cost_a +ca *cost_b;
        }    
		else if( cb > ca && cost_b < cost_a)
		{
					sum = cb * cost_b + ca* cost_a;
		}
		else{
			sum = ca * cost_a + cb * cost_b;
		}
		
		printf("%d \n",sum);
	}
	
}	
		
#include <stdio.h>

int main()
{
	int num;
	int cost_a;
	int cost_b;
	int participants;
	int a;
	int b;
	scanf("%d", &num);
    for(int i=0;i<num;i++)
    {
		int sum =0;		
	    scanf("%d",&cost_a);
	    scanf("%d",&cost_b);
		int min;
		scanf("%d",&participants);
		int ca=0;
		int cb=0;
		while(participants>0)
		{	
			
				scanf("%d",&a);
				scanf("%d",&b);
				participants-- ;
				ca += a;
				cb += b;
		}
		if(ca > cb && cost_a <= cost_b)
		{
		    sum = ca * cost_a + cb* cost_b; 
        }
        else if ( ca > cb && cost_b < cost_a) 
		{
			sum = ca * cost_b + cb* cost_b;
		}
		else if(cb > ca && cost_a < cost_b)
		{
			sum = cb * cost_a +ca *cost_b;
        }    
		else if( cb > ca && cost_b < cost_a)
		{
					sum = cb * cost_b + ca* cost_a;
		}
		else{
			sum = ca * cost_a + cb * cost_b;
		}
		
		printf("%d \n",sum);
	}
	
}	
		
#include <stdio.h>

int main()
{
	int num;
	int cost_a;
	int cost_b;
	int participants;
	int a;
	int b;
	scanf("%d", &num);
    for(int i=0;i<num;i++)
    {
		int sum =0;		
	    scanf("%d",&cost_a);
	    scanf("%d",&cost_b);
		int min;
		scanf("%d",&participants);
		int ca=0;
		int cb=0;
		while(participants>0)
		{	
			
				scanf("%d",&a);
				scanf("%d",&b);
				participants-- ;
				ca += a;
				cb += b;
		}
		if(ca > cb && cost_a <= cost_b)
		{
		    sum = ca * cost_a + cb* cost_b; 
        }
        else if ( ca > cb && cost_b < cost_a) 
		{
			sum = ca * cost_b + cb* cost_b;
		}
		else if(cb > ca && cost_a < cost_b)
		{
			sum = cb * cost_a +ca *cost_b;
        }    
		else if( cb > ca && cost_b < cost_a)
		{
					sum = cb * cost_b + ca* cost_a;
		}
		else{
			sum = ca * cost_a + cb * cost_b;
		}
		
		printf("%d \n",sum);
	}
	
}	
		
