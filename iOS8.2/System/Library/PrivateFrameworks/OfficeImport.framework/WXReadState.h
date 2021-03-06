/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:40 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OCXReadState.h>

@protocol TCCancelDelegate;
@class WDDocument, OITSUNoCopyDictionary, OCPPackagePart, NSMutableArray, WXOAVReadState, OAXDrawingState, WDCharacterRun, CXNamespace;

@interface WXReadState : OCXReadState {

	WDDocument* mDocument;
	OITSUNoCopyDictionary* mTextNodesToBeAdded;
	OITSUNoCopyDictionary* mMapBookmarkIdToName;
	OITSUNoCopyDictionary* mMapAnnotationIdToAnnotation;
	OITSUNoCopyDictionary* mMapTextBoxIdToDrawableId;
	OITSUNoCopyDictionary* mMapDrawableIdToTextBox;
	OCPPackagePart* mPackagePart;
	OCPPackagePart* mAnnotationPart;
	xmlDoc* mFootnoteDocument;
	xmlNode* mFootnotes;
	xmlDoc* mEndnoteDocument;
	xmlNode* mEndnotes;
	xmlDoc* mAnnotationDocument;
	xmlNode* mAnnotations;
	NSMutableArray* mDeleteAuthorStack;
	NSMutableArray* mDeleteDateStack;
	NSMutableArray* mEditAuthorStack;
	NSMutableArray* mEditDateStack;
	NSMutableArray* mFormatAuthorStack;
	NSMutableArray* mFormatDateStack;
	NSMutableArray* mPendingCommentNodes;
	WXOAVReadState* mWXOavState;
	OAXDrawingState* mDrawingState;
	int mCurrentOfficeArtTextType;
	WDCharacterRun* mReadSymbolTo;
	char mNewSectionRequested;
	unsigned long mCurrentRowCNFStyle;
	unsigned long mCurrentCellCNFStyle;
	char mCurrentTableWraps;
	id<TCCancelDelegate> mCancelDelegate;
	CXNamespace* mWXMainNamespace;
	CXNamespace* mWXDrawingNamespace;
	CXNamespace* mWXShapeNamespace;
	CXNamespace* mWXGroupNamespace;
	CXNamespace* mWXMathNamespace;
	CXNamespace* mWXOOBibliographyNamespace;
	CXNamespace* mWXRelationshipNamespace;
	char mIsThumbnail;

}

@property (assign,nonatomic) int currentOfficeArtTextType; 
@property (nonatomic,retain) id<TCCancelDelegate> cancelDelegate; 
@property (nonatomic,retain) CXNamespace * WXMainNamespace; 
@property (nonatomic,retain) CXNamespace * WXDrawingNamespace; 
@property (nonatomic,retain) CXNamespace * WXShapeNamespace; 
@property (nonatomic,retain) CXNamespace * WXGroupNamespace; 
@property (nonatomic,retain) CXNamespace * WXMathNamespace; 
@property (nonatomic,retain) CXNamespace * WXOOBibliographyNamespace; 
@property (nonatomic,retain) CXNamespace * WXRelationshipNamespace; 
-(void)dealloc;
-(id)init;
-(id)document;
-(void)setDocument:(id)arg1 ;
-(char)isThumbnail;
-(void)setIsThumbnail:(char)arg1 ;
-(void)setupNSForXMLFormat:(int)arg1 ;
-(id)packagePart;
-(void)setPackagePart:(id)arg1 ;
-(void)setCancelDelegate:(id<TCCancelDelegate>)arg1 ;
-(id<TCCancelDelegate>)cancelDelegate;
-(id)drawingState;
-(BOOL)hasAnnotations;
-(id)annotationWithID:(long)arg1 ;
-(xmlNode*)xmlAnnotationWithID:(long)arg1 ;
-(void)addAnnotationID:(long)arg1 annotation:(id)arg2 ;
-(id)annotationPart;
-(char)isNewSectionRequested;
-(void)setNewSectionRequested:(char)arg1 ;
-(id)initNoStacksWith:(id)arg1 ;
-(void)addBookmarkId:(long)arg1 name:(id)arg2 ;
-(id)bookmarkName:(long)arg1 ;
-(void)setDocumentPart:(id)arg1 ;
-(id)wxoavState;
-(CXNamespace *)WXMainNamespace;
-(CXNamespace *)WXShapeNamespace;
-(CXNamespace *)WXGroupNamespace;
-(CXNamespace *)WXDrawingNamespace;
-(void)addTextBoxID:(long)arg1 drawableId:(long)arg2 textBox:(id)arg3 ;
-(id)textBoxWithTextBoxID:(long)arg1 ;
-(id)textBoxWithDrawableID:(long)arg1 ;
-(int)currentOfficeArtTextType;
-(void)clearOutNodesToBeAdded:(id)arg1 ;
-(void)setWXMainNamespace:(CXNamespace *)arg1 ;
-(void)setWXDrawingNamespace:(CXNamespace *)arg1 ;
-(void)setWXShapeNamespace:(CXNamespace *)arg1 ;
-(void)setWXGroupNamespace:(CXNamespace *)arg1 ;
-(void)setWXMathNamespace:(CXNamespace *)arg1 ;
-(void)setWXOOBibliographyNamespace:(CXNamespace *)arg1 ;
-(void)setWXRelationshipNamespace:(CXNamespace *)arg1 ;
-(void)addText:(id)arg1 node:(xmlNode*)arg2 ;
-(id)nodesToBeAdded:(id)arg1 ;
-(xmlNode*)xmlFootnoteWithID:(long)arg1 ;
-(xmlNode*)xmlEndnoteWithID:(long)arg1 ;
-(void)setAnnotationPart:(id)arg1 ;
-(void)pushDeleteAuthor:(id)arg1 date:(id)arg2 ;
-(void)popDeleteAuthorDate;
-(id)currentDeleteAuthor;
-(id)currentDeleteDate;
-(void)pushEditAuthor:(id)arg1 date:(id)arg2 ;
-(void)popEditAuthorDate;
-(id)currentEditAuthor;
-(id)currentEditDate;
-(void)pushFormatAuthor:(id)arg1 date:(id)arg2 ;
-(void)popFormatAuthorDate;
-(id)currentFormatAuthor;
-(id)currentFormatDate;
-(void)addPendingComment:(xmlNode*)arg1 ;
-(id)pendingComments;
-(void)clearPendingComments;
-(id)readSymbolTo;
-(void)setReadSymbolTo:(id)arg1 ;
-(unsigned long)currentRowCNFStyle;
-(void)setCurrentRowCNFStyle:(unsigned long)arg1 ;
-(unsigned long)currentCellCNFStyle;
-(void)setCurrentCellCNFStyle:(unsigned long)arg1 ;
-(void)setCurrentTableWraps:(char)arg1 ;
-(char)currentTableWraps;
-(CXNamespace *)WXMathNamespace;
-(CXNamespace *)WXOOBibliographyNamespace;
-(CXNamespace *)WXRelationshipNamespace;
-(void)setCurrentOfficeArtTextType:(int)arg1 ;
@end

