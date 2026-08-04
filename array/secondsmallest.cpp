class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &a) {
        // code here
        int smallest=a[0];
        int ssmallest=INT_MAX;
        for(int i=1;i<a.size();i++){
            if(a[i]<smallest){
                ssmallest=smallest;
                smallest=a[i];
            }
            else if(a[i]>smallest&&a[i]<ssmallest){
                ssmallest=a[i];
            }
        }
        if(ssmallest==INT_MAX){
            return{-1};
        }
        return {smallest,ssmallest};
    }
};
