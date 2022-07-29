// Input Format

// Input will contain four integers -  , one per line.

// Output Format

// Return the greatest of the four integers.
// PS: I/O will be automatically handled.

// Sample Input

// 3
// 4
// 6
// 5
// Sample Output

// 6

#include <iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cout<<"Enter the values :"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;

    if(a>b && a>>c && a>>d){
        cout<<a;
    }
    else if (b>c && b>d)
    {
        cout<<b;
    }
    else if (c>d)
    {
        cout<<c;
    }
    else{
        cout<<d;
    }

    return 0;
}