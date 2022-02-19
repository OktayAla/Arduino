//--------------------------------------------------//
//--------------------OKTAY ALA---------------------//
//---Arduino | Alev Sensörü ve DC Motor Kullanımı---//
//--------------------------------------------------//

int alevsensoru = A0; //Alev sensörünün bağlı olduğu analog pini tanımlıyoruz
int alevsensorudeger; //Sensörden gelecek olan değerleri okuyabilmek için değişken tanımlaması yapıyoruz
int buzzer = 7; //Buzzer modülünün bağlı olduğu dijital pini tanımlıyoruz

//DC Motorun çalışabilmesi için, L293D Motor sürücüsü üzerinde bağlı olan bacak pinlerini tanımlıyoruz 
#define motorA 3
#define motorB 2

void setup(void)
{
  Serial.begin(9600); //Seri haberleşmeyi açıyoruz
  pinMode(buzzer, OUTPUT); //Buzzer pininin çıkış pini olduğunu tanımlıyoruz

  //Motor sürücüsüne bağlı pinlerin çıkış pini olduğunu belirtiyoruz
  pinMode(motorA, OUTPUT);
  pinMode(motorB, OUTPUT);
}

void loop(void)
{
  //Alev sensöründen gelen verileri, tanımlanan yeni değişken üzerine atayarak okunan verileri yazdırıyoruz
  alevsensorudeger = analogRead(alevsensoru);
  Serial.println(alevsensorudeger);
  Serial.println("");

  if (alevsensorudeger < 1010)
  {
    //Eğer, alev sensöründe okunan değer; "1010" değerinden küçük ise ateşin algılandığını söyleyecek.
    //1010 değeri; sensörünüzün yapısına , ateşin uzaklık - yakınlık durumuna göre değişebilir.
    Serial.println("ATES ALGILANDI!");
    Serial.println("");

    //Ateş algılandığı zaman, buzzer devreye girerek ses çıkartmaya başlayacak
    {
      tone(buzzer, 850);
      tone(buzzer, 330);
      tone(buzzer, 850);
      tone(buzzer, 330);
      tone(buzzer, 850);
    }

    //Ateş algılandığı zaman aynı anda motor devreye girerek çalışmaya başlayacak.
    {
      digitalWrite(motorA, HIGH);
      delay(2500);
    }
  }

  else
  {
    //Herhangi bir ateş algılanmadığı zaman ve 1010 değerini yakalayamadığı zaman herhangi bir aksiyon oluşmayacak.
    Serial.println("ATES ALGILANMADI!");
    Serial.println("");
    digitalWrite(motorA, LOW);
    noTone(buzzer);
  }
  delay(500);
}