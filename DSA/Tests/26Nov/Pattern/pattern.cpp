#include <iostream>
using namespace std;

int min(int a, int b)
{
    return (a < b) ? a : b;
}

void Pattern(int n)
{
    int cnt = n;
    n = (n * 2) - 2;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            int atIndex = cnt - min(min(i, j), min(n - i, n - j));
            cout << atIndex << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    Pattern(n);
    return 0;
}


//Output 


// PS D:\Fullstack-Java-FirstBit-Solutions>  & 'c:\Users\bhagv\.vscode\extensions\ms-vscode.cpptools-1.22.11-win32-x64\debugAdapters\bin\WindowsDebugLauncher.exe' '--stdin=Microsoft-MIEngine-In-pa3x0jp4.ixy' '--stdout=Microsoft-MIEngine-Out-pgatxqoz.zfb' '--stderr=Microsoft-MIEngine-Error-1peb2g0t.wwa' '--pid=Microsoft-MIEngine-Pid-iywcrojr.pj5' '--dbgExe=C:\TDM-GCC-64\bin\gdb.exe' '--interpreter=mi' 
// Enter n: 7
// 7 7 7 7 7 7 7 7 7 7 7 7 7 
// 7 6 6 6 6 6 6 6 6 6 6 6 7 
// 7 6 5 5 5 5 5 5 5 5 5 6 7 
// 7 6 5 4 4 4 4 4 4 4 5 6 7 
// 7 6 5 4 3 3 3 3 3 4 5 6 7 
// 7 6 5 4 3 2 2 2 3 4 5 6 7 
// 7 6 5 4 3 2 1 2 3 4 5 6 7 
// 7 6 5 4 3 2 2 2 3 4 5 6 7 
// 7 6 5 4 3 3 3 3 3 4 5 6 7 
// 7 6 5 4 4 4 4 4 4 4 5 6 7 
// 7 6 5 5 5 5 5 5 5 5 5 6 7 
// 7 6 6 6 6 6 6 6 6 6 6 6 7 
// 7 7 7 7 7 7 7 7 7 7 7 7 7 
// PS D:\Fullstack-Java-FirstBit-Solutions> 