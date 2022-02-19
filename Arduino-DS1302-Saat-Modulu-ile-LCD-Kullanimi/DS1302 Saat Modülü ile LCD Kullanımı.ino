//---------------------------------------------------//
//----------------------OKTAY ALA--------------------//
//---Arduino | DS1302 Saat Modülü ile LCD Kullanımı--//
//---------------------------------------------------//
 
  //DS1302 RTC Saat modülünün kütüphanesini tanımlıyoruz
#include <virtuabotixRTC.h>

  //LCD Ekranının kütüphanesini tanımlıyoruz
#include <LiquidCrystal_I2C.h>

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
  lcd.begin(16, 2);  

  //Saatin ayarlamasını yapıyoruz
  //myRTC.setDS1302Time(10,00,15,1,15,03,2021);

}

void loop() 
{
  //Saat verilerini güncelleyerek çağırıyoruz
  myRTC.updateTime();    
                                 
  //LCD Ekran üzerinde, yazıların konumlarını belirtiyoruz
  lcd.clear();                                          
  lcd.setCursor(0,0); 
  lcd.print("Tarih = ");                                  
  lcd.print(myRTC.dayofmonth); //Ayın gününü yazdırıyoruz
  lcd.print("/");
  lcd.print(myRTC.month); //Ayı yazdırıyoruz          
  lcd.print("/");
  lcd.print(myRTC.year); //Yılı yazdırıyoruz
                                
  lcd.setCursor(0, 1); 
  lcd.print("Saat  = ");                                    
  lcd.print(myRTC.hours); //Saati yazdırıyoruz        
  lcd.print(":");
  lcd.print(myRTC.minutes); //Dakikayı yazdırıyoruz
  lcd.print(":");
  lcd.print(myRTC.seconds); //Saniyeyi yazdırıyoruz
  delay(1000);                             
}