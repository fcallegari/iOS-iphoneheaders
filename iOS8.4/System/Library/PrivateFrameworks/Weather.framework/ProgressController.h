/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:41 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSTimer;

@interface ProgressController : NSObject {

	BOOL _progressShowing;
	int _loadingCount;
	NSTimer* _hideSpinnerTimer;

}
+(id)sharedProgressController;
-(void)suspend;
-(void)_setHideSpinnerTimer:(id)arg1 ;
-(void)_showSpinner;
-(void)_hideSpinner;
-(void)userScrolled;
-(void)setLoadingData:(BOOL)arg1 ;
@end
