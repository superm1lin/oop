#include <iostream>
#include <stack>
#include <sstream>
#include <string>
#include "oop6.h"
using namespace std;

int rethalt() {
    string st;
    cout << "Vvedite vyrarzenije" << endl;
    getline(cin, st);
    istringstream s(st);
    stack<int> stack;
    int data;
    char sign;

    while (!s.eof())
    {
        while (s >> data) {
            stack.push(data);
        }
        if (!s.eof())
        {
            s.clear();
            s.unget();
            s >> sign;
            if (stack.size() < 2)
            {
                cout << "oszibka c porjadkom operacii " << endl;
                return 0;
            }
            int right = stack.top();
            stack.pop();
            int left = stack.top();
            stack.pop();
            switch (sign)
            {
            case '+':
                stack.push(right + left);
                break;
            case '-':
                stack.push(right - left);
                break;
            case '*':
                stack.push(right * left);
                break;
            case '/':
                stack.push(right / left);
                break;
            default:
                cout << "nevernyj operator " << sign << endl;
                return 0;
            }
        }
    }
    if (stack.size() != 1)
    {
        cout << "oszibka co stackom" << endl;
        return 0;
    }
    cout << "rezyltat " << stack.top() << endl;
    return stack.top();
}