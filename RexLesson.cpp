#include <iostream>
using namespace std;
int main() 
{
  string Card;                         //字串變數(即字元陣列)宣告,儲存信用卡號碼
  int CardDigit[16];                   //整數陣列宣告
  int I,K,Sum=0;
  char CardKey;

    cout << "請輸入16位數信用卡卡號:";
    Digit_check:                       //確認輸入信用卡位數的正確性
    cin >> Card;
    cout << "你的信用卡卡號為:"<<Card<<"\n";
    K=Card.size();                     //確認輸入信用卡號碼的位數
    if ( K != 16 ) {                   //信用卡號碼若不為16位數,要求重新輸入
    cout << "卡號位數錯誤,請輸入16位數信用卡卡號:";
    goto Digit_check;
    }
    for(I=0;I<K;I++){                //將輸入號碼,從字元轉換成數值來運算
    CardDigit[I] = (Card[I]-'0');
    }
    // Visa卡 第一位數 = 4  
    // Master卡 51 <= (第一位數及第二位數) <= 55
    if (CardDigit[0]==4)               
    CardKey='V';                      //若第一位數=4, 則為 Visa卡
    else if ((CardDigit[0]==5) && ((1<=CardDigit[1]) && (CardDigit[1]<=5)))
    CardKey='M';                      //若第一位數及第二位數介於 51跟55之間, 則為Master卡
    else {
      cout << "這不是正確的Visa或Master信用卡\n"; //其他卡
      return 0;
    };                 
    //奇數位數x2   
    //如果'奇數位數x2'為二位數,將十位數字與個位數字相加
    for(I=0;I<K;I=I+2){                 
    CardDigit[I]= CardDigit[I]*2;             //奇數位數x2 
    if(CardDigit[I]>=10)
      CardDigit[I]= (1 + (CardDigit[I]%10));  //如果'奇數位數x2'>=10,將十位數字與個位數字相加
    }
    //加總所有位數
    for(I=0;I<K;I++){
    Sum = Sum + CardDigit[I];
    }
    if (((Sum%10)==0)&&(CardKey=='V'))    
    cout << "這是正確的Visa信用卡\n";
    else if (((Sum%10)==0)&&(CardKey=='M'))
    cout << "這是正確的Master信用卡\n";
    else cout << "這不是正確的Visa或Master信用卡\n"; 
}