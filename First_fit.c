//Program for First Fit Algorithm
#include<stdio.h> 
int firstFit(int blockSize[], int m, 
			int processSize[], int n) 
{ 
	int i,j;
	int allocation[n];  
	memset(allocation, -1, sizeof(allocation)); 
	for (i = 0; i < n; i++) 
	{ 
		for (j = 0; j < m; j++) 
		{ 
			if (blockSize[j] >= processSize[i]) 
			{
				allocation[i] = j; 
				blockSize[j] -= processSize[i]; 

				break; 
			} 
		} 
	} 

	printf("\nProcess No.\tProcess Size\tBlock no.\n"); 
	for (i = 0; i < n; i++) 
	{ 
		printf(" %d\t\t%d\t\t",i+1,processSize[i]);
		if (allocation[i] != -1) 
			printf("%d\n",allocation[i] + 1); 
		else
			printf("Not Allocated\n"); 
	} 
} 
int main() 
{ 
 	int n,m;
 	printf("Enter Block Size: ");
 	scanf("%d",&m);
 	printf("Enter Process Size: ");
 	scanf("%d",&n);
 	int blockSize[m],processSize[n],i;
	printf("Enter Block Partiations:\n");
	for(i=0;i<m;i++)
	scanf("%d",&blockSize[i]);
	printf("Enter Process Partiations:\n");
	for(i=0;i<n;i++)
	scanf("%d",&processSize[i]);

	firstFit(blockSize, m, processSize, n); 
	return 0 ; 
} 

