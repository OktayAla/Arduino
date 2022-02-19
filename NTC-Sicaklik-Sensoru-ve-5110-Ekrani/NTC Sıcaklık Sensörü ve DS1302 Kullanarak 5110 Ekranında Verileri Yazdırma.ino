//-----------------------------------------------------------------------------------------//
//------------------------------------------OKTAY ALA--------------------------------------//
//---Arduino | NTC Sıcaklık Sensörü ve DS1302 Kullanarak 5110 Ekranında Verileri Yazdırma--//
//-----------------------------------------------------------------------------------------//

//NTC Sensöründen gelen verileri ondalıklı sayılı olarak işlemek için math sınıfını tanımlıyoruz
#include <math.h>

//5110 Ekranının kütüphanesini tanımlıyoruz
#include <LCD5110_Basic.h>

//DS1302 RTC Saat modülünü kullanabilmek için kütüphane tanımlıyoruz
#include <virtuabotixRTC.h>

//DS1302 Modülünün bağlı olduğu dijital pinlerini tanımlıyoruz
int CLK_PIN = 5;
int DAT_PIN = 6;
int RST_PIN = 7;

//DS1302 Kütüphanesini çağırıyoruz
virtuabotixRTC myRTC(CLK_PIN, DAT_PIN, RST_PIN);

//5110 Ekranının bağlı olduğu dijital pinlerinin tanımlamasını yapıyoruz
LCD5110 ekran(8, 9, 10, 11, 12);

//5110 Ekranının üzerinde yazı yazdırabilmek için kütüphaneden gerekli olan yazı fontu değişkenlerini çağırıyoruz
extern uint8_t SmallFont[];
extern uint8_t MediumNumbers[];
extern uint8_t BigNumbers[];

//NTC Sernsöründen gelecek olan verileri okuyup ve değişken üzerinde işleyebilmek için değişken tanımlıyoruz
int T2;
float T1, Tf;

//NTC Sensörünün bağlı olduğu analog pinini tanımlıyoruz
int NtcPin = A0;

//NTC Sensöründne gelecek olan verilerin ısı değişkeni hesaplamasında kullanılacak olan formülleri yazıyoruz
int Vo;
float R1 = 10000;
float logR2, R2, T;
float c1 = 1.009249522e-03, c2 = 2.378405444e-04, c3 = 2.019202697e-07;

void setup()
{
  //5110 Ekranının LCD ayarlamasını yapıyoruz
  ekran.InitLCD();

  //DS1302 Saatin tarih ayarlaması buradan yapılıyoruz
  //myRTC.setDS1302Time(00,18,18,1,12,04,2021);
}


void loop()
{
  //DS1302 kütüphanesinden zamanın güncellenmesi için kütüphane verilerini çağırıyoruz
  myRTC.updateTime();

  //Analog pinine bağlı olan NTC Sensöründen gelecek olan verileri Vo değişkenine tanımlıyoruz
  //Arduino, termistör ile bilinen bir direnç arasındaki bir noktada voltajı ölçecektir.
  //Bu bir voltaj bölücü olarak bilinir.
  //Gerilim bölücü denklemi olarak kullanacağımız formül: Vo = Vin *  (R2/R1+R2)
  //Vo = NTC ve direnç arasındaki voltaj değeri
  //Vin = 5V Giriş voltajının değeri
  //R1 = Bilinen direnç değeri
  //R2 = NTC Termistörün direnci

  //Analog pin üzerinden okunacak olan değerleri voltaj değerinin okunacağı aralık değişkenine tanımlıyoruz
  Vo = analogRead(NtcPin);

  //Aşağıdaki formül bölümünde ise voltaj değerlerinin dönüştürülmesi için uygulanan logaritmik formül bulunmaktadır
  R2 = R1 * (1023.0 / (float)Vo - 1.0);
  logR2 = log(R2);
  T = (1.0 / (c1 + c2 * logR2 + c3 * logR2 * logR2 * logR2));
  T1 = T - 273.15;
  T2 = T - 273.15;
  T2 = (T1 - T2) * 10;

  //5110 ekranında NTC üzerinden okunan verileri yazdırabilmek için font tanımlamasını yapıyoruz
  //Aynı zamanda 5110 ekranında yazıların ekran üzerinde hangi piksel kordinatları üzerinde olacağını tanımlıyoruz
  ekran.setFont(BigNumbers);
  ekran.printNumI(myRTC.hours, 3, 6);
  ekran.printNumI(myRTC.minutes, 47, 6);
  ekran.print(".", 32, 6);

  ekran.setFont(MediumNumbers);
  ekran.printNumI(T1, 10, 35);
  ekran.print(".", 35, 35);
  ekran.printNumI(T2, 44, 35);

  //Her 1 saniyede sıcaklık verisini tekrardan okuyarak 5110 ekranında göstermesini sağlıyoruz
  delay(1000);
  ekran.clrScr();

  //5110 ekranının üzerinde "derece" yazısının kordinatlarını ve fontunu belirliyoruz
  ekran.setFont(SmallFont);
  //ekran.print("DERECE", 35, 35);
  ekran.print("C", 69, 38);
  ekran.print("o", 60, 35);
}