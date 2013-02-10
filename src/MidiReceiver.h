#pragma once

#include "ofxMSAControlFreak/src/ofxMSAControlFreak.h"
#include "ofxMSAControlFreakMidi/src/ofxMSAControlFreakMidi.h"
#include "ofxMidi.h"

namespace msa {
    namespace controlfreak {
        namespace midi {
            
            class Receiver : public ofxMidiListener {
            public:
                void setup(int port);
                void update();
                
                void newMidiMessage(ofxMidiMessage& msg);
                
            private:
                ofxMidiIn midiIn;
                
            };
            
        }
    }
}