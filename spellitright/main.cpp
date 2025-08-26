#include<iostream>
#include<cstdio>
#include<string>

#include<vector>
using namespace std;

string s;
vector<string> ve;

string strnum[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
int main(){
    cin>>s;
    int sum=0;
    for(int i=0;i<s.size();i++){
        sum=sum+s[i]-'0';
    }
    string str=to_string(sum);
    if(sum==0)printf("zero");
    else{
    while(sum>0){
        int t=sum%10;
        string temp=strnum[t];
        //cout<<t<<" "<<strnum['t']<<endl;;
        ve.push_back(temp);
        sum=sum/10;
    }
    for(int i=ve.size()-1;i>=0;i--){
        cout<<ve[i];
        if(i!=0)cout<<" ";
    }
    }
    return 0;
}
