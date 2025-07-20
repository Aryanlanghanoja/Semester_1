#include <stdio.h>

void find_avg_max_min(int arr[], int size, float *avg, int *max, int *min) 
{
    int i;
    *max = arr[0];
    *min = arr[0];
    float sum = 0;
    
    for (i = 0; i < size; i++) 
	{
        sum += arr[i];
        if (arr[i] > *max) 
		{
            *max = arr[i];
        }
        
        if (arr[i] < *min) 
		{
            *min = arr[i];
        }
        
    }
    *avg = sum / size;
}

int main() 
{
    int arr[10], size, max, min;
    float avg;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    printf("Enter %d elements of the array: ", size);
    
    for (int i = 0; i < size; i++) 
	{
        scanf("%d", &arr[i]);
    }
    
    find_avg_max_min(arr, size, &avg, &max, &min);
    
    printf("Average of array elements: %.2f\n", avg);
    printf("Maximum of array elements: %d\n", max);
    printf("Minimum of array elements: %d\n", min);
    
    return 0;

}