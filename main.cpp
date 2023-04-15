#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

//=============//         //==============//
//=============//  MINE  //==============//
//=============//       //============= //

int checkZeros(int arr[], int size)
{
    int zeros = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zeros++;
        }
    }
    return zeros;
}

int checkMostCommon(int arr[], int size)
{
    int mostCommon = 0;
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            count++;
        }
        else
        {
            if (count > mostCommon)
            {
                mostCommon = count;
            }
            count = 0;
        }
    }
    return mostCommon;
}

int numberOfDifferentDigits(int arr[], int size)
{
    int count = 0;
    int _0 = 0, _1 = 0, _2 = 0, _3 = 0, _4 = 0, _5 = 0, _6 = 0, _7 = 0, _8 = 0, _9 = 0;
    for (int i = 0; i < size; i++)
    {
        switch (arr[i])
        {
        case 0:
            if (_0 == 0)
            {
                count++;
                _0++;
            }
            break;
        case 1:
            if (_1 == 0)
            {
                count++;
                _1++;
            }
            break;

        case 2:
            if (_2 == 0)
            {
                count++;
                _2++;
            }
            break;
        case 3:
            if (_3 == 0)
            {
                count++;
                _3++;
            }
            break;
        case 4:
            if (_4 == 0)
            {
                count++;
                _4++;
            }
            break;
        case 5:
            if (_5 == 0)
            {
                count++;
                _5++;
            }
            break;
        case 6:
            if (_6 == 0)
            {
                count++;
                _6++;
            }
            break;
        case 7:
            if (_7 == 0)
            {
                count++;
                _7++;
            }
            break;
        case 8:
            if (_8 == 0)
            {
                count++;
                _8++;
            }
            break;
        case 9:
            if (_9 == 0)
            {
                count++;
                _9++;
            }
            break;
        }
    }
    return count;
}

template <typename T>
ull closestSquareRoot(T number)
{
    ull root = sqrt(number);
    while (root * root <= number)
        root++;

    return root - 1;
}

template <typename T>
T mostLeftDigit(T number)
{
    while (number >= 10)
    {
        number /= 10;
    }
    return number;
}

template <typename T>
T mostRightDigit(T number)
{
    return number % 10;
}

template <typename T>
T numberOfDigits(T number)
{
    T count = 0;
    while (number != 0)
    {
        number /= 10;
        count++;
    }
    return count;
}

template <typename T>
T containsDigit(T number, T digit)
{
    while (number != 0)
    {
        if (number % 10 == digit)
            return true;
        number /= 10;
    }
    return false;
}

/* Returns 1 if y is a power of x */
bool isPower(int x, long int y)
{
    // The only power of 1 is 1 itself
    if (x == 1)
        return (y == 1);

    // Repeatedly compute power of x
    long int pow = 1;
    while (pow < y)
        pow *= x;

    // Check if power of x becomes y
    return (pow == y);
}

template <typename T>
T isIncremental(T arr[], T size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != arr[i + 1] - 1)
        {
            return false;
        }
    }
    return true;
}

// number of even numbers in array
template <typename T>
T numberOfEven(T arr[], T size)
{
    T count = 0;
    for (T i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count++;
        }
    }
    return count;
}

// number of odd numbers in array
template <typename T>
T numberOfOdd(T arr[], T size)
{
    T count = 0;
    for (T i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
        {
            count++;
        }
    }
    return count;
}

template <typename T>
T numOfUpper(T s)
{
    int upper = 0;
    for (int i = 0; i < s.length(); i++)
    {
        // s[i] > 'Z' && lower++;
        s[i] <= 'Z' && upper++;
    }

    return upper;
}

template <typename T>
T numOfLower(T s)
{
    int lower = 0;
    for (int i = 0; i < s.length(); i++)
    {
        s[i] > 'Z' && lower++;
        // s[i] <= 'Z' && upper++;
    }

    return lower;
}

