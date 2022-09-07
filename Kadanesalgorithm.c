#include <stdio.h>
#include <limits.h>

int max(int a, int b)
{
    if(a < b)return b;
    return a;
}

int main() {
    int n, a[100], i;
    int local_max = 0;
    int global_max = INT_MIN;
    printf("Enter the number of elements in an array : ");
    scanf("%d",&n);
    printf("Enter elements in array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        local_max = max(a[i], a[i]+local_max);
        if(local_max > global_max )
        {
            global_max = local_max;
        }
    }
    printf("The maximum subarray sum is : %d",global_max);
    printf("The time complexity by Kadanes alogorith by DP is : O(n)");
    return 0;
}
