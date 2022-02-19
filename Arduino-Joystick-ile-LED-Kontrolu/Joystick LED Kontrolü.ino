//-----------------------------------------//
//----------------OKTAY ALA----------------//
//---Arduino | Joystick ile LED Kontrolü---//
//-----------------------------------------//

//Joystick pin belirlemelerini yapıyoruz
int VRX = A1; 
int VRY = A2; 

//Joystick eksenlerinin hareketlerini değişkenlere tanımlıyoruz
int xeksen;
int yeksen;

void setup() 
  {
    pinMode(INPUT_PULLUP);
    pinMode(2,OUTPUT); mavi
    pinMode(3,OUTPUT); yeşil 
    pinMode(4,OUTPUT); kırmızı
    pinMode(5,OUTPUT); sarı
  }
  
void loop() 
  {
        //Joystick üzerinden gelecek hareketleri okutarak değişkenlere tanımlıyoruz
        xeksen = analogRead(VRX);
        yeksen = analogRead(VRY);

        if(xeksen<10) digitalWrite(2,HIGH); //Joystick, yukarı doğru oynatınca: Mavi Ledi yakacak
        if(xeksen>1000) digitalWrite(4,HIGH); //Joystick, aşağı doğru oynatınca: Kırmızı ledi yakacak
        if(yPeksen<10) digitalWrite(3,HIGH); //Joystick, sağa doğru oynatınca: Yeşil ledi yakacak
        if(yeksen>1000) digitalWrite(5,HIGH); //Joystick, sola doğru oynatınca:Sarı ledi yakacak

        digitalWrite(2,LOW);
        digitalWrite(3,LOW);
        digitalWrite(4,LOW);
        digitalWrite(5,LOW);              
  }

