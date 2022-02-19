//-------------------------------------------------------------//
//--------------------------OKTAY ALA--------------------------//
//---Arduino | KY-037 Mikrofon Modülü ile Alkışla LED Yakmak---//
//-------------------------------------------------------------//

//Ses sensörünün analog pin girişini tanımlıyoruz (A0)
const int SesSensoru = 0;

//Led'in bağlı olduğu pini tanımlıyoruz
const int Led = 8;

//Ses sensöründen gelen verileri okuyabilmemiz için yeni bir değişken tanımlıyoruz
int SesDeger;

void setup()
{
  //Led'in çıkış pini olduğunun tanımlamasını yapıyoruz
  pinMode (Led, OUTPUT);
}

void loop() 
{
  //Sensörden gelen verileri oluşturduğumuz değişkene atıyoruz
  SesDeger = analogRead(SesSensoru);

  //Eğer sensörden gelen veri 40'dan büyükse led yanacak.
  //Burada ki 40 değeri, ses hassasiyeti içindir. İsteğe göre değiştirilebilir.
  if (SesDeger > 40)
  {
    digitalWrite (Led, HIGH);
    delay(5500);
  }

  else
  {
    digitalWrite (Led, LOW);
  }

}