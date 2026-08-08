class Solution {
public:
    string defangIPaddr(string address) {
        int n = address.size();
        string ans;
        int index = 0;
        while (index < n) {
            if (address[index] == '.') ans = ans + "[.]";
             else ans = ans + address[index];
            index++;
        }
        return ans;
    }
};