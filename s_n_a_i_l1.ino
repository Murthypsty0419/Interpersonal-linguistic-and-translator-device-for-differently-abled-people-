#include <Servo.h>

#include <Keypad.h>

const byte rows = 4;
const byte cols = 4;
char hexkeypad[rows][cols] = {{'1','2','3','A'},
                              {'4','5','6','B'},
                              {'7','8','9','C'},
                              {'*','0','#','D'}
                              };

byte rowspins[rows] = {12,11,6,7};
byte colspins[cols] = {5,4,3,2};

Keypad kpd = Keypad( makeKeymap(hexkeypad), rowspins, colspins, rows, cols );

byte i = 0;

 




Servo servo_A4;

Servo servo_A5;

Servo servo_8;

Servo servo_9;

Servo servo_10;

Servo servo_13;

void setup()
{
    pinMode(A2, OUTPUT);
    
Serial.begin(9600);
    for (i=0; i<8; i++)
    {
        pinMode(i,OUTPUT);
    }

{

servo_A4.attach(A4, 500, 2500);

servo_A5.attach(A5, 500, 2500);

servo_8.attach(8, 500, 2500);

servo_9.attach(9, 500, 2500);

servo_10.attach(10, 500, 2500);

servo_13.attach(13, 500, 2500);

}
    {   servo_A4.write(0);

     servo_13.write(0);
        servo_A5.write(0);
        servo_8.write(0);
        servo_9.write(0);
        servo_10.write(0);}





  
}

void loop()

{


    tone(A2, 200, 100);


    char keypressed = kpd.getKey();
    int result = kpd.getKey();
    if (keypressed)
    {
        Serial.print("Key Pressed is ");
        Serial.println(keypressed);

        
        if (keypressed == '1') {
        servo_A5.write(0);
            servo_A4.write(0);
                servo_8.write(20);
            servo_9.write(0);
                servo_10.write(0);
                    servo_13.write(0);

        
        
        
        
        
        }
        if (keypressed == '2') {
        servo_A5.write(0);
            servo_A4.write(0);
                servo_8.write(20);
            servo_9.write(20);
                servo_10.write(0);
                    servo_13.write(0);



        }
        if (keypressed == '3') {
        servo_A5.write(20);
            servo_A4.write(0);
                servo_8.write(20);
            servo_9.write(0);
                servo_10.write(0);
                    servo_13.write(0);
        }
        if (keypressed == '4') {
        servo_A5.write(20);
            servo_A4.write(20);
                servo_8.write(20);
            servo_9.write(0);
                servo_10.write(0);
                    servo_13.write(0);
  
        }
        if (keypressed == '5') {
        servo_A5.write(0);
            servo_A4.write(20);
                servo_8.write(20);
            servo_9.write(0);
                servo_10.write(0);
                    servo_13.write(0);

        }
       if (keypressed == '6') {
        servo_A5.write(20);
            servo_A4.write(0);
                servo_8.write(20);
            servo_9.write(20);
                servo_10.write(0);
                    servo_13.write(0);
        
        
        }
        if (keypressed == '7') {
        servo_A5.write(20);
            servo_A4.write(20);
                servo_8.write(20);
            servo_9.write(20);
                servo_10.write(0);
                    servo_13.write(0);
  

        }
        if (keypressed == '8') {
        servo_A5.write(0);
            servo_A4.write(0);
                servo_8.write(20);
            servo_9.write(0);
                servo_10.write(0);
                    servo_13.write(0);
  
  
        }
        if (keypressed == '9') {
        servo_A5.write(20);
            servo_A4.write(0);
                servo_8.write(20);
            servo_9.write(20);
                servo_10.write(0);
                    servo_13.write(0);


        }
        if (keypressed == '0') {
        servo_A5.write(20);
            servo_A4.write(20);
                servo_8.write(0);
            servo_9.write(20);
                servo_10.write(0);
                    servo_13.write(0);


        }
        if (keypressed == 'A') {
        servo_A5.write(0);
            servo_A4.write(0);
                servo_8.write(20);
            servo_9.write(0);
                servo_10.write(0);
                    servo_13.write(0);

        
        }
        if (keypressed == 'B') {
        servo_A5.write(0);
            servo_A4.write(0);
                servo_8.write(20);
            servo_9.write(20);
                servo_10.write(0);
                    servo_13.write(0);


        }
        if (keypressed == 'C') {
        servo_A5.write(20);
            servo_A4.write(0);
                servo_8.write(20);
            servo_9.write(0);
                servo_10.write(0);
                    servo_13.write(0);


        }
        if (keypressed == 'D') {
        servo_A5.write(20);
            servo_A4.write(20);
                servo_8.write(20);
            servo_9.write(0);
                servo_10.write(0);
                    servo_13.write(0);


        }
        if (keypressed == '#') {
        servo_A5.write(20);
            servo_A4.write(20);
                servo_8.write(0);
            servo_9.write(0);
                servo_10.write(20);
                    servo_13.write(20);


             }  






    }

    delay(10);
}
