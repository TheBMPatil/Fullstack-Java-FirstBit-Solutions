#include <bits/stdc++.h> //Includes aall the standsrd libraries of CPP
using namespace std;     // "std:: " have to use scope resolution fromstd class to use cin cout functions....  so this line makes that easy.

// Learning Pairs
void learnPairs()
{
    // Pair
    pair<int, int> p = {10, 20};
    cout << "\nFirst :" << p.first << "\tSecond :" << p.second << endl;

    // Nested Pair
    pair<int, pair<int, float>> pf = {12, {22, 22.69}};
    cout << "\nFirst :" << pf.first << "\tSecond.First :" << pf.second.first << "\tSecond.Second :" << pf.second.second << endl;

    // Array of pairs
    pair<int, char> arr[26] = {{1, 'A'}, {2, 'B'}, {3, 'C'}, {4, 'D'}, {5, 'E'}, {6, 'F'}, {7, 'G'}, {8, 'H'}, {9, 'I'}, {10, 'J'}, {11, 'K'}, {12, 'L'}, {13, 'M'}, {14, 'N'}, {15, 'O'}, {16, 'P'}, {17, 'Q'}, {18, 'R'}, {19, 'S'}, {20, 'T'}, {21, 'U'}, {22, 'V'}, {23, 'W'}, {24, 'X'}, {25, 'Y'}, {26, 'Z'}};
    for (int i = 0; i < 26; i++)
    {
        cout << "\nFirst :" << arr[i].first << "\tSecond :" << arr[i].second;
    }
}

void printVector(vector<int> nums)
{
    for (auto it : nums)
    {
        cout << it << " ";
    }
}

void printList(list<int> nums)
{
    for (auto it : nums)
    {
        cout << it << " ";
    }
}

void printDeque(deque<int> nums)
{
    for (auto it : nums)
    {
        cout << it << " ";
    }
}

void learnVectors()
{
    vector<int> num;
    num.push_back(10);
    cout << num[0] << endl;
    num.emplace_back(12);
    cout << num[1] << endl;

    vector<pair<int, int>> pairVec;
    pairVec.push_back({12, 14});
    cout << "Vector of pair push back: " << pairVec[0].first << ":" << pairVec[0].second << endl;
    pairVec.emplace_back(343, 354);
    cout << "Vector of pair emplace: " << pairVec[1].first << ":" << pairVec[1].second << endl;

    // initializatio
    // vector<int> initVec(5);
    vector<int> initVec(5, 20);
    for (int i = 0; i < 5; i++)
    {
        cout << initVec[i] << "\t";
    }

    cout << endl;

    // Iterator
    // vector<data_type>::iterator it_name = vec_name.begin();

    // Copy vector
    vector<int> nums(1);
    nums.emplace_back(10);
    nums.emplace_back(90);
    nums.emplace_back(30);
    nums.emplace_back(40);
    nums.emplace_back(50);
    // vector<int>::iterator it = nums.begin();
    // cout << "Using Iterator :" << *it << endl;
    // cout << "Using Iterator +1 :" << *(++it) << endl;
    // it = it + 1;
    // cout << "Using Iterator +2 :" << *(it) << endl;

    // cout << "Vector using loop" << endl;
    // for (it; it != nums.end(); it++)
    // {
    //     cout << *it << "\t";
    // }

    // cout << "Vector using loop" << endl;
    // for (auto it = nums.begin(); it != nums.end(); it++)
    // {
    //     cout << *it << "\t";
    // }

    cout << "Vector using loop" << endl;
    for (auto it : nums)
    {
        cout << it << " ";
    }

    nums.erase(nums.begin());
    cout << "\nVector After Erase begin" << endl;
    for (auto it : nums)
    {
        cout << it << " ";
    }

    nums.erase(nums.end() - 1);
    cout << "\nVector After Erase end" << endl;
    for (auto it : nums)
    {
        cout << it << " ";
    }

    nums.erase(nums.begin() + 3, nums.end());
    cout << "\nVector After Erase start- end" << endl;
    for (auto it : nums)
    {
        cout << it << " ";
    }

    // Insertion in Vector
    vector<int> v(2, 96);
    cout << "\nInitial vectot" << endl;
    printVector(v);

    v.insert(v.begin(), 300);
    cout << "\nAfter insert 300" << endl;
    printVector(v);

    v.insert(v.begin() + 1, 200);
    cout << "\nAfter insert 200 at begin +1 :" << endl;
    printVector(v);

    v.insert(v.begin() + 2, 2, 50);
    cout << "\nAfter insert v.begin() + 2, 2, 50 :" << endl;
    printVector(v);

    vector<int> copy(2, 88);
    v.insert(v.begin(), copy.begin(), copy.end());
    cout << "\nAfter insert v.begin(), copy.begin(), copy.end() :" << endl;
    printVector(v);

    cout << "\n\nSize of vctors :" << endl;
    cout << "Nums :" << nums.size() << endl;
    cout << "Num :" << num.size() << endl;
    cout << "v :" << v.size() << endl;
    cout << "pairVec :" << pairVec.size() << endl;
    cout << "copy :" << copy.size() << endl;

    cout << "\n\nBefore V :" << endl;
    printVector(v);
    v.pop_back();
    cout << "\nAfter pop_back() on V :" << endl;
    printVector(v);

    // Swap
    vector<int> v1(5, 7);
    vector<int> v2(10, 11);
    cout << "\n\n\nBefore swap V1 :" << endl;
    printVector(v1);
    cout << "\nV2 :" << endl;
    printVector(v2);
    v1.swap(v2);
    cout << "\nAfter swap V1 :" << endl;
    printVector(v1);
    cout << "\nV2 :" << endl;
    printVector(v2);

    // clear
    cout << "\n\n\n\nBefore clear Vector :" << endl;
    printVector(v2);
    v2.clear();
    // empty
    cout << "\nAfter clear Vector empty status :" << v2.empty() << endl;
    printVector(v2);

    // cout << "\n empty result :" << v.empty();
}

void learnList()
{
    list<int> ls;
    cout << "\nList Push Back :" << endl;
    ls.push_back(2);
    printList(ls);

    cout << "\nList Emplace Back :" << endl;
    ls.emplace_back(4);
    printList(ls);

    cout << "\nList Push Front :" << endl;
    ls.push_front(5);
    printList(ls);

    cout << "\nList Emplace Front :" << endl;
    ls.emplace_front(44);
    printList(ls);
}

void learnDeque()
{
    deque<int> deq;
    cout << "\nDeque Push Back :" << endl;
    deq.push_back(2);
    printDeque(deq);

    cout << "\nDeque Emplace Back :" << endl;
    deq.emplace_back(4);
    printDeque(deq);

    cout << "\nDeque Push Front :" << endl;
    deq.push_front(5);
    printDeque(deq);

    cout << "\nDeque Emplace Front :" << endl;
    deq.emplace_front(44);
    printDeque(deq);

    cout << "\nDeque Pop Back :" << endl;
    deq.pop_back();
    printDeque(deq);

    cout << "\nDeque Pop Front :" << endl;
    deq.pop_front();
    printDeque(deq);

    cout << "\nDeque  Front :" << endl;
    cout << deq.front();
    cout << "\nDeque  Back :" << endl;
    cout << deq.back();
    // printDeque(deq);
}



int main()
{
    cout << "Shree Ganesh" << endl;
    learnDeque();
    // learnList();
    // learnVectors();
    // learnPairs();
    return 0;
}