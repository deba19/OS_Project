#include<stdio.h> 
int firstFit(int blockSize[], int m, 
			int processSize[], int n) 
{ 
	int i,j;
	int allocation[n];  
	//memset(allocation, -1, sizeof(allocation)); 
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

int bestFit(int blockSize[], int m, int processSize[], int n) 
{ 
    int allocation1[n],i,j;  
    for (i=0; i<n; i++) 
    { 
        int bestIdx = -1; 
        for ( j=0; j<m; j++) 
        { 
            if (blockSize[j] >= processSize[i]) 
            { 
                if (bestIdx == -1) 
                    bestIdx = j; 
                else if (blockSize[bestIdx] > blockSize[j]) 
                    bestIdx = j; 
            } 
        } 
        if (bestIdx != -1) 
        { 
            allocation1[i] = bestIdx;  
            blockSize[bestIdx] -= processSize[i]; 
        } 
    } 
  
    printf("\nProcess No.\tProcess Size\tBlock no.\n"); 
    for ( i = 0; i < n; i++) 
    { 
        printf("   %d\t\t%d\t\t",i+1,processSize[i]); 
        if (allocation1[i] != -1) 
            printf("%d\n",allocation1[i] + 1); 
        else
            printf("Not Allocated\n");  
    } 
} 

int worstFit(int blockSize[], int m, int processSize[],  
                                                 int n) 
{ 
    int allocation[n],i,j; 
    for (i=0; i<n; i++) 
    { 
        int wstIdx = -1; 
        for (j=0; j<m; j++) 
        { 
            if (blockSize[j] >= processSize[i]) 
            { 
                if (wstIdx == -1) 
                    wstIdx = j; 
                else if (blockSize[wstIdx] < blockSize[j]) 
                    wstIdx = j; 
            } 
        } 
        if (wstIdx != -1) 
        { 
            allocation[i] = wstIdx;  
            blockSize[wstIdx] -= processSize[i]; 
        } 
    } 
  
    printf("\nProcess No.\tProcess Size\tBlock no.\n"); 
    for (i = 0; i < n; i++) 
    { 
        printf("   %d\t\t%d\t\t",i+1,processSize[i]); 
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
	system("cls");
	printf("1.FirstFit\n2.BestFit\n3.WorstFit\n\n");
	int choice;
	printf("Enter which algo you want choose\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			firstFit(blockSize, m, processSize, n);
			break;
		case 2:	 
			bestFit(blockSize, m, processSize, n);
			break;
		case 3:
			worstFit(blockSize, m, processSize, n);
			break;
		default:
			printf("Wrong Choice");
	}

	return 0 ; 
} 
