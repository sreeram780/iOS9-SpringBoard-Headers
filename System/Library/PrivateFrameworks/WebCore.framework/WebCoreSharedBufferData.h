/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:12 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <CoreFoundation/NSData.h>

@interface WebCoreSharedBufferData : NSData {

	RefPtr<WebCore::SharedBuffer::DataBuffer>* sharedBufferDataBuffer;

}
+(void)initialize;
-(void)dealloc;
-(unsigned long long)length;
-(const void*)bytes;
-(void)finalize;
-(id)initWithSharedBufferDataBuffer:(DataBuffer*)arg1 ;
@end

