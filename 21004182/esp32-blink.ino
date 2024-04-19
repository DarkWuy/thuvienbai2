
const int buttonPin = 14;
const int ledPin = 4;
int buttonState = 0;
int ledState=HIGH;

void setup() {
  Serial.begin(115200);
  pinMode(buttonPin, INPUT);
  Serial.println("setup Done");
  delay(1000);
  digitalWrite(ledPin, ledState);
}
void loop(){
  if(Serial.available()){
    char linh = Serial.read();
    if(linh=='1'){
      Serial.println("sáng");
       pinMode(ledPin, OUTPUT);
      digitalWrite(ledPin, ledState);
    }
    if(linh=='0'){Serial.println("tắt");
       pinMode(ledPin, INPUT);
      digitalWrite(ledPin, ledState);
    }

  // buttonState = digitalRead(buttonPin);
  // if(buttonState == HIGH){
  //   Serial.println("Dang nhan nut");
  //   delay(1);
  // }
  // else{
  //   Serial.println("khong nhan nut");
  //   delay(1);
}
}