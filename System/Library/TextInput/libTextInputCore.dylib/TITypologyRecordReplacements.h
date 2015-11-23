/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:22 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libTextInputCore.dylib/TITypologyRecord.h>

@class NSString, TIKeyboardLayout, NSArray;

@interface TITypologyRecordReplacements : TITypologyRecord {

	NSString* _string;
	TIKeyboardLayout* _keyLayout;
	NSArray* _candidates;

}

@property (nonatomic,copy) NSString * string;                           //@synthesize string=_string - In the implementation block
@property (nonatomic,retain) TIKeyboardLayout * keyLayout;              //@synthesize keyLayout=_keyLayout - In the implementation block
@property (nonatomic,retain) NSArray * candidates;                      //@synthesize candidates=_candidates - In the implementation block
-(void)applyToStatistic:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)string;
-(NSArray *)candidates;
-(TIKeyboardLayout *)keyLayout;
-(void)setKeyLayout:(TIKeyboardLayout *)arg1 ;
-(void)setString:(NSString *)arg1 ;
-(void)setCandidates:(NSArray *)arg1 ;
@end

