
/*Strings Basics

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str = "geeksforgeeks";
    cout<<str<<" "<<endl;
    cout<<str.length()<<endl;
    str = str + "xyz";
    cout<<str<<endl;
    cout<<str.substr(1,6)<<endl;
    cout<<str.find("f")<<endl;
    char a[] = "peeke";
    char b[] = "peeke";
     int res = strcmp(a,b);
    if(res>0)
    {
        cout<<"greater ";
    }
        else if(res==0)
        {
            cout<<"same ";
        }

                else
                {
                    cout<<"smaller ";
                }
}
*/

/*reading fromm the console

#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter yor name "<<endl;
    getline(cin,str,'i'); // here 'i' means it stops the result when it find character i in the name

    cout<<"\n your name is " <<str;

}
*/

/*Iterating through the string

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str = "sri somanjali is a good girl ";
    // for(int i=0; i<str.length(); i++)
    // cout<<str[i]; 

    //or

    for(char x : str)
    cout<<x;
}
*/

/*pallindrome or not 

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str;
    cin >>str;
    int flag = 0;
    for(int i=0; i<str.length()/2; i++)
    {
        if(str[i] == str[str.length()-i-1])
        {
            flag = 1;
            break;
        }
    }
    if(flag==1)
    cout<<"pallindrome ";
    else
    cout<<"not pallindrome ";
}

or 

#include<iostream>
using namespace std;
bool ispal(string str)
{
    int begin = 0 ;
    int end = str.length()-1;
    while(begin<end)
    {
        if(str[begin] == str[end] )
        return true;
        begin++;
        end--;
    }
        return false;
}
int main()
{
    string str;
    cin>>str;
    if(ispal(str))
    cout<<"It is pallindrome "<<endl;
    else
    cout<<"It is not a pallindrome "<<endl;
}
*/

/*string is subsequence  Iterative type

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str1;
    string str2;
    cin>>str1;
    cin>>str2;
    int j=0;
    for(int i=0; i<str2.length(); i++)
    {
        if(str1[i] == str2[i])
        {
            cout<<"subsequence ";
            j++;

        }
            else
            {
                cout<<"not a subsequence ";
            }
    }

}

recursive type 

#include<iostream>
#include<cstring>
using namespace std;
bool issub( string s1 , string s2, int n , int m)
{
    int j=0;
    for(int i=0; i<n && j<m; i++)
    {
        if(s1[i] == s2[i])
        j++;
    }
    return (j==m);
}

int main()
{

    string s1 ;
    string s2 ;
    cin>>s1;
    cin>>s2;
    int n = s1.length();
    int m = s2.length();
    if(issub(s1,s2,n,m))
    cout<<"yes ";
    else
    cout<<"no ";
}
*/

/*Anagram check?efficient approach

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    int n = s1.length();
    int m = s2.length();
    int count[256] = {0};
    int count1[256] = {0};

            for(int i=0; i<n; i++)
            {
                count[s1[i]]++;
                count1[s2[i]]++;
            }
            int flag = 0;
            for(int i=0; i<256; i++)
            {
                if(count[i] != count1[i])
                {
                    flag = 1;
                    break;
                }
            }
            if(flag==1)
            cout<<"not anagram ";
            else
            cout<<"anagram ";
}

Naive approach 

#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;
bool anagram(string &s1, string &s2)
{
if(s1.length() != s2.length())
return false;

sort(s1.begin(), s1.end());
sort(s2.begin(), s2.end());
return (s1 == s2);

}
int main()
{
string s1;
string s2;
cin>>s1;
cin>>s2;
if(anagram(s1,s2))
cout<<"anagram ";
else
cout<<"not anagram ";
}
*/

/*Left Most Repeating 1st Element

#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
 string s1;

    cin>>s1;
    for(int i=0; i<s1.length();i++)
    {
        bool flag = true;
        for(int j=i+1; j<s1.length(); j++)
        {
            if(s1[i] == s1[j])
            {
                flag = false;
                cout<<i;
                break;
            }
        }
    }
    return -1;
}
or 
effiecient approach 

#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int l = 256;
int leftmost(string &str)
{
    bool visited[l];
    fill(visited, visited+l, false);
    int res = -1;
    for(int i=str.length()-1; i>=0; i--)
    {
        if(visited[str[i]])
        res = i;
        else
        visited[str[i]] = true;
    }
    return res;
}
int main()
{
    string str;
    cin>>str;
    cout<<leftmost(str);
    return 0;
}
*/
  
/*Left Most non repeating 1st element

#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
 string s1;
    cin>>s1;
    for(int i=0; i<s1.length();i++)
    {
        bool flag = false;
        for(int j=0; j<s1.length(); j++)
        {
            if(i != j && s1[i] == s1[j])
            {
                flag = true;
                break;
            }
          
        }
        if(flag == false)
        {
            cout<<i;
            break;
        }
    }
    return -1;
}

efficient approach

#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int CHAR = 256;
int nonre(string &s)
{
    int fi[CHAR];
    fill(fi, fi+CHAR, -1);
    for(int i=0; i<s.length(); i++)
    {
        if(fi[s[i]] == -1)
        fi[s[i]] = i;
        else
        fi[s[i]] = -2;
    }
    int res = INT_MAX;
    for(int i=0; i<CHAR; i++)
    {
        if(fi[i] >= 0)
        res = min(res, fi[i]);
    }
    return (res == INT_MAX)? -1 : res;
}
int main()
{
    string s;
    cin>>s;
    cout<<nonre(s);
    return 0;
}
*/

