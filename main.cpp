/**
Description: Functions and Strings 
Filename: Midterm 
Author: marianna Delrio
Date: 10/18/18
Email: mariand3224@studnet.vvc.edu
*/


#include<string>
#include<iostream>

using namespace std;



string get_string(string s) 

{
  cout << "Enter a word " << endl;
  cin >> s;
  return s; 
}   

int get_char(string g, char t)
{
    cout << "Enter a letter to see the quantity " << endl;
    cin >> t;
    int num = 0;
    for(int i =0; i < g.length(); i++) 
    {
        if(g.at(i) == t) 
    { 
        num++;
    }
    
    }
        return num;
}

int main() 
{ 
    string f; 
    char v; 
    f = get_string(f); 
    cout << get_char(f,v) << endl;  

} 












