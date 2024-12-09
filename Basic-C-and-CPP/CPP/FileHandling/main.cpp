#include <bits/stdc++.h>
using namespace std;
int main()
{
    string x = "Bhagvaasasdt";
    ofstream fout("data.txt", ios_base::binary| ios_base::app);

    fout.write((char*)&x, sizeof(x));
    fout.close();

    return 0;
}