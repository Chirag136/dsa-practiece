class Solution {
  public:
    bool isSorted(vector<int>& a) {
        // code here
        for(int j=1;j<a.size();j++){
            if(a[j]<a[j-1]){
                return false;
            }
        }
        return true;
        
    }
};
