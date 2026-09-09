#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    cout << "The given string is " << s  << endl;
     for(char c : s)
    cout << (char)toupper(c);

    bool pal= true;
    size_t i=0 , j = s.size()-1;
    
    for(i=0 ; i < j; ++i ,++j)
    {
         if(s[i ] != s[j])
         {
            pal = false;
            break;
         }
    }
       if(pal){
         cout<<"The given string is palindrome\n";
       }
       else{
         cout<<"The given string is not a palimdrom\n";
       }

       size_t pos = s.find("ad");
          if(pos == 1)
          {
              cout << "Substring is found in the given string" << endl;


          }
         else{
            cout<< "Substring is not found in the given string" << endl;
            
         }
}