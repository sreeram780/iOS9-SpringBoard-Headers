/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:22 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libTextInputCore.dylib/TIWordSearchOperation.h>

@class TIMecabraWrapper;

@interface TIWordSearchOperationAcceptCandidate : TIWordSearchOperation {

	void* _mecabraCandidate;
	BOOL _partialCandidate;
	TIMecabraWrapper* _mecabraWrapper;

}

@property (nonatomic,retain) TIMecabraWrapper * mecabraWrapper;                            //@synthesize mecabraWrapper=_mecabraWrapper - In the implementation block
@property (assign,getter=isPartialCandidate,nonatomic) BOOL partialCandidate;              //@synthesize partialCandidate=_partialCandidate - In the implementation block
-(void)cancel;
-(void)dealloc;
-(void)perform;
-(TIMecabraWrapper *)mecabraWrapper;
-(void)setMecabraWrapper:(TIMecabraWrapper *)arg1 ;
-(void)setPartialCandidate:(BOOL)arg1 ;
-(BOOL)isPartialCandidate;
-(id)initWithWordSearch:(id)arg1 mecabraCandidate:(void*)arg2 isPartial:(BOOL)arg3 ;
@end

