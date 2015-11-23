/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:22 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libTextInputCore.dylib/TIWordSearchOperation.h>

@class TIMecabraWrapper, TILanguageModelAdaptationContext, NSString;

@interface TIWordSearchOperationAdaptOffline : TIWordSearchOperation {

	TIMecabraWrapper* _mecabraWrapper;
	TILanguageModelAdaptationContext* _adaptationContext;
	NSString* _paragraph;
	double _timeStamp;

}

@property (nonatomic,retain) TIMecabraWrapper * mecabraWrapper;                               //@synthesize mecabraWrapper=_mecabraWrapper - In the implementation block
@property (nonatomic,copy) TILanguageModelAdaptationContext * adaptationContext;              //@synthesize adaptationContext=_adaptationContext - In the implementation block
@property (nonatomic,copy) NSString * paragraph;                                              //@synthesize paragraph=_paragraph - In the implementation block
@property (assign,nonatomic) double timeStamp;                                                //@synthesize timeStamp=_timeStamp - In the implementation block
-(void)cancel;
-(void)dealloc;
-(void)perform;
-(double)timeStamp;
-(void)setTimeStamp:(double)arg1 ;
-(void)setParagraph:(NSString *)arg1 ;
-(NSString *)paragraph;
-(TIMecabraWrapper *)mecabraWrapper;
-(void)setMecabraWrapper:(TIMecabraWrapper *)arg1 ;
-(void)setAdaptationContext:(TILanguageModelAdaptationContext *)arg1 ;
-(id)initWithWordSearch:(id)arg1 paragraph:(id)arg2 adaptationContext:(id)arg3 timeStamp:(double)arg4 ;
-(TILanguageModelAdaptationContext *)adaptationContext;
@end

