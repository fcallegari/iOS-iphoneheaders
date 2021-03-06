/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:29 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUScriptObject.h>

@protocol SUScriptInterfaceDelegate;
@class SUScriptAccountManager, SUScriptKeyValueStore, SSAuthenticationContext, SUClientInterface, NSMutableDictionary, WebFrame, SUScriptMediaLibrary, SUScriptNotificationObserver, SUScriptPreviewOverlay, SUScriptPurchaseManager, SUScriptOperationDelegate, SUScriptWindowContext, NSArray, SUScriptAccount, SUScriptSectionsController, SUScriptViewController, SUScriptProtocol, SUScriptWindow, SUScriptPassbookLibrary, SUScriptApplication, SUScriptDevice, NSString, SUScriptAppleAccountStore, SUScriptFairPlayContext, SUScriptNavigationBar, NSNumber;

@interface SUScriptInterface : SUScriptObject {

	SUScriptAccountManager* _accountManager;
	SUScriptKeyValueStore* _applicationLocalStorage;
	SSAuthenticationContext* _authenticationContext;
	SUClientInterface* _clientInterface;
	id<SUScriptInterfaceDelegate> _delegate;
	SUScriptKeyValueStore* _deviceLocalStorage;
	NSMutableDictionary* _downloadQueues;
	WebFrame* _frame;
	SUScriptMediaLibrary* _mediaLibrary;
	SUScriptNotificationObserver* _notificationObserver;
	SUScriptPreviewOverlay* _previewOverlay;
	SUScriptPurchaseManager* _purchaseManager;
	SUScriptOperationDelegate* _scriptOperationDelegate;
	SUScriptWindowContext* _scriptWindowContext;
	id _threadSafeDelegate;

}

