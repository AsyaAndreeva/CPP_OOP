
#include "Money_Overloading.h"

Money::Money(){
    leva=0;
    stotinki=0;
}

Money::Money(leva, stotinki){
    Leva=leva;
    Stotinki=stotinki;
}

int Money::GetLeva () const{
    return leva;
}

int Money::GetStotinki () const{
    return stotinki;
}

Money Money::operator+(const Money &other){

    int SumStotinki = stotinki+ other.Stotinki;
    int SumLeva=leva + other.Leva;

    if(SumStotinki>=100){
        SumStotinki=SumStotinki-100;
        SumLeva=1+SumLeva;
    }

    return Money(SumLeva, SumStotinki);
}

Money Money::operator-(const Money &other){

    int DiffStotinki = stotinki-other.Stotinki;
    int DiffLeva = leva - other.Leva;

    if(DiffStotinki<0){
        DiffStotinki = DiffStotinki+100;
        DiffLeva = DiffLeva-1;
    }

    return Money(DiffLeva,DiffStotinki);
}

Money Money::operator*(int multiplier){
    int MultStotinki = stotinki * multiplier;
    int MultLeva = leva * multiplier;

    if(MultStotinki>=100){
        MultStotinki = MultStotinki % 100;
        MultLeva = MultLeva + (MultStotinki / 100);
    }

    return Money(MultLeva,MultStotinki);
}

Money Money::operator/(int divisor){
    int CurrentMoney = (leva * 100)+ stotinki;
    CurrentMoney = CurrentMoney/divisor;

    int DivStotinki = CurrentMoney % 100;
    int DivLeva= CurrentMoney / 100;

    return Money(DivLeva,DivStotinki);
}

Money Money::operator%(double n){
    int AllMoney = (leva * 100)+ stotinki;
    int result = (n*AllMoney)/100;
    int PercentStotinki = result % 100;
    int PercentLeva = result / 100;
    return Money(PercentLeva, PercentStotinki);
}

bool Money::operator>(const Money &other){
    int CurrentMoneyA = (leva * 100)+ stotinki;
    int CurrentMoneyB = (other.leva * 100)+ other.stotinki;

    if(CurrentMoneyA>CurrentMoneyB){
        return true;
    }
    else{
        return false;
    }
}

bool Money::operator>=(const Money &other){
    int CurrentMoneyA = (leva * 100)+ stotinki;
    int CurrentMoneyB = (other.leva * 100)+ other.stotinki;

    if(CurrentMoneyA>=CurrentMoneyB){
        return true;
    }
    else{
        return false;
    }
}

bool Money::operator<(const Money &other){
    int CurrentMoneyA = (leva * 100)+ stotinki;
    int CurrentMoneyB = (other.leva * 100)+ other.stotinki;

    if(CurrentMoneyA<CurrentMoneyB){
        return true;
    }
    else{
        return false;
    }
}

bool Money::operator<=(const Money &other){
    int CurrentMoneyA = (leva * 100)+ stotinki;
    int CurrentMoneyB = (other.leva * 100)+ other.stotinki;

    if(CurrentMoneyA<=CurrentMoneyB){
        return true;
    }
    else{
        return false;
    }
}

bool Money::operator==(const Money &other){
    if(leva = other.leva && stotinki = other.stotinki){
        return true;
    }
    else{
        return false;
    }
}

bool Money::operator!=(const Money &other){
    if(leva != other.leva || stotinki != other.stotinki){
        return true;
    }
    else{
        return false;
    }
}
