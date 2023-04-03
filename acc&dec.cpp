#include<stdio.h>
#include<string.h>
int main()
{
 	char str[100][100],s[100];
 	int i,n,j,c;
 	printf("enter number of names: ");
 	scanf("%d",&n);
 	printf("enter names: \n");
 	for(i=0;i<n;i++)
 	{
 		scanf("%s",str[i]);
	}
	printf("\n1.ascending order\n2.descending order\n\nEnter your choice : ");
	scanf("%d",&c);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(str[i],str[j])>0)
			{
				strcpy(s,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],s);
			}
	    }
    }
    if(c==1)
    {
    	printf("\nOrdered names: \n");
    	for(i=0;i<n;i++)
    	{
    		printf("%s\n",str[i]);
		}
	}
	else if(c==2)
	{
		printf("\Ordered names:\n");
		for(i=n-1;i>=0;i--)
		{
			printf("%s\n",str[i]);
		}
    }
}