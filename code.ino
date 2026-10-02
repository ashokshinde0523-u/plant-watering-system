// C++ code
//
int soil_sensor = 0;

int soil_moisture_sensor = 0;

int lastwatertime = 0;

int currenttime = 0;

int soilmoisture = 0;

int counter = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  soil_moisture_sensor = analogRead(A0);
  Serial.println(soil_moisture_sensor);
  if (soil_moisture_sensor < 100) {
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    delay(10000); // Wait for 10000 millisecond(s)
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
  }
}