// https://youtu.be/_gJ3to4RyeQ?list=PLDzeHZWIZsTryvtXdMr6rPh4IDex
//  see from lec 61 Q4 29 min 
// do dry run to understand 

class Solution {

	public:
		string FirstNonRepeating(string A){
		    map<char, int> m;
		    string ans = "";
		    queue<char> q;
		    
		    for(int i=0; i<A.length(); i++) {
		        char ch = A[i];
		        
		        q.push(ch);
		        m[ch]++;
		        
		        while(!q.empty()) {
		            if(m[q.front()] > 1){
		                q.pop();
		            }
		            else
		            {
		                ans.push_back(q.front());
		                break;
		            }
		        }
		        if(q.empty()){
		            ans.push_back('#');
		        }
		    }
		    return ans;
		}

};
