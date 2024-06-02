class Solution {
public:
    bool isValid(string s) {
        char start, end;
        start = s[0];
        end = s[s.size() - 1];
        while (!s.empty()) {
            string end;
            if (end == '}' || end == ')' || end == ']') {
                s.pop_back();
                for (int i = s.size() - 1; i >= 0; i--) {
                    if (end == '}' && s[i] == '{') {
                        s.erase(i);
                        break;
                    } else if (end == ']' && s[i] == '[') {
                        s.erase(i);
                        break;
                    } else if (end == ')' && s[i] == '(') {
                        s.erase(i);
                        break;
                    }
                }
            }else 
            break;
        }
        if (s.empty())
            return true;
        else
            return false;
    }
};
