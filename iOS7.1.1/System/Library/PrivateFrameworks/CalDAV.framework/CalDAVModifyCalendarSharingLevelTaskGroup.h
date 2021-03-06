/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <CoreDAV/CoreDAVPropPatchTaskDelegate.h>

@class NSURL;

@interface CalDAVModifyCalendarSharingLevelTaskGroup : CoreDAVTaskGroup <CoreDAVPropPatchTaskDelegate> {

	int _action;
	NSURL* _url;
	int _state;
	NSURL* _publishedURL;

}

@property (assign) int action;                        //@synthesize action=_action - In the implementation block
@property (retain) NSURL * publishedURL;              //@synthesize publishedURL=_publishedURL - In the implementation block
@property (retain) NSURL * url;                       //@synthesize url=_url - In the implementation block
@property (assign) int state;                         //@synthesize state=_state - In the implementation block
-(id)publishedURL;
-(void)setPublishedURL:(id)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(int)state;
-(void)setState:(int)arg1 ;
-(int)action;
-(void)setAction:(int)arg1 ;
-(id)url;
-(void)setUrl:(id)arg1 ;
-(id)initWithSharingAction:(int)arg1 atCalendarURL:(id)arg2 accountInfoProvider:(id)arg3 taskManager:(id)arg4 ;
-(id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 ;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)startTaskGroup;
@end

