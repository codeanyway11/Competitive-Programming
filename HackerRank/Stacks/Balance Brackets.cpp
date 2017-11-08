// https://www.hackerrank.com/challenges/balanced-brackets/problem

#include <bits/stdc++.h>

using namespace std;

string isBalanced(string s) {
    string answer;
    stack<char> stack;
    char temp;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='[' )
            stack.push(s[i]);
        else{
            switch(s[i]){
                case ')':
                    if(stack.empty() || stack.top()!='('){
                        answer = "NO";
                        return answer;
                    }
                    stack.pop();
                    break;
                 case '}':
                    if(stack.empty() || stack.top()!='{'){
                        answer = "NO";
                        return answer;
                    }stack.pop();
                    break;
                 case ']':
                    if(stack.empty() || stack.top()!='['){
                        answer = "NO";
                        return answer;
                    }stack.pop();
                    break;
            }
        }
    }
    answer = ((stack.empty())?"YES":"NO");
    return answer;
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string s;
        cin >> s;
        string result = isBalanced(s);
        cout << result << endl;
    }
    return 0;
}
