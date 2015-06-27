/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:32 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/NanoPreferencesSync.framework/NanoPreferencesSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NPSDomainAccessorInternal, NSString, NSUUID;

@interface NPSDomainAccessor : NSObject {

	NSObject*<OS_dispatch_queue> _externalQueue;
	NSObject*<OS_dispatch_queue> _invalidationQueue;
	NPSDomainAccessorInternal* _internalAccessor;

}

@property (nonatomic,readonly) NSString * domain; 
@property (nonatomic,readonly) NSUUID * pairingID; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> externalQueue;                  //@synthesize externalQueue=_externalQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> invalidationQueue;              //@synthesize invalidationQueue=_invalidationQueue - In the implementation block
@property (nonatomic,retain) NPSDomainAccessorInternal * internalAccessor;                //@synthesize internalAccessor=_internalAccessor - In the implementation block
+(void)resolveActivePairedDevicePairingID:(id*)arg1 pairingDataStore:(id*)arg2 ;
+(id)copyDomainListForPairingID:(id)arg1 pairingDataStore:(id)arg2 ;
+(id)copyDomainList;
-(id)copyKeyList;
-(id)initWithDomain:(id)arg1 ;
-(long long)longForKey:(id)arg1 ;
-(double)doubleForKey:(id)arg1 ;
-(id)URLForKey:(id)arg1 ;
-(void)setInteger:(int)arg1 forKey:(id)arg2 ;
-(void)setFloat:(float)arg1 forKey:(id)arg2 ;
-(void)setDouble:(double)arg1 forKey:(id)arg2 ;
-(void)synchronizeWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)boolForKey:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)removeObjectForKey:(id)arg1 ;
-(float)floatForKey:(id)arg1 ;
-(id)synchronize;
-(NSString *)domain;
-(id)stringForKey:(id)arg1 ;
-(void)setBool:(char)arg1 forKey:(id)arg2 ;
-(int)integerForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(char)boolForKey:(id)arg1 keyExistsAndHasValidFormat:(char*)arg2 ;
-(int)integerForKey:(id)arg1 keyExistsAndHasValidFormat:(char*)arg2 ;
-(id)queue;
-(NSUUID *)pairingID;
-(NPSDomainAccessorInternal *)internalAccessor;
-(id)initWithDomain:(id)arg1 queue:(id)arg2 ;
-(id)initWithDomain:(id)arg1 queue:(id)arg2 pairingID:(id)arg3 pairingDataStore:(id)arg4 ;
-(id)initWithInternalDomainAccessor:(id)arg1 queue:(id)arg2 ;
-(void)objectForKey:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(long long)longForKey:(id)arg1 keyExistsAndHasValidFormat:(char*)arg2 ;
-(float)floatForKey:(id)arg1 keyExistsAndHasValidFormat:(char*)arg2 ;
-(double)doubleForKey:(id)arg1 keyExistsAndHasValidFormat:(char*)arg2 ;
-(NSObject*<OS_dispatch_queue>)externalQueue;
-(void)setExternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setInternalAccessor:(NPSDomainAccessorInternal *)arg1 ;
-(id)initWithDomain:(id)arg1 pairingID:(id)arg2 pairingDataStore:(id)arg3 ;
-(id)dataForKey:(id)arg1 ;
-(void)setURL:(id)arg1 forKey:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)invalidationQueue;
-(void)setInvalidationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)stringArrayForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
@end
