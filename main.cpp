#include <iostream>
#include <limits>

using namespace std;

#define DAYS_OF_SONG 12

enum Days
{
    FIRST_DAY = 1,
    SECOND_DAY,
    THIRD_DAY,
    FOURTH_DAY,
    FIFTH_DAY,
    SIXTH_DAY,
    SEVENTH_DAY,
    EIGHTH_DAY,
    NINTH_DAY,
    TENTH_DAY,
    ELEVENTH_DAY,
    TWELFTH_DAY
};

enum MenuModes
{
    SINGLE_PLAYER = 1,
    MULTI_PLAYER,
    SETTINGS,
    EXIT
};

static void printMenu(void);
static void printChristmasSong(void);
static void chooseAndPrintDaysPresents(Days day);

int main()
{
    // printMenu();
    printChristmasSong();
    playTicTacToe();
}

static void chooseAndPrintDaysPresents(Days day)
{
    switch(day)
    {
        case TWELFTH_DAY:
            cout << "twelve drummers drumming\n";
        case ELEVENTH_DAY:
            cout << "eleven pipers piping\n";
        case TENTH_DAY:
            cout << "ten lords a-leaping\n";
        case NINTH_DAY:
            cout << "nine ladies dancing\n";
        case EIGHTH_DAY:
            cout << "eight maids a-milking\n";
        case SEVENTH_DAY:
            cout << "seven swans a-swimming\n";
        case SIXTH_DAY:
            cout << "six geese a-laying\n";
        case FIFTH_DAY:
            cout << "five gold rings\n";
        case FOURTH_DAY:
            cout << "four calling birds\n";
        case THIRD_DAY:
            cout << "Three French hens\n";
        case SECOND_DAY:
            cout << "Two turtle doves\n";
        case FIRST_DAY:
            cout << "A partridge in a pear tree\n";
            break;
        default:
            cout << "Try one more time\n";
            break;
    }
}

static void printChristmasSong(void)
{
    cout << "On the first day of Christmas my true love sent to me\n";
    chooseAndPrintDaysPresents(FIRST_DAY);
    cout << "\n";

    cout << "On the second day of Christmas my true love sent to me\n";
    chooseAndPrintDaysPresents(SECOND_DAY);
    cout << "\n";

    cout << "On the third day of Christmas my true love sent to me\n";
    chooseAndPrintDaysPresents(THIRD_DAY);
    cout << "\n";

    cout << "On the fourth day of Christmas my true love sent to me\n";
    chooseAndPrintDaysPresents(FOURTH_DAY);
    cout << "\n";

    cout << "On the fifth day of Christmas my true love sent to me\n";
    chooseAndPrintDaysPresents(FIFTH_DAY);
    cout << "\n";

    cout << "On the sixth day of Christmas my true love sent to me\n";
    chooseAndPrintDaysPresents(SIXTH_DAY);
    cout << "\n";

    cout << "On the seventh day of Christmas my true love sent to me\n";
    chooseAndPrintDaysPresents(SEVENTH_DAY);
    cout << "\n";

    cout << "On the eighth day of Christmas my true love sent to me\n";
    chooseAndPrintDaysPresents(EIGHTH_DAY);
    cout << "\n";

    cout << "On the ninth day of Christmas my true love sent to me\n";
    chooseAndPrintDaysPresents(NINTH_DAY);
    cout << "\n";

    cout << "On the tenth day of Christmas my true love sent to me\n";
    chooseAndPrintDaysPresents(TENTH_DAY);
    cout << "\n";

    cout << "On the eleventh day of Christmas my true love sent to me\n";
    chooseAndPrintDaysPresents(ELEVENTH_DAY);
    cout << "\n";

    cout << "On the twelfth day of Christmas my true love sent to me\n";
    chooseAndPrintDaysPresents(TWELFTH_DAY);
    cout << "\n";
}

static void printMenu(void)
{
    bool shallRepeatMenu;
    int choice;

    do
    {
        shallRepeatMenu = false;
        cout << "Welcome to game!\n";
        cout << "1. Single Player\n";
        cout << "2. Multiplayer\n";
        cout << "3. Settings\n";
        cout << "4. Exit\n";

        if(!(cin >> choice))
        {
            // Reset fail stae
            cin.clear();
            // Delete char from buffer
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        switch(choice)
        {
            case SINGLE_PLAYER:
                cout << "Welcome to single player\n";
                break;
            case MULTI_PLAYER:
                cout << "Welcome to multi player\n";
                break;
            case SETTINGS:
                cout << "Let's set your game\n";
                break;
            case EXIT:
                cout << "Bye bye\n";
                break;
            default:
                cout << "Try to choose mode one more time";
                shallRepeatMenu = true;
                break;
        }
    } while (shallRepeatMenu);
}