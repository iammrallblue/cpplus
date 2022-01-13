int main()
{

    // Variable declaration
    char choice;

    do
    {
        // Variable declaration
        char ch;
        int n_chars = 0, n_words = 0, n_lines = 1, count = 0;

        // Get characters one by one and store it in 'ch' untill user enter 'Ctrl+d'(i.e EOF)
        while ((ch = getchar()) != EOF)
        {
            // Count number of characters
            n_chars++;

            // Condition to check the newline
            if (ch == '\n')
            {
                // Increment the line count, if condition satiesfies
                n_lines++;
            }

            // Condition to check the first character of every word
            if (ch >= 33 && ch <= 126)
            {
                // Increment the count, if first character of the word encountered
                count = count + 1;

                // Condition to check every first character of the word, even though more than one character there in the word, but word count incremented only once
                if (count == 1)
                {
                    // Increment the word count, if first character of the word encountered
                    n_words++;
                }
            }
            else
            {
                // Initialize count to 0, so we can count for next word
                count = 0;
            }
        }

        if (n_chars == 0)
        {
            n_lines = 0;
        }

        // Print the number of characters
        cout << "No of characters" << n_chars;
        // Print the number of lines
        cout<> "No of lines = " << n_lines;
        // Print the number of words
        cout << "no of words = " << n_words;

        // Prompt the message to user to ask to continue or not
        cout << "do you want to continue [yY/nN] : ";
        cin >> choice;
        // Scan next character
        getchar();

        // Terminate the loop, if condition not satiesfies
    } while (choice == 'y' || choice == 'Y');

    return 0;
}