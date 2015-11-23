/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:12 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class RWIProtocolPageFrame, NSArray;

@interface RWIProtocolPageFrameResourceTree : RWIProtocolJSONObject

@property (nonatomic,retain) RWIProtocolPageFrame * frame; 
@property (nonatomic,copy) NSArray * resources; 
@property (nonatomic,copy) NSArray * childFrames; 
-(void)setFrame:(RWIProtocolPageFrame *)arg1 ;
-(RWIProtocolPageFrame *)frame;
-(NSArray *)childFrames;
-(id)initWithFrame:(id)arg1 resources:(id)arg2 ;
-(NSArray *)resources;
-(void)setResources:(NSArray *)arg1 ;
-(void)setChildFrames:(NSArray *)arg1 ;
@end

