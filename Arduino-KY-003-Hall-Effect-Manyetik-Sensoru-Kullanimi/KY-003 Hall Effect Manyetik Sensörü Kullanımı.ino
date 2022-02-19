//------------------------------------------------------------//
//--------------------------OKTAY ALA-------------------------//
//---Arduino | KY-003 Hall Effect Manyetik Sensörü Kullanımı--//
//------------------------------------------------------------//

  //LCD Ekranımızın kütüphane tanımlanasını yapıyoruz
#include <LiquidCrystal_I2C.h>

  //Ekran ile sensör arasında oluşacak haberleşme için wire kütüphanesini tanımlıyoruz
#include <Wire.h>


  //I2C LCD Ekranın çalışması için kütüphane verilerini çağırıyoruz
LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27, 16, 2);

  //Sensörün bağlı olduğu dijital pini tanımlıyoruz
const int sensor = 7;

  //Ledlerin bağlı olduğu pinleri tanımlıyoruz
const int yesilled = 8;
const int maviled = 9;

void setup()
{
  //Seri haberleşme portunu açıyoruz
  Serial.begin(9600);

  //Pinlerin giriş/çıkış pin durumlarını tanımlıyoruz
  pinMode(sensor, INPUT);
  pinMode(yesilled, OUTPUT);
  pinMode(maviled, OUTPUT);

  //Ekranın çalışması için gereken kodları belirtiyoruz
  lcd.init();
  lcd.backlight();
}

void loop()
{

  if (digitalRead(sensor) == LOW)
  {
    //Eğer sensör üzerinden veri gelirse ekranda "Manyetik Algılandı" yazısı yazacak ve yeşil led yanacak
    lcd.setCursor(4, 0);
    lcd.print("MANYETIK");

    lcd.setCursor(4, 1);
    lcd.print("ALGILANDI");

    digitalWrite(maviled, LOW);
    digitalWrite(yesilled, HIGH);
    delay(300);

    lcd.clear();
  }

  else if (digitalRead(sensor) == HIGH)
  {

    //Eğer sensör üzerinden veri gelmezse "Manyetik Algılanmadı" yazısı yazacak ve mavi led yanacak
    lcd.setCursor(4, 0);
    lcd.print("MANYETIK");

    lcd.setCursor(3, 1);
    lcd.print("ALGILANMADI");

    digitalWrite(maviled, HIGH);
    digitalWrite(yesilled, LOW);
    delay(300);

    lcd.clear();
  }
}