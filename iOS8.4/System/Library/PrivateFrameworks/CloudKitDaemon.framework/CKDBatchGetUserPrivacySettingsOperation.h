/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:26 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDOperation.h>

@class NSArray;

@interface CKDBatchGetUserPrivacySettingsOperation : CKDOperation {

	NSArray* _containerPrivacySettings;

}

@property (nonatomic,copy) NSArray * containerPrivacySettings;              //@synthesize containerPrivacySettings=_containerPrivacySettings - In the implementation block
+(id)appPermissionGroupsFromContainerPrivacySettings:(id)arg1 ;
-(void)main;
-(NSArray *)containerPrivacySettings;
-(BOOL)shouldCheckAppVersion;
-(void)setContainerPrivacySettings:(NSArray *)arg1 ;
@end

