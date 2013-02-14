#pragma once

#include "ofxMSAControlFreakMidi/src/MidiManagerBase.h"


namespace msa {
    namespace controlfreak {
        namespace midi {
            
            class Sender : public ManagerBase {
            public:
                void setup(int port);
                void update();
                
            private:
                ofxMidiOut midiOut;
                
            };
        }
    }
}