//i)Write a program to remove duplicate values from an array and returns an array of unique values. int[] removeDuplicates(int[]values)

#include <stdio.h>  
#include <conio.h>  
int main ()  
{  
       
    int size; 
      int l;
      int arr[5];
     int removeDuplicate(int[]);
     l=removeDuplicate(arr);
      return(0);
      
}
int removeDuplicate(int arr[])
{
int i,j,k;
int size;

 printf (" Define the number of elements in an array: ");  
    scanf (" %d", &size);  
     // int arr[size];
    printf (" \n Enter %d elements of an array: \n ", size);  
     
    for ( i = 0; i < size; i++)  
    {  
        scanf (" %d", &arr[i]);  
    }  
    printf("before deletion and sorting elements are\n");
    for(i=0;i<size;i++)
{
    printf("%d\t",arr[i]);
}
      printf("\nAfter deletion Elements of array are \n");
     
    for ( i = 0; i < size; i ++)  
    {  
        for ( j = i + 1; j < size; j++)  
        {  
              
            if ( arr[i] == arr[j])  
            {  
                 
                for ( k = j; k < size - 1; k++)  
                {  
                    arr[k] = arr [k + 1];  
                }    
                size--;    
                j--;      
            }  
        }  
    }   
    int temp[size], m;
    for(i=0;i<size;i++)
    {
        m=i+1;
        while(m<size)
        {
            if(arr[i]>arr[m])
            {
                temp[i]=arr[i];
                arr[i]=arr[m];
                arr[m]=temp[i];
            }
            m++;
        }
    }

    for(i=0;i<size;i++)
    {
        printf (" %d\t", arr[i]);  
    }  
    return size;  
}  