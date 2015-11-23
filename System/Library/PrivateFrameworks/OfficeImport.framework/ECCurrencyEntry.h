/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:04 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface ECCurrencyEntry : NSObject {

	NSString* mLassoCurrencyCode;
	NSString* mXlLangId;
	NSString* mXlCurrencySymbol;
	BOOL mAppliesToExport;
	int mXlAccountingFormat;

}
+(id)currencyWithLassoCode:(id)arg1 langId:(int)arg2 xlSymbol:(id)arg3 ;
+(id)currencyWithLassoCode:(id)arg1 langId:(int)arg2 xlSymbol:(id)arg3 accountingFormat:(int)arg4 ;
+(id)currencyWithLassoCode:(id)arg1 langId:(int)arg2 xlSymbol:(id)arg3 isExport:(BOOL)arg4 ;
+(id)currencyWithLassoCode:(id)arg1 langId:(int)arg2 xlSymbol:(id)arg3 isExport:(BOOL)arg4 accountingFormat:(int)arg5 ;
-(void)dealloc;
-(id)initWithLassoCode:(id)arg1 langId:(int)arg2 xlSymbol:(id)arg3 isExport:(BOOL)arg4 accountingFormat:(int)arg5 ;
@end

