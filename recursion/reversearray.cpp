class Solution {
  public:
    void solve(vector<int> &a,int i){
        if(i>=a.size()/2) return;
        swap(a[i],a[a.size()-i-1]);
        solve(a,i+1);
    }
    void reverseArray(vector<int> &a) {
        // code here
        solve(a,0);
        
        
    }
};
