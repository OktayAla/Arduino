//-----------------------------------------//
//---------------OKTAY ALA-----------------//
//---Arduino | Su Sensörü ile Su Uyarısı---//
//-----------------------------------------//

//Ledlerin bağlı oldukları pinlerin tanımlamasını yapıyoruz
#define kirmiziled 6
#define maviled 7

//Su sensörünün bağlı olduğu analog pini tanımlıyoruz
#define susensoru A0

//Buzzer pin tanımlamasını yapıyoruz
#define buzzer 2

#include <LiquidCrystal_I2C.h> //I2C LCD Ekranımızın kütüphane tanımlamasını yapıyoruz
LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27, 16, 2); //Kullanacağımız ekranın pixel boyutunu tanımlıyoruz

void setup() 
{
  //Ledlerin OUTPUT, çıkış birimlerinin tanımlamasını yapıyoruz
  pinMode(kirmiziled, OUTPUT);
  pinMode(maviled, OUTPUT);

//LCD Ekranımızın arka ışığını ve çalışması için gereken kodları yazıyoruz
  lcd.init();
  lcd.backlight();
}

void loop() 
{
  int sudegeri = analogRead(susensoru); //Su sensöründen gelecek olan verileri okumak ve işlemek için sudegeri değişkeni oluşturup, bu değişkene tanımlıyoruz
  
  if (sudegeri < 200) //Eğer, sensör tarafından tespit edilen suyun değeri 200'ün altındaysa; LCD Ekranda su tespit edilmedi yazısı yazacak, kırmızı led yanacak.
  {
    lcd.setCursor(7,0);
    lcd.print("SU");
    
    lcd.setCursor(0,1);
    lcd.print("TESPIT  EDILMEDI");
    digitalWrite(kirmiziled, HIGH);
    digitalWrite(maviled, LOW);

  }
  else { //Eğer, sensör tarafından tespit edilen suyun değeri 200'ün üstündeyse; LCD Ekranda su tespit edildi yazıcı yazacak, mavi led yanacak ve buzzer uyarı sesi çıkaracak.
    lcd.setCursor(7,0);
    lcd.print("SU");
    
    lcd.setCursor(0,1);
    lcd.print("TESPIT  EDILDI !");
    digitalWrite(kirmiziled, LOW);
    digitalWrite(maviled, HIGH);
 tone(buzzer,750);
 delay(125);
 noTone(buzzer);
 delay(50); 

 tone(buzzer,650);
 delay(125);
 noTone(buzzer);
 delay(100); 
  }
}
