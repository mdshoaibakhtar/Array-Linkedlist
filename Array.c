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
}*/

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

int main()
{
    int arr[100], size, data, index;
    printf("Enter size Of THe Array, You Want To Create\n");
    scanf("%d", &size);
    Enterdata(arr, size);
    printf("Creation Successfully...............\n");
    TraversalOfArray(arr, size);

    printf("\n");
    Insertion(arr, size, index, data);
    size += 1;
    TraversalOfArray(arr, size);

    return 0;
}
