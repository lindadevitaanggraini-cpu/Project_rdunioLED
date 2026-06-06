int led_merah = 2;
int led_kuning = 4;
int led_hijau = 6;

void setup() {
 pinMode(led_merah, OUTPUT);
 pinMode(led_kuning, OUTPUT);
 pinMode(led_hijau, OUTPUT);

 serial.begin(19200);
}

void loop() {
  if (serial.available() > 0) {
    char perintah = serial.read();

    serial.print("Menerima: ");
    serial.println(perintah);

    //1= merah nyala (tanpa mematikan yang lain)
    if(perintah == '1'){
      digitalWrite(led_merah, HIGHT);
    }

    //2= kuning menyala
    else if (perintah == '2'){
       digitalWrite(led_kuning, HIGH);
      }
    //3= hijau menyala
    else if (perintah == '3'){
        digitalWrite(led_hijau, HIGH);
      }
   //4= semua mati
   else if (perintah == '4'){
   digitalWrite(led_merah, LOW);
   digitalWrite(led_kuning, LOW);
   digitalWrite(led_hijau, LOW);
   }
   //5= semua nyala
   else if (perintah == '5'){
   digitalWrite(led_merah, HIGH);
   digitalWrite(led_kuning, HIGH);
   digitalWrite(led_hijau, HIGH);
   }
  }
}
