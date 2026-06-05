int led_merah = 2;
int led_kuning = 4;


void setup() {
 pinMode(led_merah, OUTPUT);
 pinMode(led_kuning, OUTPUT);


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






   //4= semua mati
else if (perintah == '4'){
  
  digitalWrite(led_kuning, LOW);
  
}




   //5= semua nyala
   digitalWrite(led_kuning, HIGH);
  }

}
