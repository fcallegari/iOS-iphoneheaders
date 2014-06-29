/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:19 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/AppleAccountSettings.bundle/AppleAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CommunicationsSetupUI/RUIObjectModelDelegate.h>

@protocol AAGenericTermsRemoteUIDelegate;
@class UINavigationController, UIViewController, RUILoader, NSMutableArray, ACAccount, ACAccountStore, UIAlertView, NSString;

@interface AAGenericTermsRemoteUI : NSObject <RUIObjectModelDelegate> {

	UINavigationController* _parentNavController;
	UIViewController* _originatingViewController;
	UINavigationController* _genericTermsUIViewController;
	RUILoader* _loader;
	NSMutableArray* _objectModels;
	ACAccount* _account;
	ACAccountStore* _accountStore;
	bool _isModal;
	UIAlertView* _tcConfirmationAlert;
	NSString* _agreeURL;
	<AAGenericTermsRemoteUIDelegate>* _delegate;

}

@property (assign,nonatomic,__weak) <AAGenericTermsRemoteUIDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_cleanUpAndDismissWithSuccess:(bool)arg1 ;
-(void)_cleanupRUILoader;
-(id)initWithAccount:(id)arg1 inStore:(id)arg2 ;
-(void)presentFromViewController:(id)arg1 modal:(bool)arg2 ;
-(void)loader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(int)arg3 ;
-(id)parentViewControllerForObjectModel:(id)arg1 ;
-(void)objectModelPressedBack:(id)arg1 ;
-(void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3 ;
-(void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 ;
-(unsigned long long)supportedInterfaceOrientationsForObjectModel:(id)arg1 page:(id)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void).cxx_destruct;
-(void)_addHeadersToRequest:(id)arg1 ;
-(void)_displayConnectionErrorAndDismiss;
-(void)_popObjectModelAnimated:(bool)arg1 ;
-(void)_cancelButtonTapped:(id)arg1 ;
@end
