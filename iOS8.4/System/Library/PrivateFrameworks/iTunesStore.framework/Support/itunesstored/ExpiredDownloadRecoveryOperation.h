/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:03 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SSMemoryEntity;

@interface ExpiredDownloadRecoveryOperation : ISOperation {

	SSMemoryEntity* _download;
	/*^block*/id _outputBlock;

}

@property (copy) id outputBlock; 
+(BOOL)canAttemptRecoveryWithError:(id)arg1 ;
-(id)initWithDownloadIdentifier:(long long)arg1 databaseSession:(id)arg2 ;
-(void)run;
-(void)setOutputBlock:(id)arg1 ;
-(id)outputBlock;
@end
