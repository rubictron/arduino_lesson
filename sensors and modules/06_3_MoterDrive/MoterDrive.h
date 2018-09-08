
class MoterDrive{
public:
int MoterPinA1;
int MoterPinB1;
int MoterPinE1;
int MoterPinA2;
int MoterPinB2;
int MoterPinE2;
MoterDrive(int a,int b,int e);
MoterDrive(int a1,int b1,int e1,int a2,int b2,int e2);
void drive(int a);
void drive(int a,int b);
void stopDrive();
  };
