/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:25 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSInputStream;

@interface PBMessageStreamReader : NSObject {

	NSInputStream* _stream;
	Class _classOfNextMessage;
	unsigned long long _position;

}

@property (assign) Class classOfNextMessage;                   //@synthesize classOfNextMessage=_classOfNextMessage - In the implementation block
@property (readonly) unsigned long long position;              //@synthesize position=_position - In the implementation block
-(void)dealloc;
-(unsigned long long)position;
-(Class)classOfNextMessage;
-(void)setClassOfNextMessage:(Class)arg1 ;
-(id)nextMessage;
-(id)initWithStream:(id)arg1 ;
@end
