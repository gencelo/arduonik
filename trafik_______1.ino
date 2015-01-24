int yesil = 5;  
int sari = 6;
int kirmizi = 7;
//Üst tarafta ledlerin hangi pinlere bağlanacağını tanımladık eğer bu işlemi yapmasaydık "sari" yazacağımız yerlere 6 yazardık ancak bu karışıklığa sebep olabilir bu yüzden bu tanımlamaları yapmaya alışmak iyi olur
void setup(){ // bu blok kodları sadece bir defa başlangıçta çalışır adı üstünde Arduino kartımızı kuruyoruz
  pinMode(yesil, OUTPUT);
  pinMode(sari, OUTPUT);
  pinMode(kirmizi, OUTPUT);  
// üst tarafta ise ledleri taktığımız pinleri çıkış olarak ayarladık bu sayede bu pinleri bir güç kaynağı gibi kullanıp ledlere gerekli gücü göndereceğiz  
}
void loop(){ // bu blok içine yazılan kodlar devamlı olarak bitip başa döner Arduinoya güç geldiği sürece devam eder 
  digitalWrite(yesil, HIGH); // yeşil ışık yanıyor
  delay(5000); // yeşil ışık 5 saniye boyunca açık kalıyor
  digitalWrite(yesil, LOW); // yesil ışığı kapatıyoruz
  digitalWrite(sari, HIGH); // sarı ışığı yakıyoruz
  delay(750); // 0.75 sn bekliyoruz
  digitalWrite(sari, LOW); // sari ışık sönüyor
  digitalWrite(kirmizi, HIGH); // kırmızı ışık yanıyor
  delay(3500); // 3.5 sn bekliyoruz
  digitalWrite(kirmizi, LOW); // kırmızı ışık sönüyor
  // sistem buradan sonra yeşil ışığı yazdığımız koda döner 
}
