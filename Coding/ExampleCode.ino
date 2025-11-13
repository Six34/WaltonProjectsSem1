// Anything you write on the same line as a "//" will be ignored by the code. Use it for comments.
// If you don't know how to realise your code, put it in a comment and an Educator will have it done for you by next week.

// Declarations //
// Variable Declarations
int inputPin = 3;
int outputPin = 8;
int analogPin = A0; // <- Notice how A0 is allowed as an integer even though it isn't just a number. Arduino knows we mean AnalogPin 1 and therefore accepts it.
int number = 0;

float pressDuration = 0;

bool buttonPressed = false;

String screenText = "Hello World";

// Logs the current time in a variable of type "Long", 4 bytes (32 bits). Most groups will not need this.
long time = millis();

// Function Declarations
int countUP(int previousNumber);
void sendMessage(String message);
long reportTime();



// Setup Function //
void setup() { // The setup only runs *one time* whenever your Arduino starts.
  Serial.begin(9600); // This begins communications with the Arduino. All code snippets must in include this *in the setup*

  // Set state of all the pins you will be using.
  pinMode(inputPin, INPUT);
  pinMode(outputPin, OUTPUT);
  pinMode(analogPin, INPUT);

  // Any other code that you only need to run once, such as loggin starting conditions should go inside this section.
}

// Loop Function //
void loop() { // The loop runs every time it can, put your main code here, to run repeatedly.

  // Function Calls
  number = countUp(number);
  sendMessage("Test Message");
  time = reportTime();

  //Boolean Logic
  if (buttonPressed) {
    sendMessage("The current time is" + time);
  }

  while(number <= 10) {
    Serial.println("Number has yet to pass 10");
  }
}



// Function Definitions //
// Actual functions go here
int countUp(int previousNumber) {
  return previousNumber++;
}

void sendMessage(String message) {
  Serial.print(message);
  // Some Networking Code...
  // e.g. Buggy.sendCommand(message); < You will know if you need this 
}

long reportTime() {
  return millis();
}
