/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:37:24 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSArray;

@interface ClaimUserAppsOperation : ISOperation {

	NSArray* _claimedBundleIdentifiers;
	char _establishesActiveAccount;
	char _ignoresPreviousClaimAttempts;

}

@property (assign) char establishesActiveAccount; 
@property (assign) char ignoresPreviousClaimAttempts; 
@property (readonly) NSArray * claimedBundleIdentifiers; 
-(void)setEstablishesActiveAccount:(char)arg1 ;
-(void)setIgnoresPreviousClaimAttempts:(char)arg1 ;
-(NSArray *)claimedBundleIdentifiers;
-(char)establishesActiveAccount;
-(id)_lastClaimBuildVersionWithAccount:(id)arg1 ;
-(char)ignoresPreviousClaimAttempts;
-(id)_copyUnclaimedApplications;
-(id)_updateAppsUsingResponseDictionary:(id)arg1 requestBody:(id)arg2 ;
-(void)_setClaimBuildVersion:(id)arg1 forAccount:(id)arg2 ;
-(void)run;
@end
