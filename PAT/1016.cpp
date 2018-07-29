#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution{
    public:
    int sumAB(vector<string> &str)
    {
        int i = 0, j = 0, k = 0, sum1 = 0,sum2=0;
        int s1 = (int)str[1][0]-48;
        int s2 = (int)str[3][0]-48;
        while(str[0][i] != '\0')
        {
            if(str[0][i] == str[1][0])
            {
                j++;
            }
            i++;
        }
        i = 0;
        while(str[2][i] != '\0')
        {
            if(str[2][i] == str[3][0])
            {
                k++;
            }
            i++;
        }
        for (i = 0; i < j;i++)
        {   
                sum1 = (10 * sum1)+s1;
        }
        for (i = 0; i < k;i++)
        {
            sum2 = (10 * sum2)+s2;
        }
            return sum1+sum2;
    }
};

int main(void)
{
    Solution sum;
    vector<string> _str(4);  //初始化迭代器
    cin >> _str[0];
    cin >> _str[1];
    cin >> _str[2];
    cin >> _str[3];
    cout << sum.sumAB(_str);
    return 0;
}