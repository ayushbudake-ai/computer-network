#include<stdio.h>
int main()
{
int n;

//size of dataword
printf("Enter the size of dataword:\n");
scanf("%d",&n);

int parity[n+1];
int sum=0;


//taking the datawords element

for (int i=0;i<n;i++)
{
	printf("Enter the  dataword:\n");

	scanf("%d",&parity[i]);

}

	
	
//adding the array elements
for (int i=0;i<n;i++)
{
	sum=sum+parity[i];	
}

//sum of that array 
	if (sum%2!=0)
	{
		parity[n]=1;
	}
	else
	{
		parity[n]=0;
	}

//printing the parity codeword
for (int i=0;i<n+1;i++)
{
	printf("%d",parity[i]);

}

}
