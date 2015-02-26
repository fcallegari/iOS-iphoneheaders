/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:23 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, UIAlertView, UIPrintingProgressViewController;

@interface UIPrintingProgress : NSObject {

	NSString* _printerName;
	/*^block*/id _cancelHandler;
	double _startTime;
	double _displayTime;
	UIAlertView* _alert;
	UIPrintingProgressViewController* _viewController;
	BOOL _donePrinting;
	BOOL _forceDisplayAsAlert;

}
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)alertViewCancel:(id)arg1 ;
-(void)didPresentAlertView:(id)arg1 ;
-(id)initWithPrinterName:(id)arg1 forceDisplayAsAlert:(BOOL)arg2 cancelHandler:(/*^block*/id)arg3 ;
-(void)setPrintInfoState:(int)arg1 ;
-(void)setPage:(long long)arg1 ofPage:(long long)arg2 ;
-(double)nextPrintDelay;
-(void)endProgress;
-(void)hideProgressAnimated:(BOOL)arg1 ;
-(BOOL)progressVisible;
-(void)progressCancel;
-(void)showProgress:(id)arg1 immediately:(BOOL)arg2 ;
@end
