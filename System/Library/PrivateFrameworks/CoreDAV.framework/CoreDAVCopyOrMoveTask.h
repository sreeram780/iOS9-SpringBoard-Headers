/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:53 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTask.h>

@class NSURL;

@interface CoreDAVCopyOrMoveTask : CoreDAVTask {

	int _overwrite;
	NSURL* _destinationURL;

}

@property (assign,nonatomic) int overwrite;                       //@synthesize overwrite=_overwrite - In the implementation block
@property (nonatomic,retain) NSURL * destinationURL;              //@synthesize destinationURL=_destinationURL - In the implementation block
+(id)stringFromOverwriteValue:(int)arg1 ;
-(NSURL *)destinationURL;
-(void)setDestinationURL:(NSURL *)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithURL:(id)arg1 ;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)additionalHeaderValues;
-(id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 andOverwrite:(int)arg3 ;
-(int)overwrite;
-(void)_callBackToDelegateWithResponses:(id)arg1 error:(id)arg2 ;
-(void)setOverwrite:(int)arg1 ;
-(id)requestBody;
-(id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 ;
@end

