// C++ code
//
byte btn;

byte pins[7]={13, 12, 11, 10, 9, 8, 7};
byte show[16][7]={
  {0, 0, 0, 0, 0, 0, 1},//abcdefg
  {1, 0, 0, 1, 1, 1, 1},
  {0, 0, 1, 0, 0, 1, 0},
  {0, 0, 0, 0, 1, 1, 0},
  {1, 0, 0, 1, 1, 0, 0},
  {0, 1, 0, 0, 1, 0, 0},
  {1, 1, 0, 0, 0, 0, 0},
  {0, 0, 0, 1, 1, 1, 1},
  {0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 1, 1, 0, 0},
  {0, 0, 0, 1, 0, 0, 0},//A
  {1, 1, 0, 0, 0, 0, 0},//b
  {1, 1, 1, 0, 0, 1, 0},//C
  {1, 0, 0, 0, 0, 1, 0},//d
  {0, 1, 1, 0, 0, 0, 0},//E
  {0, 1, 1, 1, 0, 0, 0},//f
};
void setup()
{
  pinMode(1, INPUT_PULLUP);
  for (byte i = 0; i < 7; ++i) {
   pinMode(pins[i], OUTPUT); 
  }
}
void loop()
{
  
    for(byte i = 0; i < 16; i++)
    {     
      btn = digitalRead(1);
      for(byte j = 0; j < 7; j++)
      {
          if (btn==LOW)
          {
             for(byte o = 0; o < 7; o++)
             {
               digitalWrite(pins[o], 1);
             }
          }
          else
          {
        	digitalWrite(pins[j], show[i][j]); 
          }  
      }
        delay(1000);
    }
  
}
       
    
    

