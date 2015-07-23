class Solution {
public:
    int minDistance(string word1, string word2) {
    int m = word1.length();
    int n = word2.length();
    int s[m+1][n+1];
    for(int i=0; i<m+1; i++)
        s[i][0] = i;
    for(int i=0; i<n+1; i++)
        s[0][i] = i;
    for(int i=1; i<m+1; i++)
        for(int j=1; j<n+1; j++)
            if(word1[i-1] == word2[j-1])
                s[i][j] = s[i-1][j-1];
            else if (s[i-1][j] < s[i][j-1] && s[i-1][j] < s[i-1][j-1])
                s[i][j] = s[i-1][j]+1;
            else if (s[i][j-1] < s[i-1][j-1])
                s[i][j] = s[i][j-1]+1;
            else
                s[i][j] = s[i-1][j-1]+1;
    return s[m][n];

    }
};
