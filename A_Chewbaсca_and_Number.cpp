#include <bits/stdc++.h>
using namespace std;
int main()
{

string s ;cin>>s;
string ans = "";
int i =0;
for(char t: s){
    if( i== 0 && s[0] == '9'){
        ans += t;
        continue;
    }
    int cnv = t - '0';
    if(9-cnv <cnv){
        cnv = 9-cnv;
        ans +=  to_string(cnv);
    }
    else{
        ans += to_string(cnv);
    }
    i++;
}
if(ans[0] == '0'){
    ans[0] = s[0];
}
else{
    cout<< ans;
}


return 0;
}