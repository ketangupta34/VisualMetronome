char data=0;
int dly=0;
int count=60;

void setup(){
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  if(Serial.available()>0){
    data=Serial.read();
    Serial.print(data);
    Serial.print("\n");
    if(data=='+'){
      count+=5;
      }
    if(data=='-'){
      count-=5;
      }
    dly=60000/count;
    dly=dly/2;
  }
    
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(2, HIGH);
  delay(dly);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(2, LOW);
  delay(dly);
  digitalWrite(8, HIGH);
  digitalWrite(3, HIGH);
  delay(dly);
  digitalWrite(8, LOW);
  digitalWrite(3, LOW);
  delay(dly);
  digitalWrite(8, HIGH);
  digitalWrite(4, HIGH);
  delay(dly);
  digitalWrite(8, LOW);
  digitalWrite(4, LOW);
  delay(dly);
  digitalWrite(8, HIGH);
  digitalWrite(5, HIGH);
  delay(dly);
  digitalWrite(8, LOW);
  digitalWrite(5, LOW);
  delay(dly);
}
