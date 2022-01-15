void insertstack(stack<int> &st, int y){
    if(st.empty() || st.top() <= y){
        st.push(y);
        return;
    }
    
    
    int top=st.top();
    st.pop();
    insertstack(st,y);
    st.push(top);
    
}
void sortstack(stack<int> &st){
    
    if(st.empty())return ;
    
  int y=st.top();
  st.pop();
  sortstack(st);
  
  insertstack(st,y);
    
    
}
