#include <JuceHeader.h>

class NeonScaleKeysProcessor : public juce::AudioProcessor
{
public:
    NeonScaleKeysProcessor() {}

    const juce::String getName() const override
    {
        return "NeonScaleKeys";
    }

    void prepareToPlay(double, int) override {}
    void releaseResources() override {}

    void processBlock(juce::AudioBuffer<float>&, juce::MidiBuffer&) override {}

    bool isBusesLayoutSupported(const BusesLayout&) const override
    {
        return true;
    }

    juce::AudioProcessorEditor* createEditor() override
    {
        return nullptr;
    }

    bool hasEditor() const override
    {
        return false;
    }

    double getTailLengthSeconds() const override
    {
        return 0.0;
    }

    int getNumPrograms() override
    {
        return 1;
    }

    int getCurrentProgram() override
    {
        return 0;
    }

    void setCurrentProgram(int) override {}

    const juce::String getProgramName(int) override
    {
        return {};
    }

    void changeProgramName(int, const juce::String&) override {}

    void getStateInformation(juce::MemoryBlock&) override {}

    void setStateInformation(const void*, int) override {}
};
