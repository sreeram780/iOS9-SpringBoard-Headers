/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:24 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AssistantServices/AssistantServices-Structs.h>
@class NSMutableDictionary, NSLocale;

@interface AFSpeakableUtteranceParser : NSObject {

	NSMutableDictionary* _providers;
	id _functionHandler;
	NSLocale* _locale;

}

@property (assign,nonatomic) BOOL handleTTSCodes; 
@property (assign,nonatomic) BOOL handlesFunctions; 
+(BOOL)_shouldAutomaticallyProvideFunctions;
+(id)parseUserGeneratedMessage:(id)arg1 ;
-(id)init;
-(void)setHandlesFunctions:(BOOL)arg1 ;
-(void)registerProvider:(id)arg1 forNamespace:(id)arg2 ;
-(BOOL)handleTTSCodes;
-(BOOL)handlesFunctions;
-(id)parseStringWithFormat:(id)arg1 error:(id*)arg2 ;
-(id)parseStringWithFormat:(id)arg1 includeControlCharacters:(BOOL)arg2 error:(id*)arg3 hadEmpties:(BOOL*)arg4 ;
-(id)_handleOptionalAtIndex:(unsigned)arg1 withBuffer:(SCD_Struct_AF4*)arg2 totalLength:(unsigned long long)arg3 consumedLength:(unsigned*)arg4 ;
-(id)_handleProviderAtIndex:(unsigned)arg1 withBuffer:(SCD_Struct_AF4*)arg2 totalLength:(unsigned long long)arg3 consumedLength:(unsigned*)arg4 ;
-(id)_handleControlCodeAtIndex:(unsigned)arg1 withBuffer:(SCD_Struct_AF4*)arg2 totalLength:(unsigned long long)arg3 consumedLength:(unsigned*)arg4 hadEmpties:(BOOL*)arg5 ;
-(void)setHandleTTSCodes:(BOOL)arg1 ;
-(id)parseStringRemovingControlCharacters:(id)arg1 error:(id*)arg2 ;
-(id)initWithLocale:(id)arg1 ;
@end

