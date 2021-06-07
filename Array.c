#include <stdio.h>
int main()
{
    int size,element,arr[100];
    printf("Enter The size Of The Array You Want:");
    scanf("%d", &size);
    printf("Enter The Element In The Array You Want:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d In The %dth Index\n",arr[i],i);
    }
    return 0;
}
