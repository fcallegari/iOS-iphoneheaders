/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:56 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <itunesstored/DownloadsExternalTransaction.h>

@interface DownloadsTransaction : DownloadsExternalTransaction
+(double)orderKeyIncrement;
+(unsigned)orderingBucketSize;
-(id)changeset;
-(id)importDownloads:(id)arg1 initialOrderKey:(double)arg2 orderKeyIncrement:(double)arg3 ;
-(char)deletePersistentDownloadManagerWithID:(long long)arg1 ;
-(char)finishDownloadWithID:(long long)arg1 finalPhase:(id)arg2 updatePipeline:(char)arg3 ;
-(id)_copyEffectiveBundleIDForDownload:(id)arg1 ;
-(id)_addEffectiveClientWithBundleID:(id)arg1 database:(id)arg2 ;
-(double)_orderKeyAdjacentToOrderKey:(double)arg1 comparisonType:(int)arg2 ;
-(char)_moveDownloadWithID:(long long)arg1 relativeToDownloadWithID:(long long)arg2 comparisonType:(int)arg3 ;
-(char)moveDownloadWithID:(long long)arg1 beforeDownloadWithID:(long long)arg2 ;
-(char)moveDownloadWithID:(long long)arg1 afterDownloadWithID:(long long)arg2 ;
-(char)finishDownloadsWithIdentifiers:(id)arg1 finalPhase:(id)arg2 ;
-(char)resetDownloadsMatchingPredicate:(id)arg1 isUserInitiated:(char)arg2 ;
-(char)_resetDownload:(id)arg1 withValues:(const id*)arg2 isUserIntiated:(char)arg3 ;
-(void)_setPolicy:(id)arg1 forDownloadWithID:(long long)arg2 ;
-(void)setValue:(id)arg1 forExternalProperty:(id)arg2 ofDownloadID:(long long)arg3 ;
-(char)deletePersistentDownloadManagerWithClientID:(id)arg1 persistenceID:(id)arg2 ;
-(char)finishDownloadWithID:(long long)arg1 finalPhase:(id)arg2 ;
-(id)insertDownloads:(id)arg1 afterDownloadWithID:(long long)arg2 ;
-(id)insertDownloads:(id)arg1 beforeDownloadWithID:(long long)arg2 ;
-(char)pauseDownloadsWithIdentifiers:(id)arg1 ;
-(char)prioritizeDownloadWithID:(long long)arg1 aboveDownloadWithID:(long long)arg2 error:(id*)arg3 ;
-(char)prioritizeDownloadsWithKind:(id)arg1 clientID:(id)arg2 ;
-(void)reconcileSoftwareDownloads:(id)arg1 fromITunesStore:(char)arg2 ;
-(char)resetDownloadsMatchingPredicate:(id)arg1 ;
-(char)resetDownloadsWithIdentifiers:(id)arg1 ;
-(char)retryDownloadsWithIdentifiers:(id)arg1 ;
-(char)unblockDownloadsWithClientIdentifiers:(id)arg1 ;
-(char)updateDownloadEntityWithIdentifier:(long long)arg1 withDownload:(id)arg2 ;
-(id)addDownloads:(id)arg1 ;
@end