template <typename _word, typename _result>
void numOfUpperAndLower(_word s, _result cases)
{
    int lower = 0, upper = 0;
    for (int i = 0; i < s.length(); i++)
    {
        s[i] > 'Z' && lower++;
        s[i] <= 'Z' && upper++;
    }

    cases[0] = lower;
    cases[1] = upper;
}

template <typename T>
T inputReturn(T &x)
{
    cin >> x;
    return x;
}
//=============//         //==============//
//=============//  Links  //==============//
//=============//       //============= //

// https://codeforces.com/contest/1809/problem/A
void Garland();

// https://codeforces.com/problemset/problem/1809/E
void TwoTanks();

// https://codeforces.com/contest/1809/problem/B
void PointsOnPlane();

// https://codeforces.com/problemset/problem/1809/G
void Prediction();

// https://codeforces.com/problemset/problem/1808/A
void LuckyNumbers();

// https://codeforces.com/problemset/problem/4/A
void Watermelon();

// https://codeforces.com/problemset/problem/1/A
void TheatreSquare();

// https://codeforces.com/problemset/problem/71/A
void WayTooLongWords();

// https://codeforces.com/problemset/problem/231/A
void Team();

// https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/E
void AlternatingArray();

// https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/A
void SquareOrRectangle();

// https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/B
void Reversing();

// https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/C
void ChooseElements();

// https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/D
void CountingElements();

// https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/F
void FrontEnd();

// https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/G
void EvenHateOdd();

// https://codeforces.com/problemset/problem/236/A
void BoyOrGirl();

// https://codeforces.com/problemset/problem/282/A
void Bitpp();

// https://codeforces.com/problemset/problem/1800/A
void IsItaCat();

// Given n of dices, is the number x have a prop to show up when we toes up the n dices
void DiceProbability();

// https://codeforces.com/problemset/problem/158/A
void NextRound();

// https://codeforces.com/problemset/problem/50/A
void DominoPiling();

// https://codeforces.com/problemset/problem/263/A
void BeautifulMatrix();

// https://codeforces.com/problemset/problem/112/A
void PetyaAndStrings();

// https://codeforces.com/problemset/problem/339/A
void HelpfulMaths();

// https://codeforces.com/problemset/problem/118/A
void StringTask();

// https://codeforces.com/problemset/problem/281/A
void WordCapitalization();

// https://codeforces.com/problemset/problem/118/A
void StringTask();

// https://codeforces.com/problemset/problem/266/A
void StonesOnTheTable();

// https://codeforces.com/problemset/problem/791/A
void BearAndBigBrother();

// https://codeforces.com/problemset/problem/546/A
void SoldierAndBananas();

// https://codeforces.com/problemset/problem/59/A
void Word();

// https://codeforces.com/problemset/problem/69/A
void YoungPhysicist();

// https://codeforces.com/problemset/problem/734/A
void AntonAndDanik();

//=============//         //==============//
//=============//  MAIN  //==============//
//=============//       //============= //

int main()
{

    // Garland();
    // PointsOnPlane();
    // Prediction();
    // LuckyNumbers();
    // Watermelon();
    // TheatreSquare();
    // WayTooLongWords();
    // Team();
    // AlternatingArray();
    // SquareOrRectangle();
    // Reversing();
    // ChooseElements();
    // CountingElements();
    // FrontEnd();
    // EvenHateOdd();
    // BoyOrGirl();
    // Bitpp();
    // IsItaCat();
    // DiceProbability();
    // NextRound();
    // DominoPiling();
    // BeautifulMatrix();
    // PetyaAndStrings(); // !
    // HelpfulMaths();
    // WordCapitalization();
    // StringTask();
    // StonesOnTheTable();
    // BearAndBigBrother();
    // SoldierAndBananas();
    // Word();
    // YoungPhysicist();
    // AntonAndDanik();

    return 0;
}

/*
void AntonAndDanik()
{
    int number_of_games;
    cin >> number_of_games;
    int a = 0, d = 0;
    char game_winner;
    while (number_of_games--)
    {
        cin >> game_winner;
        game_winner == 'A' ? a++ : d++;
    }

    (a > d) ? cout << "Anton" : (a < d) ? cout << "Danik"
                                        : cout << "Friendship";
}
*/

