class Solution {
public:
    int strStr(string haystack, string needle) {

      int f = haystack.size();
        int c = needle.size();
        for (int i = 0; i <= f - c; ++i)
        {
            int j = 0;
            for ( ;j < c; ++j)
            {
                if (needle[j] != haystack[i+j])
                    break;
            }
            if (j == c)
                return i;
        }
        return -1;

    }
};
