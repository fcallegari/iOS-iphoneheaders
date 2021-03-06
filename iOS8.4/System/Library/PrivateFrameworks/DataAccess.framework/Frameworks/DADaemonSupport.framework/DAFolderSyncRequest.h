/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:58 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class DAFolder, NSArray;

@interface DAFolderSyncRequest : NSObject {

	BOOL _hasRemoteChanges;
	BOOL _isInitialUberSync;
	BOOL _isResyncAfterConnectionFailed;
	BOOL _isResyncAfterServerError;
	DAFolder* _folder;
	NSArray* _actions;

}

@property (nonatomic,retain) DAFolder * folder;                               //@synthesize folder=_folder - In the implementation block
@property (assign,nonatomic) BOOL hasRemoteChanges;                           //@synthesize hasRemoteChanges=_hasRemoteChanges - In the implementation block
@property (assign,nonatomic) BOOL isInitialUberSync;                          //@synthesize isInitialUberSync=_isInitialUberSync - In the implementation block
@property (nonatomic,retain) NSArray * actions;                               //@synthesize actions=_actions - In the implementation block
@property (assign,nonatomic) BOOL isResyncAfterConnectionFailed;              //@synthesize isResyncAfterConnectionFailed=_isResyncAfterConnectionFailed - In the implementation block
@property (assign,nonatomic) BOOL isResyncAfterServerError;                   //@synthesize isResyncAfterServerError=_isResyncAfterServerError - In the implementation block
-(id)description;
-(NSArray *)actions;
-(BOOL)hasRemoteChanges;
-(void)setHasRemoteChanges:(BOOL)arg1 ;
-(void)setFolder:(DAFolder *)arg1 ;
-(void)setIsInitialUberSync:(BOOL)arg1 ;
-(id)initWithFolder:(id)arg1 hasRemoteChanges:(BOOL)arg2 isInitialUberSync:(BOOL)arg3 ;
-(void)setIsResyncAfterServerError:(BOOL)arg1 ;
-(DAFolder *)folder;
-(BOOL)isResyncAfterServerError;
-(BOOL)isInitialUberSync;
-(BOOL)isResyncAfterConnectionFailed;
-(void)setIsResyncAfterConnectionFailed:(BOOL)arg1 ;
-(void)setActions:(NSArray *)arg1 ;
@end

