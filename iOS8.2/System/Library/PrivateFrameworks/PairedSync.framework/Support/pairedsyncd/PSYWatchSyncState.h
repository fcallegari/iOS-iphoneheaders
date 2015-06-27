/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:54 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/Support/pairedsyncd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface PSYWatchSyncState : NSObject {

	NSString* _activityLabel;
	int _globalProgress;
	unsigned _syncProgressState;
	unsigned _version;

}

@property (nonatomic,readonly) NSString * activityLabel;                //@synthesize activityLabel=_activityLabel - In the implementation block
@property (nonatomic,readonly) int globalProgress;                      //@synthesize globalProgress=_globalProgress - In the implementation block
@property (nonatomic,readonly) unsigned syncProgressState;              //@synthesize syncProgressState=_syncProgressState - In the implementation block
@property (nonatomic,readonly) unsigned version;                        //@synthesize version=_version - In the implementation block
-(id)plistRepresentation;
-(id)initWithPlistRepresentation:(id)arg1 ;
-(unsigned)syncProgressState;
-(int)globalProgress;
-(id)initWithActivityLabel:(id)arg1 globalProgress:(int)arg2 syncProgressState:(unsigned)arg3 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned)version;
-(NSString *)activityLabel;
@end
