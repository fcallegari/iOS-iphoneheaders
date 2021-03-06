/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:50:54 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSRestoreContentItem.h>

@class NSString, DownloadSessionProperties, NSError;

@interface RestoreDownloadItem : SSRestoreContentItem {

	NSString* _clientIdentifier;
	long long _downloadIdentifier;
	DownloadSessionProperties* _downloadSessionProperties;
	NSError* _error;
	long long _handlerIdentifier;
	BOOL _hasRestoreData;
	long long _restoreDataSize;

}

@property (nonatomic,readonly) long long downloadIdentifier;                                   //@synthesize downloadIdentifier=_downloadIdentifier - In the implementation block
@property (nonatomic,copy) DownloadSessionProperties * downloadSessionProperties;              //@synthesize downloadSessionProperties=_downloadSessionProperties - In the implementation block
@property (nonatomic,copy) NSString * clientIdentifier;                                        //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (assign,nonatomic) long long handlerIdentifier;                                      //@synthesize handlerIdentifier=_handlerIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasRestoreData;                                              //@synthesize hasRestoreData=_hasRestoreData - In the implementation block
@property (assign,nonatomic) long long restoreDataSize;                                        //@synthesize restoreDataSize=_restoreDataSize - In the implementation block
@property (nonatomic,retain) NSError * error;                                                  //@synthesize error=_error - In the implementation block
-(void)setHandlerIdentifier:(long long)arg1 ;
-(void)setDownloadSessionProperties:(id)arg1 ;
-(id)downloadSessionProperties;
-(BOOL)hasRestoreData;
-(void)setHasRestoreData:(BOOL)arg1 ;
-(void)setRestoreDataSize:(long long)arg1 ;
-(long long)restoreDataSize;
-(void)setError:(id)arg1 ;
-(long long)downloadIdentifier;
-(id)initWithDownloadIdentifier:(long long)arg1 ;
-(void)dealloc;
-(id)error;
-(long long)handlerIdentifier;
-(id)copyRestoreDictionary;
-(id)clientIdentifier;
-(void)setClientIdentifier:(id)arg1 ;
@end

