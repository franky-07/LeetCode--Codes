/*   Problem Link:: https://leetcode.com/problems/valid-parentheses/
*/
class Solution {
public:
    bool isValid(string s) {
        stack<int> s1;
        for(auto c:s){
           if(c=='('||c=='{'||c=='['){
               s1.push(c);
           }
            else if (s1.empty()){
                return false;
            }
            else{
                if((s1.top()=='['&&c==']') ||(s1.top()=='('&&c==')') ||                 (s1.top()=='{'&&c=='}')){
                    s1.pop();
                }
                else{
                    return false;
                }
            }
        }
        if(!s1.empty())return false;
        return true;
    }
};
