//
//  MidiSender.cpp
//  ofxMSAControlFreak example-tutorial
//
//  Created by Memo Akten on 02/02/2013.
//
//

#include "MidiSender.h"


namespace msa {
    namespace controlfreak {
        namespace midi {
            
            //--------------------------------------------------------------
            void Sender::setup(int port) {
                midiOut.listPorts();
                midiOut.openPort(port);
            }
            
            
            //--------------------------------------------------------------
            void Sender::update() {
//                for(int i=0; i<controllers.size(); i++) {
//                    Controller *controller = controllers[i];
//                    
//                }
            }

            
        }
    }
}