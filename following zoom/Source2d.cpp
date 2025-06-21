#include "NumberArray.h"

int main()
{
    int howMany{};
    double value{};

    cout << "How many numbers do you want to store? ";
    cin >> howMany;

    NumberArray numbers(howMany);

    cout << "\nEnter " << howMany << " numbers.\n";

    for (int i = 0; i < howMany; i++)
    {
        cout << "number #" << i + 1 << ": ";

        cin >> value;

        numbers.setCell(i, value);
    }

    cout << "\n---------------------\n";

    cout << "Here are the values.\n";

    for (int i = 0; i < howMany; i++)
    {
        cout << "Number #" << i + 1 << ": "
            << numbers.getCell(i) << endl;
    }

    cout << "\nThe average is: " << numbers.getAverage() << endl;

    cout << "The lowest value is " << numbers.getLowest() << endl;

    cout << "The highest value is " << numbers.getHighest() << endl;

    return 0;
}