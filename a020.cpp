#include <iostream>
using namespace std;
int main() {
  unsigned int a,b,c,d,e,f,g,h,i,j,k;
  char ID;
  int city[26] = {10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};
  int key=0;
  cout << " A=台北市     J=新竹縣     S=高雄縣     \n B=台中市     K=苗栗縣     T=屏東縣     \n C=基隆市     L=台中縣     U=花蓮縣     \n D=台南市     M=南投縣     V=台東縣     \n E=高雄市     N=彰化縣     W=金門縣     \n F=台北縣     O=新竹市     X=澎湖縣     \n G=宜蘭縣     P=雲林縣     Y=陽明山     \n H=桃園縣     Q=嘉義縣     Z=連江縣     \n I=嘉義市     R=台南縣\n ";
  Re_enter :
  cout << "請問您的身分證字號英文是:";
  cin  >> ID;
  if (((ID>=65)&&(ID<=90)))
    key=1;
  if (((ID>=97)&&(ID<=122))){
    key=1;
    ID = ID-32;
  }
  if (key==0) {
    cout << "身分證字號英文錯誤\n";
    goto Re_enter;
  }
    a = city[ID-'A'] / 10;
    b = city[ID-'A'] % 10;
  cout << "請問您的身分證字號第一碼是:";
  cin  >> c;
  cout << "請問您的身分證字號第二碼是:";
  cin  >> d;
  cout << "請問您的身分證字號第三碼是:";
  cin  >> e;
  cout << "請問您的身分證字號第四碼是:";
  cin  >> f;
  cout << "請問您的身分證字號第五碼是:";
  cin  >> g;
  cout << "請問您的身分證字號第六碼是:";
  cin  >> h;
  cout << "請問您的身分證字號第七碼是:";
  cin  >> i;
  cout << "請問您的身分證字號第八碼是:";
  cin  >> j;
  cout << "請問您的身分證字號第九碼是:";
  cin  >> k;
  int l=(a+(b*9)+(c*8)+(d*7)+(e*6)+(f*5)+(g*4)+(h*3)+(i*2)+(j+k));
  if (l % 10 == 0) {
    cout << "這是真的身分證";
  }
  else
  {
    cout << "這是假的身分證";
  }
}
