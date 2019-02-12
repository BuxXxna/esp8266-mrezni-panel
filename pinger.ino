
#include <ESP8266WiFi.h>
#include <ESP8266Ping.h>
#define LED1 D0  //Magacin Klijent
#define LED2 D1  //Magacin Eksploziva
#define LED3 D2  //Flotacija Upravna zgrada
#define LED4 D3  //Flotacija antena 1
#define LED5 D4  //Flotacija antena 2
#define LED6 D5  //Masinska Radionica
#define LED7 D6  //Remiza
#define LED8 D7  //Portirnica
#define BUZZ D8  //Buzzer
const char* ssid     = "mojwifi";
const char* password = "lozinka12345";
//upisati ispravno ip adrese sa mreze
const char* remote_host1 = "10.6.1.1";   //magacin klijent
const char* remote_host2 = "10.6.1.2"; //Magacin Eksploziva
const char* remote_host3 = "10.6.1.2";   //Flotacija upravna
const char* remote_host4 = "10.6.1.2"; //Flotacija antena 1
const char* remote_host5 = "10.6.1.2";  //Flotacija antena 2
const char* remote_host6 = "10.6.1.2"; //Masinska radionica
const char* remote_host7 = "10.6.1.2";  //Remiza
const char* remote_host8 = "10.6.1.2"; //Portirnica


void setup() {
  pinMode(LED1, OUTPUT); 
  pinMode(LED2, OUTPUT); 
  pinMode(LED3, OUTPUT); 
  pinMode(LED4, OUTPUT); 
  pinMode(LED5, OUTPUT); 
  pinMode(LED6, OUTPUT); 
  pinMode(LED7, OUTPUT); 
  pinMode(LED8, OUTPUT); 
  pinMode(BUZZ, OUTPUT); 


  
  Serial.begin(115200);
  delay(10);

  // Povezivanje na wifi

  Serial.println();
  Serial.println("Povezujem se na wifi");
  
  WiFi.begin(ssid, password);
  
  while (WiFi.status() != WL_CONNECTED) {
    delay(100);
    Serial.print(".");
  }

  Serial.println();
  Serial.print("Povezan na WIFI sa ip ");  
  Serial.println(WiFi.localIP());

  Serial.print("Pingujem ");    //vidi se samo iz terminala
  Serial.println(remote_host1);
  Serial.println(remote_host2);
  Serial.println(remote_host3);
  Serial.println(remote_host4);
  Serial.println(remote_host5);
  Serial.println(remote_host6);
  Serial.println(remote_host7);
  Serial.println(remote_host8);


}

