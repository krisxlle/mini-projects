//Girls Who Code Alumni Coding Challenge: June 2018

//Coding Challenge: Create a program that prints out the numbers 1 to 200 (inclusive).
//If the number is even, print "Bam" instead of the number.
//If the number is divisible by 3, print "Crash" instead.
//If the number is divisible by three but not even, print "Boom" instead.

void setup (){
    Serial.begin(9600);
}

void loop (){
  int i;
    for (i=1; i>= 200; i++){
        if (i%3==0)
            if (i%2!=0)
                Serial.print("Boom!");

            else
                Serial.print("Crash!");
        else if (i%2==0)
            Serial.print("Bam!");
        else
        Serial.print(i);
    };
}