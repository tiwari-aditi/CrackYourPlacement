class Solution {
public:
    bool isEmpty(int top){
        return top<0;
    }
    bool isFull(int top, int size){
        return (top==(size-1));
    }
    void push(vector<char>& stack,int& top,int size, char item){
        if( !(isFull(top,size)) ){
            stack.push_back(item);
            top++;
        }
    }
    void pop(vector<char>& stack,int& top){
        if( !(isEmpty(top)) ){
            stack.pop_back();
            top--;
        }
    }

    bool isValid(string s) {
        int size =s.size();
        vector<char> stack;
        int top = -1;
        for(int i=0;i<size;i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                push(stack,top,size,s[i]);
            }
            else if(s[i]==')'){
                if(isEmpty(top))
                    return false;
                if(stack[top]=='('){
                    pop(stack,top);
                }
                else{
                    return false;
                }
            }
            else if(s[i]==']'){
                if(isEmpty(top))
                    return false;
                if(stack[top]=='['){
                    pop(stack,top);
                }
                else{
                    return false;
                }   
            }
            else if(s[i]=='}'){
                if(isEmpty(top))
                    return false;
                if(stack[top]=='{'){
                    pop(stack,top);
                }
                else{
                    return false;
                }
            }
        }
        if(isEmpty(top)){
            return true;
        }
        else{
            return false;
        }
    }

};
