#include <Arduino.h>
#include "LED.h"
#include <OneButton.h>               
LED led1(ledPin1, LED_ACT);     
LED led2(ledPin2, LED_ACT);    
OneButton button(buttonPin, !BTN_ACT);
int currentLED = 1;
void singleClick();
void doubleClick();
void longPressStart();
void setup()
{
    led1.off();  
    led2.off();  
    button.attachClick(singleClick);
    button.attachDoubleClick(doubleClick);
    button.attachLongPressStart(longPressStart);
}

void loop()
{   unsigned long now = millis();
    led1.loop();
    led2.loop();
    button.tick();
    
}
void singleClick()
{
    if (currentLED == 1)
    {
        led1.flip();  
    }
    else
    {
        led2.flip();  
    }
}
void doubleClick()
{
    currentLED = (currentLED == 1) ? 2 : 1;
}
void longPressStart()
{
    if (currentLED == 1)
    {
        led1.blink(200); 
    }
    else
    {
        led2.blink(200);  
    }
}
