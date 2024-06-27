int LED1 = 4;
int LED2 = 0;
int LED3 = 2;
int LED4 = 14;
int LED5 = 12;
int LED6 = 13;
int LED7 = 15;
int LED8 = 3;
int LED9 = 1;
int LED10 = 16;

int BTN = 5;
int BtnSta = 0;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);
  pinMode(LED8, OUTPUT);
  pinMode(LED9, OUTPUT);
  pinMode(LED10,OUTPUT);
  
  pinMode(BTN, INPUT);
}

void loop() {
  BtnSta = digitalRead(BTN);
  
  if(BtnSta == HIGH){
    
    digitalWrite(LED10, LOW);    
        
  digitalWrite(LED5, HIGH);
        delay(100);
  digitalWrite(LED5, LOW);
        
  digitalWrite(LED4,HIGH);
  digitalWrite(LED6, HIGH);
        delay(100);
  digitalWrite(LED4, LOW);
  digitalWrite(LED6, LOW);
        
  digitalWrite(LED3,HIGH);
  digitalWrite(LED7, HIGH);
        delay(100);
  digitalWrite(LED3, LOW);
  digitalWrite(LED7, LOW);
         
  digitalWrite(LED2, HIGH);
  digitalWrite(LED8, HIGH);
        delay(100);
  digitalWrite(LED2, LOW);
  digitalWrite(LED8, LOW);
        
  digitalWrite(LED1, HIGH);
  digitalWrite(LED9, HIGH);
        delay(100);
  digitalWrite(LED1, LOW);
  digitalWrite(LED9, LOW);
            
  }
  if(BtnSta == LOW){
    digitalWrite(LED10, HIGH);
  }
  
}
 