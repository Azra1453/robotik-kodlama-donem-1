// C++ code
//
int ak=6;
int as=5;
int ay=4;
int yk=3;
int yy=2;

void setup()//BİR SEFER ÇALIŞIR
{
  pinMode(2,OUTPUT);//ÇIKIŞ YAPILDI
  pinMode(3,OUTPUT);//ÇIKIŞ YAPILDI
  pinMode(4,OUTPUT);//ÇIKIŞ YAPILDI
  pinMode(5,OUTPUT);//ÇIKIŞ YAPILDI
  pinMode(6,OUTPUT);//ÇIKIŞ YAPILDI
}

void loop()
{
  //ARAÇ KIRMIZI IŞIĞI YANDI BAŞLADI
  digitalWrite(ak,HIGH);//İSTER HIGH YAZ,İSTER 1 YAZ
  digitalWrite(as,LOW);//İSTER LOW YAZ,İSTER 0 YAZ
  digitalWrite(ay,LOW);//İSTER LOW YAZ,İSTER 0 YAZ
  digitalWrite(yy,HIGH);//İSTER HIGH YAZ,İSTER 1 YAZ
  digitalWrite(yk,LOW);//İSTER LOW YAZ,İSTER 0 YAZ
  delay(3000);
  //ARAÇ KIRMIZI IŞIĞI YANDI BİTTİ
  
  //ARAÇ SARI IŞIĞI YANDI BAŞLADI
  digitalWrite(ak,0);
  digitalWrite(as,1);
  digitalWrite(ay,0);
  digitalWrite(yy,0);
  digitalWrite(yk,1);
  delay(1000);
  //ARAÇ SARI IŞIĞI YANDI BİTTİ
  
    
  //ARAÇ YEŞİL IŞIĞI YANDI BAŞLADI
  digitalWrite(ak,0);
  digitalWrite(as,0);
  digitalWrite(ay,1);
  digitalWrite(yy,0);
  digitalWrite(yk,1);
  delay(6000);
  //ARAÇ YEŞİL IŞIĞI YANDI BİTTİ
  
    
  //ARAÇ SARI IŞIĞI YANDI BAŞLADI
  digitalWrite(ak,0);
  digitalWrite(as,1);
  digitalWrite(ay,0);
  digitalWrite(yy,0);
  digitalWrite(yk,1);
  delay(1000);
  //ARAÇ SARI IŞIĞI YANDI BİTTİ
}
