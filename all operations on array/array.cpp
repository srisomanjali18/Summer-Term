/*
Sorting an array

#include<iostream>
using namespace std;
    bool sort(int arr[], int n)
    {
        for(int i=0; i<n; i++)
        for(int j= i+1; j<n; j++)
        if(arr[j] < arr[i])
        return false;
        return true;
    }
int main()
{
    int arr[] = {5,2,7,6,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    if(sort(arr,n))
    cout<<"Yes";
    else
    cout<<"No";
    return 0;
}
*/

/*
reversing an array 

#include<iostream>
using namespace std;
void reverse(int arr[], int n)
{
    int low=0, hight=n-1;
    while(low<hight)
    {
        int temp = arr[low];
        arr[low] = arr[hight];
        arr[hight] = temp;
        low++;
        hight--;
        }
}

int main()
{
    int arr[] = {5,8,6,2,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    reverse(arr,n);
    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
    return 0;
    }
*/

/*
  remove duplicate elemnts in array  

#include<iostream>
using namespace std;
int remDup(int arr[], int n)
{
    int temp [n];
    temp[0]=arr[0];
    int res=1;
    for(int i=0;i<n; i++)
    {
        if(temp[res-1]!= arr[i])
        {
            temp[res] =arr[i];
            res++;
        }
    }
    for(int i=0;i<res;i++)
    arr[i] = temp[i];
    return res;
}

int main()
{
    int arr[] = {5,4,4,2,2,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    n = remDup(arr,n);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}
*/

/*
moving zeros to the end

#include<iostream>
using namespace std;
void moveZero(int arr[], int n)
{
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] != 0)
        {
            swap(arr[i], arr[count]);
            count++;
        }
    }
}

int main()
{
    int arr[] = {5,0,4,0,2,0,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    moveZero(arr,n);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}
*/

/*
left rotate array by one

#include<iostream>
using namespace std;
 void lr(int arr[] , int n)
 {
    int temp = arr[0];
    for(int i=1; i<n; i++)
    arr[i-1]=arr[i];
    arr[n-1]=temp;
 }
 int main()
 {
    int arr[] = {1,2,3,4,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    lr(arr,n);
    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
    return 0;
 }
 */

/* 
left rotate array by d

#include<iostream>
using namespace std;
void lr(int arr[], int n)
{
    int temp=arr[0];
    for(int i=1;i<n;i++)
    arr[i-1]=arr[i];
    arr[n-1]=temp;
}
void lr(int arr[], int n, int d)
{
    for(int i=0;i<d;i++)
lr(arr,n);
}
int main()
{
    int arr[] = {1,2,3,4,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    int d=2;
    lr(arr,n,d);
    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
    return 0;
}
*/

/*
leaders in array

 #include<iostream>
 using namespace std;
 void leader(int arr[], int n)
 {
    int curr_lea = arr[n-1];
    cout<<curr_lea<<" ";
    for(int i= n-2; i>=0; i--)
    {
        if(curr_lea <arr[i])
        {
            curr_lea =arr[i];
            cout<<curr_lea<<" ";
        }
    }
 }

 int main()
 {
    int arr[] = {7,10,4,10,6,5,2};
    int n= sizeof(arr)/sizeof(arr[0]);
    leader(arr,n);
    return 0;
 }
 */

/*
 maximum value of arr[j] - arr[i]

#include<iostream>
using namespace std;
int maxdiff(int arr[], int n)
{
int res = arr[1]-arr[0];
for(int i=0;i<n-1;i++)
{
    for(int j=i+1;j<n;j++)
    {
        res = max(res,arr[j]-arr[i]);
    }
}
return res;
}
int main()
{
    int arr[] = {1,5,6,2,4,7};
    int n= sizeof(arr)/sizeof(arr[0]);

    cout<<maxdiff(arr,n);
     return 0;
}
*/

/*
Frequencies of elements

#include<iostream>
using namespace std;
void printfreq(int arr[], int n)
{
    int freq =1 ,i =1;
    while(i<n)
    {
        while(i<n && arr[i] ==arr[i-1])
        {
            freq++;
            i++;
        }
        
    cout<<arr[i-1] <<" "<<freq<<" ";
    i++;
    freq = 1;
    }
    if(n==1 || arr[n-1] != arr[n-2])
    cout<<arr[n-1]<<" "<<1;

}
int main()
{
    int arr[] = {30,30,30,10,10,20};
    int n = sizeof(arr) / sizeof(arr[0]);
    printfreq(arr,n);

}
*/
 
