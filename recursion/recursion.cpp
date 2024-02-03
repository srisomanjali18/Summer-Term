/*
Introduction to recursion

#include<iostream>
using namespace std;
void fun1()
{
    cout<<"fun1 \n";
}
void fun2()
    {
        cout<<"Before fun1 \n";
        fun1();
        cout<<"After fun1 \n";
    }
    int main()
    {
        cout<<"Before fun2 \n";
        fun2();
        cout<<"After fun2 \n";
        return 0;
            }
*/

/*
print n to 1
#include<iostream>
using namespace std;
void printNto1(int n)
{
    if(n==0)
    return;
    cout<<n<<" ";
    printNto1(n-1);
    }
    int main()
    {
        int n;
        cin>>n;
        printNto1(n);
        return 0;
}
*/

/*
print 1 to N
#include<iostream>
using namespace std;
void pr(int n)
{
    if(n==0)
    return;
    pr(n-1);
    cout<<n<<" ";
}
int main()
{
    int n;
    cin>>n;
    pr(n);
    return 0;
}
*/

/*
sum of n natural numbers

#include<iostream>
using namespace std;
int getsum(int n)
{
    if(n==0)
    return 0;
    return n + getsum(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<getsum(n)<<" ";

}
*/


/*
checking a string is palindrome or not

#include<iostream>
using namespace std;
int pali(string &n, int p, int end)
{
if(p >= end)
return true;
return (n[p] == n[end]) && pali(n, p+1,end-1);
}
int main()
{
    string n;
    cin>>n;
    int p = 0;
    int end = n.length()-1;
    cout<<pali(n,p,end);
    return 0;
}
*/


/*
sum of digits of a number

#include <iostream>
using namespace std;

int getSum(int n) {
    int res = 0;
    while (n > 0) {
        res += n % 10;
        n = n / 10;
    }
    return res;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Sum of digits: " << getSum(n) << endl;
    return 0;
}
*/
 
 /*
generate subset

 #include<iostream>
 using namespace std;
 void subset(string s, string curr =" ", int i=0)
{
    if(i==s.length())
    {
        cout<<curr<<" ";
        return;
    }
    subset(s,curr,i+1);
    subset(s,curr+s[i],i+1);
}
int main()
{
 
    string s;
    cin>>s;
    subset(s);
    return 0;
}
*/

/* 
tower of hanoi

#include<iostream>
using namespace std;
void toh(int n, char a, char b, char c)
{
    if(n==1)
    {
        cout<<"More 1 from "<< a<< " to "<< c<<endl;
        return;
    }
    toh(n-1,a,c,b);
    cout<<"move "<<n<<" from "<<a<<" to "<<c<<endl;
    toh(n-1,b,a,c);
}
int main()
{
    int n;
    cin>>n;
    toh(n,'A','B','C');
    return 0;
}
*/

/*
sum subset problem

#include<iostream>
using namespace std;
int cs(int arr[],int n, int sum)
{
if(n==0)
return(sum==0)? 1:0;
return cs(arr,n-1,sum)+ cs(arr,n-1,sum-arr[n-1]);
}
int main()
{
    int arr[] = {5,6,4,2,7,8,20};
    int sum=20;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<cs(arr,n,sum);
}
*/

/*
permutations of the given string

#include<iostream>
using namespace std;
void per(string a, int b =0)
{
    if(b==a.length()-1)
    {
        cout<<a<<" ";
        return;
    }
    for(int j=b;j<a.length();j++)
    {
        swap(a[b],a[j]);
        per(a,b+1);
        swap(a[b],a[j]);
    }
}
int main()
{
    string a;
    cin>>a;
    per(a);
    return 0;
}
*/







