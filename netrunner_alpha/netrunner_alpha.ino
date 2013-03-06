
/*
  Netrunner (the LCG) click-tracker version 0.1
  By: Virre Linwendil Annergård 2013
  Feel free to share and edit and fix
*/ 
int led1=8;
int led2=9;
int led3=10;
int led4=12;
int but1=2;
int counter=0;
byte pressed;
byte last_press;
void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(but1,INPUT_PULLUP);

}

void loop() {
  pressed=digitalRead(but1);

  if(pressed!=last_press) {
    if(pressed==HIGH) {
      switch(counter) {
      case 0: 
        digitalWrite(led1,HIGH); 
        break;
      case 1:
        digitalWrite(led2,HIGH);
        break;
      case 2:
        digitalWrite(led3,HIGH);
        break;
      case 3:
        digitalWrite(led4,HIGH);
        break;
      case 4:
        digitalWrite(led1,LOW);
        digitalWrite(led2,LOW);
        digitalWrite(led3,LOW);
        digitalWrite(led4,LOW);

      }
      if(counter==4) {
        counter=0; 
      } 
      else {
        counter++;
      }
    }
  }


  last_press=pressed;
}















