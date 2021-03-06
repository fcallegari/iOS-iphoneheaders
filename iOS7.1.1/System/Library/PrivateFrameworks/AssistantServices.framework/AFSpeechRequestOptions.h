/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:48 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSSecureCoding.h>

@class NSString, NSNumber;

@interface AFSpeechRequestOptions : NSObject <NSSecureCoding> {

	bool _isEyesFree;
	bool _useAutomaticEndpointing;
	bool _isInitialBringUp;
	long long _event;
	NSString* _btDeviceAddress;
	NSString* _serverCommandId;
	double _activationEventTime;
	double _expectedActivationEventTime;
	NSNumber* _homeButtonUpFromBeep;

}

@property (assign,nonatomic) long long activationEvent;                       //@synthesize event=_event - In the implementation block
@property (nonatomic,copy) NSString * btDeviceAddress;                        //@synthesize btDeviceAddress=_btDeviceAddress - In the implementation block
@property (assign,nonatomic) bool isEyesFree;                                 //@synthesize isEyesFree=_isEyesFree - In the implementation block
@property (nonatomic,copy) NSString * serverCommandId;                        //@synthesize serverCommandId=_serverCommandId - In the implementation block
@property (assign,nonatomic) bool useAutomaticEndpointing;                    //@synthesize useAutomaticEndpointing=_useAutomaticEndpointing - In the implementation block
@property (assign,nonatomic) double activationEventTime;                      //@synthesize activationEventTime=_activationEventTime - In the implementation block
@property (assign,nonatomic) double expectedActivationEventTime;              //@synthesize expectedActivationEventTime=_expectedActivationEventTime - In the implementation block
@property (assign,nonatomic) bool isInitialBringUp;                           //@synthesize isInitialBringUp=_isInitialBringUp - In the implementation block
@property (nonatomic,copy) NSNumber * homeButtonUpFromBeep;                   //@synthesize homeButtonUpFromBeep=_homeButtonUpFromBeep - In the implementation block
+(bool)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void).cxx_destruct;
-(id)initWithActivationEvent:(long long)arg1 ;
-(long long)activationEvent;
-(id)btDeviceAddress;
-(double)activationEventTime;
-(double)expectedActivationEventTime;
-(bool)isInitialBringUp;
-(void)setActivationEvent:(long long)arg1 ;
-(void)setIsEyesFree:(bool)arg1 ;
-(id)serverCommandId;
-(void)setServerCommandId:(id)arg1 ;
-(void)setActivationEventTime:(double)arg1 ;
-(void)setExpectedActivationEventTime:(double)arg1 ;
-(void)setIsInitialBringUp:(bool)arg1 ;
-(void)setBtDeviceAddress:(id)arg1 ;
-(bool)useAutomaticEndpointing;
-(void)setUseAutomaticEndpointing:(bool)arg1 ;
-(id)homeButtonUpFromBeep;
-(void)setHomeButtonUpFromBeep:(id)arg1 ;
-(bool)isEyesFree;
@end

