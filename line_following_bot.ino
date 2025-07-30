#define in1 9
#define in2 7
#define in3 8
#define in4 10
#define enA 5
#define enB 6


 int M1_Speed = 80; // speed of motor 1 
 int M2_Speed = 80; // speed of motor 2
 int R_LeftRotationSpeed = 250;  // Left Rotation Speed
 int R_RightRotationSpeed = 130; // Right Rotation Speed
 int L_LeftRotationSpeed = 130;  // Left Rotation Speed
 int L_RightRotationSpeed = 250; // Right Rotation Speed
 

 void setup() {
  
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  
    pinMode(enA,OUTPUT);
    pinMode(enB,OUTPUT);

      pinMode(A1, INPUT); // initialize Left sensor as an input
      pinMode(A0, INPUT); // initialize Right sensor as an input

}

void loop() {

  int LEFT_SENSOR = digitalRead(A0);
  int RIGHT_SENSOR = digitalRead(A1);
  
if(RIGHT_SENSOR==0 && LEFT_SENSOR==0) {
    forward(); //FORWARD
}

  else if(RIGHT_SENSOR==1 && LEFT_SENSOR==0) {
    right(); //Move Right
 }

  else if(RIGHT_SENSOR==0 && LEFT_SENSOR==1) {
    left(); //Move Left
}

  else if(RIGHT_SENSOR==1 && LEFT_SENSOR==1) {
    forward();  //STOP
 }
}



void forward()
{
            digitalWrite(in1, HIGH);
            digitalWrite(in2, LOW);
            digitalWrite(in3, HIGH);
            digitalWrite(in4, LOW);
            
                analogWrite(enA, M1_Speed);
                analogWrite(enB, M2_Speed);
}
 
void backward()
{
            digitalWrite(in1, LOW);
            digitalWrite(in2, HIGH);
            digitalWrite(in3, LOW);
            digitalWrite(in4, HIGH);
            
                analogWrite(enA, M1_Speed);
                analogWrite(enB, M2_Speed);
}
 
void right()
{
            digitalWrite(in1, LOW);
            digitalWrite(in2, HIGH);
            digitalWrite(in3, HIGH);
            digitalWrite(in4, LOW);
            
                analogWrite(enA, R_LeftRotationSpeed);
                analogWrite(enB, R_RightRotationSpeed);
}
 
void left()
{
            digitalWrite(in1, HIGH);
            digitalWrite(in2, LOW);
            digitalWrite(in3, LOW);
            digitalWrite(in4, HIGH);
            
                analogWrite(enA, L_LeftRotationSpeed);
                analogWrite(enB, L_RightRotationSpeed);
}
 
void Stop()
{
            digitalWrite(in1, LOW);
            digitalWrite(in2, LOW);
            digitalWrite(in3, LOW);
            digitalWrite(in4, LOW);
}