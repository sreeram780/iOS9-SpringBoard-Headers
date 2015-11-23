/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:07 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _EARSpeechRecognitionToken : NSObject <NSCopying> {

	Token _token;

}

@property (nonatomic,copy,readonly) NSString * tokenName; 
@property (nonatomic,readonly) double start; 
@property (nonatomic,readonly) double end; 
@property (nonatomic,readonly) double silenceStart; 
@property (nonatomic,readonly) double confidence; 
@property (nonatomic,readonly) BOOL hasSpaceAfter; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)start;
-(double)end;
-(BOOL)hasSpaceAfter;
-(NSString *)tokenName;
-(double)silenceStart;
-(id)_initWithQuasarToken:(const Token*)arg1 ;
-(double)confidence;
@end