/*
void YoungPhysicist()
{
    ll ctr1 = 0, ctr2 = 0, ctr3 = 0;
    ll n, in;
    cin >> n;

    while (n--)
    {
        // sum the input directly
        for (int i = 0; i < 3; i++)
        {
            cin >> in;
            i == 0 ? ctr1 += in : i == 1 ? ctr2 += in
                                         : ctr3 += in;
        }
    }
    !ctr1 && !ctr2 && !ctr3 ? cout << "YES" : cout << "NO";
}
*/

/*
void Word()
{
    string input; // declare a string variable
    cin >> input; // read a string from standard input

    int cases[2];                     // declare a vector of integers with size of 2
    numOfUpperAndLower(input, cases); // call a function to store the number of upper and lower cases in the vector
    cout << "lower: " << cases[0] << endl;
    cout << "upper: " << cases[1] << endl;
    int (*opr)(int);                                           // declare a function pointer
    cases[1] > cases[0] ? opr = toupper : opr = tolower;       // assign the function pointer to the appropriate function
    transform(input.begin(), input.end(), input.begin(), opr); // call transform function to apply the function pointer to the string

    cout << input; // write the string to standard output
}
*/

/*
void SoldierAndBananas()
{
    int k, n, w;
    cin >> k >> n >> w;
    int sum = 0;
    for (int i = 1; i <= w; i++)
    {
        sum += i * k;
    }
    if (sum > n)
    {
        cout << sum - n;
    }
    else
    {
        cout << 0;
    }
}
*/

/*
void BearAndBigBrother()
{
    int a, b;
    cin >> a >> b;
    int count = 0;
    while (a <= b)
    {
        a *= 3;
        b *= 2;
        count++;
    }
    cout << count;
}
*/

/*
void StonesOnTheTable()
{
    int n;
    int count = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        s[i] == s[i + 1] && count++;
    }
    cout << count;
}
*/

/*
void StringTask()
{
    char vowels[] = {'a', 'o', 'y', 'e', 'u', 'i'};
    char input;
    string s;

    while (cin >> input)
    {
        if (input >= 'A' && input <= 'Z')
        {
            input += 32;
        }

        if (find(begin(vowels), end(vowels), input) == end(vowels))
        {
            s += '.';
            s += input;
        }
    }

    transform(s.begin(), s.end(), s.begin(), ::tolower);

    cout << s << endl;
}
*/

/*
void WordCapitalization()
{
    string s;
    cin >> s;
    transform(s.begin(), s.begin() + 1, s.begin(), ::toupper);
    cout << s;
}
*/

/*
void HelpfulMaths()
{
    string s1;
    cin >> s1;

    // split string into digits and sort them after every + sign
    vector<int> v;
    string s2 = "";
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] != '+')
        {
            s2 += s1[i];
        }
        else
        {
            v.push_back(stoi(s2));
            s2 = "";
        }
    }

    v.push_back(stoi(s2));

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
        if (i != v.size() - 1)
        {
            cout << "+";
        }
    }
}
*/

/*
void PetyaAndStrings()
{
    string s1, s2;
    int ctr1 = 0, ctr2 = 0;
    cin >> s1 >> s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    for (int i = 0; i < s1.size(); i++)
    {
        ((int)s1[i] > (int)s2[i]) && ctr1++;
        ((int)s1[i] < (int)s2[i]) && ctr2++;
    }
    if (ctr1 > ctr2)
    {
        cout << 1;
    }
    else if (ctr2 > ctr1)
    {
        cout << -1;
    }
    else
    {
        cout << 0;
    }
}
*/

/*
void BeautifulMatrix()
{

    int in;
    int weights[] = {4, 3, 2, 3, 4};
    int subs[] = {0, 1, 2, 1, 0};

    for (int i = 0; i < 25; i++)
    {
        cin >> in;
        if (in == 1)
        {
            cout << weights[i % 5] - subs[i / 5];
        }
    }
}
*/

