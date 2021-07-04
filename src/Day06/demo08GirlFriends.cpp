#include <iostream>
#include <string>

using namespace std;

/*
    Structure example:
        Create a structure to store all girl friend information
            name, age, nationality, height, weight, 
    
    Girl Friends:
        Natasha, Wei, Charlene, Rena, Catherine, Elizabeth,

*/

// Girl friends Structure
struct GirlFriends
{
    /* data */
    string name;
    int age;
    string nationality;
    double height;
    double weight;
};

// Bubble sort function
void bubbleSort(struct GirlFriends gf_param[], int length)
{
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - i - 1; j++)
        {
            if (gf_param[j].age > gf_param[j + 1].age)
            {
                struct GirlFriends gf_temp = gf_param[j];
                gf_param[j] = gf_param[j + 1];
                gf_param[j + 1] = gf_temp;
            }
        }
    }
}

// function for print out result
void printResult(struct GirlFriends gf_param[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << "Name: " << gf_param[i].name << endl;
        cout << "Age: " << gf_param[i].age << endl;
        cout << "Nationality: " << gf_param[i].nationality << endl;
        cout << "Height: " << gf_param[i].height << endl;
        cout << "Weight: " << gf_param[i].weight << endl;
    }
}

int main()
{

    // 2. create array for storing girl friends
    struct GirlFriends girl_friend_array[6] =
        {
            {"Natasha", 19, "Chinese-American", 5.67, 110},
            {"Wei", 19, "Chinese-American", 5.25, 98},
            {"Charlene", 20, "American", 5.45, 103},
            {"Rena", 21, "Japanese", 5.18, 90},
            {"Catherine", 20, "Latino", 5.68, 115},
            {"Elizabeth", 22, "American", 5.42, 110},
        };

    // the length of girl_friend_array
    int length = sizeof(girl_friend_array) / sizeof(girl_friend_array[0]);
    // for (int i = 0; i < length; i++)
    // {
    //     cout << "Name: " << girl_friend_array[i].name << endl;
    //     cout << "Age: " << girl_friend_array[i].age << endl;
    //     cout << "Nationality: " << girl_friend_array[i].nationality << endl;
    //     cout << "Height: " << girl_friend_array[i].height << endl;
    //     cout << "Weight: " << girl_friend_array[i].weight << endl;
    // }

    // 3. Sort the Array based on acceding age
    bubbleSort(girl_friend_array, length);

    // 4. print out result

    return 0;
}