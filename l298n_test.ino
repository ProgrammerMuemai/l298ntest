
#define IN1 2
#define IN2 3
#define IN3 4
#define IN4 5
//#define speedA 9
//#define speedB 10


void setup()
{
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  //pinMode(speedA,OUTPUT);
  //pinMode(speedB,OUTPUT);
}

void loop()
{
 
    forwardComand();
    //analogWrite(speedA, 255); 
    //analogWrite(speedB, 127);
    //leftComand();
    //rightComand();
    //reverseComand();
    

}

void forwardComand() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  
}
void reverseComand() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void leftComand() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}
void rightComand() {
 digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);

}
