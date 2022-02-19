//-----------------------------------//
//------------OKTAY ALA-------------//
//--Arduino | Toprak Nemi Algılama--//
//----------------------------------//

//Nem sensörü ve buzzer modülünün bağlı olduğu pinleri tanıtıyoruz
int topraknemsensor = 2;
int buzzer = 3;

//Okunan verileri hafızada tutmak için değişken tanımlıyoruz
int sensorveri;

void setup()
{
  pinMode(topraknemsensor, INPUT); //Nem sensörünü giriş birimi, INPUT olarak belirtiyoruz
  pinMode(buzzer, OUTPUT); //Buzzer modülünü çıkış birimi, OUTPUT olarak belirtiyoruz.
}

void loop()
{
  sensorveri = digitalRead(toprak); //Sensör üzerinden gelen verileri okumak için bir değişkene atıyoruz
  
  //Eğer sensör, toprakta nem algılarsa buzzer ses çıkaracak.
  if ( veri == true) 
  {
    noTone(buzzer);
  }

  else
  {
    tone(buzzer, 350);
    delay(400);
    noTone(buzzer);
    delay(400);
  }
}
