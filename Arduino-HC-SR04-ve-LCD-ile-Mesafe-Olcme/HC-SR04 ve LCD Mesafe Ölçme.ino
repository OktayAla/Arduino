//-------------------------------------------//
//-----------------OKTAY ALA-----------------//
//---Arduino | HC-SR04 ve LCD Mesafe Ölçme---//
//-------------------------------------------//

#include <Wire.h> //Arduino ile I2C LCD Ekranın haberleşmesi için Wire kütüphanesini tanımlıyoruz
#include <LiquidCrystal_I2C.h> //I2C LCD Ekranımızın kütüphane tanımlamasını yapıyoruz
#include "NewPing.h" //HC-SR04 Sensör verilerini okumak için kütüphane tanımlıyoruz

#define TRIGGER_PIN 9 //Sensör pin bağlantılarını tanımlıyoruz
#define ECHO_PIN 10
#define MAX_DISTANCE 500 //Maksimum mesafe olarak bir sınır belirliyoruz

const int buzzer=8; //Buzzer pini için tanımlama yapıyoruz.

LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27, 16, 2); //Kullanacağımız ekranın pixel boyutunu tanımlıyoruz

NewPing sonarTRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); //Sensör pinlerini kütüphane verisine tanımlıyoruz

int mesafe; //Ölçüm için verileri aktaracağımız bir değer tanımlıyoruz

void setup() 
{
  //LCD Ekranımızın arka ışığını ve çalışması için gereken kodları yazıyoruz
  lcd.init();
  lcd.backlight();

  pinMode(buzzer,OUTPUT); //Buzer pini için çıkış birimi tanımlaması yapıyoruz
}

void loop() 
{

  mesafe = sonar.ping_cm(); //Sensör üzerinden ölçülen ölçüyü cm olarak ölçüm yaptırıp mesafe verisine tanımlıyoruz
  //inch hesabı yapmak için sonar.ping_in(); kullanabilirsiniz
  
  lcd.setCursor(0, 0); //İlk satır 0 olarak belirlenmektedir. Mesafe değerini ilk satırda yazmak için konumlandırmasını yapıyoruz
  lcd.print("Mesafe = ");
  
  if (mesafe >= 500 || mesafe <= 1)  //Eğer ki mesafe 1 CM'den küçük olacak şekilde ise; çok yakın yazdırılacak
  {
  lcd.setCursor(0, 1);
  lcd.print("Cok Yakin !");
 
  //Yakın olduğu zaman; aynı anda buzzer'da uyarı sesi çıkartmak için;
    tone(buzzer, 1255);
    delay(200);
    noTone(ses);
    tone(buzzer, 1220);
    delay(200);
    noTone(ses);
    tone(buzzer, 1290);
    delay(200);
    noTone(ses);
  }
  else //Eğer ki mesafe 1 CM'den büyük ise normal olarak mesafe ölçümünü yapacak ve LCD ekran üzerinde çıktısını verecek
  {
  lcd.print(mesafe);
  lcd.print(" cm");
  }
  delay(500);
}