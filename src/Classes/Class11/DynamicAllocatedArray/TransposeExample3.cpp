#include <iostream>

using namespace std;

class trans
{
    int **a, **b;
    int m, n;

public:
    void initialize();
    void transpose();
    void display();
    void deallocate();
};

void trans::initialize()
{
    int i, j;
    cout << "No. of Rows and Columns: ";
    cin >> m >> n;
    a = new int *[m]; // create input matrix
    for (i = 0; i < m; i++)
        a[i] = new int[n];
    cout << "Enter elements:\n";
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            cin >> a[i][j];
    b = new int *[n]; // create transpose matrix
    for (i = 0; i < n; i++)
        b[i] = new int[m];
}

void trans::transpose()
{
    int i, j;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++) // transpose is in 'b'
            b[j][i] = a[i][j];
}

void trans::display()
{
    int i, j;
    cout << "Transpose:\n";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            cout << b[i][j] << " ";
        cout << "\n";
    }
}

void trans::deallocate()
{
    int i;
    for (i = 0; i < m; i++)
        delete a[i];
    delete a;
    for (i = 0; i < n; i++)
        delete b[i];
    delete b;
}

int main()
{
    trans t;
    t.initialize();
    t.transpose();
    t.display();
    t.deallocate();
}