# Insertion-Sort
Insertion sort is an algorithm used to sort a collection of elements in ascending or descending order. The basic idea behind the algorithm is to divide the list into two parts: a sorted part and an unsorted part.Insertion sort is a sorting algorithm that places an unsorted element at its suitable place in each iteration.

---

## __Working__
Suppose we need to sort the following array.

<img width="377" alt="Frame 4_0" src="https://user-images.githubusercontent.com/113619312/234354244-3b288643-2f2a-4fcc-b929-15bab3977c9f.png">

1.The first element in the array is assumed to be sorted. Take the second element and store it separately in key.Compare key with the first element. If the first element is greater than key, then key is placed in front of the first element.

<img width="451" alt="Insertion-sort-0_1" src="https://user-images.githubusercontent.com/113619312/234354395-fb62c476-84e1-4867-94c8-9a6a04f14df3.png">

2.Now, the first two elements are sorted.Take the third element and compare it with the elements on the left of it. Placed it just behind the element smaller than it. If there is no element smaller than it, then place it at the beginning of the array.

<img width="451" alt="Insertion-sort-1_1" src="https://user-images.githubusercontent.com/113619312/234354493-1311fc70-050f-460b-9b9d-4a614f715a50.png">

3.Similarly, place every unsorted element at its correct position.

<img width="451" alt="Insertion-sort-2_2" src="https://user-images.githubusercontent.com/113619312/234354697-d5799205-3c99-45ed-9e0f-a7fa4cb84671.png">

<img width="451" alt="Insertion-sort-3_2" src="https://user-images.githubusercontent.com/113619312/234354716-cdae4920-1231-4a64-bec1-fe3ed7c4b3db.png">

---

## __Algorithm__

To sort an array of size N in ascending order: 

- Iterate from arr[1] to arr[N] over the array. 
- Compare the current element (key) to its predecessor. 
- If the key element is smaller than its predecessor, compare it to the elements before. Move the greater elements one position up to make space for the swapped element.

## __Code__
```
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
```

---

## __Output__
![Screenshot 2023-04-24 015641](https://user-images.githubusercontent.com/113619312/234356230-db511d65-8510-4e1b-ad69-4907d1a51d8b.png)

---
