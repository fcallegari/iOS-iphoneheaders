/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 9:36:33 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GuidedAccess/GuidedAccess-Structs.h>
#import <GuidedAccess/AXUIAlertDelegate.h>
#import <GuidedAccess/AXUIContentViewControllerDelegate.h>
#import <GuidedAccess/GAXPasscodeViewControllerDelegate.h>
#import <GuidedAccess/GAXOverlayUserInterfaceViewControllerDelegate.h>
#import <GuidedAccess/GAXTouchIDManagerDelegate.h>
#import <GuidedAccess/AXUIService.h>
#import <GuidedAccess/GAXInterestAreaViewControllerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, GAXStyleProvider, NSString, UIViewController, GAXOverlayUserInterfaceViewController, GAXInterestAreaViewController, AVSpeechSynthesizer, NSMutableSet, UIImage, NSArray, NSDictionary, GAXPasscodeViewController, NSTimer, GAXTimeRestrictionLockoutViewController, NSMutableDictionary, AXIPCClient, AXAccessQueue, GAXTouchIDManager;

@interface GAXUIServer : NSObject <AXUIAlertDelegate, AXUIContentViewControllerDelegate, GAXPasscodeViewControllerDelegate, GAXOverlayUserInterfaceViewControllerDelegate, GAXTouchIDManagerDelegate, AXUIService, GAXInterestAreaViewControllerDelegate> {

	SCD_Struct_GA0 _reflectedBackboardState;
	NSObject*<OS_dispatch_queue> _gaxStateAccessQueue;
	char _shouldHideAllAlerts;
	char _applicationTranslucent;
	char _appTimeRestrictionsEnabled;
	GAXStyleProvider* _styleProvider;
	NSString* _sessionApplicationIdentifier;
	UIViewController* _activeContentViewController;
	GAXOverlayUserInterfaceViewController* _overlayActiveContentViewController;
	GAXInterestAreaViewController* _passiveInterestAreaViewController;
	AVSpeechSynthesizer* _speechSynthesizer;
	unsigned _numberOfBannerAlertsShownRecently;
	NSMutableSet* _identifiersOfBannerAlertsAboutToAppear;
	NSMutableSet* _identifiersOfVisibleBannerAlerts;
	NSString* _identifierOfVisibleRegularAlert;
	NSString* _deviceRestrictedAlertIdentifier;
	NSString* _incomingCallAlertIdentifier;
	int _incomingCallType;
	NSString* _appName;
	UIImage* _appIcon;
	NSArray* _appRestrictionIdentifiers;
	NSDictionary* _statesForAppRestrictions;
	NSDictionary* _textsForAppRestrictions;
	NSDictionary* _detailTextsForAppRestrictions;
	int _lastPasscodeViewDismissalReason;
	GAXPasscodeViewController* _passcodeViewController;
	NSTimer* _passcodeDismissalTimer;
	int _appTimeRestrictionDurationInMinutes;
	GAXTimeRestrictionLockoutViewController* _timeRestrictionLockoutViewController;
	NSMutableDictionary* _interestAreaPathsForStorageForRotatingView;
	AXIPCClient* _springboardClient;
	AXAccessQueue* _springboardMessageQueue;
	float _originalActiveWindowLevel;
	GAXTouchIDManager* _touchIDManager;
	double _lastBannerAlertShownTimeInterval;

}

