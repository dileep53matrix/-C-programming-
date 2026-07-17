#include <stdio.h>

int main() {
    int i, n, key,low, mid, high, found = 0;
    printf("Enter number of books");
    scanf("%d", &n);
    int books[i];
    printf("enter %d books id in asscending order\n", n);
    for(i=0;i<n;i++)
    scanf("%d",&books[i]);
    printf("enter the book ID to search");
    scanf("%d", &key);
    low = 0;
    high = n-1;
    while(low<=high)
    {
        mid = (low+high)/2;
        if(books[mid]==key)
        {
            found = 1;
            break;
        }
        else if(books[mid]<key)
        low = mid+1;
        else
        high = mid -1;
    }
    if(found)
    printf("Available");
    else
    printf("Not Available");

    return 0;
}