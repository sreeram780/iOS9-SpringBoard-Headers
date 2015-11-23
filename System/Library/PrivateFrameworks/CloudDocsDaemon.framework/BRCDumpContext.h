/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:44 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
@class BRCTermDumper, PQLConnection, NSString;

@interface BRCDumpContext : NSObject {

	long long _indentation;
	BRCTermDumper* _termDumper;
	BOOL _liveDaemon;
	BOOL _onlyActiveStuff;
	_sFILE* _fp;
	PQLConnection* _db;
	NSString* _indentationBaseString;

}

@property (nonatomic,readonly) PQLConnection * db;                          //@synthesize db=_db - In the implementation block
@property (nonatomic,readonly) _sFILE* fp;                                  //@synthesize fp=_fp - In the implementation block
@property (nonatomic,retain) NSString * indentationBaseString;              //@synthesize indentationBaseString=_indentationBaseString - In the implementation block
@property (assign,nonatomic) BOOL liveDaemon;                               //@synthesize liveDaemon=_liveDaemon - In the implementation block
@property (assign,nonatomic) BOOL onlyActiveStuff;                          //@synthesize onlyActiveStuff=_onlyActiveStuff - In the implementation block
+(id)stringFromThrottleState:(int)arg1 context:(id)arg2 ;
+(id)highlightedString:(id)arg1 type:(long long)arg2 context:(id)arg3 ;
+(id)stringFromOperationUUID:(unsigned char)arg1 context:(id)arg2 ;
+(id)stringFromDueDate:(id)arg1 now:(id)arg2 allowsPast:(BOOL)arg3 context:(id)arg4 ;
+(id)stringFromBackoff:(double)arg1 context:(id)arg2 ;
+(id)stringFromError:(id)arg1 context:(id)arg2 ;
+(id)stringFromItemID:(id)arg1 context:(id)arg2 ;
+(id)stringFromByteCount:(long long)arg1 context:(id)arg2 ;
+(id)stringFromErrorString:(id)arg1 context:(id)arg2 ;
+(id)stringFromDueStamp:(unsigned long long)arg1 now:(unsigned long long)arg2 allowsPast:(BOOL)arg3 context:(id)arg4 ;
+(id)stringFromByteCount:(long long)arg1 showActualByteCount:(BOOL)arg2 suffix:(id)arg3 context:(id)arg4 ;
+(id)stringFromItemAsString:(id)arg1 context:(id)arg2 ;
-(void)writeLineWithFormat:(id)arg1 ;
-(id)highlightedString:(id)arg1 type:(long long)arg2 ;
-(void)pushIndentation;
-(void)popIndentation;
-(BOOL)liveDaemon;
-(id)initWithFile:(_sFILE*)arg1 db:(id)arg2 ;
-(void)setLiveDaemon:(BOOL)arg1 ;
-(void)setOnlyActiveStuff:(BOOL)arg1 ;
-(BOOL)onlyActiveStuff;
-(_sFILE*)fp;
-(NSString *)indentationBaseString;
-(void)setIndentationBaseString:(NSString *)arg1 ;
-(PQLConnection *)db;
@end

