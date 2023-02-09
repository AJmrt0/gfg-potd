class Solution{
public:
    int maxInstance(string s){

        map<char,int>m;

        for(int i=0;i<s.length();i++)

        {

            m[s[i]]++;

        }

        

        return min({m['b'],m['a'],m['l']/2,m['o']/2,m['n']});

        

    }
};
