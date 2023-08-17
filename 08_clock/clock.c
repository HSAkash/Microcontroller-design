/*
BC547BP
*/

char array_CA[]={0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};
void main() {
     int i=0,j,hour=0, minute=0;
     TRISB = 0x00;     //set portb as output
     portb = 0x00;     //Initialization
     TRISD = 0x00;     //set portc as output
     portd = 0x00;     //Initialization
     while(1)
     {
         
         // Hour
         portd.f0=1;
         portb = array_CA[hour/10];
         delay_ms(10);
         portd.f0=0;

         portd.f1=1;
         portb = array_CA[hour%10];
         delay_ms(10);
         portd.f1=0;
         
         
         // Minute

         portd.f2=1;
         portb = array_CA[minute/10];
         delay_ms(10);
         portd.f2=0;

         portd.f3=1;
         portb = array_CA[minute%10];
         delay_ms(10);
         portd.f3=0;
         


         i++;
         if(i==1200){
             minute++;
         }
         if(minute==60){
             hour++;
         }
         i %= 1200;
         minute %= 60;
         hour %= 24;

     }

}