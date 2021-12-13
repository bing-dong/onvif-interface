/* soapPullPointSubscriptionBindingProxy.h
   Generated by gSOAP 2.8.117 for samples/onvif/onvif.h

gSOAP XML Web services tools
Copyright (C) 2000-2021, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#ifndef soapPullPointSubscriptionBindingProxy_H
#define soapPullPointSubscriptionBindingProxy_H
#include "soapH.h"

    class SOAP_CMAC PullPointSubscriptionBindingProxy {
      public:
        /// Context to manage proxy IO and data
        struct soap *soap;
        /// flag indicating that this context is owned by this proxy and should be deleted by the destructor
        bool soap_own;
        /// Endpoint URL of service 'PullPointSubscriptionBindingProxy' (change as needed)
        const char *soap_endpoint;
        /// Variables globally declared in samples/onvif/onvif.h, if any
        /// Construct a proxy with new managing context
        PullPointSubscriptionBindingProxy();
        /// Copy constructor
        PullPointSubscriptionBindingProxy(const PullPointSubscriptionBindingProxy& rhs);
        /// Construct proxy given a shared managing context
        PullPointSubscriptionBindingProxy(struct soap*);
        /// Construct proxy given a shared managing context and endpoint URL
        PullPointSubscriptionBindingProxy(struct soap*, const char *soap_endpoint_url);
        /// Constructor taking an endpoint URL
        PullPointSubscriptionBindingProxy(const char *soap_endpoint_url);
        /// Constructor taking input and output mode flags for the new managing context
        PullPointSubscriptionBindingProxy(soap_mode iomode);
        /// Constructor taking endpoint URL and input and output mode flags for the new managing context
        PullPointSubscriptionBindingProxy(const char *soap_endpoint_url, soap_mode iomode);
        /// Constructor taking input and output mode flags for the new managing context
        PullPointSubscriptionBindingProxy(soap_mode imode, soap_mode omode);
        /// Destructor deletes deserialized data and its managing context, when the context was allocated by the constructor
        virtual ~PullPointSubscriptionBindingProxy();
        /// Initializer used by constructors
        virtual void PullPointSubscriptionBindingProxy_init(soap_mode imode, soap_mode omode);
        /// Return a copy that has a new managing context with the same engine state
        virtual PullPointSubscriptionBindingProxy *copy();
        /// Copy assignment
        PullPointSubscriptionBindingProxy& operator=(const PullPointSubscriptionBindingProxy&);
        /// Delete all deserialized data (uses soap_destroy() and soap_end())
        virtual void destroy();
        /// Delete all deserialized data and reset to default
        virtual void reset();
        /// Disables and removes SOAP Header from message by setting soap->header = NULL
        virtual void soap_noheader();
        /// Add SOAP Header to message
        virtual void soap_header(struct _wsse__Security *wsse__Security, char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance, struct wsdd__AppSequenceType *wsdd__AppSequence);
        /// Get SOAP Header structure (i.e. soap->header, which is NULL when absent)
        virtual ::SOAP_ENV__Header *soap_header();
        /// Get SOAP Fault structure (i.e. soap->fault, which is NULL when absent)
        virtual ::SOAP_ENV__Fault *soap_fault();
        /// Get SOAP Fault subcode QName string (NULL when absent)
        virtual const char *soap_fault_subcode();
        /// Get SOAP Fault string/reason (NULL when absent)
        virtual const char *soap_fault_string();
        /// Get SOAP Fault detail XML string (NULL when absent)
        virtual const char *soap_fault_detail();
        /// Close connection (normally automatic, except for send_X ops)
        virtual int soap_close_socket();
        /// Force close connection (can kill a thread blocked on IO)
        virtual int soap_force_close_socket();
        /// Print fault
        virtual void soap_print_fault(FILE*);
    #ifndef WITH_LEAN
    #ifndef WITH_COMPAT
        /// Print fault to stream
        virtual void soap_stream_fault(std::ostream&);
    #endif
        /// Write fault to buffer
        virtual char *soap_sprint_fault(char *buf, size_t len);
    #endif
        //
        /// Web service synchronous operation 'PullMessages' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int PullMessages(_tev__PullMessages *tev__PullMessages, _tev__PullMessagesResponse &tev__PullMessagesResponse) { return this->PullMessages(NULL, NULL, tev__PullMessages, tev__PullMessagesResponse); }
        /// Web service synchronous operation 'PullMessages' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int PullMessages(const char *soap_endpoint_url, const char *soap_action, _tev__PullMessages *tev__PullMessages, _tev__PullMessagesResponse &tev__PullMessagesResponse) { return this->send_PullMessages(soap_endpoint_url, soap_action, tev__PullMessages) || this->recv_PullMessages(tev__PullMessagesResponse) ? this->soap->error : SOAP_OK; }
        /// Web service asynchronous operation 'send_PullMessages' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_PullMessages(const char *soap_endpoint_url, const char *soap_action, _tev__PullMessages *tev__PullMessages);
        /// Web service asynchronous operation 'recv_PullMessages' to receive a response message from the connected endpoint, returns SOAP_OK or error code
        virtual int recv_PullMessages(_tev__PullMessagesResponse &tev__PullMessagesResponse);
        //
        /// Web service synchronous operation 'Seek' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int Seek(_tev__Seek *tev__Seek, _tev__SeekResponse &tev__SeekResponse) { return this->Seek(NULL, NULL, tev__Seek, tev__SeekResponse); }
        /// Web service synchronous operation 'Seek' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int Seek(const char *soap_endpoint_url, const char *soap_action, _tev__Seek *tev__Seek, _tev__SeekResponse &tev__SeekResponse) { return this->send_Seek(soap_endpoint_url, soap_action, tev__Seek) || this->recv_Seek(tev__SeekResponse) ? this->soap->error : SOAP_OK; }
        /// Web service asynchronous operation 'send_Seek' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_Seek(const char *soap_endpoint_url, const char *soap_action, _tev__Seek *tev__Seek);
        /// Web service asynchronous operation 'recv_Seek' to receive a response message from the connected endpoint, returns SOAP_OK or error code
        virtual int recv_Seek(_tev__SeekResponse &tev__SeekResponse);
        //
        /// Web service synchronous operation 'SetSynchronizationPoint' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int SetSynchronizationPoint(_tev__SetSynchronizationPoint *tev__SetSynchronizationPoint, _tev__SetSynchronizationPointResponse &tev__SetSynchronizationPointResponse) { return this->SetSynchronizationPoint(NULL, NULL, tev__SetSynchronizationPoint, tev__SetSynchronizationPointResponse); }
        /// Web service synchronous operation 'SetSynchronizationPoint' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int SetSynchronizationPoint(const char *soap_endpoint_url, const char *soap_action, _tev__SetSynchronizationPoint *tev__SetSynchronizationPoint, _tev__SetSynchronizationPointResponse &tev__SetSynchronizationPointResponse) { return this->send_SetSynchronizationPoint(soap_endpoint_url, soap_action, tev__SetSynchronizationPoint) || this->recv_SetSynchronizationPoint(tev__SetSynchronizationPointResponse) ? this->soap->error : SOAP_OK; }
        /// Web service asynchronous operation 'send_SetSynchronizationPoint' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_SetSynchronizationPoint(const char *soap_endpoint_url, const char *soap_action, _tev__SetSynchronizationPoint *tev__SetSynchronizationPoint);
        /// Web service asynchronous operation 'recv_SetSynchronizationPoint' to receive a response message from the connected endpoint, returns SOAP_OK or error code
        virtual int recv_SetSynchronizationPoint(_tev__SetSynchronizationPointResponse &tev__SetSynchronizationPointResponse);
        //
        /// Web service synchronous operation 'Unsubscribe' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int Unsubscribe(_wsnt__Unsubscribe *wsnt__Unsubscribe, _wsnt__UnsubscribeResponse &wsnt__UnsubscribeResponse) { return this->Unsubscribe(NULL, NULL, wsnt__Unsubscribe, wsnt__UnsubscribeResponse); }
        /// Web service synchronous operation 'Unsubscribe' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int Unsubscribe(const char *soap_endpoint_url, const char *soap_action, _wsnt__Unsubscribe *wsnt__Unsubscribe, _wsnt__UnsubscribeResponse &wsnt__UnsubscribeResponse) { return this->send_Unsubscribe(soap_endpoint_url, soap_action, wsnt__Unsubscribe) || this->recv_Unsubscribe(wsnt__UnsubscribeResponse) ? this->soap->error : SOAP_OK; }
        /// Web service asynchronous operation 'send_Unsubscribe' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_Unsubscribe(const char *soap_endpoint_url, const char *soap_action, _wsnt__Unsubscribe *wsnt__Unsubscribe);
        /// Web service asynchronous operation 'recv_Unsubscribe' to receive a response message from the connected endpoint, returns SOAP_OK or error code
        virtual int recv_Unsubscribe(_wsnt__UnsubscribeResponse &wsnt__UnsubscribeResponse);
        //
        /// Web service synchronous operation 'GetServiceCapabilities' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int GetServiceCapabilities(_tev__GetServiceCapabilities *tev__GetServiceCapabilities, _tev__GetServiceCapabilitiesResponse &tev__GetServiceCapabilitiesResponse) { return this->GetServiceCapabilities(NULL, NULL, tev__GetServiceCapabilities, tev__GetServiceCapabilitiesResponse); }
        /// Web service synchronous operation 'GetServiceCapabilities' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int GetServiceCapabilities(const char *soap_endpoint_url, const char *soap_action, _tev__GetServiceCapabilities *tev__GetServiceCapabilities, _tev__GetServiceCapabilitiesResponse &tev__GetServiceCapabilitiesResponse) { return this->send_GetServiceCapabilities(soap_endpoint_url, soap_action, tev__GetServiceCapabilities) || this->recv_GetServiceCapabilities(tev__GetServiceCapabilitiesResponse) ? this->soap->error : SOAP_OK; }
        /// Web service asynchronous operation 'send_GetServiceCapabilities' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_GetServiceCapabilities(const char *soap_endpoint_url, const char *soap_action, _tev__GetServiceCapabilities *tev__GetServiceCapabilities);
        /// Web service asynchronous operation 'recv_GetServiceCapabilities' to receive a response message from the connected endpoint, returns SOAP_OK or error code
        virtual int recv_GetServiceCapabilities(_tev__GetServiceCapabilitiesResponse &tev__GetServiceCapabilitiesResponse);
        //
        /// Web service synchronous operation 'CreatePullPointSubscription' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int CreatePullPointSubscription(_tev__CreatePullPointSubscription *tev__CreatePullPointSubscription, _tev__CreatePullPointSubscriptionResponse &tev__CreatePullPointSubscriptionResponse) { return this->CreatePullPointSubscription(NULL, NULL, tev__CreatePullPointSubscription, tev__CreatePullPointSubscriptionResponse); }
        /// Web service synchronous operation 'CreatePullPointSubscription' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int CreatePullPointSubscription(const char *soap_endpoint_url, const char *soap_action, _tev__CreatePullPointSubscription *tev__CreatePullPointSubscription, _tev__CreatePullPointSubscriptionResponse &tev__CreatePullPointSubscriptionResponse) { return this->send_CreatePullPointSubscription(soap_endpoint_url, soap_action, tev__CreatePullPointSubscription) || this->recv_CreatePullPointSubscription(tev__CreatePullPointSubscriptionResponse) ? this->soap->error : SOAP_OK; }
        /// Web service asynchronous operation 'send_CreatePullPointSubscription' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_CreatePullPointSubscription(const char *soap_endpoint_url, const char *soap_action, _tev__CreatePullPointSubscription *tev__CreatePullPointSubscription);
        /// Web service asynchronous operation 'recv_CreatePullPointSubscription' to receive a response message from the connected endpoint, returns SOAP_OK or error code
        virtual int recv_CreatePullPointSubscription(_tev__CreatePullPointSubscriptionResponse &tev__CreatePullPointSubscriptionResponse);
        //
        /// Web service synchronous operation 'GetEventProperties' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int GetEventProperties(_tev__GetEventProperties *tev__GetEventProperties, _tev__GetEventPropertiesResponse &tev__GetEventPropertiesResponse) { return this->GetEventProperties(NULL, NULL, tev__GetEventProperties, tev__GetEventPropertiesResponse); }
        /// Web service synchronous operation 'GetEventProperties' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int GetEventProperties(const char *soap_endpoint_url, const char *soap_action, _tev__GetEventProperties *tev__GetEventProperties, _tev__GetEventPropertiesResponse &tev__GetEventPropertiesResponse) { return this->send_GetEventProperties(soap_endpoint_url, soap_action, tev__GetEventProperties) || this->recv_GetEventProperties(tev__GetEventPropertiesResponse) ? this->soap->error : SOAP_OK; }
        /// Web service asynchronous operation 'send_GetEventProperties' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_GetEventProperties(const char *soap_endpoint_url, const char *soap_action, _tev__GetEventProperties *tev__GetEventProperties);
        /// Web service asynchronous operation 'recv_GetEventProperties' to receive a response message from the connected endpoint, returns SOAP_OK or error code
        virtual int recv_GetEventProperties(_tev__GetEventPropertiesResponse &tev__GetEventPropertiesResponse);
        //
        /// Web service synchronous operation 'AddEventBroker' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int AddEventBroker(_tev__AddEventBroker *tev__AddEventBroker, _tev__AddEventBrokerResponse &tev__AddEventBrokerResponse) { return this->AddEventBroker(NULL, NULL, tev__AddEventBroker, tev__AddEventBrokerResponse); }
        /// Web service synchronous operation 'AddEventBroker' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int AddEventBroker(const char *soap_endpoint_url, const char *soap_action, _tev__AddEventBroker *tev__AddEventBroker, _tev__AddEventBrokerResponse &tev__AddEventBrokerResponse) { return this->send_AddEventBroker(soap_endpoint_url, soap_action, tev__AddEventBroker) || this->recv_AddEventBroker(tev__AddEventBrokerResponse) ? this->soap->error : SOAP_OK; }
        /// Web service asynchronous operation 'send_AddEventBroker' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_AddEventBroker(const char *soap_endpoint_url, const char *soap_action, _tev__AddEventBroker *tev__AddEventBroker);
        /// Web service asynchronous operation 'recv_AddEventBroker' to receive a response message from the connected endpoint, returns SOAP_OK or error code
        virtual int recv_AddEventBroker(_tev__AddEventBrokerResponse &tev__AddEventBrokerResponse);
        //
        /// Web service synchronous operation 'DeleteEventBroker' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int DeleteEventBroker(_tev__DeleteEventBroker *tev__DeleteEventBroker, _tev__DeleteEventBrokerResponse &tev__DeleteEventBrokerResponse) { return this->DeleteEventBroker(NULL, NULL, tev__DeleteEventBroker, tev__DeleteEventBrokerResponse); }
        /// Web service synchronous operation 'DeleteEventBroker' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int DeleteEventBroker(const char *soap_endpoint_url, const char *soap_action, _tev__DeleteEventBroker *tev__DeleteEventBroker, _tev__DeleteEventBrokerResponse &tev__DeleteEventBrokerResponse) { return this->send_DeleteEventBroker(soap_endpoint_url, soap_action, tev__DeleteEventBroker) || this->recv_DeleteEventBroker(tev__DeleteEventBrokerResponse) ? this->soap->error : SOAP_OK; }
        /// Web service asynchronous operation 'send_DeleteEventBroker' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_DeleteEventBroker(const char *soap_endpoint_url, const char *soap_action, _tev__DeleteEventBroker *tev__DeleteEventBroker);
        /// Web service asynchronous operation 'recv_DeleteEventBroker' to receive a response message from the connected endpoint, returns SOAP_OK or error code
        virtual int recv_DeleteEventBroker(_tev__DeleteEventBrokerResponse &tev__DeleteEventBrokerResponse);
        //
        /// Web service synchronous operation 'GetEventBrokers' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int GetEventBrokers(_tev__GetEventBrokers *tev__GetEventBrokers, _tev__GetEventBrokersResponse &tev__GetEventBrokersResponse) { return this->GetEventBrokers(NULL, NULL, tev__GetEventBrokers, tev__GetEventBrokersResponse); }
        /// Web service synchronous operation 'GetEventBrokers' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int GetEventBrokers(const char *soap_endpoint_url, const char *soap_action, _tev__GetEventBrokers *tev__GetEventBrokers, _tev__GetEventBrokersResponse &tev__GetEventBrokersResponse) { return this->send_GetEventBrokers(soap_endpoint_url, soap_action, tev__GetEventBrokers) || this->recv_GetEventBrokers(tev__GetEventBrokersResponse) ? this->soap->error : SOAP_OK; }
        /// Web service asynchronous operation 'send_GetEventBrokers' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_GetEventBrokers(const char *soap_endpoint_url, const char *soap_action, _tev__GetEventBrokers *tev__GetEventBrokers);
        /// Web service asynchronous operation 'recv_GetEventBrokers' to receive a response message from the connected endpoint, returns SOAP_OK or error code
        virtual int recv_GetEventBrokers(_tev__GetEventBrokersResponse &tev__GetEventBrokersResponse);
        //
        /// Web service synchronous operation 'Renew' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int Renew(_wsnt__Renew *wsnt__Renew, _wsnt__RenewResponse &wsnt__RenewResponse) { return this->Renew(NULL, NULL, wsnt__Renew, wsnt__RenewResponse); }
        /// Web service synchronous operation 'Renew' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int Renew(const char *soap_endpoint_url, const char *soap_action, _wsnt__Renew *wsnt__Renew, _wsnt__RenewResponse &wsnt__RenewResponse) { return this->send_Renew(soap_endpoint_url, soap_action, wsnt__Renew) || this->recv_Renew(wsnt__RenewResponse) ? this->soap->error : SOAP_OK; }
        /// Web service asynchronous operation 'send_Renew' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_Renew(const char *soap_endpoint_url, const char *soap_action, _wsnt__Renew *wsnt__Renew);
        /// Web service asynchronous operation 'recv_Renew' to receive a response message from the connected endpoint, returns SOAP_OK or error code
        virtual int recv_Renew(_wsnt__RenewResponse &wsnt__RenewResponse);
        //
        /// Web service synchronous operation 'Unsubscribe' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int Unsubscribe_(_wsnt__Unsubscribe *wsnt__Unsubscribe, _wsnt__UnsubscribeResponse &wsnt__UnsubscribeResponse) { return this->Unsubscribe_(NULL, NULL, wsnt__Unsubscribe, wsnt__UnsubscribeResponse); }
        /// Web service synchronous operation 'Unsubscribe' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int Unsubscribe_(const char *soap_endpoint_url, const char *soap_action, _wsnt__Unsubscribe *wsnt__Unsubscribe, _wsnt__UnsubscribeResponse &wsnt__UnsubscribeResponse) { return this->send_Unsubscribe_(soap_endpoint_url, soap_action, wsnt__Unsubscribe) || this->recv_Unsubscribe_(wsnt__UnsubscribeResponse) ? this->soap->error : SOAP_OK; }
        /// Web service asynchronous operation 'send_Unsubscribe' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_Unsubscribe_(const char *soap_endpoint_url, const char *soap_action, _wsnt__Unsubscribe *wsnt__Unsubscribe);
        /// Web service asynchronous operation 'recv_Unsubscribe' to receive a response message from the connected endpoint, returns SOAP_OK or error code
        virtual int recv_Unsubscribe_(_wsnt__UnsubscribeResponse &wsnt__UnsubscribeResponse);
        //
        /// Web service synchronous operation 'Subscribe' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int Subscribe(_wsnt__Subscribe *wsnt__Subscribe, _wsnt__SubscribeResponse &wsnt__SubscribeResponse) { return this->Subscribe(NULL, NULL, wsnt__Subscribe, wsnt__SubscribeResponse); }
        /// Web service synchronous operation 'Subscribe' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int Subscribe(const char *soap_endpoint_url, const char *soap_action, _wsnt__Subscribe *wsnt__Subscribe, _wsnt__SubscribeResponse &wsnt__SubscribeResponse) { return this->send_Subscribe(soap_endpoint_url, soap_action, wsnt__Subscribe) || this->recv_Subscribe(wsnt__SubscribeResponse) ? this->soap->error : SOAP_OK; }
        /// Web service asynchronous operation 'send_Subscribe' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_Subscribe(const char *soap_endpoint_url, const char *soap_action, _wsnt__Subscribe *wsnt__Subscribe);
        /// Web service asynchronous operation 'recv_Subscribe' to receive a response message from the connected endpoint, returns SOAP_OK or error code
        virtual int recv_Subscribe(_wsnt__SubscribeResponse &wsnt__SubscribeResponse);
        //
        /// Web service synchronous operation 'GetCurrentMessage' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int GetCurrentMessage(_wsnt__GetCurrentMessage *wsnt__GetCurrentMessage, _wsnt__GetCurrentMessageResponse &wsnt__GetCurrentMessageResponse) { return this->GetCurrentMessage(NULL, NULL, wsnt__GetCurrentMessage, wsnt__GetCurrentMessageResponse); }
        /// Web service synchronous operation 'GetCurrentMessage' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int GetCurrentMessage(const char *soap_endpoint_url, const char *soap_action, _wsnt__GetCurrentMessage *wsnt__GetCurrentMessage, _wsnt__GetCurrentMessageResponse &wsnt__GetCurrentMessageResponse) { return this->send_GetCurrentMessage(soap_endpoint_url, soap_action, wsnt__GetCurrentMessage) || this->recv_GetCurrentMessage(wsnt__GetCurrentMessageResponse) ? this->soap->error : SOAP_OK; }
        /// Web service asynchronous operation 'send_GetCurrentMessage' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_GetCurrentMessage(const char *soap_endpoint_url, const char *soap_action, _wsnt__GetCurrentMessage *wsnt__GetCurrentMessage);
        /// Web service asynchronous operation 'recv_GetCurrentMessage' to receive a response message from the connected endpoint, returns SOAP_OK or error code
        virtual int recv_GetCurrentMessage(_wsnt__GetCurrentMessageResponse &wsnt__GetCurrentMessageResponse);
        //
        /// Web service one-way synchronous send operation 'Notify' to the default endpoint with the default SOAP Action header then wait for HTTP OK/Accept response, returns SOAP_OK or error code
        virtual int Notify(_wsnt__Notify *wsnt__Notify) { return this->Notify(NULL, NULL, wsnt__Notify); }
        /// Web service one-way synchronous send operation 'Notify' to the specified endpoint and SOAP Action header then wait for HTTP OK/Accept response, returns SOAP_OK or error code
        virtual int Notify(const char *soap_endpoint_url, const char *soap_action, _wsnt__Notify *wsnt__Notify) { return (this->send_Notify(soap_endpoint_url, soap_action, wsnt__Notify) || soap_recv_empty_response(this->soap)) ? this->soap->error : SOAP_OK; }
        /// Web service one-way asynchronous send operation 'send_Notify' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int send_Notify(_wsnt__Notify *wsnt__Notify) { return this->send_Notify(NULL, NULL, wsnt__Notify); }
        /// Web service one-way asynchronous send operation 'send_Notify' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_Notify(const char *soap_endpoint_url, const char *soap_action, _wsnt__Notify *wsnt__Notify);
        /// Web service one-way asynchronous receive operation 'recv_Notify', returns SOAP_OK or error code;
        virtual int recv_Notify(struct __tev__Notify&);
        /// Web service asynchronous receive of HTTP Accept acknowledgment for one-way asynchronous send operation 'send_Notify', returns SOAP_OK or error code
        virtual int recv_Notify_empty_response() { return soap_recv_empty_response(this->soap); }
        //
        /// Web service synchronous operation 'GetMessages' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int GetMessages(_wsnt__GetMessages *wsnt__GetMessages, _wsnt__GetMessagesResponse &wsnt__GetMessagesResponse) { return this->GetMessages(NULL, NULL, wsnt__GetMessages, wsnt__GetMessagesResponse); }
        /// Web service synchronous operation 'GetMessages' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int GetMessages(const char *soap_endpoint_url, const char *soap_action, _wsnt__GetMessages *wsnt__GetMessages, _wsnt__GetMessagesResponse &wsnt__GetMessagesResponse) { return this->send_GetMessages(soap_endpoint_url, soap_action, wsnt__GetMessages) || this->recv_GetMessages(wsnt__GetMessagesResponse) ? this->soap->error : SOAP_OK; }
        /// Web service asynchronous operation 'send_GetMessages' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_GetMessages(const char *soap_endpoint_url, const char *soap_action, _wsnt__GetMessages *wsnt__GetMessages);
        /// Web service asynchronous operation 'recv_GetMessages' to receive a response message from the connected endpoint, returns SOAP_OK or error code
        virtual int recv_GetMessages(_wsnt__GetMessagesResponse &wsnt__GetMessagesResponse);
        //
        /// Web service synchronous operation 'DestroyPullPoint' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int DestroyPullPoint(_wsnt__DestroyPullPoint *wsnt__DestroyPullPoint, _wsnt__DestroyPullPointResponse &wsnt__DestroyPullPointResponse) { return this->DestroyPullPoint(NULL, NULL, wsnt__DestroyPullPoint, wsnt__DestroyPullPointResponse); }
        /// Web service synchronous operation 'DestroyPullPoint' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int DestroyPullPoint(const char *soap_endpoint_url, const char *soap_action, _wsnt__DestroyPullPoint *wsnt__DestroyPullPoint, _wsnt__DestroyPullPointResponse &wsnt__DestroyPullPointResponse) { return this->send_DestroyPullPoint(soap_endpoint_url, soap_action, wsnt__DestroyPullPoint) || this->recv_DestroyPullPoint(wsnt__DestroyPullPointResponse) ? this->soap->error : SOAP_OK; }
        /// Web service asynchronous operation 'send_DestroyPullPoint' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_DestroyPullPoint(const char *soap_endpoint_url, const char *soap_action, _wsnt__DestroyPullPoint *wsnt__DestroyPullPoint);
        /// Web service asynchronous operation 'recv_DestroyPullPoint' to receive a response message from the connected endpoint, returns SOAP_OK or error code
        virtual int recv_DestroyPullPoint(_wsnt__DestroyPullPointResponse &wsnt__DestroyPullPointResponse);
        //
        /// Web service one-way synchronous send operation 'Notify' to the default endpoint with the default SOAP Action header then wait for HTTP OK/Accept response, returns SOAP_OK or error code
        virtual int Notify_(_wsnt__Notify *wsnt__Notify) { return this->Notify_(NULL, NULL, wsnt__Notify); }
        /// Web service one-way synchronous send operation 'Notify' to the specified endpoint and SOAP Action header then wait for HTTP OK/Accept response, returns SOAP_OK or error code
        virtual int Notify_(const char *soap_endpoint_url, const char *soap_action, _wsnt__Notify *wsnt__Notify) { return (this->send_Notify_(soap_endpoint_url, soap_action, wsnt__Notify) || soap_recv_empty_response(this->soap)) ? this->soap->error : SOAP_OK; }
        /// Web service one-way asynchronous send operation 'send_Notify' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int send_Notify_(_wsnt__Notify *wsnt__Notify) { return this->send_Notify_(NULL, NULL, wsnt__Notify); }
        /// Web service one-way asynchronous send operation 'send_Notify' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_Notify_(const char *soap_endpoint_url, const char *soap_action, _wsnt__Notify *wsnt__Notify);
        /// Web service one-way asynchronous receive operation 'recv_Notify', returns SOAP_OK or error code;
        virtual int recv_Notify_(struct __tev__Notify_&);
        /// Web service asynchronous receive of HTTP Accept acknowledgment for one-way asynchronous send operation 'send_Notify', returns SOAP_OK or error code
        virtual int recv_Notify__empty_response() { return soap_recv_empty_response(this->soap); }
        //
        /// Web service synchronous operation 'CreatePullPoint' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int CreatePullPoint(_wsnt__CreatePullPoint *wsnt__CreatePullPoint, _wsnt__CreatePullPointResponse &wsnt__CreatePullPointResponse) { return this->CreatePullPoint(NULL, NULL, wsnt__CreatePullPoint, wsnt__CreatePullPointResponse); }
        /// Web service synchronous operation 'CreatePullPoint' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int CreatePullPoint(const char *soap_endpoint_url, const char *soap_action, _wsnt__CreatePullPoint *wsnt__CreatePullPoint, _wsnt__CreatePullPointResponse &wsnt__CreatePullPointResponse) { return this->send_CreatePullPoint(soap_endpoint_url, soap_action, wsnt__CreatePullPoint) || this->recv_CreatePullPoint(wsnt__CreatePullPointResponse) ? this->soap->error : SOAP_OK; }
        /// Web service asynchronous operation 'send_CreatePullPoint' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_CreatePullPoint(const char *soap_endpoint_url, const char *soap_action, _wsnt__CreatePullPoint *wsnt__CreatePullPoint);
        /// Web service asynchronous operation 'recv_CreatePullPoint' to receive a response message from the connected endpoint, returns SOAP_OK or error code
        virtual int recv_CreatePullPoint(_wsnt__CreatePullPointResponse &wsnt__CreatePullPointResponse);
        //
        /// Web service synchronous operation 'Renew' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int Renew_(_wsnt__Renew *wsnt__Renew, _wsnt__RenewResponse &wsnt__RenewResponse) { return this->Renew_(NULL, NULL, wsnt__Renew, wsnt__RenewResponse); }
        /// Web service synchronous operation 'Renew' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int Renew_(const char *soap_endpoint_url, const char *soap_action, _wsnt__Renew *wsnt__Renew, _wsnt__RenewResponse &wsnt__RenewResponse) { return this->send_Renew_(soap_endpoint_url, soap_action, wsnt__Renew) || this->recv_Renew_(wsnt__RenewResponse) ? this->soap->error : SOAP_OK; }
        /// Web service asynchronous operation 'send_Renew' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_Renew_(const char *soap_endpoint_url, const char *soap_action, _wsnt__Renew *wsnt__Renew);
        /// Web service asynchronous operation 'recv_Renew' to receive a response message from the connected endpoint, returns SOAP_OK or error code
        virtual int recv_Renew_(_wsnt__RenewResponse &wsnt__RenewResponse);
        //
        /// Web service synchronous operation 'Unsubscribe' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int Unsubscribe__(_wsnt__Unsubscribe *wsnt__Unsubscribe, _wsnt__UnsubscribeResponse &wsnt__UnsubscribeResponse) { return this->Unsubscribe__(NULL, NULL, wsnt__Unsubscribe, wsnt__UnsubscribeResponse); }
        /// Web service synchronous operation 'Unsubscribe' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int Unsubscribe__(const char *soap_endpoint_url, const char *soap_action, _wsnt__Unsubscribe *wsnt__Unsubscribe, _wsnt__UnsubscribeResponse &wsnt__UnsubscribeResponse) { return this->send_Unsubscribe__(soap_endpoint_url, soap_action, wsnt__Unsubscribe) || this->recv_Unsubscribe__(wsnt__UnsubscribeResponse) ? this->soap->error : SOAP_OK; }
        /// Web service asynchronous operation 'send_Unsubscribe' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_Unsubscribe__(const char *soap_endpoint_url, const char *soap_action, _wsnt__Unsubscribe *wsnt__Unsubscribe);
        /// Web service asynchronous operation 'recv_Unsubscribe' to receive a response message from the connected endpoint, returns SOAP_OK or error code
        virtual int recv_Unsubscribe__(_wsnt__UnsubscribeResponse &wsnt__UnsubscribeResponse);
        //
        /// Web service synchronous operation 'PauseSubscription' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int PauseSubscription(_wsnt__PauseSubscription *wsnt__PauseSubscription, _wsnt__PauseSubscriptionResponse &wsnt__PauseSubscriptionResponse) { return this->PauseSubscription(NULL, NULL, wsnt__PauseSubscription, wsnt__PauseSubscriptionResponse); }
        /// Web service synchronous operation 'PauseSubscription' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int PauseSubscription(const char *soap_endpoint_url, const char *soap_action, _wsnt__PauseSubscription *wsnt__PauseSubscription, _wsnt__PauseSubscriptionResponse &wsnt__PauseSubscriptionResponse) { return this->send_PauseSubscription(soap_endpoint_url, soap_action, wsnt__PauseSubscription) || this->recv_PauseSubscription(wsnt__PauseSubscriptionResponse) ? this->soap->error : SOAP_OK; }
        /// Web service asynchronous operation 'send_PauseSubscription' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_PauseSubscription(const char *soap_endpoint_url, const char *soap_action, _wsnt__PauseSubscription *wsnt__PauseSubscription);
        /// Web service asynchronous operation 'recv_PauseSubscription' to receive a response message from the connected endpoint, returns SOAP_OK or error code
        virtual int recv_PauseSubscription(_wsnt__PauseSubscriptionResponse &wsnt__PauseSubscriptionResponse);
        //
        /// Web service synchronous operation 'ResumeSubscription' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int ResumeSubscription(_wsnt__ResumeSubscription *wsnt__ResumeSubscription, _wsnt__ResumeSubscriptionResponse &wsnt__ResumeSubscriptionResponse) { return this->ResumeSubscription(NULL, NULL, wsnt__ResumeSubscription, wsnt__ResumeSubscriptionResponse); }
        /// Web service synchronous operation 'ResumeSubscription' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int ResumeSubscription(const char *soap_endpoint_url, const char *soap_action, _wsnt__ResumeSubscription *wsnt__ResumeSubscription, _wsnt__ResumeSubscriptionResponse &wsnt__ResumeSubscriptionResponse) { return this->send_ResumeSubscription(soap_endpoint_url, soap_action, wsnt__ResumeSubscription) || this->recv_ResumeSubscription(wsnt__ResumeSubscriptionResponse) ? this->soap->error : SOAP_OK; }
        /// Web service asynchronous operation 'send_ResumeSubscription' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_ResumeSubscription(const char *soap_endpoint_url, const char *soap_action, _wsnt__ResumeSubscription *wsnt__ResumeSubscription);
        /// Web service asynchronous operation 'recv_ResumeSubscription' to receive a response message from the connected endpoint, returns SOAP_OK or error code
        virtual int recv_ResumeSubscription(_wsnt__ResumeSubscriptionResponse &wsnt__ResumeSubscriptionResponse);
    };
#endif
