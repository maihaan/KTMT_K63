int nutNhan = 3, led = 9;
boolean trangThai = false;

void setup () {
  pinMode(nutNhan, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if(digitalRead(nutNhan) == HIGH)
  {    
    if(trangThai == true)
    {
      Serial.println("Tat");
      digitalWrite(led, LOW);
      trangThai = false;
    }
    else
    {
      Serial.println("Loi");
      digitalWrite(led, HIGH);
      trangThai = true;
    }
    delay(1000);
  }
}

