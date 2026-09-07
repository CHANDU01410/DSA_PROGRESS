class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i=0;
   while(i<strs[0].size()){
    char c=strs[0][i];
for(int j=1;j<strs.size();j++){
    if(i>=strs[j].size()||strs[j][i]!=c){
        return strs[0].substr(0,i);
    }
}
i++;
   }
   return strs[0];
    }
};