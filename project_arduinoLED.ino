int led_merah = 2;
int led_kuning = 4;
int led_hijau = 6;

void setup() {
 pinMode(led_merah, OUTPUT);
 pinMode(led_kuning, OUTPUT);
 pinMode(led_hijau,OUTPUT);

 serial.begin(19200);
}

void loop() {
  if (serial.available() > 0) {
    char perintah = serial.read();

    serial.print("Menerima: ");
    serial.println(perintah);

    //ketik 1= merah nyala (tanpa mematikan yang lain)
    if(perintah == '1'){
      digitalWrite(led_merah, HIGH);
    }
    
    //ketik 2= kuning nyala



    //ketik 3= hijau menyala
    else if (perintah == '3'){
      digitalWrite(led_hijau, HIGH);
    }

  
   //ketik 4= semua mati
   else if (perintah == '4'){
   digitalWrite(led_merah, LOW);

   digitalWrite(led_hijau, LOW);
  
   //ketik 5= semua nyala
   else if (perintah == '5'){
   digitalWrite(led_merah, HIGH);

   digitalWrite(led_hijau, HIGH);
  
  }
}
