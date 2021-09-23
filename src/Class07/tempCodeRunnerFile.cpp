int main()
{
    int i, j, maximum, counter, sum = 0;
    cout << "Enter the maximum value: ";
    cin >> maximum;
    i = 2;
    while (i <= maximum)
    {
        counter = 1;
        j = 2;
        while (j <= i / 2)
        {
            if (i % j == 0)
            {
                counter = 0;
                break;
            }
            j++;
        }
        if (counter == 1)
        {
            sum += i;
        }
        i++;
    }
    cout << "sum of all prime numbers between 1 to " << maximum << " is: " << sum;
    getch();
    return 0;
}