/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:26 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/FacebookSettings.bundle/FacebookSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FacebookSettings/SLFacebookRegistrationInfoPrompt.h>
#import <UIKit/UITableViewDataSource.h>

@class NSDate, PSSpecifier;

@interface SLFacebookRegistrationBirthdayPrompt : SLFacebookRegistrationInfoPrompt <UITableViewDataSource> {

	NSDate* _birthday;
	PSSpecifier* _birthdaySpecifier;
	PSSpecifier* _birthdayPickerSpecifier;

}

@property (readonly) NSDate * birthday; 
-(void)updateRegistrationInfo;
-(id)_birthdayWithSpecifier:(id)arg1 ;
-(void)_legalLinkButtonTapped:(id)arg1 ;
-(bool)isReadyToValidate;
-(id)birthday;
-(bool)validate;
-(id)initWithRegistrationInfo:(id)arg1 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidAppear:(bool)arg1 ;
-(void).cxx_destruct;
-(void)datePickerChanged:(id)arg1 ;
-(id)specifiers;
@end
