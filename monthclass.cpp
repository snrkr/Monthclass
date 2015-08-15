#include <iostream>
using namespace std;

class Month
{
public:
    Month (char letter1, char letter2, char letter3);
    Month (int numOfMonth);
    Month ();
    void inputAsNum(); // read month as integer
    void inputAsCh(); //  read first three chars of month
    void outputAsCh() const;
    void outputAsNum() const;
    Month nextMonth();
private:
    int month;
};

int main()
{
    Month test(11);
    //test.inputAsNum();
    cout << "Current month is " << endl;
    test.outputAsCh();
    test.outputAsNum();
    cout << endl;
    test.nextMonth();
    cout << "Next month is " <<endl;
    test.outputAsCh();
    test.outputAsNum();
    cout << endl;
    
    Month test2('a','p','r');
    //test2.inputAsCh();
    cout << "Current month is " << endl;
    test2.outputAsCh();
    test2.outputAsNum();
    cout << endl;
    test2.nextMonth();
    cout << "Next month is " <<endl;
    test2.outputAsCh();
    test2.outputAsNum();
    cout << endl;
    
    
    Month test3;
    test3.inputAsNum();
    cout << "Current month is " << endl;
    test3.outputAsCh();
    test3.outputAsNum();
    cout << endl;
    test3.nextMonth();
    cout << "Next month is " <<endl;
    test3.outputAsCh();
    test3.outputAsNum();
    cout << endl;
    
    Month test4;
    test4.inputAsCh();
    cout << "Current month is " << endl;
    test4.outputAsCh();
    test4.outputAsNum();
    cout << endl;
    test4.nextMonth();
    cout << "Next month is " <<endl;
    test4.outputAsCh();
    test4.outputAsNum();
    cout << endl;
    
    return 0;
}

Month::Month (char letter1, char letter2, char letter3)
{
    if ((letter1 == 'j')&&(letter2 == 'a')&&(letter3 == 'n'))
        month= 1;
    else if ((letter1 == 'f')&&(letter2 == 'e')&&(letter3 == 'b'))
        month= 2;
    else if ((letter1 == 'm')&&(letter2 == 'a')&&(letter3 == 'r'))
        month= 3;
    else if ((letter1 = 'a')&&(letter2 == 'p')&&(letter3 == 'r'))
        month= 4;
    else if ((letter1 == 'm')&&(letter2 == 'a')&&(letter3 == 'y'))
        month= 5;
    else if ((letter1 == 'j')&&(letter2 == 'u')&&(letter3 == 'n'))
        month= 6;
    else if ((letter1 == 'j')&&(letter2 == 'u')&&(letter3 == 'l'))
        month= 7;
    else if ((letter1 == 'a')&&(letter2 == 'u')&&(letter3 == 'g'))
        month= 8;
    else if ((letter1 == 's')&&(letter2 == 'e')&&(letter3 == 'p'))
        month= 9;
    else if ((letter1 == 'o')&&(letter2 == 'c')&&(letter3 == 't'))
        month= 10;
    else if ((letter1 == 'n')&&(letter2 == 'o')&&(letter3 == 'v'))
        month= 11;
    else if ((letter1 == 'd')&&(letter2 == 'e')&&(letter3 == 'c'))
        month= 12;
}
Month::Month (int numOfMonth)
                    :month(numOfMonth)
{ }
Month::Month ()
                    :month(1)
{ }
void Month::inputAsNum()
{
    int num;
    cout << "Enter num of month => ";
    cin  >> num;
    month = num;
}
void Month::inputAsCh()
{
    char c1,c2,c3;
    cout << "Enter three letters of month => ";
    cin  >> c1 >> c2 >> c3;
    *this = Month(c1,c2,c3);
    /*
     firstly, assumed that a p r values have been entered
     than value of month is 4, this creates a new object of the Month
     class for example test5. After dereferecing, process like
     test4 = test5;
    */
}
void Month::outputAsCh() const
{
    if (month == 1)
        cout << "Jan ";
    else if (month == 2)
        cout << "Feb ";
    else if (month == 3)
        cout << "Mar ";
    else if (month == 4)
        cout << "Apr ";
    else if (month == 5)
        cout << "May ";
    else if (month == 6)
        cout << "Jun ";
    else if (month == 7)
        cout << "Jul ";
    else if (month == 8)
        cout << "Aug ";
    else if (month == 9)
        cout << "Sep ";
    else if (month == 10)
        cout << "Oct ";
    else if (month == 11)
        cout << "Nov ";
    else if (month == 12)
        cout << "Dec ";
}
void Month::outputAsNum() const
{
    cout << month;
}
Month Month::nextMonth()
{
    if (month < 12)
        month++;
    else if (month == 12)
        month = 1;
    return Month(month);
}