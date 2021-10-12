#include <cstring>
#include <iostream>
#include <stack>

using namespace std;

int main()
{
    string stackstr;
    stack <char> KvSkobka, Skobka, FgSkobka; 
    cin>>stackstr;
    
    for(int i = 0; i < stackstr.size(); i++){
        if(stackstr[i] == '(')  Skobka.push(stackstr[i]);
        else if(stackstr[i] == '[')  KvSkobka.push(stackstr[i]);
        else if(stackstr[i] == '{')  FgSkobka.push(stackstr[i]); 
    }
    
    for(int j = 0; j < stackstr.size(); j++){
        if(stackstr[j] == ')') Skobka.pop();
        else if(stackstr[j] == ']')  KvSkobka.pop();
        else if(stackstr[j] == '}')  FgSkobka.pop();
    }
    
    if(Skobka.size() == 0 && KvSkobka.size() == 0 && FgSkobka.size() == 0)
    cout<<"YES";
    else cout<<"NO";
    
    return 0;
}