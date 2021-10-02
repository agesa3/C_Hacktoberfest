#include<iostream>

using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout);
    #endif

int t;           // int t is here for multiple test cases present in the question one after another in different lines
cin >> t;        // input the test cases in a loop because they are so many.
while(t--){      // t-- till the test cases are over this loop will run.

    int i,k;
    cin >> i ;

    for(k=1; k<=i; k++)
        {
            if(k%3==0 && k%5==0)
                {
                    cout << "FizzBuzz" << endl;
                }
            else if(k%3 == 0)
                {
                    cout << "Fizz" << endl;
                }
            else if(k%5 == 0)
                {
                    cout << "Buzz" << endl;
                }
            else
                {
                    cout << k << endl;
                }
        }
}
}