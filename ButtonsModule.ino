int t_daq = 250;

int Pin_OnOff = 3;  
int Pin_Rec = 4;    
int Pin_Daq = 5;
int Val_OnOff;
int Val_Rec;
int Val_Daq;

     

void setup() {
  pinMode(Pin_OnOff, INPUT);  
  pinMode(Pin_Rec, INPUT);  
  pinMode(Pin_Daq, INPUT);
  Serial.begin(9600);
 Serial.println("Start");
}

void loop() {
  Val_OnOff = digitalRead(Pin_OnOff);
  Val_Rec = digitalRead(Pin_Rec);
  Val_Daq = digitalRead(Pin_Daq);



  Serial.print("|| ");
  Serial.print("OnOff:");
  Serial.print(Val_OnOff);
  Serial.print(" | ");
  Serial.print("Rec:");
  Serial.print(Val_Rec);
  Serial.print(" | ");
  Serial.print("Daq:");
  Serial.print(Val_Daq);
  Serial.print(" ||");
  Serial.println("");
  delay(t_daq);
}
