/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:48 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/CKDCancelling.h>

@class NSMutableArray;

@interface CKDCancelTokenGroup : NSObject <CKDCancelling> {

	NSMutableArray* _cancelTokens;

}

@property (nonatomic,retain) NSMutableArray * cancelTokens;              //@synthesize cancelTokens=_cancelTokens - In the implementation block
-(void)cancel;
-(id)init;
-(NSMutableArray *)cancelTokens;
-(void)setCancelTokens:(NSMutableArray *)arg1 ;
-(void)removeAllCancelTokens;
-(void)addCancelToken:(id)arg1 ;
-(void)removeCancelToken:(id)arg1 ;
@end

