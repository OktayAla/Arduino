//---------------------------------------//
//----------------OKTAY ALA--------------//
//---Arduino | Kara Şimşek LED Devresi---//
//---------------------------------------//

 //Ledlerin pin bağlantılarına göre tanımlamasını yapıyoruz
const int led1 = 13;
const int led2 = 12;
const int led3 = 11;
const int led4 = 10;
const int led5 = 9;
const int led6 = 8;
const int led7 = 7;
const int led8 = 6;
const int led9 = 5;

void setup() 
{
  //Ledlerin çıkış pini olduğunu tanımlıyoruz
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
}

void loop() 
{
  //Sırasıyla 1 - 2 - 3 - 4 - 5 - 6 - 7 - 8 - 9 ledlerin yanması için gereken kodlar aşağıdadır.
  digitalWrite(led1, HIGH);
  delay(100);
  digitalWrite(led1, LOW);

  digitalWrite(led2, HIGH);
  delay(100);
  digitalWrite(led2, LOW);

  digitalWrite(led3, HIGH);
  delay(100);
  digitalWrite(led3, LOW);

  digitalWrite(led4, HIGH);
  delay(100);
  digitalWrite(led4, LOW);

  digitalWrite(led5, HIGH);
  delay(100);
  digitalWrite(led5, LOW);

  digitalWrite(led6, HIGH);
  delay(100);
  digitalWrite(led6, LOW);

  digitalWrite(led7, HIGH);
  delay(100);
  digitalWrite(led7, LOW);

  digitalWrite(led8, HIGH);
  delay(100);
  digitalWrite(led8, LOW);

  digitalWrite(led9, HIGH);
  delay(100);
  digitalWrite(led9, LOW);

  ///////////////////////////

  digitalWrite(led8, HIGH);
  delay(100);
  digitalWrite(led8, LOW);

  digitalWrite(led7, HIGH);
  delay(100);
  digitalWrite(led7, LOW);

  digitalWrite(led6, HIGH);
  delay(100);
  digitalWrite(led6, LOW);

  digitalWrite(led5, HIGH);
  delay(100);
  digitalWrite(led5, LOW);

  digitalWrite(led4, HIGH);
  delay(100);
  digitalWrite(led4, LOW);

  digitalWrite(led3, HIGH);
  delay(100);
  digitalWrite(led3, LOW);

  digitalWrite(led2, HIGH);
  delay(100);
  digitalWrite(led2, LOW);

  digitalWrite(led1, HIGH);
  delay(100);
  digitalWrite(led1, LOW);

  ///////////3/////////////

  digitalWrite(led1, HIGH);
  delay(50);
  digitalWrite(led1, LOW);

  digitalWrite(led2, HIGH);
  delay(50);
  digitalWrite(led2, LOW);

  digitalWrite(led3, HIGH);
  delay(50);
  digitalWrite(led3, LOW);

  digitalWrite(led4, HIGH);
  delay(50);
  digitalWrite(led4, LOW);

  digitalWrite(led5, HIGH);
  delay(50);
  digitalWrite(led5, LOW);

  digitalWrite(led6, HIGH);
  delay(50);
  digitalWrite(led6, LOW);

  digitalWrite(led7, HIGH);
  delay(50);
  digitalWrite(led7, LOW);

  digitalWrite(led8, HIGH);
  delay(50);
  digitalWrite(led8, LOW);

  digitalWrite(led9, HIGH);
  delay(50);
  digitalWrite(led9, LOW);

  digitalWrite(led8, HIGH);
  delay(50);
  digitalWrite(led8, LOW);

  digitalWrite(led7, HIGH);
  delay(50);
  digitalWrite(led7, LOW);

  digitalWrite(led6, HIGH);
  delay(50);
  digitalWrite(led6, LOW);

  digitalWrite(led5, HIGH);
  delay(50);
  digitalWrite(led5, LOW);

  digitalWrite(led4, HIGH);
  delay(50);
  digitalWrite(led4, LOW);

  digitalWrite(led3, HIGH);
  delay(50);
  digitalWrite(led3, LOW);

  digitalWrite(led2, HIGH);
  delay(50);
  digitalWrite(led2, LOW);

  digitalWrite(led1, HIGH);
  delay(50);
  digitalWrite(led1, LOW);
}