/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:03 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSDictionary, NSArray, NSString, DownloadDataConsumer, NSError, NSURLRequest;

@interface PrepareDownloadResponse : NSObject {

	long long _automaticType;
	NSDictionary* _AVAssetDownloadSessionOptions;
	NSArray* _backgroundOperations;
	NSString* _clientIdentifier;
	NSString* _clientSecondaryIdentifier;
	DownloadDataConsumer* _dataConsumer;
	NSString* _destinationPath;
	BOOL _discretionary;
	long long _downloadIdentifier;
	NSError* _error;
	BOOL _ignoresDownloadHandler;
	long long _mediaAssetIdentifier;
	long long _mediaAssetSize;
	BOOL _requiresDownloadHandler;
	BOOL _requiresPowerPluggedIn;
	long long _result;
	long long _taskPriority;
	double _transferProgressFraction;
	NSURLRequest* _URLRequest;

}

@property (assign,nonatomic) long long result;                                        //@synthesize result=_result - In the implementation block
@property (assign,nonatomic) long long downloadIdentifier;                            //@synthesize downloadIdentifier=_downloadIdentifier - In the implementation block
@property (assign,nonatomic) long long mediaAssetIdentifier;                          //@synthesize mediaAssetIdentifier=_mediaAssetIdentifier - In the implementation block
@property (assign,nonatomic) long long automaticType;                                 //@synthesize automaticType=_automaticType - In the implementation block
@property (nonatomic,copy) NSArray * backgroundOperations;                            //@synthesize backgroundOperations=_backgroundOperations - In the implementation block
@property (nonatomic,retain) NSError * error;                                         //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL ignoresDownloadHandler;                             //@synthesize ignoresDownloadHandler=_ignoresDownloadHandler - In the implementation block
@property (assign,nonatomic) BOOL requiresDownloadHandler;                            //@synthesize requiresDownloadHandler=_requiresDownloadHandler - In the implementation block
@property (assign,nonatomic) long long mediaAssetSize;                                //@synthesize mediaAssetSize=_mediaAssetSize - In the implementation block
@property (assign,nonatomic) double transferProgressFraction;                         //@synthesize transferProgressFraction=_transferProgressFraction - In the implementation block
@property (nonatomic,readonly) NSString * URLSessionIdentifier; 
@property (nonatomic,copy) NSDictionary * AVAssetDownloadSessionOptions;              //@synthesize AVAssetDownloadSessionOptions=_AVAssetDownloadSessionOptions - In the implementation block
@property (nonatomic,copy) NSString * clientIdentifier;                               //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,copy) NSString * clientSecondaryIdentifier;                      //@synthesize clientSecondaryIdentifier=_clientSecondaryIdentifier - In the implementation block
@property (nonatomic,retain) DownloadDataConsumer * dataConsumer;                     //@synthesize dataConsumer=_dataConsumer - In the implementation block
@property (assign,getter=isDiscretionary,nonatomic) BOOL discretionary;               //@synthesize discretionary=_discretionary - In the implementation block
@property (nonatomic,copy) NSString * destinationPath;                                //@synthesize destinationPath=_destinationPath - In the implementation block
@property (assign,nonatomic) BOOL requiresPowerPluggedIn;                             //@synthesize requiresPowerPluggedIn=_requiresPowerPluggedIn - In the implementation block
@property (assign,nonatomic) long long taskPriority;                                  //@synthesize taskPriority=_taskPriority - In the implementation block
@property (nonatomic,copy) NSURLRequest * URLRequest;                                 //@synthesize URLRequest=_URLRequest - In the implementation block
-(long long)mediaAssetIdentifier;
-(void)setMediaAssetIdentifier:(long long)arg1 ;
-(long long)automaticType;
-(void)setAutomaticType:(long long)arg1 ;
-(BOOL)requiresDownloadHandler;
-(void)setRequiresDownloadHandler:(BOOL)arg1 ;
-(double)transferProgressFraction;
-(void)setTransferProgressFraction:(double)arg1 ;
-(NSString *)URLSessionIdentifier;
-(id)sessionTaskWithSession:(id)arg1 ;
-(BOOL)ignoresDownloadHandler;
-(long long)mediaAssetSize;
-(NSArray *)backgroundOperations;
-(void)setIgnoresDownloadHandler:(BOOL)arg1 ;
-(void)setTaskPriority:(long long)arg1 ;
-(void)setMediaAssetSize:(long long)arg1 ;
-(void)setDestinationPath:(NSString *)arg1 ;
-(void)setRequiresPowerPluggedIn:(BOOL)arg1 ;
-(void)setClientSecondaryIdentifier:(NSString *)arg1 ;
-(void)setBackgroundOperations:(NSArray *)arg1 ;
-(void)setAVAssetDownloadSessionOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)AVAssetDownloadSessionOptions;
-(NSString *)clientSecondaryIdentifier;
-(BOOL)requiresPowerPluggedIn;
-(long long)taskPriority;
-(BOOL)isDiscretionary;
-(NSString *)clientIdentifier;
-(long long)downloadIdentifier;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(long long)result;
-(NSError *)error;
-(void)setDiscretionary:(BOOL)arg1 ;
-(id)sessionConfiguration;
-(void)setResult:(long long)arg1 ;
-(void)setDownloadIdentifier:(long long)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(void)setDataConsumer:(DownloadDataConsumer *)arg1 ;
-(NSURLRequest *)URLRequest;
-(DownloadDataConsumer *)dataConsumer;
-(NSString *)destinationPath;
-(void)setURLRequest:(NSURLRequest *)arg1 ;
@end

