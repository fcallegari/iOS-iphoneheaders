/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <MobileMail/MobileMail-Structs.h>
@class MFConditionLock, NSMutableArray, MCSChange, MFInvocationQueue, MailboxHierarchyTree, NSUndoManager;

@interface MailChangeManager : NSObject {

	MFConditionLock* _processingLock;
	NSMutableArray* _pendingChanges;
	NSMutableArray* _committedChanges;
	MCSChange* _currentChange;
	MFInvocationQueue* _invocationQueue;
	MailboxHierarchyTree* _lastCalculatedMailboxTree;
	NSUndoManager* _undoManager;
	BOOL _isUndoing;
	CFDictionaryRef _mailboxPreChangeUnreadCounts;
	CFDictionaryRef _mailboxPostChangeUnreadCounts;

}

@property (readonly) NSUndoManager * undoManager;              //@synthesize undoManager=_undoManager - In the implementation block
+(id)sharedChangeManager;
-(id)allMailboxUidsSortedWithSpecialsAtTopForAccount:(id)arg1 includingLocals:(BOOL)arg2 client:(id)arg3 outbox:(id)arg4 ;
-(id)displayNameUsingSpecialNamesForMailbox:(id)arg1 ;
-(void)purgeCommittedChanges;
-(unsigned)unreadCountForSource:(id)arg1 ;
-(void)addChange:(id)arg1 ;
-(id)applyPendingChangesToMessageInfos:(id)arg1 ;
-(id)applyPendingChangesToMessages:(id)arg1 ;
-(void)_mailboxUserInfoDidChange:(id)arg1 ;
-(void)_mailMessageStoreMessagesCompacted:(id)arg1 ;
-(void)_invalidateUnreadCountsForKey:(id)arg1 onlyPostChange:(BOOL)arg2 ;
-(void)_revertCommittedChange:(id)arg1 ;
-(id)applyCommittedChanges:(id)arg1 toObjects:(id)arg2 ;
-(id)applyPendingChangesToObjects:(id)arg1 ;
-(unsigned)_serverUnreadCountForMailbox:(id)arg1 ;
-(void)_updateUnreadCountForMailbox:(id)arg1 ;
-(unsigned)_unreadCountAfterChangesForMailbox:(id)arg1 withKey:(id)arg2 criteria:(id)arg3 ;
-(unsigned)unreadCountForMailbox:(id)arg1 withListener:(id)arg2 criteria:(id)arg3 ;
-(unsigned)unreadCountForMailbox:(id)arg1 withListener:(id)arg2 ;
-(void)_modifyMailboxesForMailboxTree:(id)arg1 forChange:(id)arg2 ;
-(id)genericMailboxUidsSortedForAccount:(id)arg1 includingLocals:(BOOL)arg2 excludingMailbox:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)undoManager;
-(void)resume;
-(void)pause;
-(id)parentForMailbox:(id)arg1 ;
-(int)levelForMailbox:(id)arg1 ;
-(id)displayNameForMailbox:(id)arg1 ;
-(BOOL)mailboxHasSubMailboxes:(id)arg1 ;
-(unsigned)unreadCountForMailbox:(id)arg1 ;
-(void)processPendingChanges;
@end

