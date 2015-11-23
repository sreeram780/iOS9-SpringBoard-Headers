/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:42 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class IKLockupElement, UIImage, NSString;

@interface MPUExtrasVideoTimelineEvent : NSObject {

	IKLockupElement* _lockup;
	UIImage* _image;
	BOOL _isFirstEvent;
	double _offset;
	double _duration;
	MPUExtrasVideoTimelineEvent* _previous;
	MPUExtrasVideoTimelineEvent* _next;

}

@property (assign,nonatomic) BOOL isFirstEvent;                                            //@synthesize isFirstEvent=_isFirstEvent - In the implementation block
@property (nonatomic,readonly) double offset;                                              //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) double duration;                                            //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subHeader; 
@property (nonatomic,__weak,readonly) MPUExtrasVideoTimelineEvent * previous;              //@synthesize previous=_previous - In the implementation block
@property (assign,nonatomic,__weak) MPUExtrasVideoTimelineEvent * next;                    //@synthesize next=_next - In the implementation block
-(MPUExtrasVideoTimelineEvent *)next;
-(MPUExtrasVideoTimelineEvent *)previous;
-(id)description;
-(double)duration;
-(NSString *)title;
-(double)offset;
-(id)initWithElement:(id)arg1 prev:(id)arg2 ;
-(NSString *)subHeader;
-(BOOL)isFirstEvent;
-(void)setIsFirstEvent:(BOOL)arg1 ;
-(void)loadImage:(/*^block*/id)arg1 ;
-(void)setNext:(MPUExtrasVideoTimelineEvent *)arg1 ;
@end

