//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    int k = pat.size();
	    int i=0;
	    int j=0;
	    unordered_map<char,int> m;
	    int n = txt.size();
	    for (auto &x : pat){
            m[x]++;
        }
	    int count=m.size();
	    int ans=0;
	    while(j<n){
	        if(m.find(txt[j]) != m.end()){
	            m[txt[j]]--;
	            if(m[txt[j]] == 0){
	                count--;
	            }
	        }
	        if(j-i+1 < k){
	            j++;
	        }
	        else if(j-i+1 == k){
	            if(count == 0){
	                ans++;
	            }
	            if(m.find(txt[i]) != m.end()){
	                m[txt[i]]++;
	                if(m[txt[i]] == 1){
	                    count++;
	                }
	            }
	            i++;
	            j++;
	        }
	       
	    }
	     return ans;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends