//---------------------------------------------//
//------------------OKTAY ALA------------------//
//--Arduino | Potansiyometre ile LED Kontrolü--//
//---------------------------------------------//

//Ledlerin bağlı olduğu pinleri tanımlıyoruz
#define kirmiziled 2
#define maviled 3
#define yesilled 4
#define beyazled 5
#define sariled 6

#define potansiyometre A0 //Potansiyometrenin bağlı olduğu analog pini tanımlıyoruz

int degerokuma; //Değerleri okumak için bir değişken tanımladık

void setup()
{
//Ledlerin çıkış türünü, OUTPUT verisi olduğunu tanımlıyoruz
  pinMode(kirmiziled,OUTPUT); 
  pinMode(maviled,OUTPUT);  
  pinMode(yesilled,OUTPUT); 
  pinMode(beyazled,OUTPUT);
  pinMode(sariled,OUTPUT);
}

void loop()
{
  degerokuma = analogRead(potansiyometre);   //Analog pin üzerinden gelen verileri, degerokuma değişkeni içerisine atıyoruz
  
  //degerokuma değişkeni üzerinde, gelen verileri 5'e bölerek,
  //potansiyometre üzerinde değişiklik olduğu zaman kademinin 5 kademe şeklinde değişeceğini belirtiyoruz
  degerokuma = degerokuma/5; 

  //Bağlı olan pinlerin durumunu, degerokuma değişkeni üzerinde gerçekleşen verilere atıyoruz
  analogWrite(kirmiziled,degerokuma);
  analogWrite(maviled,degerokuma);
  analogWrite(yesilledled,degerokuma);
  analogWrite(beyazled,degerokuma);
  analogWrite(sariled,degerokuma);
}
