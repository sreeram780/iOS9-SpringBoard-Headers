/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:05 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/NSTypesetter.h>

@class NSAttributedString, NSLayoutManager, NSArray, NSTextContainer, NSParagraphStyle;

@interface NSATSTypesetter : NSTypesetter {

	NSAttributedString* attributedString;
	NSRange paragraphGlyphRange;
	NSRange paragraphSeparatorGlyphRange;
	double lineFragmentPadding;
	NSLayoutManager* layoutManager;
	NSArray* textContainers;
	NSTextContainer* currentTextContainer;
	unsigned long long currentTextContainerIndex;
	CGSize currentTextContainerSize;
	NSParagraphStyle* currentParagraphStyle;
	void** _atsReserved[8];
	id _private;

}
+(id)sharedInstance;
+(void)initialize;
+(id)sharedTypesetter;
+(BOOL)_allowsScreenFontKerning;
-(void)_setBusy:(BOOL)arg1 ;
-(void)dealloc;
-(double)baselineOffsetInLayoutManager:(id)arg1 glyphIndex:(unsigned long long)arg2 ;
-(unsigned long long)actionForControlCharacterAtIndex:(unsigned long long)arg1 ;
-(NSRange)layoutCharactersInRange:(NSRange)arg1 forLayoutManager:(id)arg2 maximumNumberOfLineFragments:(unsigned long long)arg3 ;
-(void)layoutGlyphsInLayoutManager:(id)arg1 startingAtGlyphIndex:(unsigned long long)arg2 maxNumberOfLineFragments:(unsigned long long)arg3 nextGlyphIndex:(unsigned long long*)arg4 ;
-(id)paragraphArbitrator;
-(CGRect)lineFragmentRectForProposedRect:(CGRect)arg1 remainingRect:(CGRect*)arg2 ;
-(const char*)_bidiLevels;
-(CTTypesetterRef)_ctTypesetter;
-(void)_doBidiProcessing;
-(long long)_baseWritingDirection;
-(BOOL)_baselineRenderingMode;
-(void)beginLineWithGlyphAtIndex:(unsigned long long)arg1 ;
-(void)endLineWithGlyphRange:(NSRange)arg1 ;
-(void)_flushCachedObjects;
-(unsigned long long)lineBreakStrategy;
-(void)beginParagraph;
-(void)endParagraph;
-(BOOL)_layoutLineFragmentStartingWithGlyphAtIndex:(unsigned long long*)arg1 characterIndex:(unsigned long long*)arg2 atPoint:(CGPoint*)arg3 renderingContext:(id*)arg4 ;
-(BOOL)_isBusy;
-(BOOL)_forceWordWrapping;
-(void)_setForceWordWrapping:(BOOL)arg1 ;
-(double)defaultTighteningFactor;
-(void)setDefaultTighteningFactor:(double)arg1 ;
-(void)_setBaselineRenderingMode:(BOOL)arg1 ;
-(void)setLineBreakStrategy:(unsigned long long)arg1 ;
-(id)_getATSTypesetterGuts;
-(BOOL)_usesScreenFonts;
-(unsigned long long)_sweepDirectionForGlyphAtIndex:(long long)arg1 ;
-(unsigned long long)layoutParagraphAtPoint:(CGPoint*)arg1 ;
-(BOOL)shouldBreakLineByWordBeforeCharacterAtIndex:(unsigned long long)arg1 ;
-(BOOL)shouldBreakLineByHyphenatingBeforeCharacterAtIndex:(unsigned long long)arg1 ;
-(float)hyphenationFactorForGlyphAtIndex:(unsigned long long)arg1 ;
-(CGRect)boundingBoxForControlGlyphAtIndex:(unsigned long long)arg1 forTextContainer:(id)arg2 proposedLineFragment:(CGRect)arg3 glyphPosition:(CGPoint)arg4 characterIndex:(unsigned long long)arg5 ;
-(unsigned)hyphenCharacterForGlyphAtIndex:(unsigned long long)arg1 ;
-(SCD_Struct_NS2*)_allocateAuxData;
-(/*function pointer*/void**)_lineFragmentRectForProposedRectArgs;
@end

