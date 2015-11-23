/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:16 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/MusicLibraryPlaylistsViewConfiguration.h>

@protocol MusicContextualPlaylistPickerDelegate;
@interface MusicContextualPlaylistPickerViewConfiguration : MusicLibraryPlaylistsViewConfiguration {

	id<MusicContextualPlaylistPickerDelegate> _playlistPickerDelegate;

}

@property (assign,nonatomic,__weak) id<MusicContextualPlaylistPickerDelegate> playlistPickerDelegate;              //@synthesize playlistPickerDelegate=_playlistPickerDelegate - In the implementation block
-(id)newViewController;
-(id)loadEntityViewDescriptor;
-(long long)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2 ;
-(id)initWithPlaylistsFilter:(id)arg1 playlistsConfigurationOptions:(unsigned long long)arg2 ;
-(void)setPlaylistPickerDelegate:(id<MusicContextualPlaylistPickerDelegate>)arg1 ;
-(id<MusicContextualPlaylistPickerDelegate>)playlistPickerDelegate;
@end

