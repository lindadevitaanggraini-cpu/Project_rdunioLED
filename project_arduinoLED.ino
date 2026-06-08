int led_merah = 2;



void setup() {
 pinMode(led_merah, OUTPUT);



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



    //3= hijau menyala



   //4= semua mati
    else if(perintah=='4'){
     digitalWrite(led_merah, LOW);

    }




   //5= semua nyala
    else if(perintah=='5'){
      digitalWrite(led_merah, HIGH);

    }
  }

}
