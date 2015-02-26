/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:44 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <PassKit/PKPaymentSetupTableViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@class RemoteUIController, CLInUseAssertion, PKPaymentSetupPrivacyFooterView, PKWeakReference, PKPaymentWebService, PKPaymentCredential, UITextField, NSString;

@interface PKPaymentCardDetailsViewController : PKPaymentSetupTableViewController <UITextFieldDelegate> {

	RemoteUIController* _termsUIController;
	CLInUseAssertion* _CLInUse;
	double _maxHeaderWidth;
	BOOL _maxHeaderWidthCalculated;
	PKPaymentSetupPrivacyFooterView* _privacyView;
	PKWeakReference* _setupDelegate;
	PKPaymentWebService* _webService;
	PKPaymentCredential* _paymentCredential;
	UITextField* _cscField;

}

@property (nonatomic,retain) PKPaymentWebService * webService;                                    //@synthesize webService=_webService - In the implementation block
@property (assign,nonatomic) id<PKPaymentSetupViewControllerDelegate> setupDelegate; 
@property (nonatomic,retain) PKPaymentCredential * paymentCredential;                             //@synthesize paymentCredential=_paymentCredential - In the implementation block
@property (nonatomic,retain) UITextField * cscField;                                              //@synthesize cscField=_cscField - In the implementation block
@property (getter=isComplete,nonatomic,readonly) BOOL complete; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)handleDownloadedPasses:(id)arg1 fromViewController:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
+(void)handleProvisioningError:(id)arg1 forApplicationIdentifier:(id)arg2 ;
+(void)handlePassAlreadyProvisionedError;
-(void)textFieldDidChange:(id)arg1 ;
-(PKPaymentWebService *)webService;
-(id<PKPaymentSetupViewControllerDelegate>)setupDelegate;
-(void)setSetupDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
-(void)handleNext:(id)arg1 ;
-(void)showPrivacy:(id)arg1 ;
-(UITextField *)cscField;
-(void)setCscField:(UITextField *)arg1 ;
-(void)_stopVerifyingUI;
-(void)_showProvisioningError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_showVerifyingUI;
-(void)_showVerifiedUI;
-(void)_handlePassSuccessfullyAdded:(id)arg1 ;
-(void)provisionCard:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)displayTermsForCredential:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_showEligibilityIssueWithCredential:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)checkCard:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_showVerificationMethodsForPass:(id)arg1 ;
-(id)initWithWebService:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 ;
-(void)dismissPrivacyView:(id)arg1 ;
-(BOOL)_showSetupAssistantVerificationAlertForRecord:(id)arg1 pass:(id)arg2 ;
-(void)addDifferentCard:(id)arg1 ;
-(void)setWebService:(PKPaymentWebService *)arg1 ;
-(PKPaymentCredential *)paymentCredential;
-(void)setPaymentCredential:(PKPaymentCredential *)arg1 ;
-(BOOL)isComplete;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)headerView;
@end
