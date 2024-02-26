/*
Multi line comment
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
using namespace std;

int lecture_1_TO_14()
{
    int myInt;
    myInt = 15;
    double myDouble = 3.1415926539;
    cout << myDouble << endl;

    char singleChar = 'a';
    cout << singleChar << endl;

    string myName = "Tim";
    cout << "Hello " << myName << endl;

    bool isRaining = false;
    cout << boolalpha;
    cout << isRaining << endl;

    int a = 10;
    int b = 3;
    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int quotient = a / b;
    int remainder = a % b;
    int result = 10;

    result += 15;
    result *= 3;

    cout << "Sum = " << sum << endl;
    cout << "Difference = " << difference << endl;
    cout << "product = " << product << endl;
    cout << "quotient = " << quotient << endl;
    cout << "remainder = " << remainder << endl;
    cout << "result = " << result << endl;

    int myInt_2 = 2;
    myInt_2++; // myInt_2 += 1; or ++myInt_2
    myInt_2--; // myInt_2 -= 1; or --myInt_2

    return 0;
}

int lecture_15()
{
    cout << boolalpha;

    int a = 15;
    int b = 20;
    bool areEqual = a == b;

    cout << (a < b) << endl;
    cout << areEqual << endl;

    return 0;
}

int lecture_16()
{
    bool p = true;
    bool q = false;

    cout << boolalpha;
    cout << (p && q) << endl;
    cout << (p || q) << endl;
    cout << !p << endl;

    return 0;
}

int lecture_17()
{
    const double MY_PI = 3.141592654;
    cout << MY_PI << endl;

    const string MY_NAME = "Tim";

    return 0;
}

int lecture_18()
{
    int age;
    string fullName;

    cout << "Please enter your name: " << endl;
    getline(cin, fullName);

    cout << "Enter your age: " << endl;
    cin >> age;
    cin.get(); // to avoid newline character consumption issue
    cout << "Your name is " << fullName << " and your age is " << age << endl;

    return 0;
}

float project_average_of_3()
{
    float num1;
    float num2;
    float num3;
    float average;

    cout << "Enter a real number " << endl;
    cin >> num1;
    cout << "Enter another real number " << endl;
    cin >> num2;
    cout << "Enter the final real number " << endl;
    cin >> num3;

    average = (num1 + num2 + num3) / 3;

    cout << "Average is " << average << endl;

    return average;
}

int project_madlibs()
{

    string adjective1;
    cout << "Please enter an adjective " << endl;
    getline(cin, adjective1);

    string girlsName;
    cout << "Please enter a girl's name " << endl;
    getline(cin, girlsName);

    string adjective2;
    cout << "Please enter an adjective " << endl;
    getline(cin, adjective2);

    string occupation;
    cout << "Please enter an occupation " << endl;
    getline(cin, occupation);

    string placeName;
    cout << "Please enter a town " << endl;
    getline(cin, placeName);

    cout << "There once was a " << adjective1
         << " girl named " << girlsName
         << " who was a " << adjective2
         << " " << occupation
         << " in the kingdom of " << placeName
         << "." << endl;

    return 0;
}

int lecture_23()
{
    int age = 15;
    if (age >= 16)
    {
        cout << "You can drive" << endl;
    }
    else
    {
        cout << "You can't drive yet" << endl;
    }

    for (int i = 1; i <= age; i++)
    {
        if (i < 5)
        {
            cout << "So cute" << endl;
        }
        else if (i <= 10)
        {
            cout << "5-10 " << endl;
        }
        else
        {
            cout << "Happy birthday " << i << endl;
        }
    }
    return 0;
}

int lecture_24()
{
    char grade;
    cout << "Please enter a letter grade" << endl;
    cin >> grade;

    switch (grade)
    {
    case 'A':
    case 'a': // fall through behaviour. that's why there's breaks
        cout << "Great job!" << endl;
        break;
    case 'B':
    case 'b':
        cout << "Good job!" << endl;
        break;
    case 'C':
    case 'c':
        cout << "Do better" << endl;
        break;
    case 'D':
    case 'd':
        cout << "You need help" << endl;
        break;
    case 'F':
    case 'f':
        cout << "You're failing'" << endl;
        break;
    default:
        cout << "You've entered an invalid grade" << endl;
    }
    return 0;
}

int lecture_24b()
{
    int age = 59;
    char gender = 'f';
    if ((gender == 'f' || gender == 'F') && age >= 60)
    {
        cout << "You qualify for the discount" << endl;
    }
    else
    {
        cout << "You do not qualify" << endl;
    }

    return 0;
}

int lecture_25()
{
    int count = 0;

    while (count < 10)
    {
        cout << count << endl;
        count++;
    }

    count = 15;

    do
    {
        cout << count << endl;
        count++;
    } while (count < 10);

    for (int i = 30; i < 40; i++)
    {
        cout << i << endl;
    }

    return 0;
}

int lecture_26()
{
    int count = 0;
    while (count < 10)
    {
        if (count % 2 == 1) // skip odd numbers
        {
            count++;
            continue;
        }
        cout << count << endl;
        count++;
    }
    return 0;
}

int lecture_27()
{
    srand(time(nullptr));

    int val1 = rand() % 10; // 0-9

    int val2 = rand() % 10 + 1; // 1-10

    cout << val1 << endl;
    cout << val2 << endl;

    return 0;
}

int lecture_28()
{
    char plan;
    cout << "What plan did you purchase (A, B, or C)?" << endl;
    cin >> plan;

    if (plan == 'A')
    {
    }
    else if (plan == 'B')
    {
    }
    else if (plan == 'C')
    {
    }
    else
    {
        cout << "You selected a non existent package" << endl;
    }

    return 0;
}

int lecture_33()
{
    const int ARRAY_SIZE = 5;
    int myArray[ARRAY_SIZE];
    string names[4]{"Tim", "Adèle", "John", "Ed"};

    myArray[0] = 15;
    myArray[1] = 1;
    myArray[2] = 5;
    myArray[3] = 3;
    myArray[4] = 9;

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << myArray[i] << endl;
    }

    for (int i = 0; i < 4; i++)
    {
        cout << names[i] << endl;
    }

    for (string name : names) // for each name in names
    {
        cout << name << endl;
    }

    for (auto name : names) // for each name in names, with type unknown
    {
        cout << name << endl;
    }

    return 0;
}

#include <array>
int lecture_34()
{
    array<int, 5> myIntArray{1, 2}; // empty curly makes unspecified values 0

    myIntArray[0] = 2;
    myIntArray[1] = 6;
    myIntArray[2] = 5;
    myIntArray[3] = 1;
    myIntArray[4] = 4;

    for (int a : myIntArray)
    {
        cout << a << endl;
    }

    cout << "Size of array: " << myIntArray.size() << endl;

    return 0;
}

#include <vector>
#include <string>
int lecture_35()
{
    vector<int> someVec;
    vector<string> anotherVec(3);

    someVec.push_back(1);
    someVec.push_back(2);
    someVec.push_back(3);

    cout << "someVec size: " << someVec.size() << endl;

    anotherVec[0] = "John";
    anotherVec[1] = "Tim";
    anotherVec[2] = "Sally";

    anotherVec.push_back("Shannon");

    for (int val : someVec)
    {
        cout << val << endl;
    }

    cout << endl;

    for (string name : anotherVec)
    {
        cout << name << endl;
    }

    cout << "Front and back: " << endl;
    cout << "front: " << anotherVec.front() << endl;
    cout << "back: " << anotherVec.back() << endl;

    anotherVec.pop_back();                        // removes the back element
    anotherVec.insert(anotherVec.begin(), "Don"); // inserts element to front
    cout << "now front is: " << anotherVec.front() << endl;
    cout << "now back is: " << anotherVec.back() << endl;

    anotherVec.insert(anotherVec.begin() + 2, "Begin+2"); // inserts element to front
    for (auto name : anotherVec)
    {
        cout << name << endl;
    }

    return 0;
}

int lecture_36()
{
    int myNums[2][3]{
        {1, 2, 3},
        {4, 5, 6}}; // 2D array that is 2x3

    cout << myNums[0][2] << endl;

    myNums[1][0] = 14;
    cout << myNums[1][0] << endl;

    return 0;
}

int lecture_()
{

    return 0;
}

//  g++ hello.cpp
// ./a.out
int main()
{
    // lecture_1_TO_14();
    // lecture_15();
    // lecture_16();
    // lecture_17();
    // lecture_18();
    // project_average_of_3();
    // project_madlibs();
    // lecture_23();
    // lecture_24();
    // lecture_24b();
    // lecture_25();
    // lecture_26();
    // lecture_27();
    // lecture_28();
    // lecture_33();
    // lecture_34();
    // lecture_35();
    lecture_36();
    return 0;
}
