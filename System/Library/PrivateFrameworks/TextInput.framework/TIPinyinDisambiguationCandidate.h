/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:04 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <TextInput/TIKeyboardCandidateSingle.h>

@class NSString;

@interface TIPinyinDisambiguationCandidate : TIKeyboardCandidateSingle {

	NSString* _label;

}
+(int)type;
+(BOOL)supportsSecureCoding;
+(id)candidateWithPinyinSyllable:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)label;
-(id)initWithCandidateResultSetCoder:(id)arg1 ;
-(void)encodeWithCandidateResultSetCoder:(id)arg1 ;
-(id)initWithPinyinSyllable:(id)arg1 ;
@end