/*
stock buy and sell problem

#include<iostream>
using namespace std;
int maxpro(int price[],int n)
{
    int profit =0;
    for(int i=1; i<n; i++)
    if(price[i] >price[i-1])
    profit += (price[i] - price[i-1]);
    return profit;
    }
int main()
{
    int price[] = {1,5,3,8,12};
    int n = sizeof(price)/sizeof(price[0]);
    cout<<maxpro(price,n);
    return 0;
}
*/

/*
maximum consecutive 1s

#include<iostream>
using namespace std;
 int maxone(bool arr[] , int n)
 {
        
int res =0, curr =0;
for(int i=0;i<n;i++)
{
    if(arr[i] == 0)
    curr = 0;
    else
    {
        curr++;
        res = max(res,curr);
    }
 }
return res;
}
int main()
{
    bool arr[] = {0,1,1,1,0,1,0,1,1,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<maxone(arr,n);
    return 0;
}
*/

/*
maximum sum subarray 

#include<iostream>
using namespace std;
int maxsum(int arr[], int sum)
{
    int res = arr[0];
    int maxending = arr[0];
    for(int i=1;i<sum;i++)
    {
        maxending = max(maxending+arr[i],arr[i]);
        res = max(res,maxending);
    }
    return res;
}
int main()
{
    int arr[] = {1,-2,3,-1,2};
    int sum = sizeof(arr)/sizeof(arr[0]);
    cout<<maxsum(arr,sum);
    return 0;
}
*/

/*
maximum length even odd subarray

#include<iostream>
using namespace std;
int maxEvenOdd(int arr[] , int n)
{
    int res =1,curr=1,i;
    for(i=1;i<n;i++)
    {
        if((arr[i] %2 == 0&& arr[i-1] %2 !=0) || (arr[i] %2 != 0 && arr[i-1] == 0))
        {
            curr++;
            res = max(res,curr);
        }
        else curr=1;
    }
    return res;
}

int main()
{
    int arr[] = {5,10,20,6,3,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<maxEvenOdd(arr,n);
    return 0;
}
*/

/*
maximum circular subarray sum

#include<iostream>
using namespace std;


int maxSubarraySumCircular(int arr[],int n) {
    int res = arr[0];
    for(int i=0;i<n;i++)
    {
        int curr_max = arr[i];
        int curr_sum = arr[i];
        for(int j=1;j<n;j++)
        {
            int index = (i+j)%n;
            curr_sum += arr[index];
            curr_max = max(curr_max,curr_sum);
        }
        res = max(res,curr_max);
    }
    return res;
} 

int main()
{
    int arr[] = {-8,4,-3,5,-4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<maxSubarraySumCircular(arr,n);
    return 0;
}
*/

/*
subarray with given sum

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool issubarray(int arr[],int sum, int n)
{
    for(int i=0; i<n;i++)
    {
        int curr = 0;
        for(int j=i;j<n;j++)
        {
            curr += arr[j];
            if(curr == sum)
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[] = {5,8,6,13,3,-1};
    int sum = 1;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<issubarray(arr,sum,n);

    return 0;
}
*/

/*
getting sum of prefix elements

#include<iostream>
using namespace std;
int gersum(int arr[],int l,int r)
{
    int res=0;
    for(int i=l;i<=r;i++)
    res += arr[i];
    return res;
}
int main()
{
    int arr[] = {5,8,6,13,3,-1};
    int l = 0, r = -1;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<gersum(arr,l,r);

    return 0;
}
*/

/*
equilibrium point

#include<iostream>
using namespace std;
bool epoint(int arr[],int n)
{
    int sum =0;
    for(int i=0;i<n;i++)
    sum += arr[i];
    int l_sum =0;
    for(int i=0;i<n;i++)
    {
        if(l_sum == sum - arr[i])
        return true;
        l_sum += arr[i];
        sum -= arr[i];
    }
    return false;
}
int main()
{
    int arr[] = {3,4,8,-9,20,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<epoint(arr,n);
    return 0;
}
*/

/*
maximum appearing elemnt in array


#include<iostream>
using namespace std;
int maxAppear(int left[],int right[],int n)
{
    int freq[101] ={0};
    for(int i=0;i<n;i++)
    {
        freq[left[i]]++;
        freq[right[i]+1]--;
    }
    int maxm = freq[0],res =0;
    for(int i=1;i<10;i++)
    {
        freq[i] += freq[i-1];
        if(freq[i]>freq[res])
        res = i;

        }
        return res;
}
int main()
{
    int left[] = {1,2,3};
    int right[] = {4,5,7};
    int n = sizeof(left)/sizeof(left[0]);
    cout<<maxAppear(left,right,n);
    return 0;
}
*/





