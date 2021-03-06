/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:35 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UIWebPDFViewHandlerDelegate
@optional
-(CGRect*)frameForPDFViewWithHandler:(id)arg1 proposedFrame:(CGRect)arg2;
-(void)pdfViewHandler:(id)arg1 willClickLink:(id)arg2;
-(void)pdfViewHandler:(id)arg1 linkClicked:(id)arg2;
-(id)pdfViewHandler:(id)arg1 actionsForURL:(id)arg2 suggestedActions:(id)arg3;
-(id)hostViewForLinkSheet:(id)arg1;
-(id)alertViewForUIWebPDFViewHandler:(id)arg1;
-(void)pdfViewHandlerCompletedLayoutAndIsUnlocked:(id)arg1;
-(id)passwordForPDFViewHandler:(id)arg1;
-(CGPoint*)originForPDFPageLabelViewWithHandler:(id)arg1 proposedOrigin:(CGPoint)arg2;
-(void)highlightSearchResultBounds:(CGRect)arg1 resultRects:(id)arg2 contentViews:(id)arg3 forPDFViewHandler:(id)arg4;
-(double)minimumVerticalContentOffsetForPDFViewHandler:(id)arg1;

@end

