#include<iostream>
#include<vector>
using namespace std;
int binary(vector<int>& arr,int x)
{
    int low=0;
    int high=arr.size();
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        
        if(arr[mid]==x)
        {
            return mid;
        }
        else if(arr[mid]>=x)
        {
            low=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr={2,5,8,12,16,23,38,56,72,91};
    int x=23;
    int result=binary(arr,x);
    if(result==-1)
    {
        cout<<"index not found"<<endl;
    }
    else
    {
        cout<<"element found at index:"<<result<<endl;
    }
    return 0;
}
/*---------------OUTPUT-------------------------
TEST CASE 1: element found at index:5 */
