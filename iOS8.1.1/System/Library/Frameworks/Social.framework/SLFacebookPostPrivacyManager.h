/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:57 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ACAccount, NSArray, SLFacebookPostPrivacySetting;

@interface SLFacebookPostPrivacyManager : NSObject {

	ACAccount* _account;
	NSArray* _privacySettings;

}

@property (retain) SLFacebookPostPrivacySetting * privacySetting; 
-(id)_userDefaultsDict;
-(id)defaultPrivacySetting;
-(id)_privacySettingsFromPrivacyOptionDictionaries:(id)arg1 ;
-(void)_setPrivacySettings:(id)arg1 ;
-(void)_handlePrivacySettingsUpdateResponseWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3 handler:(/*^block*/id)arg4 ;
-(SLFacebookPostPrivacySetting *)privacySetting;
-(id)privacySettings;
-(void)setPrivacySetting:(SLFacebookPostPrivacySetting *)arg1 ;
-(void)updatePrivacySettingsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithAccount:(id)arg1 ;
@end

