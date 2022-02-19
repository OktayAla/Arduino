//-----------------------------------------//
//----------------OKTAY ALA----------------//
//---Arduino | Animasyonlu LED ve Buzzer---//
//-----------------------------------------//

//Bağlı olan ledlerin ve buzzer'ın pin bağlantılarının tanımlamasını yapıyoruz
const int led1 = 2;
const int led2 = 3;
const int led3 = 4;
const int led4 = 5;
const int led5 = 6;
const int led6 = 7;
const int led7 = 8;
const int led8 = 9;
const int led9 = 10;
const int led10 = 11;
const int buzzer = 12;


void setup() 
{
//LED ve Buzzer, birer OUTPUT, çıkış birimi oldukları için bunların pin tanımını yapıyoruz
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
  pinMode(buzzer, OUTPUT);
}
void loop()
{
//Her LED yandığında, buzzer'dan farklı tonda bir ses çıkacak.
  {
    digitalWrite(led1, HIGH);
    delay(250);
    digitalWrite(led1, LOW);
    tone(buzzer, 254);
    delay(250);
    noTone(buzzer);
  }

  {
    digitalWrite(led2, HIGH);
    delay(250);
    digitalWrite(led2, LOW);
    tone(buzzer, 546);
    delay(250);
    noTone(buzzer);
  }

  {
    digitalWrite(led3, HIGH);
    delay(250);
    digitalWrite(led3, LOW);
    tone(buzzer, 975);
    delay(250);
    noTone(buzzer);
  }

  {
    digitalWrite(led4, HIGH);
    delay(250);
    digitalWrite(led4, LOW);
    tone(buzzer, 458);
    delay(250);
    noTone(buzzer);
  }

  {
    digitalWrite(led5, HIGH);
    delay(250);
    digitalWrite(led5, LOW);
    tone(buzzer, 976);
    delay(250);
    noTone(buzzer);
  }

  {
    digitalWrite(led6, HIGH);
    delay(250);
    digitalWrite(led6, LOW);
    tone(buzzer, 694);
    delay(250);
    noTone(buzzer);
  }

  {
    digitalWrite(led7, HIGH);
    delay(250);
    digitalWrite(led7, LOW);
    tone(buzzer, 478);
    delay(250);
    noTone(buzzer);
  }

  {
    digitalWrite(led8, HIGH);
    delay(250);
    digitalWrite(led8, LOW);
    tone(buzzer, 888);
    delay(250);
    noTone(buzzer);
  }

  {
    digitalWrite(led9, HIGH);
    delay(250);
    digitalWrite(led9, LOW);
    tone(buzzer, 259);
    delay(250);
    noTone(buzzer);
  }

  {
    digitalWrite(led10, HIGH);
    delay(250);
    digitalWrite(led10, LOW);
    tone(buzzer, 750);
    delay(250);
    noTone(buzzer);
  }

  {
    digitalWrite(led9, HIGH);
    delay(250);
    digitalWrite(led9, LOW);
    tone(buzzer, 468);
    delay(250);
    noTone(buzzer);
  }

  {
    digitalWrite(led8, HIGH);
    delay(250);
    digitalWrite(led8, LOW);
    tone(buzzer, 592);
    delay(250);
    noTone(buzzer);
  }

  {
    digitalWrite(led7, HIGH);
    delay(250);
    digitalWrite(led7, LOW);
    tone(buzzer, 264);
    delay(250);
    noTone(buzzer);
  }


  {
    digitalWrite(led6, HIGH);
    delay(250);
    digitalWrite(led6, LOW);
    tone(buzzer, 780);
    delay(250);
    noTone(buzzer);
  }

  {
    digitalWrite(led5, HIGH);
    delay(250);
    digitalWrite(led5, LOW);
    tone(buzzer, 912);
    delay(250);
    noTone(buzzer);
  }

  {
    digitalWrite(led4, HIGH);
    delay(250);
    digitalWrite(led4, LOW);
    tone(buzzer, 341);
    delay(250);
    noTone(buzzer);
  }


  {
    digitalWrite(led3, HIGH);
    delay(250);
    digitalWrite(led3, LOW);
    tone(buzzer, 674);
    delay(250);
    noTone(buzzer);
  }


  {
    digitalWrite(led2, HIGH);
    delay(250);
    digitalWrite(led2, LOW);
    tone(buzzer, 508);
    delay(250);
    noTone(buzzer);
  }


}