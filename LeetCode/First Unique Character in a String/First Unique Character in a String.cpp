class Solution {
  public:
      int firstUniqChar(string s) 
      {
          int x = 1;
          for (int i = 0; i < s.size(); i++)
          {
              for (int j = 0; j < s.size(); j++)
              {
                  if (s[i] == s[j] && i != j)
                  {
                      x = 0;
                      break;
                  } 
              }
              if (x == 1)
                  return i;
              x = 1;
          }
          return -1;
      }
};
