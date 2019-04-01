/**********************************************************************************
**                                                                               **
**                              Lector de Llum                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int led0 = 9;
const int ldr0 = A0;         // donar nom al pin A0 de l’Arduino

const int ldr1 = A1;         // donar nom al pin A1 de l’Arduino
const int led1 = 10;

const int ldr2 = A2;         // donar nom al pin A2 de l’Arduino
const int led2 = 11;


int valLdr0, valLdr1, valLdr2;     // per guardar valors del ldrs

//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 9 com una sortida
  Serial.begin(9600);
}

//********** Loop *****************************************************************
void loop()
{
  valLdr0 = analogRead(ldr0);   // llegir valor ldr0
  Serial.print("Ldr0 val ");
  Serial.println(valLdr0);
  delay(500);
  valLdr0 = map(valLdr0, 53, 700, 0, 255);   // mapejar valor de 0-1023 a 0-255
  analogWrite(led0, valLdr0); 
  
  
  valLdr1 = analogRead(ldr1);   // llegir valor ldr1
  Serial.print("ldr1 val ");
  Serial.println(valLdr1);
  delay(500);
  valLdr1 = map(valLdr1, 130, 500, 0, 255);   // mapejar valor de 0-1023 a 0-255
  analogWrite(led1, valLdr1); 
  
  valLdr2 = analogRead(ldr2);   // llegir valor ldr2
  Serial.print("ldr2 val ");
  Serial.println(valLdr2);
  delay(500);
  valLdr2 = map(valLdr2, 119, 760, 0, 255);   // mapejar valor de 0-1023 a 0-255
  analogWrite(led2, valLdr2); 

}

//********** Funcions *************************************************************
