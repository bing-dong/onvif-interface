# onvif-interface
onvif soap **c++11** interface

with a device discovery demo

## included wsdl

https://www.onvif.org/ver10/device/wsdl/devicemgmt.wsdl
https://www.onvif.org/ver10/events/wsdl/event.wsdl 
https://www.onvif.org/ver10/pacs/accesscontrol.wsdl
https://www.onvif.org/ver10/deviceio.wsdl
https://www.onvif.org/ver10/display.wsdl
https://www.onvif.org/ver20/imaging/wsdl/imaging.wsdl 
https://www.onvif.org/ver10/search.wsdl
https://www.onvif.org/ver20/ptz/wsdl/ptz.wsdl
https://www.onvif.org/ver10/media/wsdl/media.wsdl
https://www.onvif.org/ver20/media/wsdl/media.wsdl
https://www.onvif.org/ver10/receiver.wsdl

## build

build with cmake

```
cd onvif
mkdir build
cd build
cmake ..
make
```

## run

```
cd build
./onvif
```

### demo output

`http://192.168.1.64/onvif/device_service http://[fe80::4ef5:dcff:fe9e:c86b]/onvif/device_service`

