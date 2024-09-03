class Solution {
public:
    string smallestNumber(string pattern) {
        string result = "";
        stack<int> st;

    for (int i = 0; i <= pattern.size(); i++) {
        // Push the current number to the stack
        st.push(i + 1);
        // If we reach the end of the string or find an 'I', pop from the stack
        if (i == pattern.size() || pattern[i] == 'I') {
            while (!st.empty()) {
                result += to_string(st.top());
                st.pop();
            }
        }
    }
    return result;
    }
};