/*
void DominoPiling()
{
    ll n, m;
    cin >> n >> m;
    cout << (n * m) / 2;
}
*/

/*
void NextRound()
{
    int n, k, ctr = 0;
    cin >> n >> k;
    int temp = n;
    vector<int> a;
    while (n--)
    {
        int in;
        cin >> in;
        a.push_back(in);
    }

    for (int i = 0; i < a.size(); i++)
        ((a[i] >= a[k - 1]) && (a[i] > 0)) && ctr++;
    cout << ctr;
}
*/

/*
void DiceProbability()
{
    ll n, x;
    cin >> n >> x;

    ((x < n) || (x > (n * 6))) ? cout << "NO" : cout << "YES";
}
*/

/*
void IsItaCat()
{
    int T;
    cin >> T;

    while (T--)
    {
        // take a string of length n
        int n;

        cin >> n;

        string s;
        cin >> s;

        // to lower
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        s.erase(unique(s.begin(), s.end()), s.end());

        cout << (s == "meow" ? "YES" : "NO") << endl;
    }
}
*/

/*
void Bitpp()
{
    int T, x = 0;
    cin >> T;
    while (T--)
    {

        string s;
        cin >> s;
        if (s[0] == '+' || s[2] == '+')
            x++;
        else
            x--;
    }
    cout << x;
}
*/

/*
void BoyOrGirl()
{
    list<char> l;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        l.push_back(s[i]);
    }
    l.sort();
    l.unique();

    l.size() % 2 == 0 ? cout << "CHAT WITH HER!" : cout << "IGNORE HIM!";
}
*/

/*
void EvenHateOdd()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        if (n % 2 == 1)
        {
            cout << -1 << endl;
            continue;
        }

        int count = 0;

        int even = numberOfEven(arr, n), odd = numberOfOdd(arr, n);
        if (even == odd)
        {
            cout << 0 << endl;
        }
        else if (even > odd)
        {
            cout << (n / 2) - odd << endl;
        }
        else
        {
            cout << (n / 2) - even << endl;
        }
    }
}
*/

/*
void FrontEnd()
{
    int n;
    cin >> n;
    int left = 0, right = n - 1;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            cout << arr[left++] << " ";

        else
            cout << arr[right--] << " ";
    }
}
*/

/*
void CountingElements()
{
    int n;
    cin >> n;
    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    sort(arr.begin(), arr.end());
    // make another array that is a mask for the vector, for every element make the index equal 1, if the element is equal to the next make the next equal to 2 and so on, if you find a new element make that new element equal to 1
    int mask[n];
    for (int i = 0; i < n; i++)
    {
        mask[i] = 1;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            mask[i + 1] = mask[i] + 1;
        }
    }

    // if the next item equals the current item + 1, then add to a counter the value in the same index in the mask array
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] + 1 == arr[i + 1])
        {
            counter += mask[i];
        }
    }

    cout << counter << endl;
}
*/

/*
void ChooseElements()
{
    ll lengthOfArray, numberOfDigits;
    cin >> lengthOfArray >> numberOfDigits;

    ll arr[lengthOfArray];

    for (int i = 0; i < lengthOfArray; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + lengthOfArray);

    ll count = 0;
    while (numberOfDigits--)
    {
        (arr[lengthOfArray - 1] > 0) && (count += arr[lengthOfArray - 1]);
        lengthOfArray--;
    }
    cout << count << endl;
}
*/

/*
void Reversing()
{
    int T;
    cin >> T;
    int n[T];

    for (int i = 0; i < T; i++)
    {
        cin >> n[i];
        if (n[i] == 0)
        {
            reverse(n, n + i);
        }
    }
    for (int j = 0; j < T; j++)
    {
        cout << n[j] << " ";
    }
}
*/

