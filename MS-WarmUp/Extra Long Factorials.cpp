#include <bits/stdc++.h>

using namespace std;

// Complete the extraLongFactorials function below.
void extraLongFactorials(int n) {
   int A[500],a;
    A[0] = 1;
    a = 1;
    for(int i = 2; i <= n; i++){
        int c = 0;
        for(int j = 0; j < a; j++){
            int t = A[j]*i+c;
            A[j] = t%10;
            c = t/10;
        }
        while(c){
            A[a] = c%10;
            c/=10;
            a++;
        }
    }
    for(int i = a-1; i>= 0; i--)cout << A[i];


}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    extraLongFactorials(n);

    return 0;
}

