//---------------------------------------//
//---------------OKTAY ALA---------------//
//--Arduino | HC-06 Bluetooth LED Yakma--//
//--------------------------------------//

#include <SoftwareSerial.h> //Seri haberleşme verileri için kütüphane tanımlıyoruz
SoftwareSerial bluetooth(0,1); //RX ve TX Pinlerini tanımlıyoruz

char btveri; //Bluetooth üzerinden gelecek olan verileri okumak için btveri değişkenini tanımladık

//Ledlerin bağlantılarını pin numaralarına göre tanımlıyoruz
int led1=2;
int led2=3;
int led3=4;
int led4=5;
int led5=6;
int led6=7;

void setup() 
{
  bluetooth.begin(9600); //Seri haberleşmeyi 9600 bandında başlatıyoruz

//Bağlı olan ledlerimizin OUTPUT tanımlamalarını yapıyoruz
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
}

void loop() 
{
//Bluetooth üzerinden gelecek olan verilerin tanımlamasını yapıyoruz
  while(bluetooth.available()>0)
  {
    btveri = bluetooth.read(); //Bluetooth verilerini okuyarak, btveri değişkeni içerisinde tutuyoruz
      switch(veri)
      {
        case 'ac': //Telefon üzerinden "ac" verisi geldiği zaman aşağıda ki işlemleri yapmasını söylüyoruz
      //"ac" verisi geldiği zaman bütün ledler yanacak
        digitalWrite(led1,HIGH);
        digitalWrite(led2,HIGH);
        digitalWrite(led3,HIGH);
        digitalWrite(led4,HIGH);
        digitalWrite(led5,HIGH);
        digitalWrite(led6,HIGH);
        break;
        
        case 'kapat': //Telefon üzerinden "kapat "verisi geldiği zaman aşağıda ki işlemleri yapmasını söylüyoruz
      //"kapat" verisi geldiği zaman bütün ledler sönecek
        digitalWrite(led1,LOW);
        digitalWrite(led2,LOW);
        digitalWrite(led3,LOW);
        digitalWrite(led4,LOW);
        digitalWrite(led5,LOW);
        digitalWrite(led6,LOW);
        break;       
      }
  }

}