// Last updated: 19/03/2026, 23:23:48
1class Solution {
2public:
3    string convert(string s, int numRows) {
4        if(numRows==1)return s;
5        string row = "";
6        int n = s.size();
7        row.append(n,'#');
8        vector<string> mat(numRows,row);
9        
10        int k = 0;
11        int i=0;
12        int j =0;
13        int per =1;
14        int dia =0;
15
16        while(k!=n){
17            mat[i][j]=s[k];
18            if(i==mat.size()-1 ){
19                dia=1;
20                per=0;
21
22            }
23            if(i==0){
24                dia =0;
25                per =1;
26            }
27            if(per){
28                i++;
29            }
30            if(dia){
31                i--;
32                j++;
33            }
34            k++;
35
36
37        }
38         k =n;
39        string res="";
40        for(int i =0;i<mat.size()&&k;i++){
41            for(int j = 0; j<mat[0].size()&&k;j++){
42                if(mat[i][j]!='#'){
43                    res+=mat[i][j];
44                }
45            }
46        }
47        return res;
48
49
50        
51    }
52};