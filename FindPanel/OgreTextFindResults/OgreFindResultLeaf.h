/*
 * Name: OgreFindResultLeaf.h
 * Project: OgreKit
 *
 * Creation Date: Apr 18 2004
 * Author: Isao Sonobe <sonoisa@gmail.com>
 * Copyright: Copyright (c) 2003-2018 Isao Sonobe, All rights reserved.
 * License: OgreKit License
 *
 * Encoding: UTF8
 * Tabsize: 4
 */

#import <OgreKit/OgreTextFindLeaf.h>
#import <OgreKit/OGRegularExpressionMatch.h>

@class OgreTextFindResult;

@interface OgreFindResultLeaf : OgreTextFindLeaf
{
    OgreTextFindResult  *_textFindResult;
}

/* methods overridden by subclass of OgreFindResultLeaf  */
- (OgreTextFindResult*)textFindResult;
- (void)setTextFindResult:(OgreTextFindResult*)textFindResult;

- (BOOL)showMatchedString;
- (BOOL)selectMatchedString;

@end
