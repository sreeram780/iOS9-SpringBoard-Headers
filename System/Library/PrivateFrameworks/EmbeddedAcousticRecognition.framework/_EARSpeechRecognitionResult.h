/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:07 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface _EARSpeechRecognitionResult : NSObject <NSCopying> {

	NSArray* _tokens;

}

@property (nonatomic,copy,readonly) NSArray * tokens;              //@synthesize tokens=_tokens - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)tokens;
-(id)_initWithTokens:(id)arg1 ;
@end

