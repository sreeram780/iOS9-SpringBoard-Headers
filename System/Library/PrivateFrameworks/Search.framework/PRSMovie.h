/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:39 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class PRSImage, NSString, NSArray, NSURL;


@protocol PRSMovie
@property (nonatomic,retain) PRSImage * image; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * subtitle; 
@property (nonatomic,retain) PRSImage * rt_glyph; 
@property (nonatomic,retain) NSString * rt_text; 
@property (nonatomic,retain) NSArray * more_glyphs; 
@property (nonatomic,retain) NSURL * url; 
@property (nonatomic,retain) NSURL * punchout_uri; 
@optional
-(void)setTitle:(id)arg1;
-(NSURL *)url;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setUrl:(id)arg1;
-(void)setSubtitle:(id)arg1;
-(void)setRt_glyph:(id)arg1;
-(void)setRt_text:(id)arg1;
-(void)setMore_glyphs:(id)arg1;
-(void)setPunchout_uri:(id)arg1;
-(NSURL *)punchout_uri;
-(PRSImage *)rt_glyph;
-(NSString *)rt_text;
-(NSArray *)more_glyphs;

@required
-(void)setImage:(id)arg1;
-(PRSImage *)image;

@end

