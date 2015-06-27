/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:17 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/ActiveSyncSettings.bundle/ActiveSyncSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ActiveSyncSettings/ActiveSyncSettings-Structs.h>
#import <AccountsUI/ACUIViewController.h>
#import <UIKit/UITextContentViewDelegate.h>

@class UIBarButtonItem, PSSpecifier, NSDate, NSString, DAOofParams;

@interface ASSettingsOofUIController : ACUIViewController <UITextContentViewDelegate> {

	char _datePickerShowing;
	char _oooEnabled;
	char _oooEnabledWithDates;
	char _autoReplyMessageIsDirty;
	char _endDateIsDirty;
	char _ONorOFFStateIsDirty;
	UIBarButtonItem* _saveButton;
	PSSpecifier* _currentTimeSpecifier;
	PSSpecifier* _outOfOfficeSpecifier;
	PSSpecifier* _outOfOfficeMessageSpecifier;
	NSDate* _previousUserSelectedAutoReplyEndDate;
	NSDate* _userSelectedAutoReplyEndDate;
	NSDate* _autoReplyStartDate;
	NSString* _autoReplyMessage;
	DAOofParams* _serverData;

}

@property (nonatomic,retain) UIBarButtonItem * saveButton;                               //@synthesize saveButton=_saveButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * cancelButton; 
@property (nonatomic,retain) PSSpecifier * currentTimeSpecifier;                         //@synthesize currentTimeSpecifier=_currentTimeSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * outOfOfficeSpecifier;                         //@synthesize outOfOfficeSpecifier=_outOfOfficeSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * outOfOfficeMessageSpecifier;                  //@synthesize outOfOfficeMessageSpecifier=_outOfOfficeMessageSpecifier - In the implementation block
@property (assign,nonatomic) char datePickerShowing;                                     //@synthesize datePickerShowing=_datePickerShowing - In the implementation block
@property (assign,nonatomic) char oooEnabled;                                            //@synthesize oooEnabled=_oooEnabled - In the implementation block
@property (assign,nonatomic) char oooEnabledWithDates;                                   //@synthesize oooEnabledWithDates=_oooEnabledWithDates - In the implementation block
@property (nonatomic,retain) NSDate * previousUserSelectedAutoReplyEndDate;              //@synthesize previousUserSelectedAutoReplyEndDate=_previousUserSelectedAutoReplyEndDate - In the implementation block
@property (nonatomic,retain) NSDate * userSelectedAutoReplyEndDate;                      //@synthesize userSelectedAutoReplyEndDate=_userSelectedAutoReplyEndDate - In the implementation block
@property (nonatomic,retain) NSDate * autoReplyStartDate;                                //@synthesize autoReplyStartDate=_autoReplyStartDate - In the implementation block
@property (nonatomic,retain) NSString * autoReplyMessage;                                //@synthesize autoReplyMessage=_autoReplyMessage - In the implementation block
@property (assign,nonatomic) char autoReplyMessageIsDirty;                               //@synthesize autoReplyMessageIsDirty=_autoReplyMessageIsDirty - In the implementation block
@property (assign,nonatomic) char endDateIsDirty;                                        //@synthesize endDateIsDirty=_endDateIsDirty - In the implementation block
@property (assign,nonatomic) char ONorOFFStateIsDirty;                                   //@synthesize ONorOFFStateIsDirty=_ONorOFFStateIsDirty - In the implementation block
@property (nonatomic,retain) DAOofParams * serverData;                                   //@synthesize serverData=_serverData - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancelButtonTapped:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)dismissKeyboard;
-(void)showKeyboard;
-(void)textContentViewDidChange:(id)arg1 ;
-(void)datePickerChanged:(id)arg1 ;
-(void)setServerData:(DAOofParams *)arg1 ;
-(void)_resetAllOutOfOfficeLocalValueToServerValue:(char)arg1 ;
-(void)setOofState:(id)arg1 withSpecifier:(id)arg2 ;
-(id)oofStateWithSpecifier:(id)arg1 ;
-(void)setOutOfOfficeSpecifier:(PSSpecifier *)arg1 ;
-(char)oooEnabled;
-(id)outOfOfficeEndDateDisplaySpecifier;
-(id)autoReplyTextCellSpecifier;
-(char)datePickerShowing;
-(id)timePickerSpecifier;
-(void)setDatePickerShowing:(char)arg1 ;
-(PSSpecifier *)currentTimeSpecifier;
-(id)currentDateString:(id)arg1 ;
-(void)setCurrentTimeSpecifier:(PSSpecifier *)arg1 ;
-(NSDate *)userSelectedAutoReplyEndDate;
-(PSSpecifier *)outOfOfficeMessageSpecifier;
-(void)setAutoReplyText:(id)arg1 withSpecifier:(id)arg2 ;
-(id)autoReplyTextWithSpecifier:(id)arg1 ;
-(void)setOutOfOfficeMessageSpecifier:(PSSpecifier *)arg1 ;
-(void)setOooEnabled:(char)arg1 ;
-(void)_insertAdditionalOOOSpecifiersAnimated:(char)arg1 ;
-(void)setONorOFFStateIsDirty:(char)arg1 ;
-(DAOofParams *)serverData;
-(void)_removeAdditionalOOOSpecifiersAnimated:(char)arg1 ;
-(void)enableSaveButton;
-(NSString *)autoReplyMessage;
-(void)setAutoReplyMessage:(NSString *)arg1 ;
-(void)setAutoReplyMessageIsDirty:(char)arg1 ;
-(id)_stringFormatOfDate:(id)arg1 ;
-(NSDate *)previousUserSelectedAutoReplyEndDate;
-(id)_composeNewAutoReplyStringWithDate:(id)arg1 ;
-(void)setPreviousUserSelectedAutoReplyEndDate:(NSDate *)arg1 ;
-(char)oooEnabledWithDates;
-(char)endDateIsDirty;
-(NSDate *)autoReplyStartDate;
-(char)autoReplyMessageIsDirty;
-(id)trimWhitespaceAndNewlinesFromString:(id)arg1 ;
-(char)ONorOFFStateIsDirty;
-(PSSpecifier *)outOfOfficeSpecifier;
-(void)setOooEnabledWithDates:(char)arg1 ;
-(void)setEndDateIsDirty:(char)arg1 ;
-(void)setAutoReplyStartDate:(NSDate *)arg1 ;
-(void)setUserSelectedAutoReplyEndDate:(NSDate *)arg1 ;
-(void)_updateAutoReplyMessageWithDate:(id)arg1 ;
-(void)saveButtonTapped:(id)arg1 ;
-(UIBarButtonItem *)saveButton;
-(void)setSaveButton:(UIBarButtonItem *)arg1 ;
-(id)specifiers;
@end
