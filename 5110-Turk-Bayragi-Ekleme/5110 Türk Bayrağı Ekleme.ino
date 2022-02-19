//----------------------------------------//
//---------------OKTAY ALA----------------//
//---Arduino | 5110 Türk Bayrağı Ekleme---//
//----------------------------------------//

#include <LCD5110_Basic.h>
  //5110 Ekranını çalıştırabilmek için kütüphane tanımlamasını yapıyoruz

LCD5110 ekran(8, 9, 10, 11, 12); 
  //Ekranın, Arduino üzerinde bağlı olduğu pinleri tanımlıyoruz.
  //Pin sıralaması: RST - CE - DC - DIN - CLK

extern uint8_t trbayrak[]; 
  //Harici olarak dışarıdan veri tanımlaması yapıyoruz.
  //Yapılan veri tanımlamasında bmp türündeki resim dosyamızın ismini giriyoruz

void setup()
{
  ekran.InitLCD(); 
  //Ekranı başlatıyoruz
}

void loop()
{
  ekran.drawBitmap(0,0,trbayrak,66,48); 
  //5110 ekranı üzerinde bitmap resmi yazdırmak için tanımlamasını yapıyoruz
  //Resimin hizalaması 0,0 olacak şekilde ayarladıktan sonra; ekledğimiz resim boyutunu tanımlıyoruz
  //84x48 px boyutuna kadar resim ekleyebiliriz
}