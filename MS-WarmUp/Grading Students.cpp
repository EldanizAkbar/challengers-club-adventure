#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
 if(s[8]=='A' && s[9]=='M'){
     if(s[0]=='1' && s[1]=='2'){
         s[0]='0';
         s[1]='0';
     } 
 }
 else{
     if(s[0]=='1' || s[1]!='2'){
         s[0]+=1;
         s[1]+=2;
     } 
 } 
 s.erase(s.end() - 2, s.end());
 return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

