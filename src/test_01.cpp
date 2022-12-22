#include "file_utils.h"
#include <Arduino.h>
void setup(){
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
}

void loop(){

}
