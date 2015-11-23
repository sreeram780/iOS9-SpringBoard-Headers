/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:22 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libTextInputCore.dylib/TITypologyRecord.h>

@class TIKeyboardCandidate, TIKeyboardState, TIAutocorrectionList;

@interface TITypologyRecordRefinements : TITypologyRecord {

	TIKeyboardCandidate* _candidate;
	TIKeyboardState* _keyboardState;
	TIAutocorrectionList* _refinements;

}

@property (nonatomic,retain) TIKeyboardCandidate * candidate;                 //@synthesize candidate=_candidate - In the implementation block
@property (nonatomic,retain) TIKeyboardState * keyboardState;                 //@synthesize keyboardState=_keyboardState - In the implementation block
@property (nonatomic,retain) TIAutocorrectionList * refinements;              //@synthesize refinements=_refinements - In the implementation block
-(void)applyToStatistic:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setCandidate:(TIKeyboardCandidate *)arg1 ;
-(TIKeyboardCandidate *)candidate;
-(void)setKeyboardState:(TIKeyboardState *)arg1 ;
-(TIKeyboardState *)keyboardState;
-(TIAutocorrectionList *)refinements;
-(void)setRefinements:(TIAutocorrectionList *)arg1 ;
@end

