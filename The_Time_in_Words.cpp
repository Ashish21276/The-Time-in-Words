#include <bits/stdc++.h>

using namespace std;

string timeInWords(int h, int m)
{
 
    vector<string> time = {"ashish", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "twenty one", "twenty two", "twenty three", "twenty four", "twenty five", "twenty six", "twenty seven", "twenty eight", "twenty nine"};
    if (h == 12 && m > 30)
    {
        if (m == 45)
        {
            string q = "quarter";
            return q + " to one";
        }
        return time[60 - m] + " minutes to " + "one";
    }
    if (m == 0 || m == 30)
    {
        if (m == 0)
            return time[h] + " o' clock";
        else
            return "half past " + time[h];
    }
    if (m == 15 || m == 45)
    {
        string q = "quarter";
        if (m == 15)
            return q + " past " + time[h];
        else
            return q + " to " + time[h + 1];
    }
    if (m < 30)
    {
        if (m == 1)
            return time[m] + " minute past " + time[h];

        return time[m] + " minutes past " + time[h];
    }
    if (m > 30)
    {
        return time[60 - m] + " minutes to " + time[h + 1];
    }
    return " ";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int h;
    cin >> h;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int m;
    cin >> m;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = timeInWords(h, m);

    fout << result << "\n";

    fout.close();

    return 0;
}
