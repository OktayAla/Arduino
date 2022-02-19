//--------------------------------------------------------//
//------------------------OKTAY ALA-----------------------//
//---Arduino | TTP223B Dokunmatik Sensör ile LED Yakmak---//
//--------------------------------------------------------//

const int led = 2; //Ledin bağlı olduğu dijital pini tanımlıyoruz
const int dokunmatik = 13; //Dokunmatik sensörünün bağlı olduğu pini tanımlıyoruz
int dokunmatikveriler; //Dokunmatik sensörden gelen verileri okumak için yeni bir değişken tanımlıyoruz

void setup()
{
  Serial.begin(9600); //Seri haberleşmeyi başlatıyoruz
  pinMode(led,OUTPUT); //Led pinini çıkış pini olarak tanımlıyoruz
  pinMode(dokunmatik,INPUT); //Dokunmatik sensörünü giriş pini olarak tanımlıyoruz
}

void loop() 
{
  dokunmatikveriler = digitalRead(dokunmatik); //Sensör üzerinden gelen verileri bir değişken içine tanımlıyoruz ve okuyoruz

  if(dokunmatikveriler == 1)
  {
  //Eğer ki sensör üzerinden gelen veri 1'e eşitse yani veri akışı varsa, led yanacak.,
    digitalWrite(led,HIGH);
    delay(500);
  }

  else if(dokunmatikveriler == 0)
  {
  //Eğer sensör üzerinden gelen verilen 0'a eşitse ve veri gelmiyorsa led yanmayacak.
    digitalWrite(led,LOW);
  }
}