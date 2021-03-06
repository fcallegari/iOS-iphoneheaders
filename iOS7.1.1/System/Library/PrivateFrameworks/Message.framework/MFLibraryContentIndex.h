/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:47 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_group, MFLibraryContentIndexDataSource;
#import <Message/Message-Structs.h>
@class NSObject, NSString, NSMutableArray, NSMutableIndexSet, _MFContentIndexWrapper, _MFLibraryContentIndexResultsCache;

@interface MFLibraryContentIndex : NSObject {

	NSObject<OS_dispatch_queue>* _queue;
	NSString* _path;
	NSString* _indexName;
	double _startNonIdle;
	long long _state;
	NSMutableArray* _pendingIndexableItems;
	NSMutableIndexSet* _pendingRemovals;
	NSObject<OS_dispatch_group>* _group;
	NSObject<OS_dispatch_queue>* _indexingQueue;
	unsigned long long _throttledBatchSize;
	<MFLibraryContentIndexDataSource>* _dataSource;
	NSObject<OS_dispatch_queue>* _dataSourceQueue;
	_MFContentIndexWrapper* _contentIndexWrapper;
	int _invalidated;
	_MFLibraryContentIndexResultsCache* _resultsCache;
	unsigned _refreshing : 1;
	unsigned _shouldReopen : 1;
	unsigned _processPendingChangesScheduled : 1;

}
-(void)dealloc;
-(void)suspend;
-(void)resume;
-(id)documentIdentifiersMatchingCriterion:(id)arg1 mailboxIDs:(id)arg2 ;
-(bool)isSearchable;
-(id)initWithPath:(id)arg1 indexName:(id)arg2 dataSource:(id)arg3 ;
-(void)setTargetQueue:(id)arg1 ;
-(void)invalidateAndWait;
-(void)indexItems:(id)arg1 ;
-(void)removeItemsWithDocumentIdentifiers:(id)arg1 ;
-(void)refresh;
-(void)_markInvalidated;
-(void)_transitionToNextStatePaused:(bool)arg1 ;
-(void)scheduleProcessPendingItems;
-(id)_copyContentIndex_indexingQueue;
-(void)_processIndexingBatch:(CXIndexRef)arg1 ;
-(void)_processRemovals:(CXIndexRef)arg1 ;
-(void)forceReopen;
-(void)_processRefreshRequest;
-(void)_transitionToNextState;
-(id)_copyContentIndex;
-(CXQueryNodeRef)_createQueryNodeFromCriterion:(id)arg1 ;
-(CXQueryNodeRef)_createQueryNodeFromMailboxIDs:(id)arg1 ;
-(CXQueryRef)_createQueryFromCriterion:(id)arg1 mailboxIDs:(id)arg2 contentIndex:(CXIndexRef)arg3 ;
-(id)_indexFullPath;
-(void)_dataSourceInvalidateItemsGreaterThanTransactionId:(unsigned)arg1 ;
-(id)_consumeBatchOfSize:(unsigned long long)arg1 ;
-(unsigned)_addItem:(id)arg1 toContentIndex:(CXIndexRef)arg2 ;
-(void)_dataSourceAssignTransactionIdentifier:(unsigned)arg1 forDocumentIdentifiers:(id)arg2 ;
-(void)_invalidateResultsCache;
-(void)_dataSourceIndexItemsNeedingRefreshWithLimit:(unsigned long long)arg1 ;
-(void)wait;
@end

