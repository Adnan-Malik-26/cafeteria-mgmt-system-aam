#include <stdio.h>
int main(){
    int i, n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    scanf("Enter the elements of array: ");
    }

    int max = arr[0];
    int max_index=0;
    for (i =1; i<n; i++)
    {
        if (arr[i]>max)
        {
            max= arr[i];
            max_index = i;
 
        }
        
    }
    printf("The Largest of element is %d and its index is %d",max,max_index);
    
    return 0;
}