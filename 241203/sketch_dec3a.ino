// C++ code
//
void setup()//Bir sefer çalışır
{
	for(int sayac=2;sayac<=6;sayac++)
  		pinMode(sayac,OUTPUT);//Çıkış yapıldı
}

void loop()
{
  //Araç kırmızı ışığı yandı başladı
  {
    for(int sayac=2;sayac<=6;sayac++){
  	digitalWrite(sayac,1);
  	delay(100); 
  	digitalWrite(sayac,0);
  	delay(100);
    }
   }	
  }
