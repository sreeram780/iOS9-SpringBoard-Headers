/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:01 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OCDDelayedMedia.h>

@class NSData, NSString;

@interface OADMovie : OCDDelayedMedia {

	NSData* mData;
	NSString* mName;
	float mStart;
	float mEnd;
	BOOL mIsAudioOnly;
	BOOL loop;

}

@property (retain) NSData * data; 
@property (retain) NSString * name; 
@property (assign) BOOL isAudioOnly; 
@property (assign) BOOL loop; 
@property (assign) float movieStartPoint; 
@property (assign) float movieEndPoint; 
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(BOOL)isAudioOnly;
-(void)setIsAudioOnly:(BOOL)arg1 ;
-(float)movieStartPoint;
-(void)setMovieStartPoint:(float)arg1 ;
-(float)movieEndPoint;
-(void)setMovieEndPoint:(float)arg1 ;
-(BOOL)loop;
-(void)setLoop:(BOOL)arg1 ;
@end

