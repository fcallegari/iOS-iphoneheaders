/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:04 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source, HTSHTTPServerDelegate;
#import <iAdDeveloper/iAdDeveloper-Structs.h>
@class NSMutableArray, NSObject, NSString, NSMutableDictionary;

@interface HTSHTTPServer : NSObject {

	int _listenSocket4;
	NSMutableArray* _activeConnections;
	NSObject<OS_dispatch_queue>* _serverQueue;
	NSObject<OS_dispatch_source>* _listenSource4;
	NSString* _nodename;
	unsigned long long _bytesWritten;
	double _lastReplenishTime;
	NSMutableDictionary* _authTokens;
	bool _digestAuthenticationEnabled;
	bool _pipeliningEnabled;
	unsigned short _port;
	int _cacheMaxAge;
	<HTSHTTPServerDelegate>* _delegate;
	NSObject<OS_dispatch_queue>* _delegateQueue;
	double _latency;
	double _latencyStddev;
	double _kbps;
	double _bandwidthStddev;
	unsigned long long _totalBytesWritten;
	CFHTTPMessageRef _currentRequest;
	NSString* _documentRoot;

}

@property (assign,nonatomic) <HTSHTTPServerDelegate> * delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) NSObject<OS_dispatch_queue> * delegateQueue;              //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,readonly) unsigned short port;                                    //@synthesize port=_port - In the implementation block
@property (nonatomic,readonly) NSString * urlString; 
@property (nonatomic,copy) NSString * documentRoot;                                    //@synthesize documentRoot=_documentRoot - In the implementation block
@property (assign,nonatomic) bool digestAuthenticationEnabled;                         //@synthesize digestAuthenticationEnabled=_digestAuthenticationEnabled - In the implementation block
@property (assign,nonatomic) double latency;                                           //@synthesize latency=_latency - In the implementation block
@property (assign,nonatomic) double latencyStddev;                                     //@synthesize latencyStddev=_latencyStddev - In the implementation block
@property (assign,nonatomic) double kbps;                                              //@synthesize kbps=_kbps - In the implementation block
@property (assign,nonatomic) double bandwidthStddev;                                   //@synthesize bandwidthStddev=_bandwidthStddev - In the implementation block
@property (assign,nonatomic) int cacheMaxAge;                                          //@synthesize cacheMaxAge=_cacheMaxAge - In the implementation block
@property (assign,nonatomic) bool pipeliningEnabled;                                   //@synthesize pipeliningEnabled=_pipeliningEnabled - In the implementation block
@property (nonatomic,readonly) unsigned long long totalBytesWritten;                   //@synthesize totalBytesWritten=_totalBytesWritten - In the implementation block
@property (assign,nonatomic) CFHTTPMessageRef currentRequest;                          //@synthesize currentRequest=_currentRequest - In the implementation block
-(void)setCurrentRequest:(CFHTTPMessageRef)arg1 ;
-(CFHTTPMessageRef)currentRequest;
-(id)delegateQueue;
-(void)setDelegateQueue:(id)arg1 ;
-(double)latency;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(id)urlString;
-(id)documentRoot;
-(void)setDocumentRoot:(id)arg1 ;
-(void)setLatency:(double)arg1 ;
-(unsigned short)port;
-(void)resetNetworkSetup;
-(bool)_listenOnPort:(unsigned short)arg1 ;
-(id)initWithPort:(unsigned short)arg1 documentRoot:(id)arg2 ;
-(void)_cleanupListenSocket;
-(double)_currentLatency;
-(void)_handleGeneralRequest:(id)arg1 fromConnection:(id)arg2 ;
-(id)_mimeTypeForExtension:(id)arg1 ;
-(void)_returnResponse:(id)arg1 toConnection:(id)arg2 closeAfterSending:(bool)arg3 ;
-(id)_restrictedFilePathForRelativePath:(id)arg1 ;
-(void)_respondWithData:(id)arg1 mimeType:(id)arg2 toRequest:(id)arg3 connection:(id)arg4 ;
-(id)_authenticationResponseForRequest:(id)arg1 ;
-(void)_connectionComplete:(id)arg1 ;
-(void)_connection:(id)arg1 hadError:(id)arg2 ;
-(void)_connection:(id)arg1 didReceiveRequest:(id)arg2 ;
-(unsigned long long)availableBandwidth;
-(void)consumedBandwidth:(unsigned long long)arg1 ;
-(void)setKbps:(double)arg1 ;
-(bool)digestAuthenticationEnabled;
-(void)setDigestAuthenticationEnabled:(bool)arg1 ;
-(double)latencyStddev;
-(void)setLatencyStddev:(double)arg1 ;
-(double)kbps;
-(double)bandwidthStddev;
-(void)setBandwidthStddev:(double)arg1 ;
-(unsigned long long)totalBytesWritten;
-(int)cacheMaxAge;
-(void)setCacheMaxAge:(int)arg1 ;
-(bool)pipeliningEnabled;
-(void)setPipeliningEnabled:(bool)arg1 ;
@end

