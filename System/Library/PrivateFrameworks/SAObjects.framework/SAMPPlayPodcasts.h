/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:35 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSString;

@interface SAMPPlayPodcasts : SADomainCommand

@property (nonatomic,copy) NSString * episodePlaybackOrder; 
+(id)playPodcasts;
+(id)playPodcastsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)episodePlaybackOrder;
-(void)setEpisodePlaybackOrder:(NSString *)arg1 ;
@end

