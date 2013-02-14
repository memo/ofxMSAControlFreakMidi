//
//  MidiMidiControllerBase.cpp
//  ofxMSAControlFreak example-tutorial
//
//  Created by Memo Akten on 02/02/2013.
//
//

#include "ofxMSAControlFreakMidi/src/MidiManagerBase.h"

namespace msa {
    namespace controlfreak {
        namespace midi {
            
            
            //--------------------------------------------------------------
            ManagerBase::~ManagerBase() {
            }
            
            //--------------------------------------------------------------
            void ManagerBase::addNote(Parameter *p, bool bOnlyUpdateOnChange, int channel, int noteNumber) {
                add(new Controller(p, bOnlyUpdateOnChange, MIDI_NOTE_ON, channel, noteNumber));
            }
            
            //--------------------------------------------------------------
            void ManagerBase::addCC(Parameter *p, bool bOnlyUpdateOnChange, int channel, int midiCC) {
                add(new Controller(p, bOnlyUpdateOnChange, MIDI_CONTROL_CHANGE, channel, midiCC));
            }
            
            //--------------------------------------------------------------
            void ManagerBase::addProgramChange(Parameter *p, bool bOnlyUpdateOnChange, int channel) {
                add(new Controller(p, bOnlyUpdateOnChange, MIDI_PROGRAM_CHANGE, channel));
            }
            
            //--------------------------------------------------------------
            void ManagerBase::addPitchBend(Parameter *p, bool bOnlyUpdateOnChange, int channel) {
                add(new Controller(p, bOnlyUpdateOnChange, MIDI_PITCH_BEND, channel));
            }
            
            //--------------------------------------------------------------
            void ManagerBase::addAfterTouch(Parameter *p, bool bOnlyUpdateOnChange, int channel) {
                add(new Controller(p, bOnlyUpdateOnChange, MIDI_AFTERTOUCH, channel));
            }
            
            //--------------------------------------------------------------
            void ManagerBase::addPolyAfterTouch(Parameter *p, bool bOnlyUpdateOnChange, int channel, int noteNumber) {
                add(new Controller(p, bOnlyUpdateOnChange, MIDI_POLY_AFTERTOUCH, channel, noteNumber));
            }
            
            
        };
        
    }
}