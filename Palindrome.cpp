// Aditya Jadhav
// 24070123005

#include <iostream>
#include <string>
using namespace std;

int main(){
    string a,revstr;
    int length,i;
    cout<<"Enter a string: ";
    cin>>a;
    length=a.length();
    for(i=length-1;i>=0;i--)
    {
        revstr+=a[i];
    }
    if(a==revstr)
    {
        cout<<"It is a palindrome.";
    } 
    else 
    {
        cout<<"It is not a palindrome.";
    }
     return 0;
}

// OUTPUT
// Enter a string: Aditya
// It is not a palindrome.
// Enter a string: racecar
// It is a palindrome.