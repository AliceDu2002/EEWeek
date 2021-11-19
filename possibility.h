/*
//      轉盤編號  機率   獎品編號
#define one      0     // 1
#define two      0     // 15
#define three    0    // 3
#define four     0    // 13
#define five     0     // 5
#define six      0     // 11
#define seven    0     // 7
#define eight    2    // 9
#define nine     3     // 16
#define ten      0     // 2
#define eleven   0     // 14
#define twelve   0     // 4
#define thirteen 0    // 12
#define forteen  0   // 6
#define fifteen  0    // 10
#define sixteen  0     // 8
#define BASE_NUMBER 5
*/
int one = 1;     // 1 椰林小舖大學T
int two = 5;     // 15 總召簽名照
int three = 10;    // 3 折扣碼
int four = 10;    // 13 車宣
int five = 10;     // 5 折扣碼
int six = 12;     // 11 水
int seven = 0;     // 7
int eight = 10;    // 9 折扣碼
int nine = 0;     // 16
int ten = 1;     // 2 椰林小舖大學T
int eleven = 10;     // 14 車宣
int twelve = 5;     // 4 總召簽名照
int thirteen = 10;    // 12 折扣碼
int forteen = 10;   // 6 車宣
int fifteen = 12;    // 10 水
int sixteen = 1;     // 8 椰林小舖大學T
int BASE_NUMBER = 150;

int prize[16] = { one, two, three, four, five, six, seven, eight, 
                nine, ten, eleven, twelve, thirteen, forteen, fifteen, sixteen };

int getprize(int r) { // return the index of LED
    for(int i = 0; i < 16; i++){
        r -= prize[i];
        if(r < 0) {
          BASE_NUMBER -= 1;
          if(i != 7 && i != 4 && i != 2 && i != 12) {
            prize[i] -= 1;
          }
          return i+1;
        }
        
    }
}
