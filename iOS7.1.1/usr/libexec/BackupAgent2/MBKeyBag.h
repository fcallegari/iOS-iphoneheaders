/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:27 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/BackupAgent2
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <BackupAgent2/BackupAgent2-Structs.h>
@interface MBKeyBag : NSObject {

	MKBKeyBagHandleRef _handle;
	BOOL _OTA;

}

@property (nonatomic,readonly) MKBKeyBagHandleRef handle;              //@synthesize handle=_handle - In the implementation block
@property (assign,getter=isOTA,nonatomic) BOOL OTA;                    //@synthesize OTA=_OTA - In the implementation block
+(id)unlockedKeyBagWithData:(id)arg1 password:(id)arg2 error:(id*)arg3 ;
+(id)keybagWithPassword:(id)arg1 error:(id*)arg2 ;
+(BOOL)isDeviceKeyBagLocked;
+(id)keybagWithData:(id)arg1 error:(id*)arg2 ;
+(int)codeWithReturnCode:(int)arg1 ;
+(id)errorWithReturnCode:(int)arg1 description:(id)arg2 ;
+(BOOL)wasDeviceUnlockedSinceBoot;
+(id)errorWithReturnCode:(int)arg1 path:(id)arg2 description:(id)arg3 ;
+(id)OTAKeyBagWithData:(id)arg1 error:(id*)arg2 ;
+(id)OTAKeyBagWithSecret:(id)arg1 error:(id*)arg2 ;
+(id)sharedOTAKeyBag;
+(BOOL)unregisterOTAKeyBagWithError:(id*)arg1 ;
+(void)startOTABackup;
+(void)stopOTABackup;
+(id)randomSecret;
-(id)dataWithError:(id*)arg1 ;
-(BOOL)changePasswordFrom:(id)arg1 toPassword:(id)arg2 error:(id*)arg3 ;
-(id)initWithHandle:(MKBKeyBagHandleRef)arg1 OTA:(BOOL)arg2 ;
-(BOOL)unlockWithPassword:(id)arg1 error:(id*)arg2 ;
-(void)setOTA:(BOOL)arg1 ;
-(BOOL)unlockWithSecret:(id)arg1 error:(id*)arg2 ;
-(BOOL)changeSecretFrom:(id)arg1 toSecret:(id)arg2 error:(id*)arg3 ;
-(BOOL)registerWithPasscode:(id)arg1 error:(id*)arg2 ;
-(id)UUIDWithError:(id*)arg1 ;
-(BOOL)isOTA;
-(void)dealloc;
-(MKBKeyBagHandleRef)handle;
@end
