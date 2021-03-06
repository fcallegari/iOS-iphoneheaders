/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/Message-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSArray;

@interface MFConnectionSettings : NSObject <NSCopying> {

	NSString* _hostname;
	NSString* _serviceName;
	NSString* _certUIService;
	NSArray* _clientCertificates;
	unsigned _portNumber;
	CFStringRef _connectionServiceType;
	bool _usesSSL;
	bool _usesOpportunisticSockets;
	bool _tryDirectSSLConnection;
	bool _allowsTrustPrompt;
	NSString* _sourceApplicationBundleIdentifier;
	NSString* _accountIdentifier;

}

@property (nonatomic,copy) NSString * certUIService;                                  //@synthesize certUIService=_certUIService - In the implementation block
@property (nonatomic,copy) NSString * hostname;                                       //@synthesize hostname=_hostname - In the implementation block
@property (nonatomic,copy) NSString * serviceName;                                    //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,copy) NSArray * clientCertificates;                              //@synthesize clientCertificates=_clientCertificates - In the implementation block
@property (nonatomic,copy) NSString * sourceApplicationBundleIdentifier;              //@synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * accountIdentifier;                              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (assign,nonatomic) unsigned portNumber;                                     //@synthesize portNumber=_portNumber - In the implementation block
@property (assign,nonatomic) bool usesSSL;                                            //@synthesize usesSSL=_usesSSL - In the implementation block
@property (assign,nonatomic) bool usesOpportunisticSockets;                           //@synthesize usesOpportunisticSockets=_usesOpportunisticSockets - In the implementation block
@property (assign,nonatomic) bool tryDirectSSL;                                       //@synthesize tryDirectSSLConnection=_tryDirectSSLConnection - In the implementation block
@property (assign,nonatomic) bool allowsTrustPrompt;                                  //@synthesize allowsTrustPrompt=_allowsTrustPrompt - In the implementation block
-(id)serviceName;
-(void)setAccountIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(bool)usesSSL;
-(unsigned)portNumber;
-(void)setUsesSSL:(bool)arg1 ;
-(void)setHostname:(id)arg1 ;
-(void)setPortNumber:(unsigned)arg1 ;
-(id)certUIService;
-(void)setCertUIService:(id)arg1 ;
-(id)clientCertificates;
-(void)setClientCertificates:(id)arg1 ;
-(void)setTryDirectSSL:(bool)arg1 ;
-(bool)tryDirectSSL;
-(void)setServiceName:(id)arg1 ;
-(CFStringRef)connectionServiceType;
-(void)setConnectionServiceType:(CFStringRef)arg1 ;
-(bool)allowsTrustPrompt;
-(void)setAllowsTrustPrompt:(bool)arg1 ;
-(id)sourceApplicationBundleIdentifier;
-(void)setSourceApplicationBundleIdentifier:(id)arg1 ;
-(bool)usesOpportunisticSockets;
-(void)setUsesOpportunisticSockets:(bool)arg1 ;
-(id)accountIdentifier;
-(id)hostname;
@end

