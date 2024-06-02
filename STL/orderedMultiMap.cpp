#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        string answer;
        int count = 0;
        string::iterator itr;
        itr = s.end() - 1;
        vector<int> vec;

        while (itr != s.begin()) {
            if ((*itr) == ' ') {
                if (count == 0) {
                    itr--;
                    continue;
                }

                vec.push_back(count);
                count = 0;
                answer.push_back(' ');
                itr--;
            }
            answer.push_back(*itr);
            count++;
            itr--;
        }
        if ((*s.begin()) != ' ') {
            answer.push_back(*(s.begin()));
            if (!vec.empty()) { // Check if vec is not empty
                vec[vec.size() - 1] += 1;
            } else {
                vec.push_back(1); // If vec is empty, add 1 to it
            }
        }

        return answer;
    }
};

int main() {
    Solution solution;
    string s = "Hello World";
    cout << solution.reverseWords(s) << endl;
    cout<<s.substr(0,3)+s.substr(6,15)<<"|";
    return 0;
}
