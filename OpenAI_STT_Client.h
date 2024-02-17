#ifndef OPENAI_STT_CLIENT_H
#define OPENAI_STT_CLIENT_H

#include "Audio.h"
#include <Arduino.h>

class OpenAI_STT_Client {
public:
    OpenAI_STT_Client(const char* apiKey);
    ~OpenAI_STT_Client();

    String Transcribe(Audio* audio);

private:
    const char* apiKey;
    // Add any necessary internal variables or methods
};

#endif
