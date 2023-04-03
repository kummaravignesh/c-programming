#include <stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],i,j,n,m,k;
	printf("enter the number of rows=");
	scanf("%d",&n);
	printf("enter the number of columns= ");
	scanf("%d",& m);
	if (n>=1){
	if (m>=1){
	printf("\nENTER VALUES FOR MATRIX A:\n");
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d",&a[i][j]);
	printf("\n values in secound matrix;\n");
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d",&b[i][j]);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			c[i][j]=0;
			for(k=0;k<m;k++){
				c[i][j]+=a[i][k]*b[k][j];}}}
	printf("\nTHE VALUES OF MATRIX C ARE:\n");
	for(i=0;i<n;i++)
        {
		for(j=0;j<m;j++)
			printf("%5d",c[i][j]);
		printf("\n");
	}}else{
		printf("invalid input");
	}}
	else{	
	printf("\ninvaild input");}
}