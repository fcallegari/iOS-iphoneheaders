/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:58:17 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface HDBackgroundTaskClient : NSObject {

	/*^block*/id _taskHandler;

}
-(id)initWithTaskHandler:(/*^block*/id)arg1 ;
-(void)deliverTask:(id)arg1 taskName:(id)arg2 onQueue:(id)arg3 ;
@end
