/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:40:00 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/MFMailComposeViewControllerDelegate.h>
#import <iTunesStoreUI/SUOverlayBackgroundDelegate.h>

@class SUClientInterface, SUOverlayBackgroundViewController, SUPreviewOverlayViewController, UITabBarController, NSString;

@interface SULegacyClientBridge : NSObject <MFMailComposeViewControllerDelegate, SUOverlayBackgroundDelegate> {

	SUClientInterface* _clientInterface;
	SUOverlayBackgroundViewController* _overlayBackgroundViewController;
	SUPreviewOverlayViewController* _previewOverlayViewController;
	UITabBarController* _rootViewController;

}

@property (nonatomic,readonly) SUClientInterface * clientInterface;                                              //@synthesize clientInterface=_clientInterface - In the implementation block
@property (nonatomic,retain) UITabBarController * rootViewController;                                            //@synthesize rootViewController=_rootViewController - In the implementation block
@property (nonatomic,readonly) SUOverlayBackgroundViewController * overlayBackgroundViewController;              //@synthesize overlayBackgroundViewController=_overlayBackgroundViewController - In the implementation block
@property (nonatomic,readonly) SUPreviewOverlayViewController * previewOverlayViewController; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setRootViewController:(UITabBarController *)arg1 ;
-(UITabBarController *)rootViewController;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
-(SUClientInterface *)clientInterface;
-(void)_showPreviewOverlayAnimated:(char)arg1 ;
-(id)initWithClientInterface:(id)arg1 ;
-(SUOverlayBackgroundViewController *)overlayBackgroundViewController;
-(char)presentOverlayBackgroundViewController:(id)arg1 ;
-(void)scriptOverlayBackgroundDidDismiss:(id)arg1 ;
-(void)dismissOverlayBackgroundViewController;
-(id)_previewOverlayViewController;
-(void)composeEmailWithSubject:(id)arg1 body:(id)arg2 ;
-(char)enterAccountFlowWithViewController:(id)arg1 animated:(char)arg2 ;
-(char)composeReviewWithViewController:(id)arg1 animated:(char)arg2 ;
-(char)performActionForDialog:(id)arg1 button:(id)arg2 ;
-(void)_removePreviewOverlayViewController;
-(void)hidePreviewOverlayAnimated:(char)arg1 ;
-(SUPreviewOverlayViewController *)previewOverlayViewController;
-(void)showPreviewOverlayAnimated:(char)arg1 ;
@end
