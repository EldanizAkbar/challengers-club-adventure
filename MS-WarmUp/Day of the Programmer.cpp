#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

// Complete the dayearOfProgrammer function below.
string dayearOfProgrammer(int year ) {
    string y= to_string(year);
    if(year<1918){
        if(year%4==0)
        return "12.09."+y;
        else
         return "13.09."+y;
    }
    else if(year==1918){
        return "26.09."+y;
    }
    else{
        if(year%400==0){
               return "12.09."+y;
      
        }
        else if(year%4==0&&year%100!=0){
             return "12.09."+y;
        }
        else 
         return "13.09."+y;
    }

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string yearear_temp;
    getline(cin, yearear_temp);

    int yearear = stoi(ltrim(rtrim(yearear_temp)));

    string result = dayearOfProgrammer(yearear);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

