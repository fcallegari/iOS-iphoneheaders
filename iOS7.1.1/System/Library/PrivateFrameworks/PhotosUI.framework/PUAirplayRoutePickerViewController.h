/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:36 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@class PUAirplayRouteTableViewDataSource, PUAirplayRoute;

@interface PUAirplayRoutePickerViewController : UITableViewController {

	PUAirplayRouteTableViewDataSource* _dataSource;
	PUAirplayRoute* _markedRoute;
	bool _shouldShowDoneButton;
	bool _makeRouteCurrentBeforeReturning;
	/*^block*/ id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;                                //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) bool shouldShowDoneButton;                         //@synthesize shouldShowDoneButton=_shouldShowDoneButton - In the implementation block
@property (assign,nonatomic) bool makeRouteCurrentBeforeReturning;              //@synthesize makeRouteCurrentBeforeReturning=_makeRouteCurrentBeforeReturning - In the implementation block
-(void)_doneAction:(id)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(/*^block*/ id)completionHandler;
-(void).cxx_destruct;
-(void)setCompletionHandler:(/*^block*/ id)arg1 ;
-(void)_updateRoutes;
-(void)_userSelectedRoute:(id)arg1 fromTableView:(id)arg2 atIndexPath:(id)arg3 ;
-(void)setShouldShowDoneButton:(bool)arg1 ;
-(void)setMarkedRoute:(id)arg1 ;
-(bool)shouldShowDoneButton;
-(bool)makeRouteCurrentBeforeReturning;
-(void)setMakeRouteCurrentBeforeReturning:(bool)arg1 ;
@end
