#include <iostream>
#include <string>

using namespace std;

class Solution{
    public:
    string str;
    string formatting(int num)
    {
        int i, j, k;
        i = num / 100;
        j = (num % 100)/10;
        k = (num % 10);
        for (int d = 0; d < i ; d++)
        {
            str += 'B';
        } 
        for (int d = 0; d < j ; d++)
        {
            str += 'S';
        }
        for (int d = 1; d < k + 1;d++)
        {
            str += to_string(d);
        } 
        return str;
    }
};

int main(void)
{
    int nums = 0;
    Solution form;
    cin >> nums;
    cout << form.formatting(nums);
    return 0;
}