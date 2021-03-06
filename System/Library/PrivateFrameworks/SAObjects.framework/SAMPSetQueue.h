/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:29 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSArray, SAMPCollection;

@interface SAMPSetQueue : SADomainCommand

@property (nonatomic,copy) NSArray * filters; 
@property (nonatomic,retain) SAMPCollection * mediaItems; 
@property (assign,nonatomic) BOOL shouldOverrideManuallyCuratedUpNext; 
@property (assign,nonatomic) BOOL shouldShuffle; 
@property (nonatomic,copy) NSArray * sort; 
+(id)setQueue;
+(id)setQueueWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setFilters:(NSArray *)arg1 ;
-(NSArray *)filters;
-(NSArray *)sort;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SAMPCollection *)mediaItems;
-(void)setMediaItems:(SAMPCollection *)arg1 ;
-(BOOL)shouldOverrideManuallyCuratedUpNext;
-(void)setShouldOverrideManuallyCuratedUpNext:(BOOL)arg1 ;
-(BOOL)shouldShuffle;
-(void)setShouldShuffle:(BOOL)arg1 ;
-(void)setSort:(NSArray *)arg1 ;
@end

