/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:13 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PerformanceAnalysis/PASampleThreadData.h>

@interface PASamplePowerstatsThreadData : PASampleThreadData {

	unsigned _powerstatsFlags;

}
-(unsigned)powerstatsFlags;
-(BOOL)hasValidPowerstatsFlags;
-(id)initWithStackshotThread:(id)arg1 andLeafFrame:(id)arg2 ;
@end

