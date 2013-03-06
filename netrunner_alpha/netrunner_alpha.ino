
int led1=8;
int led2=9;
int led3=10;
int led4=12;
int but1=2;

void setup() {
  Serial.begin(9600);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(but1,INPUT_PULLUP);

}

void loop() {

  int clk=digitalRead(but1);
  int counter=0;
  if(clk==1) {
    if (counter==4) {
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      digitalWrite(led4,LOW);
    }
    if(counter==0) {
      digitalWrite(led1,HIGH);

    }
    if(counter==1) {
      digitalWrite(led2,HIGH);

    } 
    if(counter==2) {
      digitalWrite(led3,HIGH);

    } 
    if(counter==3) {
      digitalWrite(led4,HIGH);

    } 
    counter=counter+1;
  }


  if(clk==1) {
    Serial.println(counter);
  }
}












