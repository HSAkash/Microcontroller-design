/*
BC547BP
*/

char array_CA[]={0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};
void main() {
     int i=0;
     int leftDigit, rightDigit;
     TRISB = 0x00;
     portb = 0x00;
     TRISD = 0xff;


     while(1)
     {
            if(portd.f0 == 1){
            portb.f2 = 1;
            portb.f0= 0;
            portb.f1 = 1;
            }
            if(portd.f1 == 1){
            portb.f2 = 0;
            portb.f0= 0;
            portb.f1 = 0;
            }
            
            if(portd.f2 == 1){
            portb.f2 = 1;
            portb.f0= 1;
            portb.f1 = 0;
            }
            if(portb.f2 == 0 ){
                  portb.f3 = 1;
            }else{
                  portb.f3 = 1;
                  delay_ms(100);
                  portb.f3 = 0;
                  delay_ms(100);
            }
            



     }

}