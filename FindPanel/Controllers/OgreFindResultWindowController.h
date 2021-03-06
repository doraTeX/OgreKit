/*
 * Name: OgreFindResultWindow.h
 * Project: OgreKit
 *
 * Creation Date: Jun 10 2004
 * Author: Isao Sonobe <sonoisa@gmail.com>
 * Copyright: Copyright (c) 2003-2018 Isao Sonobe, All rights reserved.
 * License: OgreKit License
 *
 * Encoding: UTF8
 * Tabsize: 4
 */

#import <Cocoa/Cocoa.h>
#import <OgreKit/OgreTextFindResult.h>

@class OgreAttachableWindowMediator;

@interface OgreFindResultWindowController : NSObject
{
    IBOutlet NSOutlineView		*grepOutlineView;
    IBOutlet NSButton			*liveUpdateCheckBox;
    IBOutlet NSWindow			*window;
    IBOutlet NSTextField		*findStringField;
    IBOutlet NSTextField		*messageField;
    
    OgreTextFindResult			*_textFindResult;
    BOOL						_liveUpdate;
	OgreAttachableWindowMediator	*_attachedWindowMediator;
}

- (id)initWithTextFindResult:(OgreTextFindResult*)textFindResult liveUpdate:(BOOL)liveUpdate;
- (void)setTextFindResult:(OgreTextFindResult*)textFindResult;
- (NSWindow*)window;

- (IBAction)updateLiveUpdate:(id)sender;

- (void)show;
- (void)close;

- (id)outlineView:(NSOutlineView *)outlineView child:(NSInteger)index ofItem:(id)item;

// protected method
- (void)setupFindResultView;

@end
