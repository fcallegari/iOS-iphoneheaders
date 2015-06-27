/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:33:19 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ACUIAccountOperationsDelegate <NSObject>
@optional
-(char)operationsHelper:(id)arg1 shouldRemoveAccount:(id)arg2;

@required
-(void)operationsHelper:(id)arg1 willSaveAccount:(id)arg2;
-(void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(char)arg3 error:(id)arg4;
-(void)operationsHelper:(id)arg1 willRemoveAccount:(id)arg2;
-(void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(char)arg3 error:(id)arg4;
-(id)operationsHelper:(id)arg1 desiredDataclassActionFromPicker:(id)arg2;

@end
