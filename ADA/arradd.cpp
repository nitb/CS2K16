// XXX Add two numbers using string.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, carry=0, val;
    string temp1, temp2, temp3;
    cin >> temp1 >> temp2;
    stack<int> st;
    int len1, len2;
    len1 = temp1.size() - 1; len2 = temp2.size() - 1;
    if (len1 >= len2){
        while (len2 >= 0){
            val = temp1[len1] + temp2[len2] + carry - 96;
            st.push(val%10);
            carry = (int) val / 10;
            len2--; len1--;
        }
        len1 = temp1.size() - 1; len2 = temp2.size();
        while (len2 <= len1){
            val = temp1[len1-len2] + carry - 48;
            st.push(val%10);
            carry = (int) val / 10;
            len2++;
        }
    }
    while (!st.empty()){
        cout << st.top(); st.pop();}
    return 0;
}
