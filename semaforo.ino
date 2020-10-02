int v1=2;
int a1=3;
int r1=4;
int v2=11;
int a2=9;
int r2=8;
int cont=0;

void setup() {
  // put your setup code here, to run once:
pinMode(v1, OUTPUT);
pinMode(a1, OUTPUT);
pinMode(r1, OUTPUT);
pinMode(v2, OUTPUT);
pinMode(a2, OUTPUT);
pinMode(r2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  cont=0;
digitalWrite(v1, HIGH);
digitalWrite(r2, HIGH);
delay(1500);
digitalWrite(v1, LOW);
while(cont<4){
  digitalWrite(a1, HIGH);
  delay(200);
  digitalWrite(a1, LOW);
  cont++;
}
digitalWrite(r2, LOW);

cont=0;
digitalWrite(v2, HIGH);
digitalWrite(r1, HIGH);
delay(1500);
digitalWrite(v2, LOW);
while(cont<4){
  digitalWrite(a2, HIGH);
  delay(200);
  digitalWrite(a2, LOW);
  cont++;
}
digitalWrite(r1, LOW);
}
