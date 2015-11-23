/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:42 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MarkupUI/MarkupUI-Structs.h>
#import <UIKit/UIView.h>

@protocol MUPDFViewPlaceholderDelegate;
@class NSObject, NSArray, NSString;

@interface MUPDFViewPlaceholder : UIView {

	CGPDFDocumentRef _document;
	BOOL _didFinishLoad;
	BOOL _didCompleteLayout;
	NSObject*<MUPDFViewPlaceholderDelegate> _delegate;
	NSArray* _pageRects;
	NSArray* _pageYOrigins;
	NSString* _title;
	CGSize _containerSize;

}

@property (__weak) NSObject*<MUPDFViewPlaceholderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSArray * pageRects;                                           //@synthesize pageRects=_pageRects - In the implementation block
@property (retain) NSArray * pageYOrigins;                                        //@synthesize pageYOrigins=_pageYOrigins - In the implementation block
@property (readonly) CGPDFDocumentRef document;                                   //@synthesize document=_document - In the implementation block
@property (readonly) unsigned long long totalPages; 
@property (retain) NSString * title;                                              //@synthesize title=_title - In the implementation block
@property (assign) CGSize containerSize;                                          //@synthesize containerSize=_containerSize - In the implementation block
@property (assign,nonatomic) BOOL didCompleteLayout;                              //@synthesize didCompleteLayout=_didCompleteLayout - In the implementation block
-(void)setDelegate:(NSObject*<MUPDFViewPlaceholderDelegate>)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(NSObject*<MUPDFViewPlaceholderDelegate>)delegate;
-(NSString *)title;
-(void)layout;
-(unsigned long long)totalPages;
-(CGRect)rectForPageNumber:(unsigned long long)arg1 ;
-(CGPDFDocumentRef)doc;
-(NSArray *)pageRects;
-(CGPDFDocumentRef)document;
-(void)setDocument:(CGPDFDocumentRef)arg1 ;
-(BOOL)didCompleteLayout;
-(void)setPageRects:(NSArray *)arg1 ;
-(void)didUnlockDocument;
-(void)clearDocument;
-(NSArray *)pageYOrigins;
-(void)setContainerSize:(CGSize)arg1 ;
-(void)setDidCompleteLayout:(BOOL)arg1 ;
-(void)setPageYOrigins:(NSArray *)arg1 ;
-(void)_notifyDidCompleteLayout;
-(CGSize)_computePageRects:(CGPDFDocumentRef)arg1 ;
-(void)_updateTitleForDocumentIfAvailable;
-(void)_doPostLoadOrUnlockTasks;
-(CGRect)_getPDFPageBounds:(CGPDFPageRef)arg1 ;
-(CGSize)containerSize;
@end