/*
void SquareOrRectangle()
{
    int T, n1, n2;
    cin >> T;
    while (cin >> n1 >> n2)
    {
        n1 == n2 ? cout << "Square" << endl : cout << "Rectangle" << endl;
        // (std::cin >> std::ws, std::cin).get() == (std::cin >> std::ws, std::cin).get() ? cout << "Square" << endl : cout << "Rectangle" << endl;
        if (T-- == 0)
            break;
    }
}
*/

/*
void AlternatingArray()
{
    int T;

    cin >> T;

    int ctr_1 = 0, ctr_0 = 0, n;

    for (int i = 0; i < T; i++)
    {
        cin >> n;

        n > 0 ? n = 1 : n = 0;

        n != i % 2 && ctr_0++;
        n != (i + 1) % 2 && ctr_1++;
    }

    cout << min(ctr_0, ctr_1) << endl;
}

*/

/*
void Team()
{
    int n, ctr = 0;
    cin >> n;
    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b + c >= 2)
        {
            ctr++;
        }
    }
    cout << ctr << endl;
}
*/

/*
void WayTooLongWords()
{
    int T;
    cin >> T;
    while (T--)
    {
        string str;
        cin >> str;
        if (str.length() > 10)
        {
            cout << str[0] << str.length() - 2 << str[str.length() - 1] << endl;
        }
        else
        {
            cout << str << endl;
        }
    }
}
*/

/*
void TheatreSquare()
{
    ull n, m, a;        // declare the variables
    cin >> n >> m >> a; // read the input

    ull x = n / a; // calculate the number of a's in the width
    ull y = m / a; // calculate the number of a's in the height

    if (n % a != 0) // check if there is a remainder (i.e. n is not divisible by a)
        x++;        // add an extra a to the width
    if (m % a != 0) // check if there is a remainder (i.e. m is not divisible by a)
        y++;        // add an extra a to the height

    cout << x * y << endl; // output the number of a's
}
*/

/*
void Watermelon()
{
    int n;
    cin >> n;

    (n % 2 || n == 2) && cout << "NO";
    (n != 2 && !(n % 2)) && cout << "YES";
}
*/

/*
void LuckyNumbers()
{
    int T;
    cin >> T;
    while (T--)
    {
        int start, end;
        cin >> start >> end;

        if (end == start)
        {
            cout << start << endl;
            continue;
        }

        if ((end - start) >= 100)
        {
            while (end)
            {
                if (end % 100 == 90)
                {
                    cout << end << endl;
                    break;
                }
                end--;
            }
        }
        else
        {
            int min;
            while ((end > start) && end)
            {

            }
        }
    }
}
*/

/*
void Prediction()
{
    int n, k;

    cin >> n >> k;
    int T = n;

    // while(T--)

}
*/

/*
void PointsOnPlane()
{
    int T;
    cin >> T;
    if (T >= 1 && T <= pow(10, 4))
        while (T--)
        {
            ull numberOfChips;
            cin >> numberOfChips;
            if (numberOfChips == 0 || numberOfChips == 1)
            {
                cout << 0 << endl;
                continue;
            }

            ull res = 0;
            res = closestSquareRoot(numberOfChips);
            if ((res * res) == numberOfChips)
                cout << res - 1 << endl;
            else
                cout << res << endl;
        }
}
*/

/*
void Garland()
{
    int T;
    cin >> T;
    while (T--)
    {
        int bulbs;
        int size = 4;
        int bulb[size] = {0};
        int numberOfColors = 0;

        // get a 4 digits in bulbs and sepret them in bulb
        cin >>
            bulbs;
        for (int i = 0; i < size; i++)
        {
            bulb[i] = bulbs % 10;
            bulbs /= 10;
        }

        numberOfColors = numberOfDifferentDigits(bulb, size);

        sort(bulb, bulb + size);

        switch (numberOfColors)
        {
        case 1:
            cout << -1 << endl;
            break;
        case 2:
            if (bulb[0] == bulb[1] && bulb[2] == bulb[3])
                cout << 4 << endl;
            else
                cout << 6 << endl;
            break;
        default:
            cout << 4 << endl;
            break;
        }
    }
}
*/
