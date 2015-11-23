/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:04 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <TextInput/TIMecabraCandidate.h>

@class NSString, NSArray;

@interface TICompositeMecabraCandidate : TIMecabraCandidate {

	NSString* _remainderCandidateString;
	NSArray* _autoconvertedCandidatePointerValues;

}

@property (nonatomic,copy) NSString * remainderCandidateString;                        //@synthesize remainderCandidateString=_remainderCandidateString - In the implementation block
@property (nonatomic,copy) NSArray * autoconvertedCandidatePointerValues;              //@synthesize autoconvertedCandidatePointerValues=_autoconvertedCandidatePointerValues - In the implementation block
+(int)type;
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)label;
-(id)initWithCandidateResultSetCoder:(id)arg1 ;
-(void)encodeWithCandidateResultSetCoder:(id)arg1 ;
-(NSString *)remainderCandidateString;
-(NSArray *)autoconvertedCandidatePointerValues;
-(void)setAutoconvertedCandidatePointerValues:(NSArray *)arg1 ;
-(void)setRemainderCandidateString:(NSString *)arg1 ;
@end

