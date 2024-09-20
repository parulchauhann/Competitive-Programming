#include <bits/stdc++.h>

using namespace std;

bool isOperator(char c){
    return (c=='+' || c=='-' || c=='*' || c=='/');
}

bool isOperand(char c){
    return (c>='0' && c<='9');
}

string postfixToPrefix(const string& postfix){
    stack<string> stk;
    stringstream ss(postfix);
    string token;
    unordered_set<char> operators {'+', '-', '*', '/'};

    while(ss >> token){
        if(isOperand(token[0])){
            stk.push(token);
        } else{
            string operand2 = stk.top();
            stk.pop();
            string operand1 = stk.top();
            stk.pop();
            string expr = token + " " + operand1 + " " + operand2;
            stk.push(expr);
        }
    }
    return stk.top();
}

int main() {
    string postfixExpression;
    getline(cin, postfixExpression);
    cout<<postfixToPrefix(postfixExpression);

    return 0;
}