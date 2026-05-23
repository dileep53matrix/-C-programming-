#include <stdio.h>
int main()
{

    int n, i, key, low, high, mid, found = 0;
    printf("Enter number of books:");
    scanf("%d", &n);
    int books[n];
    printf("Enter %d book IDs in assending order\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &books[i]);
    printf("enter book Id to search:");
    scanf("%d", &key);
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (books[mid] == key)
        {
            found = 1;
            break;
        }
        else if (books[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    if (found)
        printf("Book is available\n");
    else
        printf("Books is not available");
    return 0;
}
