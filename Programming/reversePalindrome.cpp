#include<bits/stdc++.h>
using namespace std;

bool ispalindrome(int n)
{
    string input = to_string(n);
    reverse(input.begin(),input.end());
    int num = stoi(input);
    return n==num;

}

int find_reverse(int n )
{
    string input = to_string(n);
    reverse(input.begin(),input.end());
    return stoi(input);
}
int solve(int n)
{
    while(ispalindrome(n) && n < INT_MAX)
    {
        int number = n;
        int reverse_number = find_reverse(n);
        int fin = number+ reverse_number;
        if(ispalindrome(fin)) return  fin;
        else{
            n = fin;
        }
    }
}

int main()
{
    int n ;
    cin>>n;
    cout<<solve(n);
    return 0;

}