#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    for(int i = n; i > 0; i--){
        for(int j = 0 ; j < i - 1; j++){
            cout<< " ";
        }
        for(int k = i - 1; k < n; k++){
            cout<< "#";
        }
        cout<<endl;
    }


}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}