/*reverse the elements in the string

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string str;
    cin>>str;
    reverse(str.begin(), str.end());
    cout<<str;
    return 0;
}

or
reverse words in string

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
string reverseWords(string s)
{
    int start = 0;
    for(int end = 0; end<s.length(); end++)
    {
        if(s[end] == ' ')
        {
            reverse(s.begin()+start, s.begin()+end);
            start = end+1;
        }
    }
    reverse(s.begin()+start, s.end());
    reverse(s.begin(), s.end());
    return s;
}
*/

/*Naive String Matching Algorithm

#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
void patsearching(string &txt, string &pat)
{
    int m= pat.length();
    int n = txt.length();
    for(int i=0;i<=n-m;i++)
    {
        int j;
        for(j=0;j<m;j++)
        if(pat[j] != txt[i+j])
        break;
        if(j==m)
        cout<<i<<" ";
    }
}
int main()
{
    string txt;
    string pat;
    cin>>txt;
    cin>>pat;
    patsearching(txt,pat);
    return 0;
}
*/

/*Improved Naive Parttern Mtching

#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
void patsearching(string &txt, string &pat)
{
    int m= pat.length();
    int n = txt.length();
    for(int i=0;i<=n-m;) // here this syntax is importnat we dont take i++
    {
        int j;
        for(j=0;j<m;j++)
        if(pat[j] != txt[i+j])
        break;
        if(j==m)
        cout<<i<<" ";
        if(j==0)
        i++;
        else
        i = i+j;
    }
}
int main()
{
    string txt;
    string pat;
    cin>>txt;
    cin>>pat;
    patsearching(txt,pat);
    return 0;
}
*/


/*Rabin karp

#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
void RS(string &pat, string &txt)
{
    int m = pat.length();
    int n = txt.length();
    int d = 256;
    int q = 101;
    int h = 1;
    int p = 0;
    int t = 0;
    for(int i=1; i<=m-1;i++)
    h= (h*d)%q;
    for(int i=0;i<m;i++)
    {
        p=(p*d +pat[i])%q;
        t=(t*d + txt[i])%q;
    }
    for(int i=0;i<=n-m;i++)
    {
        if(p==t)
        {
            bool flag = true;
            for(int j=0;j<m;j++)
            {
                if(txt[i+j] != pat[j])
                {
                    flag = false;
                    break;
                }
            }
            if(flag == true)
            cout<<i<<" ";
        }
        if(i<n-m)
        {
            t = (d*(t-txt[i]*h) + txt[i+m])%q;
            if(t<0)
            t = t+q;
        }
    }
}
int main()
{
    string txt;
    string pat;
    cin>>txt;
    cin>>pat;
    RS(pat,txt);
    return 0;
}
*/

/*Kmp constructing lps array

#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
void KMPSearch(string &pat, string &txt)
{
    int m = pat.length();
    int n = txt.length();
    int lps[m];
    int len = 0;
    lps[0] = 0;
    int i = 1;
    while(i<m)
    {
        if(pat[i] == pat[len])
        {
            len++;
            lps[i] = len; 
            i++;
        }
        else
        {
            if(len != 0)
            len = lps[len-1];
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
    int j = 0;
    i = 0;
    while(i<n)
    {
        if(pat[j] == txt[i])
        {
            j++;
            i++;
        }
        if(j == m)
        {
            cout<<i-j<<" ";
            j = lps[j-1];
        }
        else if(i<n && pat[j] != txt[i])
        {
            if(j != 0)
            j = lps[j-1];
            else
            i = i+1;
        }
    }
}
int main()
{
    string txt;
    string pat;
    cin>>txt;
    cin>>pat;
    KMPSearch(pat,txt);
    return 0;
}*/


/*String Rotation

#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
void arerotation(string s1, string s2)
{
    if(s1.length() != s2.length())
    cout<<"no ";
    else
    {
        string temp = s1+s1;
        if(temp.find(s2) != string::npos)
        cout<<"yes ";
        else
        cout<<"no ";
    }
}
int main()
{
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    arerotation(s1,s2);
    return 0;
}*/

/*finding the ascci value

#include<iostream>
using namespace std;
int main()
{
    char a = 'x';
    cout<<(int)a;
}
*/

/*longest substring (how many elemnts are not repeating)

#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int longdist(string s)
{
    int n= s.length();
    int res=0;
    vector<int>prev(256,-1);
    int i=0;
    for(int j=0;j<n;j++)
    {
        i = max(i,prev[s[j]]+1);
        int maxend = j-i+1;
        res = max(res,maxend);
        prev[s[j]]=j;
    }
    return res;
}
int main()
{
    string s;
    cin>>s;
    cout<<longdist(s);
}*/

