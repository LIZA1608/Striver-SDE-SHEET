 int findLongestConseqSubseq(int arr[], int n)
    {
      //Your code here
      if(n==0){
          return 0;
      }
      unordered_set<int>st;
      for(int i=0;i<n;i++){
          st.insert(arr[i]);
      }
      int longest=0;
      for(auto it:st){
          if(st.find(it-1)==st.end()){
              int cnt=1;
              int x=it;
              while(st.find(x+1)!=st.end()){
                  cnt=cnt+1;
                  x=x+1;
              }
              longest=max(longest,cnt);
          }
      }
      return longest;
    }
