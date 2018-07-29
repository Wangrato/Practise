#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution
{
    public:
    string ouput_PATest(string str)
    {
        vector<int> num(6);
        string _str;
        int i = 0;
        while (str[i] != '\0')
        {
            switch (str[i])
            {
            case 'P':
                num[0]++;
                break;
            case 'A':
                num[1]++;
                break;
            case 'T':
                num[2]++;
                break;
            case 'e':
                num[3]++;
                break;
            case 's':
                num[4]++;
                break;
            case 't':
                num[5]++;
                break;
            default:
                break;
            }
            i++;
        }
        while (num[0] != 0 || num[1] != 0 || num[2] != 0 || num[3] != 0 || num[4] != 0 || num[5] != 0)
        {
            if (num[0] != 0)
            {
                _str += 'P';
                if(num[0]>0)
                num[0]--;
            }
            if (num[1] != 0)
            {
                _str += 'A';
                if(num[1]>0)
                num[1]--;
            }
            if (num[2] != 0)
            {
                _str += 'T';
                if(num[2]>0)
                num[2]--;
            }
            if (num[3] != 0)
            {
                _str += 'e';
                if(num[3]>0)
                num[3]--;
            }
            if (num[4] != 0)
            {
                _str += 's';
                if(num[4]>0)
                num[4]--;
            }
            if (num[5] != 0)
            {
                _str += 't';
                if(num[5]>0)
                num[5]--;
            }
        }
        return _str;
    }
};

int main(void)
{
    Solution PAT;
    string str;
    cin >> str;
    cout << PAT.ouput_PATest(str);
    return 0;
}