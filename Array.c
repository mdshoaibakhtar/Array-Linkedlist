/*
#include <stdio.h>
//Enter Data From Here
void Enterdata(int arr[],int size)
{
    printf("Enter The Data You Want To Insert In The Array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
}
//Code For Traversal
void TraversalOfArray(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    
}

int main()
{
    int arr[100],size,data;
    printf("Enter size Of THe Array, You Want To Create\n");
    scanf("%d",&size);
    Enterdata(arr,size);
    printf("Creation Successfully...............\n");
    TraversalOfArray(arr,size);
    return 0;
}

#include <stdio.h>
//Enter Data From Here
void Enterdata(int arr[], int size)
{
    printf("Enter The Data You Want To Insert In The Array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}
//Code For Traversal
void TraversalOfArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
//Code For Insertion
void Insertion(int arr[], int size, int index, int data)
{
    printf("Enter The Data You Want To Insert\n");
    scanf("%d", &data);
    printf("Enter The Index Where You Want To Enter\n");
    scanf("%d", &index);
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index]=data;
}

void deletion(int arr[],int size,int index)
{
    printf("Enter The Index Which you Want To Delete\n");
    scanf("%d", &index);
    for (int i = index; i < size-1; i++)
    {
        arr[i] = arr[i+1];
    }
    
}

int main()
{
    int arr[100], size, data, index;
    printf("Enter size Of THe Array, You Want To Create\n");
    scanf("%d", &size);
    Enterdata(arr, size);
    printf("Creation Successfully...............\n");
    TraversalOfArray(arr, size);

    // printf("\n");
    // Insertion(arr, size, index, data);
    // size += 1;
    // TraversalOfArray(arr, size);

    printf("\n");
    deletion(arr, size, index);
    size -= 1;
    TraversalOfArray(arr, size);

    return 0;
}
*/

#include <stdio.h>

void arraytraversal(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
//Iterative Method To Reverse The Array
int arrayreverse(int arr[], int start , int end)
{
    int temp;
    while (start < end)
    {
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
int reverse_rec(int arr[],int min[],int max)
{
    min=max=arr[0];
    if (min[])
    {
        /* code */
    }
    

}
int main()
{
    int arr[] = {10, 20, 30,40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    arraytraversal(arr,size);
    arrayreverse(arr,0,size-1);
    arraytraversal(arr,size);
}