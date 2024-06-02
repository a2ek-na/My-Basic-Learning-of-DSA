#include <iostream>
#include <math.h>
#include <stack>
using namespace std;

int calculate(int val1, int val2, char operatorr) {
    if (operatorr == '^')
        return pow(val1, val2);

    if (operatorr == '+')
        return (val1 + val2);

    if (operatorr == '-')
        return (val1 - val2);

    if (operatorr == '*')
        return (val1 * val2);

    if (operatorr == '/')
        return (val1 / val2);
    
    return 0;
}

int evaluate(string &st) {
    stack<int> stac;

    for (int i = 0; i < st.size(); i++) {
        if (st[i] == '^' || st[i] == '+' || st[i] == '-' || st[i] == '*' || st[i] == '/') {
            int val1 = stac.top();
            stac.pop();
            int val2 = stac.top();
            stac.pop();
            int result = calculate(val2, val1, st[i]);
            stac.push(result);
        } else {
            stac.push(st[i] - '0');
        }
    }
    return stac.top();
}

int main() {
    string str = "12+89-*";
    cout << str << " = " << evaluate(str);
    return 0;
}
