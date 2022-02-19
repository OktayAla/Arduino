//-----------------------------------------//
//----------------OKTAY ALA----------------//
//--Arduino | Buzzer ile Cendere Melodisi--//
//-----------------------------------------//

int buzzer = 2; //Buzzer modülünün bağlı olduğu pini tanımlıyoruz

//Buzzer modülünden gelen ses verilerini incelik kalınlık duruma göre notalarına ayırarak belirtiyoruz.
int kalindo = 261;
int re = 293;
int mi = 331;
int fa = 350;

void setup()
{
  pinMode(buzzer,OUTPUT); //Buzzer pinini bir çıkış türü olduğunu belirtiyoruz.
}

void loop()
{
  tone(buzzer, re);
  delay(400);
  noTone(buzzer);
  delay(10);

  tone(buzzer, re);
  delay(400);
  noTone(buzzer);
  delay(10);

  tone(buzzer, mi);
  delay(400);
  noTone(buzzer);
  delay(10);

  tone(buzzer, fa);
  delay(400);
  noTone(buzzer);
  delay(10);

  tone(buzzer, fa);
  delay(400);
  noTone(buzzer);
  delay(10);

  tone(buzzer, mi);
  delay(400);
  noTone(buzzer);
  delay(10);

  tone(buzzer, mi);
  delay(400);
  noTone(buzzer);
  delay(10);

  tone(buzzer, re);
  delay(400);
  noTone(buzzer);
  delay(10);

  tone(buzzer, re);
  delay(400);
  noTone(buzzer);
  delay(10);

  tone(buzzer, mi);
  delay(400);
  noTone(buzzer);
  delay(10);

  tone(buzzer, mi);
  delay(400);
  noTone(buzzer);
  delay(10);

  tone(buzzer, kalindo);
  delay(400);
  noTone(buzzer);
  delay(10);

  tone(buzzer, kalindo);
  delay(400);
  noTone(buzzer);
  delay(10);

  tone(buzzer, re);
  delay(400);
  noTone(buzzer);
  delay(10);

  tone(buzzer, re);
  delay(400);
  noTone(buzzer);
  delay(10);

  tone(buzzer, re);
  delay(400);
  noTone(buzzer);
  delay(10);

  tone(buzzer, re);
  delay(400);
  noTone(buzzer);
  delay(10);

  tone(buzzer, mi);
  delay(400);
  noTone(buzzer);
  delay(10);

  tone(buzzer, mi);
  delay(400);
  noTone(buzzer);
  delay(10);

  tone(buzzer, mi);
  delay(400);
  noTone(buzzer);
  delay(10);

  tone(buzzer, fa);
  delay(400);
  noTone(buzzer);
  delay(10);

  tone(buzzer, fa);
  delay(400);
  noTone(buzzer);
  delay(10);

  tone(buzzer, fa);
  delay(400);
  noTone(buzzer);
  delay(10);

  tone(buzzer, mi);
  delay(400);
  noTone(buzzer);
  delay(10);

  tone(buzzer, mi);
  delay(400);
  noTone(buzzer);
  delay(10);

  tone(buzzer, mi);
  delay(400);
  noTone(buzzer);
  delay(10);

  tone(buzzer, re);
  delay(400);
  noTone(buzzer);
  delay(10);

  tone(buzzer, re);
  delay(400);
  noTone(buzzer);
  delay(10);

  tone(buzzer, re);
  delay(400);
  noTone(buzzer);
  delay(10);

  tone(buzzer, mi);
  delay(400);
  noTone(buzzer);
  delay(10);

  tone(buzzer, mi);
  delay(400);
  noTone(buzzer);
  delay(10);

  tone(buzzer, mi);
  delay(400);
  noTone(buzzer);
  delay(10);

  tone(buzzer, kalindo);
  delay(400);
  noTone(buzzer);
  delay(10);

  tone(buzzer, kalindo);
  delay(400);
  noTone(buzzer);
  delay(10);

  tone(buzzer, kalindo);
  delay(400);
  noTone(buzzer);
  delay(10);

  tone(buzzer, re);
  delay(400);
  noTone(buzzer);
  delay(10);

  tone(buzzer, re);
  delay(400);
  noTone(buzzer);
  delay(10);

  tone(buzzer, re);
  delay(400);
  noTone(buzzer);
  delay(10);

  tone(buzzer, mi);
  delay(400);
  noTone(buzzer);
  delay(10);

  tone(buzzer, mi);
  delay(400);
  noTone(buzzer);
  delay(10);

  tone(buzzer, fa);
  delay(400);
  noTone(buzzer);
  delay(10);

  tone(buzzer, fa);
  delay(400);
  noTone(buzzer);
  delay(10);

  tone(buzzer, mi);
  delay(400);
  noTone(buzzer);
  delay(10);

  tone(buzzer, mi);
  delay(400);
  noTone(buzzer);
  delay(10);

  tone(buzzer, re);
  delay(400);
  noTone(buzzer);
  delay(10);

  tone(buzzer, re);
  delay(400);
  noTone(buzzer);
  delay(10);

  tone(buzzer, mi);
  delay(400);
  noTone(buzzer);
  delay(10);

  tone(buzzer, mi);
  delay(400);
  noTone(buzzer);
  delay(10);

  tone(buzzer, kalindo);
  delay(400);
  noTone(buzzer);
  delay(10);

  tone(buzzer, kalindo);
  delay(400);
  noTone(buzzer);
  delay(10);

  tone(buzzer, re);
  delay(400);
  noTone(buzzer);
  delay(10);

  delay(1500);
}