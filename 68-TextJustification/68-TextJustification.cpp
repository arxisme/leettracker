// Last updated: 19/03/2026, 21:17:59
class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
       int n = words.size();
       int i = 0;
       vector<string> res;

       while(i<n){
        int j = i;
        int linelen = 0;
        int gaps=0;
        while(j<n && linelen+j-i+words[j].size()<=maxWidth){
            linelen+=words[j].size();
           
            j++;
            

        }
        gaps=j-i-1;
        string line= "";
        if(gaps ==0 || j==n){
            for(int k = i; k<j;k++){
                line+=words[k];
                if(k!=j-1){
                    line+=' ';
                }
            }
            line.append(maxWidth-line.size(),' ');

        }
        else{
            int totalSpace = maxWidth-linelen;
            int spaceeach = totalSpace/gaps;
            int extra= totalSpace%gaps;
            for(int k =i; k<j;k++){
                line+=words[k];
                if(k!=j-1){
                line.append(spaceeach, ' ');
                line.append(extra-->0?1:0,' ');
                }
            }
        }
        res.push_back(line);
        i=j;
       }
       return res;
    }
};