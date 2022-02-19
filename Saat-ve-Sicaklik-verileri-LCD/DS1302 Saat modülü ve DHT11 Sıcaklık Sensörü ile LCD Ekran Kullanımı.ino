//------------------------------------------------------------------------------------//
//------------------------------------OKTAY ALA---------------------------------------//
//---Arduino | DS1302 Saat modülü ve DHT11 Sıcaklık Sensörü ile LCD Ekran Kullanımı---//
//------------------------------------------------------------------------------------//

  //DHT11 Sensörünün kütüphanesini tanımlıyoruz
#include <dht11.h>

  //LCD Ekranının kütüphanesini tanımlıyoruz
#include <LiquidCrystal_I2C.h>

  //DS1302 RTC Saat modülünün kütüphanesini tanımlıyoruz
#include <virtuabotixRTC.h>

  //DHT11 Sensörünün bağlı olduğu pini belirtiyoruz
int DHT11_pin = 2;

  //Sensörün veri okuması için kütüphane verilerini çağırıyoruz
dht11 DHT11_sensor;

  //I2C LCD Ekranın çalışması için kütüphane verilerini çağırıyoruz
LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27, 16, 2);

  //6. dijital pini clock pini olarak tanımladık
int CLK_PIN = 6;

  //7. dijital pini data pini olarak tanımladık
int DAT_PIN = 7;

  //8. dijital pini reset pini olarak tanımladık.
int RST_PIN = 8;

  //Kütüphane verilerinden pin atamalarını çağırıyoruz
virtuabotixRTC myRTC(CLK_PIN, DAT_PIN, RST_PIN);

void setup()
{
  //LCD Ekranın çalışması için gereken kodları yazıyoruz
  lcd.init();
  lcd.backlight();

  //Saatin ayarlamasını yapıyoruz
  //myRTC.setDS1302Time(10,00,15,1,15,03,2021);
}
void loop()
{
  //DHT11 Sensöründen gelen verileri okuyarak yeni bir değişkene tanımlıyoruz
  int chk = DHT11_sensor.read(DHT11_pin);

  //Saat verilerini güncelleyerek çağırıyoruz
  myRTC.updateTime();

  //LCD Ekran üzerinde, yazıların konumlarını belirtiyoruz
  lcd.setCursor(0, 0);
  lcd.print("Sicaklik = ");

  //Sensör üzerinden gelen sıcaklık verilerini çağırıyoruz
  lcd.print((float)DHT11_sensor.temperature, 2);

  //Saat üzerinden gelen verileri yazdırıyoruz
  lcd.setCursor(0, 1);
  lcd.print("Saat  = ");
  lcd.print(myRTC.hours);
  lcd.print(":");
  lcd.print(myRTC.minutes);
  lcd.print(":");
  lcd.print(myRTC.seconds);
  delay(1000);

  delay(2000);
}
