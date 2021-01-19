#include <bits/stdc++.h>

using namespace std;

// Complete the appendAndDelete function below.
string appendAndDelete(string s, string t, int k) {
 int count,i=0;
    while(true){
        if(s[i]!=t[i])        
         break;
    i++;
    }  
    count=s.size()-i+t.size()-i;
    if(k==count||k>=s.size()+t.size()){     
    return "Yes";
    }
    else 
    if(count%2==k%2 && count<=k){ 
    return "Yes";
    }
    else              
    return "No";

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = appendAndDelete(s, t, k);

    fout << result << "\n";

    fout.close();

    return 0;
}

