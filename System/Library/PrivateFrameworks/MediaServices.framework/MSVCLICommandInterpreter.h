/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:44 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray;

@interface MSVCLICommandInterpreter : NSObject {

	NSMutableDictionary* _commandToInvocationsMap;
	NSMutableArray* _retainedBlockHandlers;

}
-(id)init;
-(void)addHandlerToCommand:(id)arg1 withTarget:(id)arg2 action:(SEL)arg3 ;
-(void)addHandlerToCommand:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)executeWithArgumentCount:(int)arg1 arguments:(const char**)arg2 ;
@end

