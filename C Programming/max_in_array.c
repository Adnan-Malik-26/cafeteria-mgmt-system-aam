#include <stdio.h>
int main(){
    int arr[]={10,20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0];
    int max_index = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i]>max)
        {
            max =arr[i];
            max_index=i;
        }
        
    }
    printf("The maximum element is %d, located at index %d.\n",max,max_index);
    return 0;
}