@property (nonatomic,readonly) char allowsTouch; 
@property (getter=isInWorkspace,nonatomic,readonly) char inWorkspace; 
@property (assign,getter=isApplicationTranslucent,nonatomic) char applicationTranslucent;                                 //@synthesize applicationTranslucent=_applicationTranslucent - In the implementation block
@property (nonatomic,readonly) float statusBarHeight; 
@property (nonatomic,copy) NSString * appName;                                                                            //@synthesize appName=_appName - In the implementation block
@property (nonatomic,retain) UIImage * appIcon;                                                                           //@synthesize appIcon=_appIcon - In the implementation block
@property (nonatomic,copy) NSArray * appRestrictionIdentifiers;                                                           //@synthesize appRestrictionIdentifiers=_appRestrictionIdentifiers - In the implementation block
@property (assign,nonatomic) int appTimeRestrictionDurationInMinutes;                                                     //@synthesize appTimeRestrictionDurationInMinutes=_appTimeRestrictionDurationInMinutes - In the implementation block
@property (assign,nonatomic) char appTimeRestrictionsEnabled;                                                             //@synthesize appTimeRestrictionsEnabled=_appTimeRestrictionsEnabled - In the implementation block
@property (nonatomic,retain) GAXStyleProvider * styleProvider;                                                            //@synthesize styleProvider=_styleProvider - In the implementation block
@property (copy) NSString * sessionApplicationIdentifier;                                                                 //@synthesize sessionApplicationIdentifier=_sessionApplicationIdentifier - In the implementation block
@property (nonatomic,retain) UIViewController * activeContentViewController;                                              //@synthesize activeContentViewController=_activeContentViewController - In the implementation block
@property (nonatomic,retain) GAXOverlayUserInterfaceViewController * overlayActiveContentViewController;                  //@synthesize overlayActiveContentViewController=_overlayActiveContentViewController - In the implementation block
@property (nonatomic,retain) GAXInterestAreaViewController * passiveInterestAreaViewController;                           //@synthesize passiveInterestAreaViewController=_passiveInterestAreaViewController - In the implementation block
@property (assign,nonatomic) unsigned numberOfBannerAlertsShownRecently;                                                  //@synthesize numberOfBannerAlertsShownRecently=_numberOfBannerAlertsShownRecently - In the implementation block
@property (nonatomic,retain) NSMutableSet * identifiersOfBannerAlertsAboutToAppear;                                       //@synthesize identifiersOfBannerAlertsAboutToAppear=_identifiersOfBannerAlertsAboutToAppear - In the implementation block
@property (assign,nonatomic) double lastBannerAlertShownTimeInterval;                                                     //@synthesize lastBannerAlertShownTimeInterval=_lastBannerAlertShownTimeInterval - In the implementation block
@property (nonatomic,retain) NSMutableSet * identifiersOfVisibleBannerAlerts;                                             //@synthesize identifiersOfVisibleBannerAlerts=_identifiersOfVisibleBannerAlerts - In the implementation block
@property (nonatomic,copy) NSString * identifierOfVisibleRegularAlert;                                                    //@synthesize identifierOfVisibleRegularAlert=_identifierOfVisibleRegularAlert - In the implementation block
@property (nonatomic,copy) NSString * deviceRestrictedAlertIdentifier;                                                    //@synthesize deviceRestrictedAlertIdentifier=_deviceRestrictedAlertIdentifier - In the implementation block
@property (nonatomic,copy) NSString * incomingCallAlertIdentifier;                                                        //@synthesize incomingCallAlertIdentifier=_incomingCallAlertIdentifier - In the implementation block
@property (assign,nonatomic) int incomingCallType;                                                                        //@synthesize incomingCallType=_incomingCallType - In the implementation block
@property (assign,nonatomic) char shouldHideAllAlerts;                                                                    //@synthesize shouldHideAllAlerts=_shouldHideAllAlerts - In the implementation block
@property (nonatomic,retain) AVSpeechSynthesizer * speechSynthesizer;                                                     //@synthesize speechSynthesizer=_speechSynthesizer - In the implementation block
@property (nonatomic,copy) NSDictionary * statesForAppRestrictions;                                                       //@synthesize statesForAppRestrictions=_statesForAppRestrictions - In the implementation block
@property (nonatomic,copy) NSDictionary * textsForAppRestrictions;                                                        //@synthesize textsForAppRestrictions=_textsForAppRestrictions - In the implementation block
@property (nonatomic,copy) NSDictionary * detailTextsForAppRestrictions;                                                  //@synthesize detailTextsForAppRestrictions=_detailTextsForAppRestrictions - In the implementation block
@property (assign,nonatomic) int lastPasscodeViewDismissalReason;                                                         //@synthesize lastPasscodeViewDismissalReason=_lastPasscodeViewDismissalReason - In the implementation block
@property (nonatomic,retain) GAXPasscodeViewController * passcodeViewController;                                          //@synthesize passcodeViewController=_passcodeViewController - In the implementation block
@property (nonatomic,retain) NSTimer * passcodeDismissalTimer;                                                            //@synthesize passcodeDismissalTimer=_passcodeDismissalTimer - In the implementation block
@property (nonatomic,retain) GAXTimeRestrictionLockoutViewController * timeRestrictionLockoutViewController;              //@synthesize timeRestrictionLockoutViewController=_timeRestrictionLockoutViewController - In the implementation block
@property (assign,nonatomic) float originalActiveWindowLevel;                                                             //@synthesize originalActiveWindowLevel=_originalActiveWindowLevel - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * interestAreaPathsForStorageForRotatingView;                            //@synthesize interestAreaPathsForStorageForRotatingView=_interestAreaPathsForStorageForRotatingView - In the implementation block
@property (nonatomic,retain) AXIPCClient * springboardClient;                                                             //@synthesize springboardClient=_springboardClient - In the implementation block
@property (nonatomic,retain) AXAccessQueue * springboardMessageQueue;                                                     //@synthesize springboardMessageQueue=_springboardMessageQueue - In the implementation block
@property (nonatomic,retain) GAXTouchIDManager * touchIDManager;                                                          //@synthesize touchIDManager=_touchIDManager - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requiredEntitlementForProcessingMessageWithIdentifier:(unsigned)arg1 ;
-(void)touchIDMonitorTimeDidExpire:(id)arg1 ;
-(void)touchIDManager:(id)arg1 attemptWasSuccessful:(char)arg2 ;
-(void)transitionToMode:(unsigned)arg1 ;
-(void)updateHostedApplicationStateWithScaleFactor:(float)arg1 center:(CGPoint)arg2 animationDuration:(double)arg3 ;
-(id)containedViewsInFrontmostApplicationForFingerPath:(id)arg1 ;
-(NSArray *)appRestrictionIdentifiers;
-(id)iconForAppRestrictionWithIdentifier:(id)arg1 ;
-(id)textForAppRestrictionWithIdentifier:(id)arg1 ;
-(id)detailTextForAppRestrictionWithIdentifier:(id)arg1 ;
-(int)appRestrictionStateForIdentifier:(id)arg1 ;
-(char)isFeatureEnabledForIdentifier:(id)arg1 ;
-(void)setFeatureEnabled:(char)arg1 withIdentifier:(id)arg2 ;
-(int)appTimeRestrictionDurationInMinutes;
-(char)appTimeRestrictionsEnabled;
-(void)setAppRestrictionState:(int)arg1 withIdentifier:(id)arg2 ;
-(void)updateTimeRestrictionWithDuration:(int)arg1 enabled:(char)arg2 ;
-(void)_sendMessageToSpringBoard:(id)arg1 replyMessage:(id*)arg2 description:(id)arg3 ;
-(char)isApplicationTranslucent;
-(char)isInWorkspace;
-(id)_debugGAXDescription;
-(char)allowsTouch;
-(void)_reestablishSpringboardClient;
-(void)_setupOverrides;
-(void)setSpringboardMessageQueue:(AXAccessQueue *)arg1 ;
-(GAXTouchIDManager *)touchIDManager;
-(void)_validateOverrides;
-(void)setTouchIDManager:(GAXTouchIDManager *)arg1 ;
-(AXIPCClient *)springboardClient;
-(void)setSessionApplicationIdentifier:(NSString *)arg1 ;
-(void)setActiveContentViewController:(UIViewController *)arg1 ;
-(void)setOverlayActiveContentViewController:(GAXOverlayUserInterfaceViewController *)arg1 ;
-(void)setPassiveInterestAreaViewController:(GAXInterestAreaViewController *)arg1 ;
-(void)setIdentifiersOfBannerAlertsAboutToAppear:(NSMutableSet *)arg1 ;
-(void)setIdentifiersOfVisibleBannerAlerts:(NSMutableSet *)arg1 ;
-(void)setIdentifierOfVisibleRegularAlert:(NSString *)arg1 ;
-(void)setDeviceRestrictedAlertIdentifier:(NSString *)arg1 ;
-(void)setIncomingCallAlertIdentifier:(NSString *)arg1 ;
-(void)setAppRestrictionIdentifiers:(NSArray *)arg1 ;
-(void)setStatesForAppRestrictions:(NSDictionary *)arg1 ;
-(void)setTextsForAppRestrictions:(NSDictionary *)arg1 ;
-(void)setDetailTextsForAppRestrictions:(NSDictionary *)arg1 ;
-(void)setPasscodeViewController:(GAXPasscodeViewController *)arg1 ;
-(void)setTimeRestrictionLockoutViewController:(GAXTimeRestrictionLockoutViewController *)arg1 ;
-(void)setInterestAreaPathsForStorageForRotatingView:(NSMutableDictionary *)arg1 ;
-(void)setSpringboardClient:(AXIPCClient *)arg1 ;
-(void)_clearPasscodeDismissalTimer;
-(id)_clientMessenger;
-(UIViewController *)activeContentViewController;
-(NSMutableSet *)identifiersOfVisibleBannerAlerts;
-(NSString *)identifierOfVisibleRegularAlert;
-(void)setIncomingCallType:(int)arg1 ;
-(unsigned)numberOfBannerAlertsShownRecently;
-(char)_isTimeRestrictionLockoutViewShowing;
-(int)lastPasscodeViewDismissalReason;
-(void)_showAlertWithText:(id)arg1 asBanner:(char)arg2 isUrgent:(char)arg3 ;
-(void)_showAlertWithText:(id)arg1 subtitleText:(id)arg2 iconImage:(id)arg3 asBanner:(char)arg4 isUrgent:(char)arg5 duration:(double)arg6 alertIdentifier:(id*)arg7 ;
-(void)_playPreferredTimeRestrictionsSoundAndSpeakMessageIfNeeded:(id)arg1 ;
-(char)shouldHideAllAlerts;
-(NSString *)deviceRestrictedAlertIdentifier;
-(double)lastBannerAlertShownTimeInterval;
-(double)_minimumDelayForShowingAdditionalBannerAlert;
-(void)setLastBannerAlertShownTimeInterval:(double)arg1 ;
-(NSMutableSet *)identifiersOfBannerAlertsAboutToAppear;
-(NSDictionary *)statesForAppRestrictions;
-(NSDictionary *)textsForAppRestrictions;
-(NSDictionary *)detailTextsForAppRestrictions;
-(void)setOriginalActiveWindowLevel:(float)arg1 ;
-(GAXTimeRestrictionLockoutViewController *)timeRestrictionLockoutViewController;
-(float)originalActiveWindowLevel;
-(void)setShouldHideAllAlerts:(char)arg1 ;
-(id)_preparedOverlayUserInterfaceViewController;
-(void)_willPresentPasscodeViewControllerWithParentViewController:(id)arg1 ;
-(void)_timerDismissPasscode:(id)arg1 ;
-(void)setPasscodeDismissalTimer:(NSTimer *)arg1 ;
-(GAXPasscodeViewController *)passcodeViewController;
-(void)_didDismissPasscodeViewController;
-(void)_dismissPasscodeViewAnimated:(char)arg1 ;
-(NSTimer *)passcodeDismissalTimer;
-(GAXInterestAreaViewController *)passiveInterestAreaViewController;
-(id)_archivedInterestAreaPathsInScreenCoordinatesForInterestAreaViewController:(id)arg1 ;
-(NSString *)sessionApplicationIdentifier;
-(void)_incomingCallWasBlockedWithSourceAddress:(id)arg1 serviceIdentifier:(id)arg2 ;
-(NSString *)incomingCallAlertIdentifier;
-(AXAccessQueue *)springboardMessageQueue;
-(GAXOverlayUserInterfaceViewController *)overlayActiveContentViewController;
-(void)setLastPasscodeViewDismissalReason:(int)arg1 ;
-(void)setNumberOfBannerAlertsShownRecently:(unsigned)arg1 ;
-(void)_presentPasscodeViewControllerForSetup:(char)arg1 ;
-(SCD_Struct_GA1)_rotationContextForInterestAreaViewController:(id)arg1 ;
-(id)_archiveInterestAreaPathsForStorage:(id)arg1 ;
-(NSMutableDictionary *)interestAreaPathsForStorageForRotatingView;
-(id)_unarchivedPathMappingWithData:(id)arg1 ;
-(void)_applyInterestAreaPathsForStorage:(id)arg1 toInterestAreaViewController:(id)arg2 andFadeInterestAreaPathsIn:(char)arg3 fadeInterestAreaSpecialControlsIn:(char)arg4 notifyClientOfReplacedInterestAreaPathsDuringSession:(char)arg5 ;
-(void)_adjustContentsGeometryOfInterestAreaViewWithController:(id)arg1 ;
-(void)_showTimeRestrictionsLockoutViewWithAppTimeRestrictionDuration:(double)arg1 ;
-(void)_showAlertWithType:(int)arg1 AsBanner:(char)arg2 isUrgent:(char)arg3 timeRestrictionRemainingTime:(id)arg4 remainingLockoutDuration:(double)arg5 ;
-(void)_hideTimeRestrictionsLockoutView;
-(void)_disableTelephonyIfNeededForMode:(unsigned)arg1 ;
-(void)setApplicationTranslucent:(char)arg1 ;
-(void)setAppTimeRestrictionDurationInMinutes:(int)arg1 ;
-(void)setAppTimeRestrictionsEnabled:(char)arg1 ;
-(void)_restoreTelephony;
-(void)_rotateDeviceToCurrentOrientation;
-(void)_notifyClientOfUpdatedActiveInterfaceOrientation;
-(int)incomingCallType;
-(void)overlayUserInterfaceWasEntirelyRemovedFromViewController:(id)arg1 ;
-(void)passcodeViewController:(id)arg1 passcodeViewIsVisible:(char)arg2 ;
-(void)passcodeViewController:(id)arg1 wasDismissedWithReason:(int)arg2 ;
-(char)shouldShowCancelButtonForPasscodeViewController:(id)arg1 ;
-(char)passcodeViewController:(id)arg1 passcodeIsCorrect:(id)arg2 ;
-(void)passcodeViewController:(id)arg1 didFinishSettingUpPasscode:(id)arg2 ;
-(void)interestAreaViewController:(id)arg1 willRotateToInterfaceOrientation:(int)arg2 duration:(double)arg3 ;
-(void)interestAreaViewController:(id)arg1 didRotateFromInterfaceOrientation:(int)arg2 ;
-(GAXStyleProvider *)styleProvider;
-(void)setStyleProvider:(GAXStyleProvider *)arg1 ;
-(NSString *)appName;
-(void)setAppName:(NSString *)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(float)statusBarHeight;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(float)desiredWindowLevelForContentViewController:(id)arg1 userInteractionEnabled:(char)arg2 ;
-(id)processMessage:(id)arg1 withIdentifier:(unsigned)arg2 fromClientWithIdentifier:(id)arg3 error:(id*)arg4 ;
-(char)messageWithIdentifierShouldBeProcessedAsynchronously:(unsigned)arg1 ;
-(void)processMessageAsynchronously:(id)arg1 withIdentifier:(unsigned)arg2 fromClientWithIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)processInitializationMessage:(id)arg1 ;
-(void)serviceWasFullyInitialized;
-(float)desiredWindowLevelForAlertWithIdentifier:(id)arg1 ;
-(id)styleProviderForAlertWithIdentifier:(id)arg1 ;
-(void)alertWithIdentifierDidAppear:(id)arg1 ;
-(void)alertWithIdentifierDidDisappear:(id)arg1 ;
-(AVSpeechSynthesizer *)speechSynthesizer;
-(void)setSpeechSynthesizer:(AVSpeechSynthesizer *)arg1 ;
-(UIImage *)appIcon;
-(void)setAppIcon:(UIImage *)arg1 ;
@end
