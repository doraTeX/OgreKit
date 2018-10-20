/*
 * Name: OgreFindResultLeaf.m
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

#import <OgreKit/OGRegularExpressionMatch.h>
#import <OgreKit/OgreFindResultLeaf.h>
#import <OgreKit/OgreTextFindResult.h>


@implementation OgreFindResultLeaf

- (void)addMatch:(OGRegularExpressionMatch*)aMatch 
{
#ifdef DEBUG_OGRE_FIND_PANEL
	NSLog(@" -addMatch: of %@ (BUG!!!)", [self className]);
#endif
    /* do nothing */ 
}

- (void)endAddition 
{
    /* do nothing */ 
}

- (OgreTextFindResult*)textFindResult
{
    return _textFindResult;
}

- (void)setTextFindResult:(OgreTextFindResult*)textFindResult
{
    _textFindResult = textFindResult;
}

- (BOOL)showMatchedString
{
    /* do nothing */
    return NO;
}

- (BOOL)selectMatchedString
{
    /* do nothing */
    return NO;
}

@end
