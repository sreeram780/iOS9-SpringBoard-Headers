/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:46 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MFMessageInfoOrderedSet, MFMessageInfo, NSArray;

@interface MFConversationInfo : NSObject {

	MFMessageInfoOrderedSet* _messageInfoSet;
	long long _conversationID;

}

@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,readonly) MFMessageInfo * firstMessage; 
@property (nonatomic,readonly) MFMessageInfo * lastMessage; 
@property (nonatomic,readonly) unsigned long long messagesCount; 
@property (nonatomic,readonly) unsigned long long messageCountWithDuplicates; 
@property (nonatomic,readonly) NSArray * uniqueMessageInfos; 
@property (nonatomic,readonly) NSArray * allMessageInfos; 
-(void)dealloc;
-(BOOL)isEmpty;
-(MFMessageInfo *)lastMessage;
-(id)messageInfoAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)removeMessageInfo:(id)arg1 ;
-(NSArray *)allMessageInfos;
-(id)duplicatesOfMessageInfo:(id)arg1 ;
-(unsigned long long)addMessageInfo:(id)arg1 ;
-(unsigned long long)indexOfMessageInfo:(id)arg1 ;
-(unsigned long long)indexWhereMessageInfoWouldBeInserted:(id)arg1 ;
-(id)messageInfoEquivalentToMessageInfo:(id)arg1 ;
-(NSArray *)uniqueMessageInfos;
-(MFMessageInfo *)firstMessage;
-(unsigned long long)messagesCount;
-(id)initWithConversationID:(long long)arg1 comparator:(/*^block*/id)arg2 ;
-(unsigned long long)messageCountWithDuplicates;
-(id)visibleMessageInfo;
-(void)mergeWithConversation:(id)arg1 ;
-(unsigned long long)conversationState;
@end

