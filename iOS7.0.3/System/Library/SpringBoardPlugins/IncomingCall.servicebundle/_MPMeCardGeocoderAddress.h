/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:11:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SpringBoardPlugins/IncomingCall.servicebundle/IncomingCall
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSCoding.h>

@class NSDictionary, NSString, CLGeocoder, NSDate;

@interface _MPMeCardGeocoderAddress : NSObject <NSCoding> {

	NSDictionary* _addressDictionary;
	NSString* _entityID;
	NSString* _label;
	CLGeocoder* _geocoder;
	int _state;
	int _tries;
	NSDate* _lastGeocodeAttempt;
	NSDictionary* _locationDictionary;
	BOOL _cancelingGeocode;
	NSDate* _geocodeAfter;

}

@property (readonly) NSDictionary * addressDictionary;               //@synthesize addressDictionary=_addressDictionary - In the implementation block
@property (readonly) NSDictionary * locationDictionary;              //@synthesize locationDictionary=_locationDictionary - In the implementation block
@property (readonly) NSDate * lastGeocodeAttempt;                    //@synthesize lastGeocodeAttempt=_lastGeocodeAttempt - In the implementation block
@property (readonly) int state;                                      //@synthesize state=_state - In the implementation block
@property (readonly) NSDate * geocodeAfter;                          //@synthesize geocodeAfter=_geocodeAfter - In the implementation block
-(id)geocodeAfter;
-(BOOL)expired;
-(void)recalculateGeocodeAfterDate;
-(id)createGeocodeAfterDate;
-(id)lastGeocodeAttempt;
-(id)nextGeocodeAttempt;
-(void)attemptGeocodeWithCompletionBlock:(/*^block*/ id)arg1 ;
-(BOOL)checkGeocodeAfterDateForSanity;
-(id)initWithAddressDictionary:(id)arg1 entityID:(id)arg2 label:(id)arg3 ;
-(id)locationDictionary;
-(void)cancelGeocode;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(int)state;
-(id)addressDictionary;
@end
