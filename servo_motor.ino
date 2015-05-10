#include <Servo.h> //kütüphanemizi ekliyoruz, Taslak > kütüphaneyi içe aktar > Servo   yolu ilede eklenebilir.
int servoPin = 9; // Servonun bağlı olduğu pini ekliyoruz
Servo servo;      // Kütüphane sayesinde Servo adlı bir değişken oluyor ve tıkpı int, float gibi tanımlanıyor biz burada servo olarak adlandırıyoruz.
int aci;            // açı değerimizi tutacak integer türünde değişken oluşturuyoruz
 
void setup() 
{ 
  servo.attach(servoPin);  // .attach komutu ile servoyu ekliyoruz
  servo.write(0);      // bazı servolar ilk başta saçma sapan hareket yapar yada belirsiz bir konumda başlar bunu önlemek için .write komutu ile servo açısını 0 yapıyoruz.
  delay(1000);         //Servonun kendisine gelmesi için bekliyoruz bu süre sizin servonuza göre değiştirilebilir. 
                        // bu iki işlemi setup içinde yapıyoruz çünkü devreye elektrik deldiğinde sadece birkere çalışması yeterli eğer loop içinde olsa 
                        // her turda servo 0 derece olucak ve 1 sn bekliyecek
} 
 
void loop() 
{
  //Tarama hareketi için iki for döngüsü yazıyoruz burada servonun en fazla 180 derece gittiği varsayıldı farklı değerler için 180 değeri değiştirilebilir
  for(aci=0;aci<=180;aci++){ // açımız 0 olduğunda 180 dereceye kadar bir bir artacak 
    servo.write(aci); // ve bu değer servoya yazılarak servonun hareketi sağlanacak
    delay(25);        // araya çok az bir bekleme koyuyoruz ki sistem saçmalamasın 
  }
   for(aci=180;aci>=0;aci--){ // açımız 180 olduğunda 0 dereceye kadar bir bir azalacak
    servo.write(aci);  // bu değer servoya yazılacak
     delay(25);        //tekrar her derece arasında kısa bir süre beklenecek ancak bu bekleme gözle görülmeyecektir.
 }
 } 
