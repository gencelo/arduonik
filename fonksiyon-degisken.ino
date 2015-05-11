// arduonik.blogspot.com
// Bu örnekte Arduino kartımızda dahili bulunan ve 13. pine bağlı led kullanacağız
int led = 13;  // pinimize "led" adını veriyoruz


void ac_kapa(int bekleme){ //daha sonra "ac_kapa" adında bir fonksiyon oluşturuyoruz ama daha önceki parantez içinin aksine burada bekleme adında bir int değişken var
// fonksiyonu kullanırken bu değişken yerine istediğimiz değeri yazarsak sadece bu fonksiyon içinde kullanılan bekleme değişkenleri yazdığımız değeri alacak
    digitalWrite(led, HIGH);   // ilk başta ledimizi açık duruma getiriyoruz
  delay(bekleme);               // ve bekleme değişkeni kadar bekliyoruz
  digitalWrite(led, LOW);    // ardından ledi kapatiyoruz
  delay(bekleme);            // ve led kapalıyken bekleme değişkeninin değeri kadar bekliyoruz
}  // fonksiyonu kapatmayı unutmayın :)
//kendi fonksiyonumuzdan sonra Setup fonksiyonunu oluşturuyoru
void setup() {

  pinMode(led, OUTPUT);  //led olarak adlandırdığımız 13 nolu pini çıkış pini olarak ayarlıyoruz
}

// Daha sonrada loop fonksiyonuna geçiyoruz
void loop() {
ac_kapa(500);             // ac_kapa fonksiyonunu çalıştırıyoruz ve bekleme değişkenini 500 yapıtoruz yani her iki delay da 500 ms olacak
}
