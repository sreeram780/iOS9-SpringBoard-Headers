/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:01 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_group;
@class NSObject, NSString, NSDate;

@interface CKPlaceholderOperation : NSOperation {

	NSObject*<OS_dispatch_group> _group;
	BOOL _isFinished;
	BOOL _isExecuting;
	NSString* _sectionID;
	id _context;
	NSDate* _startDate;
	NSString* _operationID;
	/*^block*/id _daemonInvokeBlock;

}

@property (nonatomic,retain) NSString * sectionID;                  //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,retain) id context;                            //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                    //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSString * operationID;              //@synthesize operationID=_operationID - In the implementation block
@property (nonatomic,readonly) id daemonInvokeBlock;                //@synthesize daemonInvokeBlock=_daemonInvokeBlock - In the implementation block
@property (assign,nonatomic) BOOL isExecuting;                      //@synthesize isExecuting=_isExecuting - In the implementation block
@property (assign,nonatomic) BOOL isFinished;                       //@synthesize isFinished=_isFinished - In the implementation block
-(id)initWithOperation:(id)arg1 daemonInvocationBlock:(/*^block*/id)arg2 ;
-(id)daemonInvokeBlock;
-(BOOL)isConcurrent;
-(NSDate *)startDate;
-(void)cancel;
-(id)description;
-(id)context;
-(void)start;
-(void)setContext:(id)arg1 ;
-(void)main;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)setIsFinished:(BOOL)arg1 ;
-(NSString *)sectionID;
-(NSString *)operationID;
-(id)CKPropertiesDescription;
-(void)setIsExecuting:(BOOL)arg1 ;
-(void)setSectionID:(NSString *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
@end

