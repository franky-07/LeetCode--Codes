/*Problem Site:: https://leetcode.com/problems/min-stack/
*/
class MinStack {
public:
   stack<pair<int,int>> s;
    MinStack() {
        
    }
    void push(int val) {
       if(s.empty()){
           s.push(make_pair(val,val));
       }
        else{
            auto p=s.top();
            s.push(make_pair(val,min(p.second,val)));
        }
    }
    void pop() {
        if(!s.empty())
        s.pop();
    }
    
    int top() {
        return s.top().first;
    }
    
    int getMin() {
         return s.top().second;
    }
};
