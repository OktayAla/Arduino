//-------------------------------------------------//
//--------------------OKTAY ALA--------------------//
//---Arduino | HC-SR501 ve Buzzer Hareket Alarmı---//
//-------------------------------------------------//

const int pirsensor=A0; //PIR Sensörün bağlı olduğu analog pini tanımlıyoruz
const int buzzer=2; //Buzzer pininin bağlı olduğu pini tanımlıyoruz
const int led=3; //Led'in bağlı olduğu pini tanımlıyoruz
int pirsensvalue=0; //Sensör üzerinden gelecek verileri 0'a eşitliyoruz

void setup() 
{
Serial.begin(9600); //Seri haberleşmeyi 9600 bandında başlatıyoruz
pinMode(pirsensor,INPUT); //PIR Sensörünü INPUT , giriş verisi olarak tanımlanasını yapıyoruz
pinMode(buzzer,OUTPUT); //Buzzer modülünü OUTPUT, çıkış verisi olarak tanımlıyoruz
pinMode(led, OUTPUT); //Ledi OUTPUTİ çıkış verisi olarak tanımlıyoruz 
}
void loop() {
// put your main code here, to run repeatedly:
motionsensvalue=analogRead(motionpin); // reads analog data from motion sensor
if (motionsensvalue>=200){
  digitalWrite(ledpin,HIGH);
tone(buzzpin,10);
delay(100);
noTone(buzzpin);
delay(100); 
tone(buzzpin,10);
delay(100);
noTone(buzzpin);
delay(100); 
}
else {
  digitalWrite(ledpin,LOW);
noTone(buzzpin);
}
}