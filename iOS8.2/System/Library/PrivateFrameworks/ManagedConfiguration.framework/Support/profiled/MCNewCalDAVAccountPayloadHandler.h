/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:39 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <profiled/MCACAccountPayloadHandler.h>
#import <profiled/DAValidityCheckConsumer.h>

@protocol OS_dispatch_semaphore;
@class NSError, NSObject, NSString;

@interface MCNewCalDAVAccountPayloadHandler : MCACAccountPayloadHandler <DAValidityCheckConsumer> {

	char _validationComplete;
	NSError* _validationError;
	NSObject*<OS_dispatch_semaphore> _doneSema;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id*)arg4 ;
-(void)setAsideWithInstaller:(id)arg1 ;
-(id)userInputFields;
-(char)preflightUserInputResponses:(id)arg1 outError:(id*)arg2 ;
-(void)setUserInputResponses:(id)arg1 ;
-(id)_errorFromValidationError:(id)arg1 ;
-(id)_reallyInstallInstaller:(id)arg1 isInstalledByMDM:(char)arg2 ;
-(id)_installedAccount;
-(id)_accountFromPayloadWithUserInputResponses:(id)arg1 ;
-(void)_preflightWithAccount:(id)arg1 ;
-(void)remove;
-(void)account:(id)arg1 isValid:(char)arg2 validationError:(id)arg3 ;
-(char)isInstalled;
@end
