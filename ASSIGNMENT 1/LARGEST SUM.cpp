#include<iostream>
#include<climits>
using namespace std;
int subarraysum(int A[], int n)
{
    int s=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=1;j<n;j++)
        {
            if(i+j>n)
            {
                break;
            }
            sum=sum+A[i+j-1];
            if(sum>s)
            {
                s=sum;
            }
        }
    }
    return s;
}
int main()
{
    int arr[]={-2, -5, 6, -2, -3, 1, 5, -6};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<"largest sum in subarray is:"<<subarraysum(arr,n);
    return 0;
}
/*-------------------OUTPUT---------------------------
largest sum in subarray is:7

=== Code Execution Successful ===*/

