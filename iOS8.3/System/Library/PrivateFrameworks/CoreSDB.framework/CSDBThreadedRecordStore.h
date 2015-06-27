/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:15:41 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CoreSDB.framework/CoreSDB
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreSDB/CoreSDB-Structs.h>
@class NSObject, NSString, _CSDBThreadObject;

@interface CSDBThreadedRecordStore : NSObject {

	CSDBRecordStore* _recordStore;
	NSObject*<OS_dispatch_queue> _recordStoreQueue;
	NSString* _identifier;
	_CSDBThreadObject* _thread;
	char _wantsRegister;

}
-(void)registerClass:(const SCD_Struct_CS1*)arg1 ;
-(void)dealloc;
-(id)initWithIdentifier:(CFStringRef)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 afterDelay:(double)arg2 ;
-(char)ownsCurrentThreadOtherwiseAssert:(char)arg1 ;
-(void)setupDatabaseWithAllowLocalMigration:(char)arg1 pathBlock:(/*^block*/id)arg2 setupStoreHandler:(/*function pointer*/void*)arg3 connectionInitializer:(/*function pointer*/void*)arg4 versionChecker:(/*function pointer*/void*)arg5 migrationHandler:(/*function pointer*/void*)arg6 schemaVersion:(int)arg7 dataProtectionClass:(unsigned)arg8 registerBlock:(/*^block*/id)arg9 ;
-(void)teardownDatabase;
-(void)_teardownDatabaseOnQueue;
-(void)performBlock:(/*^block*/id)arg1 waitUntilDone:(char)arg2 ;
@end
