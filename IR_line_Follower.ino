/*------ Arduino Line Follower Code----- */
/*-------definning Inputs------*/
#define LS 2      // left sensor
#define RS 3      // right sensor

/*-------definning Outputs------*/
#define LMF 4       // left motor forward
#define LMR 5       // left motor reverse
#define RMF 6       // right motor forward 
#define RMR 7       // right motor reverse

void setup()
{
  pinMode(LS, INPUT);
  pinMode(RS, INPUT);
  
  pinMode(LMF, OUTPUT);
  pinMode(LMR, OUTPUT);
  pinMode(RMF, OUTPUT);
  pinMode(RMR, OUTPUT);
}

void loop()
{
  if(digitalRead(LS) && digitalRead(RS))     // Move Forward
  {
    digitalWrite(LMF, HIGH);
    digitalWrite(LMR, LOW);
    digitalWrite(RMF, HIGH);
    digitalWrite(RMR, LOW);
  }
  
  if(!(digitalRead(LS)) && digitalRead(RS))     // Turn left
  {
    digitalWrite(LMF, LOW);
    digitalWrite(LMR, LOW);
    digitalWrite(RMF, HIGH);
    digitalWrite(RMR, LOW);
  }
  
  if(digitalRead(LS) && !(digitalRead(RS)))     // turn right
  {
    digitalWrite(LMF, HIGH);
    digitalWrite(LMR, LOW);
    digitalWrite(RMF, LOW);
    digitalWrite(RMR, LOW);
  }
  
  if(!(digitalRead(LS)) && !(digitalRead(RS)))     // stop
  {
    digitalWrite(LMF, LOW);
    digitalWrite(LMR, LOW);
    digitalWrite(RMF, LOW);
    digitalWrite(RMR, LOW);
  }
}
