class Solution {
public:

    string encode(vector<string>& strs) {
        string result = "";
        for(string s: strs){
            result += to_string(s.length())+"#"+s;
        }
        return result;


    }

    vector<string> decode(string s) {
        vector<string>result;
        int i =0;
        while(i < (int)s.length()){
            int j = i;
            while(j < s.length() && s[j] != '#') j++;
            if (j == s.length()) break;
            int len = stoi(s.substr(i,j-i));
            j++;
            string word = s.substr(j,len);
            result.push_back(word);
            i = j+len;

        }
        return result;


    }
};
