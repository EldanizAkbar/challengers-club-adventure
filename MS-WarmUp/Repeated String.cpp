#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
long long count = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'a') {
            count++;
        }
    }
    long long c = (n/s.size())*count;
    int l=n%s.size();
    for(int i = 0; i <l; i++) {
        if(s[i] == 'a') {
            c++;
        }
    }
    return c;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}

