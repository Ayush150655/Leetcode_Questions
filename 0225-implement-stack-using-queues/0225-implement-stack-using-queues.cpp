class MyStack {
   
public:
     queue<int> q;
    void push(int x) {
        q.push(x);
        for(int i=0;i<q.size()-1;i++)
        {
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        int a = q.front();
        q.pop();
        return a;
    }
    
    int top() {
        int a = q.front();
        return a;
    }
    
    bool empty() {
        if(q.empty())
            return true;
        else
            return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */