#include <iostream>
#include "wsdd.nsmap"
#include "soapwsddProxy.h"
#include "soapDeviceBindingProxy.h"
#include "soapMediaBindingProxy.h"

using namespace std;

int main()
{
    struct wsddProxy wsdd;
    struct wsdd__ProbeType req;
    struct __wsdd__ProbeMatches res;
    
    wsdd.soap_endpoint = "soap.udp://239.255.255.250:3702";
    wsdd.send_Probe(&req);
    wsdd.recv_ProbeMatches(res);
    
    for (int i = 0; i < res.wsdd__ProbeMatches->__sizeProbeMatch; i++) {
        cout << res.wsdd__ProbeMatches->ProbeMatch->XAddrs << endl;
    }
    
    return 0;
}
