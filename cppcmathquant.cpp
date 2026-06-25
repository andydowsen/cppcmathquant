#include <windows.h>
#include <sapi.h>
#include <iostream>

int main(int argc, const char *argv[]) {
    HRESULT hr = CoInitialize(nullptr);

    if (FAILED(hr))
    {
        std::cerr << "COM initialization failed\n";
        return 1;
    }

    ISpVoice* pVoice = nullptr;

    hr = CoCreateInstance(
        CLSID_SpVoice,
        nullptr,
        CLSCTX_ALL,
        IID_ISpVoice,
        (void**)&pVoice
    );

    if (SUCCEEDED(hr))
    {
        pVoice->Speak(
            L"Hello. Windows Speech API is working correctly.",
            SPF_DEFAULT,
            nullptr
        );

        pVoice->Release();
    }
    else
    {
        std::cerr << "Failed to create voice instance\n";
    }

    CoUninitialize();
    return 0;
}