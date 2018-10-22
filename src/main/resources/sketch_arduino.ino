String stringSepalLength = "";
String stringSepalWidth = "";
String stringPetalLength = ""; 
String stringPetalWidth = "";
 
void setup() {
  
  Serial.begin(9600);

}

void loop() {

  int SepalLength = analogRead(A0);
  float fSepalLength = ((float)SepalLength / 1024.0) * 5;
  stringSepalLength = String(fSepalLength , 2);
  //Serial.println("{'nodo':'nodo01','Sepal Length ':" + stringSepalLength  + "}");
 

  int SepalWidth = analogRead(A1);
  float fSepalWidth = ((float)SepalWidth / 1024.0) * 5;
  stringSepalWidth = String(fSepalWidth , 2);
  //Serial.println("{'nodo':'nodo01','Sepal Width ':" + stringSepalWidth  + "}");

  int PetalLength = analogRead(A2);
  float fPetalLength = ((float)PetalLength / 1024.0) * 5;
  stringPetalLength = String(fPetalLength , 2);
  //Serial.println("{'nodo':'nodo01','Petal Length ':" + stringPetalLength  + "}");

  int PetalWidth = analogRead(A3);
  float fPetalWidth = ((float)PetalWidth / 1024.0) * 5;
  stringPetalWidth = String(fPetalWidth , 2);
  //Serial.println("{'nodo':'nodo01','Petal Width ':" + stringPetalWidth  + "}");

  Serial.println("{\"nodo\":\"nodo01\",\"Sepal_Length\":" +stringSepalLength+ ",\"Sepal_Width\":" + stringSepalWidth +",\"Petal_Length\":" + stringPetalLength + ",\"Petal_Width\":" + stringPetalWidth  + "}");
  delay(2000);

}