@property (readonly) NSArray * installedSoftwareApplications; 
@property (readonly) NSArray * accounts; 
@property (retain) SUScriptAccount * primaryAccount; 
@property (retain) SUScriptAccount * primaryLockerAccount; 
@property (readonly) SUScriptSectionsController * sectionsController; 
@property (readonly) SUScriptViewController * viewController; 
@property (readonly) SUScriptProtocol * protocol; 
@property (readonly) SUScriptWindow * window; 
@property (readonly) SUScriptMediaLibrary * mediaLibrary; 
@property (readonly) SUScriptPassbookLibrary * passbookLibrary; 
@property (readonly) SUScriptApplication * application; 
@property (readonly) SUScriptDevice * device; 
@property (readonly) NSString * actionTypeReturnToLibrary; 
@property (readonly) NSString * actionTypeDismissWindows; 
@property (readonly) NSString * actionTypeDismissSheet; 
@property (readonly) SUScriptPurchaseManager * purchaseManager; 
@property (readonly) SUScriptAppleAccountStore * appleAccountStore; 
@property (readonly) SUScriptFairPlayContext * accountCreationSecureContext; 
@property (copy) SSAuthenticationContext * authenticationContext; 
@property (retain) SUScriptWindowContext * scriptWindowContext; 
@property (assign) id<SUScriptInterfaceDelegate> delegate; 
@property (readonly) id<SUScriptInterfaceDelegate> threadSafeDelegate; 
@property (retain) SUClientInterface * clientInterface; 
@property (retain) WebFrame * webFrame; 
@property (readonly) id applicationAccessibilityEnabled; 
@property (readonly) SUScriptKeyValueStore * applicationLocalStorage; 
@property (readonly) NSString * clientIdentifier; 
@property (copy) NSString * cookie; 
@property (readonly) SUScriptKeyValueStore * deviceLocalStorage; 
@property (readonly) id globalRootObject; 
@property (readonly) id loggingEnabled; 
@property (readonly) SUScriptNavigationBar * navigationBar; 
@property (readonly) NSNumber * orientation; 
@property (readonly) NSString * referringUserAgent; 
@property (readonly) SUScriptPreviewOverlay * previewOverlay; 
@property (readonly) id screenReaderRunning; 
@property (readonly) int storeSheetType; 
@property (readonly) NSString * askToBuyPrompt; 
@property (readonly) int storeSheetTypeDefault; 
@property (readonly) int storeSheetTypeAskToBuy; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(int)purchaseAnimationStyleFromString:(id)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(NSString *)clientIdentifier;
-(void)log:(id)arg1 ;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
-(SUScriptMediaLibrary *)mediaLibrary;
-(void)setMediaLibrary:(SUScriptMediaLibrary *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<SUScriptInterfaceDelegate>)arg1 ;
-(SUScriptWindow *)window;
-(id)init;
-(void)startedTest:(id)arg1 ;
-(id<SUScriptInterfaceDelegate>)delegate;
-(SUScriptNavigationBar *)navigationBar;
-(void)finishedTest:(id)arg1 extraResults:(id)arg2 ;
-(void)setWindow:(SUScriptWindow *)arg1 ;
-(NSNumber *)orientation;
-(id)parentViewController;
-(void)openURL:(id)arg1 ;
-(id)systemVersion;
-(void)setNavigationBar:(SUScriptNavigationBar *)arg1 ;
-(SUScriptViewController *)viewController;
-(char)launchedToTest;
-(char)isRunningTest;
-(void)setOrientation:(NSNumber *)arg1 ;
-(WebFrame *)webFrame;
-(void)goBack;
-(SUScriptProtocol *)protocol;
-(SUScriptAccount *)primaryAccount;
-(NSArray *)accounts;
-(SUClientInterface *)clientInterface;
-(void)setClientInterface:(SUClientInterface *)arg1 ;
-(void)retryAllRestoreDownloads;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)accountName;
-(SUScriptDevice *)device;
-(NSString *)cookie;
-(void)setCookie:(NSString *)arg1 ;
-(id)attributeKeys;
-(void)initAuthentication;
-(void)_globalEventNotification:(id)arg1 ;
-(void)_scriptUserInfoDidChangeNotification:(id)arg1 ;
-(void)deallocAuthentication;
-(void)deallocMediaLibrary;
-(OpaqueJSContextRef)copyJavaScriptContext;
-(id)DOMElementWithElement:(id)arg1 ;
-(void)_accessibilityPostLayoutChange;
-(id)accountDSID;
-(char)checkCapabilitiesPropertyListString:(id)arg1 showFailureDialog:(char)arg2 ;
-(id)activeNetworkType;
-(id)diskSpaceAvailable;
-(id)hardwareType;
-(id)_copyDialogWithMessage:(id)arg1 title:(id)arg2 cancelButtonTitle:(id)arg3 okButtonTitle:(id)arg4 ;
-(void)accessibilityPostLayoutChange;
-(void)accessibilityPostScreenChange;
-(id)accountForDSID:(id)arg1 ;
-(void)addExternalDownloads:(id)arg1 options:(id)arg2 ;
-(void)addExternalDownloadsFromManifestURL:(id)arg1 ;
-(void)addPurchaseWithInfo:(id)arg1 options:(id)arg2 ;
-(char)arePodcastsDisabled;
-(void)approveInPerson:(id)arg1 ;
-(void)authenticateForAccount:(id)arg1 withOptions:(id)arg2 ;
-(char)canSendEmail;
-(void)composeEmailWithSubject:(id)arg1 body:(id)arg2 ;
-(void)composeReviewWithURL:(id)arg1 itemIdentifier:(id)arg2 type:(id)arg3 ;
-(int)dialogDisplayCountForKey:(id)arg1 ;
-(void)dismissSheet;
-(void)dismissWindowsWithOptions:(id)arg1 ;
-(void)dispatchGlobalEventWithName:(id)arg1 payload:(id)arg2 ;
-(void)dispatchXEvent:(id)arg1 ;
-(id)getAudioPlayerForURL:(id)arg1 keyURL:(id)arg2 certificateURL:(id)arg3 ;
-(void)getInstalledSoftwareApplicationsWithCompletionFunction:(id)arg1 ;
-(id)getDownloadQueueWithQueueType:(id)arg1 ;
-(void)getSoftwareApplicationWithAdamID:(id)arg1 completionFunction:(id)arg2 ;
-(void)getSoftwareApplicationWithBundleID:(id)arg1 completionFunction:(id)arg2 ;
-(void)gotoStoreURL:(id)arg1 ;
-(void)gotoStoreURL:(id)arg1 ofType:(id)arg2 withAuthentication:(char)arg3 forceAuthentication:(char)arg4 ;
-(void)handleDialogPropertyListString:(id)arg1 ;
-(void)handleProtocolPropertyListString:(id)arg1 ;
-(void)handleRootObjectWithPropertyListString:(id)arg1 ;
-(void)handleTrackListWithPropertyListString:(id)arg1 ;
-(char)haveAccount;
-(char)isExplicitContentDisabled;
-(id)machineGUID;
-(id)makeAccount;
-(id)makeAccountPageWithURLs:(id)arg1 ;
-(id)makeActivity;
-(id)makeActivityItemProviderWithMIMEType:(id)arg1 ;
-(id)makeActivityViewControllerWithProviders:(id)arg1 activities:(id)arg2 ;
-(id)makeButtonWithSystemItemString:(id)arg1 action:(id)arg2 ;
-(id)makeButtonWithTitle:(id)arg1 action:(id)arg2 ;
-(id)makeCalloutView;
-(id)makeCanvasWithWidth:(id)arg1 height:(id)arg2 ;
-(id)makeColorWithHue:(id)arg1 saturation:(id)arg2 brightness:(id)arg3 alpha:(id)arg4 ;
-(id)makeColorWithRed:(id)arg1 green:(id)arg2 blue:(id)arg3 alpha:(id)arg4 ;
-(id)makeColorWithWhite:(id)arg1 alpha:(id)arg2 ;
-(id)makeComposeReviewViewControllerWithReview:(id)arg1 ;
-(id)makeDateFormatter;
-(id)makeDialog;
-(id)makeDocumentInteractionController;
-(id)makeDonationViewControllerWithCharityIdentifier:(id)arg1 ;
-(id)makeFacebookRequestWithURL:(id)arg1 requestMethod:(id)arg2 ;
-(id)makeFacebookSessionWithAccount:(id)arg1 ;
-(id)makeFamilySetupViewController;
-(id)makeGiftViewController;
-(id)makeLinearGradientWithX0:(float)arg1 y0:(float)arg2 x1:(float)arg3 y1:(float)arg4 ;
-(id)makeLookupRequest;
-(id)makeMediaPlayerItemWithProperties:(id)arg1 ;
-(id)makeMediaPlayerViewControllerWithMediaPlayerItem:(id)arg1 ;
-(id)makeMenuViewController;
-(id)makeNavigationControllerWithRootViewController:(id)arg1 ;
-(id)makeNumberFormatterWithStyle:(id)arg1 ;
-(id)makePopOverWithViewController:(id)arg1 ;
-(id)makeRadialGradientWithX0:(float)arg1 y0:(float)arg2 r0:(float)arg3 x1:(float)arg4 y1:(float)arg5 r1:(float)arg6 ;
-(id)makeRedeemViewController;
-(id)makeReportAProblemViewControllerWithAdamID:(id)arg1 ;
-(id)makeReviewWithAdamID:(id)arg1 ;
-(id)makeScriptActionWithType:(id)arg1 ;
-(id)makeSegmentedControl;
-(id)makeSplitViewController;
-(id)makeStorePageWithURLs:(id)arg1 ;
-(id)makeStoreSheetViewController;
-(id)makeTextFieldWithStyle:(id)arg1 placeholder:(id)arg2 value:(id)arg3 width:(id)arg4 ;
-(id)makeTweetComposeViewController;
-(id)makeURLRequestWithURLs:(id)arg1 timeoutInterval:(id)arg2 ;
-(id)makeVolumeViewController;
-(id)makeWindow;
-(void)perfLog:(id)arg1 ;
-(void)performPurchaseAnimationForIdentifier:(id)arg1 style:(id)arg2 ;
-(void)pingURL:(id)arg1 ;
-(void)redeemCode:(id)arg1 ;
-(void)registerNavBarButtonWithTitle:(id)arg1 side:(id)arg2 function:(id)arg3 ;
-(void)reloadFooterSection:(id)arg1 withURL:(id)arg2 ;
-(void)reportAProblemForIdentifier:(id)arg1 ;
-(void)selectSectionWithIdentifier:(id)arg1 ;
-(void)selectTrackListItemWithIdentifier:(id)arg1 ;
-(void)sendPostOfType:(id)arg1 withOptions:(id)arg2 ;
-(void)setLibraryIdentifierWithType:(id)arg1 value:(id)arg2 ;
-(char)shouldRestrictContentOfSystem:(id)arg1 level:(id)arg2 ;
-(void)showAlertWithMessage:(id)arg1 title:(id)arg2 buttonTitle:(id)arg3 ;
-(char)showConfirmWithMessage:(id)arg1 title:(id)arg2 okButtonTitle:(id)arg3 cancelButtonTitle:(id)arg4 ;
-(void)showMediaPlayerWithURLString:(id)arg1 orientation:(id)arg2 title:(id)arg3 subtitle:(id)arg4 bookmarkID:(id)arg5 duration:(id)arg6 type:(id)arg7 imageURL:(id)arg8 ;
-(void)showMediaPreviewWithURLString:(id)arg1 ;
-(id)showPromptWithMessage:(id)arg1 initialValue:(id)arg2 title:(id)arg3 okButtonTitle:(id)arg4 cancelButtonTitle:(id)arg5 ;
-(void)signOutPrimaryAccount;
-(id)softwareApplicationWithAdamID:(id)arg1 ;
-(id)softwareApplicationWithBundleID:(id)arg1 ;
-(SSAuthenticationContext *)authenticationContext;
-(SUScriptKeyValueStore *)deviceLocalStorage;
-(SUScriptWindowContext *)scriptWindowContext;
-(void)setScriptWindowContext:(SUScriptWindowContext *)arg1 ;
-(void)setWebFrame:(WebFrame *)arg1 ;
-(id<SUScriptInterfaceDelegate>)threadSafeDelegate;
-(id)applicationAccessibilityEnabled;
-(SUScriptKeyValueStore *)applicationLocalStorage;
-(id)globalRootObject;
-(id)loggingEnabled;
-(NSString *)referringUserAgent;
-(id)requestInfo;
-(SUScriptPreviewOverlay *)previewOverlay;
-(id)screenReaderRunning;
-(void)setGlobalRootObject:(id)arg1 ;
-(void)setLoggingEnabled:(id)arg1 ;
-(void)setReferringUserAgent:(NSString *)arg1 ;
-(int)storeSheetType;
-(NSString *)askToBuyPrompt;
-(int)storeSheetTypeDefault;
-(int)storeSheetTypeAskToBuy;
-(SUScriptPurchaseManager *)purchaseManager;
-(void)_getSoftwareApplicationWithCompletionFunction:(id)arg1 lookupBlock:(/*^block*/id)arg2 ;
-(NSArray *)installedSoftwareApplications;
-(id)systemItemAction;
-(id)systemItemAdd;
-(id)systemItemBookmarks;
-(id)systemItemCamera;
-(id)systemItemCancel;
-(id)systemItemCompose;
-(id)systemItemDone;
-(id)systemItemEdit;
-(id)systemItemFastForward;
-(id)systemItemFixedSpace;
-(id)systemItemFlexibleSpace;
-(id)systemItemOrganize;
-(id)systemItemPageCurl;
-(id)systemItemPause;
-(id)systemItemPlay;
-(id)systemItemRedo;
-(id)systemItemRefresh;
-(id)systemItemReplay;
-(id)systemItemRewind;
-(id)systemItemSearch;
-(id)systemItemStop;
-(id)systemItemTrash;
-(id)systemItemUndo;
-(SUScriptAccount *)primaryLockerAccount;
-(void)setAccounts:(NSArray *)arg1 ;
-(void)setPrimaryAccount:(SUScriptAccount *)arg1 ;
-(void)setPrimaryLockerAccount:(SUScriptAccount *)arg1 ;
-(SUScriptSectionsController *)sectionsController;
-(void)addExternalDownloads:(id)arg1 ;
-(void)addPurchaseWithInfo:(id)arg1 ;
-(SUScriptPassbookLibrary *)passbookLibrary;
-(SUScriptApplication *)application;
-(void)setDevice:(SUScriptDevice *)arg1 ;
-(NSString *)actionTypeReturnToLibrary;
-(NSString *)actionTypeDismissWindows;
-(NSString *)actionTypeDismissSheet;
-(id)activeAudioPlayers;
-(SUScriptAppleAccountStore *)appleAccountStore;
-(SUScriptFairPlayContext *)accountCreationSecureContext;
@end

