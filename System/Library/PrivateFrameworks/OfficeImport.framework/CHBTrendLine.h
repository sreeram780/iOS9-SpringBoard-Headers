/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:03 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface CHBTrendLine : NSObject
+(int)edTrendLineTypeFrom:(int)arg1 order:(int)arg2 ;
+(id)readTrendlineGraphicProperties:(const XlChartSeriesFormat*)arg1 forStyleIndex:(unsigned long long)arg2 state:(id)arg3 ;
+(int)xlTrendLineRegressionTypeFrom:(int)arg1 ;
+(void)readFrom:(XlChartTrendLine*)arg1 toSeries:(id)arg2 state:(id)arg3 ;
@end

