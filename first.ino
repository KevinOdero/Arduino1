int myArray[] = {10, 20, 30, 40, 50}; // declare and initialize an array
int arrayLength = sizeof(myArray) / sizeof(myArray[0]); // calculate array length

void setup() {
  Serial.begin(9600); // initialize serial communication
}

void loop() {
  static int currentIndex = 0; // initialize index counter
  
  if (currentIndex < arrayLength) {
    // access and print the current item in the array
    Serial.print("Item ");
    Serial.print(currentIndex);
    Serial.print(": ");
    Serial.println(myArray[currentIndex]);
    currentIndex++; // increment index counter
    delay(1000); // wait for 1 second
  }
}
