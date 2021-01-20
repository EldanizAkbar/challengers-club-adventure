#include <bits/stdc++.h>

using namespace std;

// Complete the encryption function below.
string encryption(string s) {
int n=s.size();
int m=sqrt(n);
if(m*m!=n){
    m++;
}
string res="";
for(int i=0;i<m;i++){
    for(int j=i;j<n;j+=m){
        res+=s[j];
    }
    res+=" ";
}
return res;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = encryption(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

