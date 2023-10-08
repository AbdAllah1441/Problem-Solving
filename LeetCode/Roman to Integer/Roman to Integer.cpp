class Solution {
  public:
      int romanToInt(string s) 
      {
          int x = 0;
          for (int i = 0; i < s.length(); i++)
          {
              if (s[i] == 'I')
              {
                  if (s[i + 1] == 'V' || s[i + 1] == 'X')
                      x--;
                  else
                      x++;
              }
              else if (s[i] == 'V')
              {
                  x = x + 5;
              }
              else if (s[i] == 'X')
              {
                  if (s[i + 1] == 'L' || s[i + 1] == 'C')
                      x = x - 10;
                  else
                      x = x + 10;
              }
              else if (s[i] == 'L')
              {
                  x = x + 50;
              }
              else if (s[i] == 'C')
              {
                  if (s[i + 1] == 'D' || s[i + 1] == 'M')
                      x = x - 100;
                  else
                      x = x + 100;
              }
              else if (s[i] == 'D')
              {
                  x = x + 500;
              }
              else if (s[i] == 'M')
              {
                  x = x + 1000;
              }
          }
          return x;
      }
};
