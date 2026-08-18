#include<stdio.h>
int main()
{
int n;//size of dataword
printf("Enter the size of dataword:\n");
scanf("%d",&n);

int code1[n];
int code2[n];
int dmin=0;

printf("Enter the  codeword:\n");
for (int i=0;i<n;i++)
{
	printf("Enter the  1st codeword:\n");

	scanf("%d",&code1[i]);

}

for (int i=0;i<n;i++)
{
	printf("Enter the  2nd codeword:\n");

	scanf("%d",&code1[i]);

}
	
	

for (int i=0;i<n;i++)
{
	if (code1[i]!=code2[i])
	{
	dmin++;
	}
}
if (dmin!=0)
{
printf("The Hamming distance is:%d",dmin);
}
else
{
printf("No Hamming Distance");
}
}
