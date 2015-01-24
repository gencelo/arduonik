void setup()
{
  // pinleri tanımlıyoruz, isterseniz int a = 0; gibi tanımlamalar ile bacak numaralrını adlandırabilirsiniz ancak bu projede pek gerek yok
  pinMode(0, OUTPUT);//a
  pinMode(1, OUTPUT);//b
  pinMode(2, OUTPUT);//c
  pinMode(3, OUTPUT);//d
  pinMode(4, OUTPUT);//e
  pinMode(5, OUTPUT);//f
  pinMode(6, OUTPUT);//g
}
void loop(){
  // istersek kodu while, case filan ekleyerek daha profesyonel hale getirebilirz ancak sonuç aynı olacak :)
  // 0 dan 9 kadar sayıp tekrar 0 a dönecek delay olarak 1 sn ayarladım bu sayede kronometre gibi kullanılabilir
  // 0
   digitalWrite(0,HIGH);
    digitalWrite(1,HIGH);
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
  delay(1000);
  // 1
    digitalWrite(0, LOW);
    digitalWrite(1,LOW);
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
  delay(1000);
  // 2
   digitalWrite(0,HIGH);
    digitalWrite(1,HIGH);
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
  delay(1000);
    // 3
   digitalWrite(0,HIGH);
    digitalWrite(1,LOW);
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
  delay(1000);
  //4
     digitalWrite(0,LOW);
    digitalWrite(1,LOW);
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
  delay(1000);
  // 5 
     digitalWrite(0,HIGH);
    digitalWrite(1,LOW);
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
  delay(1000);
  
  //6
     digitalWrite(0,HIGH);
    digitalWrite(1,HIGH);
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
  delay(1000);
  
  //7
     digitalWrite(0,LOW);
    digitalWrite(1,LOW);
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
  delay(1000);
  
    // 8
   digitalWrite(0,HIGH);
    digitalWrite(1,HIGH);
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
  delay(1000);
  
  // 9
     digitalWrite(0,LOW);
    digitalWrite(1,LOW);
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
  delay(1000);
  }

