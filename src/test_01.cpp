#include "file_utils.h"
#include "task_utils.h"
#include <Arduino.h>
void setup(){
    pinMode(22, OUTPUT);
    Serial.begin(115200);
    if(!SPIFFS.begin(FORMAT_SPIFFS_IF_FAILED)){
        Serial.println("SPIFFS Mount Failed");
        return;
    }
    
    listDir(SPIFFS, "/", 0);
    //writeFile(SPIFFS, "/hello.txt", "Hello ");
    //appendFile(SPIFFS, "/hello.txt", "World!\r\n");
    //readFile(SPIFFS, "/hello.txt");
    //renameFile(SPIFFS, "/hello.txt", "/foo.txt");
    //readFile(SPIFFS, "/foo.txt");
    //deleteFile(SPIFFS, "/foo.txt");
    //testFileIO(SPIFFS, "/test.txt");
    //deleteFile(SPIFFS, "/test.txt");
    Serial.println( "Test complete" );

    //xTaskCreatePinnedToCore(Task1code, "t1", 10000, NULL, 1, NULL,  0); 
    xTaskCreatePinnedToCore(Task2code, "t2", 10000, NULL, 1, NULL,  0); 
}

void loop(){
  delay(1000);
  Serial.println("Hello from CPU core:");
  Serial.println(xPortGetCoreID());
}
