/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:46:14 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@class UIAlertView, NSString;

@interface TPAlertViewHelper : NSObject <UIAlertViewDelegate> {

	/*^block*/id _completionHandler;
	UIAlertView* _alertView;

}

@property (readonly) int firstOtherButtonIndex; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_workQueue;
+(id)alertHelperWithHandler:(/*^block*/id)arg1 style:(int)arg2 title:(id)arg3 message:(id)arg4 cancelButtonTitle:(id)arg5 otherButtonTitles:(id)arg6 ;
+(id)_allHelpersArray;
-(void)show;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(int)firstOtherButtonIndex;
-(void)setCompletionHandler:(/*^block*/id)arg1 ;
-(id)_initWithTitle:(id)arg1 style:(int)arg2 message:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5 ;
-(void)dismissWithClickedButtonIndexAnimated:(int)arg1 ;
-(void)dismissWithCancelAnimated:(char)arg1 ;
-(id)_underlyingAlertView;
@end
