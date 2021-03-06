/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:41 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MCManagedDefaultsManager : NSObject
+(id)sharedManager;
-(id)managedDefaultsPathForDomain:(id)arg1 ;
-(id)managedDefaultsForDomain:(id)arg1 ;
-(void)setDefaults:(id)arg1 forManagedDomain:(id)arg2 ;
-(bool)domainHasManagedDefaults:(id)arg1 ;
-(void)addDefaults:(id)arg1 toManagedDomain:(id)arg2 ;
-(void)removeDefaults:(id)arg1 fromManagedDomain:(id)arg2 ;
-(void)removeAllManagedDefaultsFromDomain:(id)arg1 ;
-(void)sendManagedDefaultsChangedNotificationForDomains:(id)arg1 ;
@end

