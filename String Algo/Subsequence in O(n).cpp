bool isSubsequence(string s, string t) {
        queue<char> q;
        for(int i = 0; i < s.size(); i++){
            q.push(s[i]);
        }
        for(int i = 0; i < t.size(); i++){
            if(t[i] == q.front())
                q.pop();
        }
        return q.size() == 0;
    }
