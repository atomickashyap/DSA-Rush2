class Solution {
public:
    string addBinary(string a, string b) {
        string ans;
        int carry = 0;
        int a_length = a.length()-1;
        int b_length = b.length()-1;
        while (a_length>=0 || b_length>=0 || carry)
        {
            if(a_length >=0)
            {
                carry += a[a_length--] - '0';
            }
            if(b_length >=0)
            {
                carry += b[b_length--] - '0';
            }
            ans += carry % 2 + '0';
            carry = carry / 2;
        }
        reverse(begin(ans),end(ans));
        return ans;
    }
};