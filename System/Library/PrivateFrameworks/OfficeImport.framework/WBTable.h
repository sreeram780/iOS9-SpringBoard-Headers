/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:06 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WBTable : NSObject
+(void)initPropertiesFrom:(id)arg1 to:(id)arg2 in:(id)arg3 ;
+(void)readRowFrom:(id)arg1 textRuns:(id)arg2 to:(id)arg3 ;
+(BOOL)isTableFloating:(const WrdTableProperties*)arg1 tracked:(const WrdTableProperties*)arg2 ;
+(void)readFrom:(id)arg1 textRuns:(id)arg2 table:(id)arg3 ;
+(BOOL)tryToReadRowFrom:(id)arg1 textRuns:(id)arg2 to:(id)arg3 ;
@end

