#include<bits/stdc++.h>
using namespace std;


int solve(vector<string>solve){
    vector<int>number;
    vector<char>alpha;
    map<char,int>mpp={
        {'A',1}, {'2',2}, 
        {'3',3}, {'4',4},
         {'5',5}, {'6',6},
          {'7',7}, {'8',8},
           {'9',9}, {'T',10},
            {'J',11}, {'Q',12}, {'K',13} 
    };

    for(int i=0;i<5;i++)
    {
        string temp = solve[i];
        number.push_back(temp[0]);
        alpha.push_back(temp[1]);
    }
    sort(number.begin(),number.end());
    for(int i=1;i<5;i++){
        if(number[i]-number[i-1]!=1)return false;
    }

    set<char>st(alpha.begin(),alpha.end());
    if(st.size()>1)return true;
    else return false;

}


int main()
{
    vector<string>input;
    for(int i=0;i<5;i++){
        string temp;
        cin>>temp;
        input.push_back(temp);
    }

    if(solve(input))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}


