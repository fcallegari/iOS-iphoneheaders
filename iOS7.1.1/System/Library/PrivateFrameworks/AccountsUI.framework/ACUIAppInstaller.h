/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:40 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ACUIAppInstallerDelegate;
@class ACUIAppDescription, NSDate, NSURL;

@interface ACUIAppInstaller : NSObject {

	ACUIAppDescription* _app;
	NSDate* _dateOfLastReachabilityCheck;
	bool _resultOfLastReachabilityCheck;
	NSDate* _dateOfLastInstallationCheck;
	bool _resultOfLastInstallationCheck;
	NSURL* _publisherURL;
	<ACUIAppInstallerDelegate>* _delegate;

}

@property (nonatomic,readonly) bool isInstalled; 
@property (nonatomic,retain) NSURL * publisherURL;                                      //@synthesize publisherURL=_publisherURL - In the implementation block
@property (nonatomic,readonly) bool isDownloadable; 
@property (assign,nonatomic,__weak) <ACUIAppInstallerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(bool)isDownloadable;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)start;
-(void).cxx_destruct;
-(id)initForAppWithDescription:(id)arg1 ;
-(void)checkAvailabilityInStore:(/*^block*/ id)arg1 ;
-(id)publisherURL;
-(void)setPublisherURL:(id)arg1 ;
-(bool)isInstalled;
@end
