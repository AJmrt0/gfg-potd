class Solution{
  public:
  vector<long long int> countZero(int n, int k, vector<vector<int>>& arr){
     //Code Here
       vector<long long> ans;
      long long in=n*n,x=0,y=0;
    //   unordered_map<long long,long long> mx,my;
    vector<long long> mx(n+1,0),my(n+1,0);
      for(int i=0;i<k;i++){
          mx[arr[i][0]]++;
          my[arr[i][1]]++;
          if(mx[arr[i][0]]==1) x++;
          if(my[arr[i][1]]==1) y++;
          ans.push_back(in-(x)*n -y*n+x*y);
          
      }
      return ans;
  }
};