void loop() { 
  //ovo mi je template a ujedno i ping za Magacin Klijent
  if(Ping.ping(remote_host1)) {
    Serial.println("Uspesan ping magacin!!");
    digitalWrite(LED1, HIGH);
    
    } else {
    Serial.println("Greska magacin:(");
    digitalWrite(LED1, LOW);
    digitalWrite(BUZZ, HIGH);
    delay(200);
    digitalWrite(BUZZ, LOW);
    delay(200);
    digitalWrite(BUZZ, HIGH);
    delay(200);
    digitalWrite(BUZZ, LOW);
    delay(200);
    digitalWrite(BUZZ, HIGH);
    delay(200);
    digitalWrite(BUZZ, LOW);
    delay(200);
    digitalWrite(BUZZ, HIGH);
    delay(200);
    digitalWrite(BUZZ, LOW);
    delay(200);
    digitalWrite(BUZZ, HIGH);
    delay(200);
   digitalWrite(BUZZ, LOW);
    delay(200);
  }
   delay(3000);
//Magacin eksploziva
 if(Ping.ping(remote_host2)) {
    Serial.println("Uspesan ping magacin eksploziva!!");
    digitalWrite(LED2, HIGH);
    
    } else {
    Serial.println("Greska Magacin eksploziva :(");
    digitalWrite(LED2, LOW);
   digitalWrite(BUZZ, HIGH);
    delay(200);
    digitalWrite(BUZZ, LOW);
    delay(200);
    digitalWrite(BUZZ, HIGH);
    delay(200);
    digitalWrite(BUZZ, LOW);
    delay(200);
    digitalWrite(BUZZ, HIGH);
    delay(200);
    digitalWrite(BUZZ, LOW);
    delay(200);
    digitalWrite(BUZZ, HIGH);
    delay(200);
    digitalWrite(BUZZ, LOW);
    delay(200);
    digitalWrite(BUZZ, HIGH);
    delay(200);
   digitalWrite(BUZZ, LOW);
    delay(200);
   
  }
   delay(2000);

 //Flotacija uprava
  if(Ping.ping(remote_host3)) {
    Serial.println("Uspesan ping Flotacija uprava!!");
    digitalWrite(LED3, HIGH);
    
    } else {
    Serial.println("Greska Flotacija uprava :(");
    digitalWrite(LED3, LOW);
   digitalWrite(BUZZ, HIGH);
    delay(200);
    digitalWrite(BUZZ, LOW);
    delay(200);
    digitalWrite(BUZZ, HIGH);
    delay(200);
    digitalWrite(BUZZ, LOW);
    delay(200);
    digitalWrite(BUZZ, HIGH);
    delay(200);
    digitalWrite(BUZZ, LOW);
    delay(200);
    digitalWrite(BUZZ, HIGH);
    delay(200);
    digitalWrite(BUZZ, LOW);
    delay(200);
    digitalWrite(BUZZ, HIGH);
    delay(200);
   digitalWrite(BUZZ, LOW);
    delay(200);
   
  }
   delay(2000);
 //Flotacja antena 1
  if(Ping.ping(remote_host4)) {
    Serial.println("Uspesan ping Flotacja antena 1!!");
    digitalWrite(LED4, HIGH);
    
    } else {
    Serial.println("Greska Flotacja antena 1 :(");
    digitalWrite(LED4, LOW);
    digitalWrite(BUZZ, HIGH);
    delay(200);
    digitalWrite(BUZZ, LOW);
    delay(200);
    digitalWrite(BUZZ, HIGH);
    delay(200);
    digitalWrite(BUZZ, LOW);
    delay(200);
    digitalWrite(BUZZ, HIGH);
    delay(200);
    digitalWrite(BUZZ, LOW);
    delay(200);
    digitalWrite(BUZZ, HIGH);
    delay(200);
    digitalWrite(BUZZ, LOW);
    delay(200);
    digitalWrite(BUZZ, HIGH);
    delay(200);
   digitalWrite(BUZZ, LOW);
    delay(200);
   
  }
   delay(2000); 
 //Flotacija antena 2
  if(Ping.ping(remote_host5)) {
    Serial.println("Uspesan ping Flotacija antena 2!!");
    digitalWrite(LED5, HIGH);
    
    } else {
    Serial.println("Greska Flotacija antena 2:(");
    digitalWrite(LED5, LOW);
    digitalWrite(BUZZ, HIGH);
    delay(200);
    digitalWrite(BUZZ, LOW);
    delay(200);
    digitalWrite(BUZZ, HIGH);
    delay(200);
    digitalWrite(BUZZ, LOW);
    delay(200);
    digitalWrite(BUZZ, HIGH);
    delay(200);
    digitalWrite(BUZZ, LOW);
    delay(200);
    digitalWrite(BUZZ, HIGH);
    delay(200);
    digitalWrite(BUZZ, LOW);
    delay(200);
    digitalWrite(BUZZ, HIGH);
    delay(200);
   digitalWrite(BUZZ, LOW);
    delay(200);
   
  }
   delay(2000);

 //masinska radionica
  if(Ping.ping(remote_host6)) {
    Serial.println("Uspesan ping masinska radionica!!");
    digitalWrite(LED6, HIGH);
    
    } else {
    Serial.println("Greska masinska radionica:(");
    digitalWrite(LED6, LOW);
    digitalWrite(BUZZ, HIGH);
    delay(200);
    digitalWrite(BUZZ, LOW);
    delay(200);
    digitalWrite(BUZZ, HIGH);
    delay(200);
    digitalWrite(BUZZ, LOW);
    delay(200);
    digitalWrite(BUZZ, HIGH);
    delay(200);
    digitalWrite(BUZZ, LOW);
    delay(200);
    digitalWrite(BUZZ, HIGH);
    delay(200);
    digitalWrite(BUZZ, LOW);
    delay(200);
    digitalWrite(BUZZ, HIGH);
    delay(200);
   digitalWrite(BUZZ, LOW);
    delay(200);
   
  }
   delay(2000);

   //remiza
    if(Ping.ping(remote_host7)) {
    Serial.println("Uspesan remiza!!");
    digitalWrite(LED7, HIGH);
    
    } else {
    Serial.println("Greska remiza:(");
    digitalWrite(LED7, LOW);
    digitalWrite(BUZZ, HIGH);
    delay(200);
    digitalWrite(BUZZ, LOW);
    delay(200);
    digitalWrite(BUZZ, HIGH);
    delay(200);
    digitalWrite(BUZZ, LOW);
    delay(200);
    digitalWrite(BUZZ, HIGH);
    delay(200);
    digitalWrite(BUZZ, LOW);
    delay(200);
    digitalWrite(BUZZ, HIGH);
    delay(200);
    digitalWrite(BUZZ, LOW);
    delay(200);
    digitalWrite(BUZZ, HIGH);
    delay(200);
   digitalWrite(BUZZ, LOW);
    delay(200);
   
  }
   delay(2000);
   //portirnica
    if(Ping.ping(remote_host8)) {
    Serial.println("Uspesan ping portirnica!!");
    digitalWrite(LED8, HIGH);
    
    } else {
    Serial.println("Greska portirnica:(");
    digitalWrite(LED8, LOW);
    digitalWrite(BUZZ, HIGH);
    delay(200);
    digitalWrite(BUZZ, LOW);
    delay(200);
    digitalWrite(BUZZ, HIGH);
    delay(200);
    digitalWrite(BUZZ, LOW);
    delay(200);
    digitalWrite(BUZZ, HIGH);
    delay(200);
    digitalWrite(BUZZ, LOW);
    delay(200);
    digitalWrite(BUZZ, HIGH);
    delay(200);
    digitalWrite(BUZZ, LOW);
    delay(200);
    digitalWrite(BUZZ, HIGH);
    delay(200);
   digitalWrite(BUZZ, LOW);
    delay(200);
   
  }
   delay(2000);
  }
