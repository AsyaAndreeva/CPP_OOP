
#ifndef MONEY_OVERLOADING_MONEY_OVERLOADING_H
#define MONEY_OVERLOADING_MONEY_OVERLOADING_H

class Money {
public:
    //конструктор
    Money();
    Money(int leva, int stotinki);

    //аксесори
    int GetLeva() const;
    int GetStotinki() const;

    //
    Money operator+(const Money &other);
    Money operator-(const Money &other);
    Money operator*(int multiplier);
    Money operator/(int divisor);
    Money operator%(double n);

    bool operator>(const Money &other);
    bool operator>=(const Money &other);
    bool operator<(const Money &other);
    bool operator<=(const Money &other);
    bool operator==(const Money &other);
    bool operator!=(const Money &other);
    //затриване
    ~Money();
private:
    int Leva;
    int Stotinki;
};



#endif //MONEY_OVERLOADING_MONEY_OVERLOADING_H
