/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:53 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVCopyOrMoveTask.h>

@class NSString;

@interface CoreDAVMoveTask : CoreDAVCopyOrMoveTask {

	NSString* _previousETag;

}

@property (assign,nonatomic) id<CoreDAVMoveTaskDelegate> delegate; 
@property (nonatomic,retain) NSString * previousETag;                           //@synthesize previousETag=_previousETag - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)previousETag;
-(void)setPreviousETag:(NSString *)arg1 ;
-(id)httpMethod;
-(id)additionalHeaderValues;
-(void)_callBackToDelegateWithResponses:(id)arg1 error:(id)arg2 ;
@end

