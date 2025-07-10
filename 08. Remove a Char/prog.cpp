

class solutions{
public:
    string removeChars(string str1, string str2) {
        unordered_set<char> st;
        for (char ch : str2) {
            st.insert(ch);
        }

        string ans = "";
        for (char ch : str1) {
            if (st.find(ch) == st.end()) {
                ans += ch;
            }
        }

        return ans;
    }
};
