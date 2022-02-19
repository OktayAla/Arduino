//------------------------------------------------------------//
//-------------------------OKTAY ALA--------------------------//
//---Arduino | SW-520D Eğim Sensörü ile Eğim Derecesi Ölçme---//
//------------------------------------------------------------//

#include <LiquidCrystal_I2C.h> //I2C LCD Ekranımızın kütüphane tanımlamasını yapıyoruz
#include <Wire.h> //Arduino ile I2C LCD Ekranın haberleşmesi için Wire kütüphanesini tanımlıyoruz

int egimsensoru = A0; //Eğim sensörünün bağlı olduğu analog pini tanımlıyoruz
int sensordegeri = 0; //Sensör üzerinden gelecek olan değerleri okumak için bir değişken belritiyoruz

LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27, 16, 2); //Kullanacağımız ekranın pixel boyutunu tanımlıyoruz

void setup() 
{
  //LCD Ekranımızın arka ışığını ve çalışması için gereken kodları yazıyoruz
  lcd.init();
  lcd.backlight();
}

void loop() 
{
  sensordegeri = analogRead(egimsensoru); //Sensör üzerinden gelen verileri okumak için tanımlanan değişkende tutulan verileri okutuyoruz
   
   //Eğim derecesinin verilerini ekranda yazdırmak için LCD ekranda çıktı kodlarını tanımlıyoruz
   lcd.setCursor(0,0);
   lcd.print(" EGIM DERECESI "); 

   //Eğim sensöründen gelen verileri okuttuğumuz değişkeni LCD çıktısını aldırıyoruz
   lcd.setCursor(0,1);
   lcd.print(egimsensoru);

   delay(400);
}