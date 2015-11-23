/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:03 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <Foundation/NSOperation.h>

@protocol UIWebPDFSearchOperationDelegate;
@class NSMutableArray, UIPDFDocument, NSObject, NSString;

@interface UIWebPDFSearchOperation : NSOperation {

	NSMutableArray* _results;
	unsigned long long _pageIndex;
	unsigned long long _numberOfResultsToSkip;
	unsigned long long _totalResultsCount;
	unsigned long long _currentPageResultCount;
	BOOL _complete;
	unsigned long long startingPageIndex;
	UIPDFDocument* documentToSearch;
	NSObject*<UIWebPDFSearchOperationDelegate> searchDelegate;
	double documentScale;
	NSString* searchString;
	unsigned long long resultLimit;

}

@property (assign) NSObject*<UIWebPDFSearchOperationDelegate> searchDelegate; 
@property (nonatomic,readonly) unsigned long long currentPageResultCount;                  //@synthesize currentPageResultCount=_currentPageResultCount - In the implementation block
@property (retain) UIPDFDocument * documentToSearch; 
@property (nonatomic,readonly) unsigned long long currentPageIndex;                        //@synthesize pageIndex=_pageIndex - In the implementation block
@property (assign,nonatomic) unsigned long long startingPageIndex; 
@property (assign,nonatomic) unsigned long long numberOfResultsToSkip;                     //@synthesize numberOfResultsToSkip=_numberOfResultsToSkip - In the implementation block
@property (assign,nonatomic) unsigned long long resultLimit; 
@property (nonatomic,retain) NSString * searchString; 
@property (assign,nonatomic) double documentScale; 
-(void)cancel;
-(void)dealloc;
-(id)init;
-(NSString *)searchString;
-(void)main;
-(double)documentScale;
-(void)setDocumentToSearch:(UIPDFDocument *)arg1 ;
-(void)setDocumentScale:(double)arg1 ;
-(void)setSearchDelegate:(NSObject*<UIWebPDFSearchOperationDelegate>)arg1 ;
-(unsigned long long)currentPageIndex;
-(void)setResultLimit:(unsigned long long)arg1 ;
-(void)setSearchString:(NSString *)arg1 ;
-(unsigned long long)resultLimit;
-(BOOL)_hitSearchLimit;
-(CTFontRef)_fontWithPDFFont:(CGPDFFontRef)arg1 size:(double)arg2 ;
-(UIPDFDocument *)documentToSearch;
-(id)sanitizedAttributedStringForAttributedString:(id)arg1 ;
-(void)_search;
-(void)_notifyDelegateOfStatus;
-(unsigned long long)currentPageResultCount;
-(unsigned long long)startingPageIndex;
-(void)setStartingPageIndex:(unsigned long long)arg1 ;
-(NSObject*<UIWebPDFSearchOperationDelegate>)searchDelegate;
-(unsigned long long)numberOfResultsToSkip;
-(void)setNumberOfResultsToSkip:(unsigned long long)arg1 ;
@end

