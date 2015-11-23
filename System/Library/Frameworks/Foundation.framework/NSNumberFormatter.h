/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:21 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSFormatter.h>
#import <libobjc.A.dylib/NSObservable.h>
#import <libobjc.A.dylib/NSObserver.h>

@class NSMutableDictionary, NSRecursiveLock, NSString, NSLocale, NSDictionary, NSNumber;

@interface NSNumberFormatter : NSFormatter <NSObservable, NSObserver> {

	NSMutableDictionary* _attributes;
	CFNumberFormatterRef _formatter;
	unsigned long long _counter;
	unsigned long long _behavior;
	NSRecursiveLock* _lock;
	unsigned long long _stateBitMask;
	long long _cacheGeneration;
	void** _reserved[8];

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) long long formattingContext; 
@property (assign) unsigned long long numberStyle; 
@property (copy) NSLocale * locale; 
@property (assign) BOOL generatesDecimalNumbers; 
@property (assign) unsigned long long formatterBehavior; 
@property (copy) NSString * negativeFormat; 
@property (copy) NSDictionary * textAttributesForNegativeValues; 
@property (copy) NSString * positiveFormat; 
@property (copy) NSDictionary * textAttributesForPositiveValues; 
@property (assign) BOOL allowsFloats; 
@property (copy) NSString * decimalSeparator; 
@property (assign) BOOL alwaysShowsDecimalSeparator; 
@property (copy) NSString * currencyDecimalSeparator; 
@property (assign) BOOL usesGroupingSeparator; 
@property (copy) NSString * groupingSeparator; 
@property (copy) NSString * zeroSymbol; 
@property (copy) NSDictionary * textAttributesForZero; 
@property (copy) NSString * nilSymbol; 
@property (copy) NSDictionary * textAttributesForNil; 
@property (copy) NSString * notANumberSymbol; 
@property (copy) NSDictionary * textAttributesForNotANumber; 
@property (copy) NSString * positiveInfinitySymbol; 
@property (copy) NSDictionary * textAttributesForPositiveInfinity; 
@property (copy) NSString * negativeInfinitySymbol; 
@property (copy) NSDictionary * textAttributesForNegativeInfinity; 
@property (copy) NSString * positivePrefix; 
@property (copy) NSString * positiveSuffix; 
@property (copy) NSString * negativePrefix; 
@property (copy) NSString * negativeSuffix; 
@property (copy) NSString * currencyCode; 
@property (copy) NSString * currencySymbol; 
@property (copy) NSString * internationalCurrencySymbol; 
@property (copy) NSString * percentSymbol; 
@property (copy) NSString * perMillSymbol; 
@property (copy) NSString * minusSign; 
@property (copy) NSString * plusSign; 
@property (copy) NSString * exponentSymbol; 
@property (assign) unsigned long long groupingSize; 
@property (assign) unsigned long long secondaryGroupingSize; 
@property (copy) NSNumber * multiplier; 
@property (assign) unsigned long long formatWidth; 
@property (copy) NSString * paddingCharacter; 
@property (assign) unsigned long long paddingPosition; 
@property (assign) unsigned long long roundingMode; 
@property (copy) NSNumber * roundingIncrement; 
@property (assign) unsigned long long minimumIntegerDigits; 
@property (assign) unsigned long long maximumIntegerDigits; 
@property (assign) unsigned long long minimumFractionDigits; 
@property (assign) unsigned long long maximumFractionDigits; 
@property (copy) NSNumber * minimum; 
@property (copy) NSNumber * maximum; 
@property (copy) NSString * currencyGroupingSeparator; 
@property (getter=isLenient) BOOL lenient; 
@property (assign) BOOL usesSignificantDigits; 
@property (assign) unsigned long long minimumSignificantDigits; 
@property (assign) unsigned long long maximumSignificantDigits; 
@property (getter=isPartialStringValidationEnabled) BOOL partialStringValidationEnabled; 
+(id)mf_formatInteger:(long long)arg1 withGrouping:(BOOL)arg2 ;
+(id)mf_formatUnsignedInteger:(unsigned long long)arg1 withGrouping:(BOOL)arg2 ;
+(void)setDefaultFormatterBehavior:(unsigned long long)arg1 ;
+(unsigned long long)defaultFormatterBehavior;
+(void)initialize;
+(id)localizedStringFromNumber:(id)arg1 numberStyle:(unsigned long long)arg2 ;
-(void)clearPropertyBit;
-(void)setPropertyBit;
-(BOOL)checkModify;
-(void)resetCheckModify;
-(BOOL)checkLocaleChange;
-(void)resetCheckLocaleChange;
-(void*)getFormatter;
-(void)receiveObservedValue:(id)arg1 ;
-(long long)formattingContext;
-(id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2 ;
-(unsigned long long)roundingMode;
-(BOOL)_mayDecorateAttributedStringForObjectValue:(id)arg1 ;
-(long long)_cacheGenerationCount;
-(BOOL)_tracksCacheGenerationCount;
-(void)_clearFormatter;
-(void)setNilSymbol:(NSString *)arg1 ;
-(void)setPositiveInfinitySymbol:(NSString *)arg1 ;
-(void)setNegativeInfinitySymbol:(NSString *)arg1 ;
-(void)setAllowsFloats:(BOOL)arg1 ;
-(NSString *)nilSymbol;
-(NSString *)notANumberSymbol;
-(NSString *)zeroSymbol;
-(NSString *)negativeInfinitySymbol;
-(NSString *)positiveInfinitySymbol;
-(void)_regenerateFormatter;
-(NSDictionary *)textAttributesForNil;
-(NSDictionary *)textAttributesForNotANumber;
-(NSDictionary *)textAttributesForZero;
-(NSDictionary *)textAttributesForNegativeInfinity;
-(NSDictionary *)textAttributesForPositiveInfinity;
-(NSDictionary *)textAttributesForNegativeValues;
-(NSDictionary *)textAttributesForPositiveValues;
-(void*)__Keynote_NOOP;
-(unsigned long long)numberStyle;
-(BOOL)generatesDecimalNumbers;
-(unsigned long long)formatterBehavior;
-(NSString *)negativeFormat;
-(void)setNegativeFormat:(NSString *)arg1 ;
-(void)setTextAttributesForNegativeValues:(NSDictionary *)arg1 ;
-(void)setTextAttributesForPositiveValues:(NSDictionary *)arg1 ;
-(BOOL)allowsFloats;
-(void)setDecimalSeparator:(NSString *)arg1 ;
-(BOOL)alwaysShowsDecimalSeparator;
-(void)setAlwaysShowsDecimalSeparator:(BOOL)arg1 ;
-(void)setCurrencyDecimalSeparator:(NSString *)arg1 ;
-(BOOL)usesGroupingSeparator;
-(void)setGroupingSeparator:(NSString *)arg1 ;
-(void)setZeroSymbol:(NSString *)arg1 ;
-(void)setTextAttributesForZero:(NSDictionary *)arg1 ;
-(void)setTextAttributesForNil:(NSDictionary *)arg1 ;
-(void)setNotANumberSymbol:(NSString *)arg1 ;
-(void)setTextAttributesForNotANumber:(NSDictionary *)arg1 ;
-(void)setTextAttributesForPositiveInfinity:(NSDictionary *)arg1 ;
-(void)setTextAttributesForNegativeInfinity:(NSDictionary *)arg1 ;
-(NSString *)positivePrefix;
-(void)setPositivePrefix:(NSString *)arg1 ;
-(NSString *)positiveSuffix;
-(void)setPositiveSuffix:(NSString *)arg1 ;
-(NSString *)negativePrefix;
-(void)setNegativePrefix:(NSString *)arg1 ;
-(NSString *)negativeSuffix;
-(void)setNegativeSuffix:(NSString *)arg1 ;
-(BOOL)_hasSetCurrencyCode;
-(BOOL)_hasSetCurrencySymbol;
-(void)setCurrencySymbol:(NSString *)arg1 ;
-(NSString *)internationalCurrencySymbol;
-(void)setInternationalCurrencySymbol:(NSString *)arg1 ;
-(BOOL)_hasSetInternationalCurrencySymbol;
-(void)setPercentSymbol:(NSString *)arg1 ;
-(NSString *)perMillSymbol;
-(void)setPerMillSymbol:(NSString *)arg1 ;
-(NSString *)minusSign;
-(void)setMinusSign:(NSString *)arg1 ;
-(NSString *)plusSign;
-(void)setPlusSign:(NSString *)arg1 ;
-(NSString *)exponentSymbol;
-(void)setExponentSymbol:(NSString *)arg1 ;
-(void)setGroupingSize:(unsigned long long)arg1 ;
-(unsigned long long)secondaryGroupingSize;
-(void)setSecondaryGroupingSize:(unsigned long long)arg1 ;
-(unsigned long long)formatWidth;
-(void)setFormatWidth:(unsigned long long)arg1 ;
-(void)setMultiplier:(NSNumber *)arg1 ;
-(NSString *)paddingCharacter;
-(void)setPaddingCharacter:(NSString *)arg1 ;
-(unsigned long long)paddingPosition;
-(void)setPaddingPosition:(unsigned long long)arg1 ;
-(NSNumber *)roundingIncrement;
-(void)setRoundingIncrement:(NSNumber *)arg1 ;
-(unsigned long long)minimumIntegerDigits;
-(unsigned long long)maximumIntegerDigits;
-(void)setMaximumIntegerDigits:(unsigned long long)arg1 ;
-(unsigned long long)minimumFractionDigits;
-(NSNumber *)minimum;
-(void)setMinimum:(NSNumber *)arg1 ;
-(NSNumber *)maximum;
-(void)setMaximum:(NSNumber *)arg1 ;
-(NSString *)currencyGroupingSeparator;
-(void)setCurrencyGroupingSeparator:(NSString *)arg1 ;
-(BOOL)isLenient;
-(BOOL)usesSignificantDigits;
-(unsigned long long)minimumSignificantDigits;
-(void)setMinimumSignificantDigits:(unsigned long long)arg1 ;
-(unsigned long long)maximumSignificantDigits;
-(BOOL)isPartialStringValidationEnabled;
-(void)setPartialStringValidationEnabled:(BOOL)arg1 ;
-(BOOL)_usesCharacterDirection;
-(void)_setUsesCharacterDirection:(BOOL)arg1 ;
-(void)setMinimumIntegerDigits:(unsigned long long)arg1 ;
-(void)setMaximumSignificantDigits:(unsigned long long)arg1 ;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 range:(inout NSRange*)arg3 error:(out id*)arg4 ;
-(void)setMaximumFractionDigits:(unsigned long long)arg1 ;
-(void)setMinimumFractionDigits:(unsigned long long)arg1 ;
-(void)setRoundingMode:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(void)_reset;
-(NSLocale *)locale;
-(void)_invalidateCache;
-(id)stringForObjectValue:(id)arg1 ;
-(void)setFormatterBehavior:(unsigned long long)arg1 ;
-(void)setNumberStyle:(unsigned long long)arg1 ;
-(id)stringFromNumber:(id)arg1 ;
-(NSNumber *)multiplier;
-(void)setGeneratesDecimalNumbers:(BOOL)arg1 ;
-(void)setUsesSignificantDigits:(BOOL)arg1 ;
-(id)numberFromString:(id)arg1 ;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(NSString *)decimalSeparator;
-(NSString *)groupingSeparator;
-(NSString *)currencyCode;
-(NSString *)currencyDecimalSeparator;
-(unsigned long long)groupingSize;
-(NSString *)percentSymbol;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(unsigned long long)maximumFractionDigits;
-(void)finalize;
-(void)setPositiveFormat:(NSString *)arg1 ;
-(NSString *)positiveFormat;
-(NSString *)currencySymbol;
-(void)setUsesGroupingSeparator:(BOOL)arg1 ;
-(void)setLenient:(BOOL)arg1 ;
-(void)setFormattingContext:(long long)arg1 ;
@end

