const int numColumns = 20;
const int numRows = 10;


int actuators[numColumns * numRows] = {
  2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, A0, A1, A2, A3, A4, A5, 0, 1
};


void raiseDot(int column, int row) {
  int index = row * numColumns + column;
  digitalWrite(actuators[index], HIGH); 
  delay(50);  
}


void lowerDot(int column, int row) {
  int index = row * numColumns + column;
  digitalWrite(actuators[index], LOW);  
  delay(50);  
}


void displayBrailleA() {
  raiseDot(0, 0);
  raiseDot(1, 0);
  raiseDot(0, 1);
  raiseDot(0, 2);
  raiseDot(0, 3);
  raiseDot(0, 4);
  delay(2000);  
  
  for (int i = 0; i < numColumns * numRows; i++) {
    digitalWrite(actuators[i], LOW);
  }
}

void setup() {
 
  for (int i = 0; i < numColumns * numRows; i++) {
    pinMode(actuators[i], OUTPUT);
  }
}

void loop() {
  
  displayBrailleA();
  delay(5000);  
}
