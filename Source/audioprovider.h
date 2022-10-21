#pragma once



#include <JuceHeader.h>

 
 class SinWaveAudio;


class AudioProvider : public juce::Component
{
public:
    AudioProvider();
    ~AudioProvider()override;

private:
    /* std::unique_ptr<juce::AudioFormatReaderSource> readerSource;
     */
    juce::AudioSourcePlayer audioSourcePlayer;
    /*AudioTransportSource transportSource;
    std::unique_ptr<AudioFormatReaderSource> currentAudioFileSource;*/
    juce::AudioDeviceManager audioDeviceManager;
    std::unique_ptr<SinWaveAudio> sinWave;
};
 