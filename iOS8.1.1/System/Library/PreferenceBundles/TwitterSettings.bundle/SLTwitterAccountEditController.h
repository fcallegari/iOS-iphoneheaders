/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:09 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PreferenceBundles/TwitterSettings.bundle/TwitterSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccountsUI/ACUIViewController.h>

@class ACAccount, PSTextFieldSpecifier, PSSpecifier, NSDictionary;

@interface SLTwitterAccountEditController : ACUIViewController {

	ACAccount* _account;
	BOOL _isAccountDirty;
	PSTextFieldSpecifier* _fullNameSpecifier;
	PSSpecifier* _findByEmailSpecifier;
	BOOL _didAttemptNameUpdate;
	NSDictionary* _userSettings;
	BOOL _shouldPushSettingsToServer;

}
-(void)_deleteButtonTapped:(id)arg1 ;
-(id)_passwordWithSpecifier:(id)arg1 ;
-(id)_fullNameSpecifier;
-(id)_usernameWithSpecifier:(id)arg1 ;
-(id)_displayNameWithSpecifier:(id)arg1 ;
-(void)_pushSettingsToServer;
-(void)_processUserSettings:(id)arg1 ;
-(id)_userNameSpecifier;
-(void)_setDisplayName:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_setFindByEmail:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_handleSaveCompletionWithSuccess:(BOOL)arg1 error:(id)arg2 wasVerifying:(BOOL)arg3 ;
-(id)_findByEmailWithSpecifier:(id)arg1 ;
-(void)_confirmDeleteAccount;
-(id)_findByEmailSpecifiers;
-(void)_updateFullNameIfNecessary;
-(void)_fetchUserSettings;
-(id)_descriptionSpecifier;
-(void)_saveAccountChangesIfNecessary;
-(void)_pushSettingsToServerIfNeeded;
-(id)_fullNameWithSpecifier:(id)arg1 ;
-(void)cancelButtonTapped:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)_passwordSpecifier;
-(void)_setPassword:(id)arg1 withSpecifier:(id)arg2 ;
-(void)doneButtonTapped:(id)arg1 ;
-(id)specifiers;
@end
