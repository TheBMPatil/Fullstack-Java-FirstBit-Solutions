#include <bits/stdc++.h>
using namespace std;

void getIndices(string *arr, string start, string dest, int &sInd, int &eInd)
{
    // cout << "\nInside getIndices....";
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == start)
        {
            sInd = i;
        }
        else if (arr[i] == dest)
        {
            eInd = i;
        }
    }
    cout << "\nSind : " << sInd;
    cout << "\nEind : " << eInd;
}

double calDist(int &start, int &stop, double *dist)
{
    // cout << "\nInside Cal Dist....";

    double totalDist = 0.0;

    for (int i = start; i < stop; i++)
    {
        if (i == 5)
        {
            i = 0;
        }
        totalDist += dist[i];
    }
    // cout << "\nTotal Dist : " << totalDist;

    return totalDist;
}

double calculateFare(double *dist, string *strr)
{
    string start, dest;
    cout << "\nEnter Your onboarding stop : ";
    cin >> start;
    // cout << "\nEntered start :  " << start;
    cout << "\nEnter Your Destination stop : ";
    cin >> dest;
    // cout << "\nEntered dest :  " << dest;

    int sInd = 0, end = 0;
    getIndices(strr, start, dest, sInd, end);

    double totalDist = calDist(sInd, end, dist);

    double fare = (totalDist / 100) * 0.50;
    return round(fare);
}

int main()
{
    int size = 5;
    string BusStops[5] = {"A", "B", "C", "D", "F"};
    double distances[5] = {100, 200, 500, 300, 600};

    double fare = calculateFare(distances, BusStops);
    cout << "\nTotalFare : " << fare;

    return 0;
}