/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:38 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenReaderCore/SCRCMathRowExpression.h>

@class NSString;

@interface SCRCMathFencedExpression : SCRCMathRowExpression {

	NSString* _openString;
	NSString* _closeString;

}

@property (nonatomic,copy) NSString * openString;               //@synthesize openString=_openString - In the implementation block
@property (nonatomic,copy) NSString * closeString;              //@synthesize closeString=_closeString - In the implementation block
-(void)dealloc;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(BOOL)arg2 ;
-(id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2 ;
-(id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3 ;
-(id)latexDescriptionInMathMode:(BOOL)arg1 ;
-(unsigned long long)fractionLevel;
-(id)mathMLTag;
-(id)mathMLAttributes;
-(void)setOpenString:(NSString *)arg1 ;
-(void)setCloseString:(NSString *)arg1 ;
-(NSString *)openString;
-(NSString *)closeString;
-(BOOL)_isBinomialCoefficient;
-(id)_binomialCoefficientContent;
-(id)_treePositionForBinomialCoefficientContentWithOuterTreePosition:(id)arg1 ;
@end

