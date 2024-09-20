// Postfix to Infix
// In this problem, you're given a postfix (also known as Reverse Polish Notation or RPN) expression. The task is to convert the postfix expression into an infix expression.

// Postfix Notation: Operators follow their operands. For example, A B + means A + B.
// Infix Notation: Operators are placed between operands. For example, A + B.


#include <bits/stdc++.h>

using namespace std;

bool isOperator(char c){
    return (c=='+' || c=='-' || c=='*' || c=='/');
}

string postfixToInfix(string postfix){
    stack<string> stk;
    stringstream ss(postfix);
    string token;

    while(ss >> token){
        if(!isOperator(token[0])){
            stk.push(token);
        } else {
            string operand2 = stk.top();
            stk.pop();
            string operand1 = stk.top();
            stk.pop();
            string infixExpr = "(" + operand1 + " " + token + " " + operand2 + ")";
            stk.push(infixExpr);
        }
    }
    return stk.top();
}

int main() {
    string postfixExpression;
    getline(cin, postfixExpression);
    string infixExpression = postfixToInfix(postfixExpression);

    cout<<infixExpression<<endl;

    return 0;
}