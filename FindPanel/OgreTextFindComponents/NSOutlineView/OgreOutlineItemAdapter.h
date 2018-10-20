/*
 * Name: OgreOutlineItemAdapter.h
 * Project: OgreKit
 *
 * Creation Date: Jun 06 2004
 * Author: Isao Sonobe <sonoisa@gmail.com>
 * Copyright: Copyright (c) 2003-2018 Isao Sonobe, All rights reserved.
 * License: OgreKit License
 *
 * Encoding: UTF8
 * Tabsize: 4
 */

#import <Cocoa/Cocoa.h>
#import <OgreKit/OgreTextFindBranch.h>
#import <OgreKit/OgreTextFindLeaf.h>

@class OgreOutlineColumn;

@interface OgreOutlineItemAdapter : OgreTextFindBranch 
{
    OgreOutlineColumn   *_outlineColumn;
    id                  _item;
    NSInteger           _level;
}

- (id)initWithOutlineColumn:(OgreOutlineColumn*)anOutlineColumn item:(id)item;
- (OgreOutlineColumn*)outlineColumn;
- (void)setLevel:(NSInteger)level;
- (NSInteger)level;
- (void)expandItemEnclosingItem:(id)item;

@end
