#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int InsertionSort(int a[], int array_size)
{
	int i,j,small;
	for(i=1;i<array_size;i++)
	{
		small=a[i];
		for(j=i-1;j>=0 && small<a[j];j--)
		{
				a[j+1]=a[j];
		
		}
		a[j+1]=small;
	}
	 printf("\nSorted Data :");
    for (i = 0; i < array_size; i++) {
        printf("\t%d", a[i]);
}
}
int main()
{
  int ret,element;
  int arr[5]={32,5,7,3,72};
  InsertionSort(arr,5);
  if(ret==-1)
  {
   printf("Element not found!");
  }
  
}

