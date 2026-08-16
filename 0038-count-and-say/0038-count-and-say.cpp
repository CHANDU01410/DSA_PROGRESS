class Solution {
public:
    string countAndSay(int n) {
        string current ="1";
       
        while(n>1){
string next="";
int i=0;
while(i<current.size()){
    int count=1;
    while(i+1<current.size()&&current[i]==current[i+1]){
        count++;
        i++;
    }
    next+=to_string(count);
    next+=current[i];
    i++;
}
current=next;
n--;
        }
        return current;

    }
};