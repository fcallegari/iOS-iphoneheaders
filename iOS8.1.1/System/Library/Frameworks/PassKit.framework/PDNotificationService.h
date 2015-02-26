/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:47 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <passd/NSSecureCoding.h>

@class NSURL, NSString, NSDate;

@interface PDNotificationService : NSObject <NSSecureCoding> {

	long long _serviceType;
	NSURL* _serviceURL;
	NSString* _pushTopic;
	NSString* _pushToken;
	NSString* _authenticationToken;
	NSString* _appLaunchToken;
	NSString* _deviceIdentifier;
	NSDate* _lastUpdatedDate;
	NSString* _lastUpdatedTag;
	NSDate* _lastUpdatedTagDate;

}

@property (assign,nonatomic) long long serviceType;                       //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,retain) NSURL * serviceURL;                          //@synthesize serviceURL=_serviceURL - In the implementation block
@property (nonatomic,retain) NSString * pushTopic;                        //@synthesize pushTopic=_pushTopic - In the implementation block
@property (nonatomic,retain) NSString * pushToken;                        //@synthesize pushToken=_pushToken - In the implementation block
@property (nonatomic,retain) NSString * authenticationToken;              //@synthesize authenticationToken=_authenticationToken - In the implementation block
@property (nonatomic,retain) NSString * appLaunchToken;                   //@synthesize appLaunchToken=_appLaunchToken - In the implementation block
@property (nonatomic,retain) NSString * deviceIdentifier;                 //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,retain) NSDate * lastUpdatedDate;                    //@synthesize lastUpdatedDate=_lastUpdatedDate - In the implementation block
@property (nonatomic,retain) NSString * lastUpdatedTag;                   //@synthesize lastUpdatedTag=_lastUpdatedTag - In the implementation block
@property (nonatomic,retain) NSDate * lastUpdatedTagDate;                 //@synthesize lastUpdatedTagDate=_lastUpdatedTagDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)appLaunchToken;
-(NSDate *)lastUpdatedTagDate;
-(void)setServiceURL:(NSURL *)arg1 ;
-(void)setAppLaunchToken:(NSString *)arg1 ;
-(void)setLastUpdatedDate:(NSDate *)arg1 ;
-(void)setLastUpdatedTagDate:(NSDate *)arg1 ;
-(NSURL *)serviceURL;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)pushTopic;
-(NSString *)deviceIdentifier;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(NSString *)pushToken;
-(void)setPushToken:(NSString *)arg1 ;
-(void)setServiceType:(long long)arg1 ;
-(long long)serviceType;
-(void)setLastUpdatedTag:(NSString *)arg1 ;
-(NSString *)lastUpdatedTag;
-(void)setAuthenticationToken:(NSString *)arg1 ;
-(NSString *)authenticationToken;
-(NSDate *)lastUpdatedDate;
-(void)setPushTopic:(NSString *)arg1 ;
@end
