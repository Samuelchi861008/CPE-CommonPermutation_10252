/* **************************************************************************

    * File Name : Common_Permutation.cpp

    * Creation Date : 2018-09-04 18:08:55

    * Last Modified : 2018-09-07 10:23:58

    * Created By : Samuel Chi <Yu-Ning Chi>

************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
    string s1,s2; //兩輸入字串
    int countS1[26], countS2[26]; //分別計算兩字串的文字個數並存入陣列
    int min; //最小值
    char ans; //最後結果
    
    while(cin >> s1)
    {
        cin >> s2;
        for(int i = 0; i < 26; i++) //初始化兩陣列
            countS1[i] = countS2[i] = 0;
        for(int j = 0; s1[j] != '\0'; j++) //計算第一字串的每個文字數
            countS1[s1[j] - 'a']++;
        for(int k = 0; s2[k] != '\0'; k++) //計算第二字串的每個文字數
            countS2[s2[k] - 'a']++;
        for(int l = 0; l < 26; l++)
            if(countS1[l] == 0 || countS2[l] == 0)
                continue; //若其中一字串沒有某個文字，則不做任何動作
            else
            {
                ans = 'a' + l; //轉換成文字
                min = (countS1[l] < countS2[l]) ? countS1[l] : countS2[l];
                //比較哪一字串的同一字母數最少
                for(int m = 0; m < min; m++)
                    cout << ans; //按照min的結果印出文字數
            }
        cout << "\n";
    }
    return 0;
}
