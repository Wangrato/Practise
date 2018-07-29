#include  <iostream>

using namespace std;

class Solution{
    public:
      int i = 0;
      int Callatz_thought(int num)
      {
          int temp = num;
          while(temp!=1)
          {
              if(!(temp&1))  //如果是偶数
              {
                  temp /= 2;
              }
              else 
              {
                  temp = 3 * temp + 1;
                  temp /= 2;
              }
              i++;
          }
          return i;
      }
};

int main()
{
    Solution Callatz;
    int i =0;
    cin >> i;

    cout<<Callatz.Callatz_thought(i);

    return 0;
}