/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:11 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTask.h>

@interface CoreDAVGetTask : CoreDAVTask {

	id _appSpecificDataItemResult;
	BOOL _forceNoCache;

}

@property (assign,nonatomic) id<CoreDAVTaskDelegate> delegate; 
@property (nonatomic,retain) id appSpecificDataItemResult;                  //@synthesize appSpecificDataItemResult=_appSpecificDataItemResult - In the implementation block
@property (assign,nonatomic) BOOL forceNoCache;                             //@synthesize forceNoCache=_forceNoCache - In the implementation block
-(void)dealloc;
-(id)description;
-(id)httpMethod;
-(unsigned long long)cachePolicy;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(id)appSpecificDataItemResult;
-(BOOL)forceNoCache;
-(void)setAppSpecificDataItemResult:(id)arg1 ;
-(void)setForceNoCache:(BOOL)arg1 ;
-(id)requestBody;
@end
