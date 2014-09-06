//
//  Created by Jesse Squires
//  http://www.hexedbits.com
//
//
//  Documentation
//  http://cocoadocs.org/docsets/JSQMessagesViewController
//
//
//  GitHub
//  https://github.com/jessesquires/JSQMessagesViewController
//
//
//  License
//  Copyright (c) 2014 Jesse Squires
//  Released under an MIT license: http://opensource.org/licenses/MIT
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "JSQMessageAvatarImageDataSource.h"

/**
 *  A `JSQMessagesAvatarImage` model object represents an avatar image.
 *  This is a concrete class that implements the `JSQMessageAvatarImageDataSource` protocol.
 *  It contains a regular avatar image, a highlighted avatar image, and a placeholder avatar image.
 *
 *  @see `JSQMessagesAvatarImageFactory`.
 */
@interface JSQMessagesAvatarImage : NSObject <JSQMessageAvatarImageDataSource, NSCopying>

/**
 *  The avatar image for a regular display state.
 */
@property (nonatomic, strong) UIImage *avatarImage;

/**
 *  The avatar image for a highlighted display state.
 */
@property (nonatomic, strong) UIImage *avatarHighlightedImage;

/**
 *  Returns the placeholder image for an avatar to display if avatarImage is `nil`.
 */
@property (nonatomic, strong, readonly) UIImage *avatarPlaceholderImage;

/**
 *  Returns the current display image for the avatar image.
 *
 *  @discussion This property returns the value of avatarImage if it is not `nil`,
 *  otherwise it returns the value of avatarPlaceholderImage.
 */
@property (nonatomic, readonly) UIImage *currentDisplayImage;

/**
 *  Initializes and returns an avatar image object having the specified placeholder image.
 *
 *  @param placeholderImage The placeholder image for this avatar image. This value must not be `nil`.
 *
 *  @return An initialized `JSQMessagesAvatarImage` object if successful, `nil` otherwise.
 */
+ (instancetype)avatarImageWithPlaceholder:(UIImage *)placeholderImage;

/**
 *  Initializes and returns an avatar image object having the specified regular, highlighed, and placeholder images.
 *
 *  @param avatarImage      The avatar image for a regular display state.
 *  @param highlightedImage The avatar image for a highlighted display state.
 *  @param placeholderImage The placeholder image for this avatar image. This value must not be `nil`.
 *
 *  @return An initialized `JSQMessagesAvatarImage` object if successful, `nil` otherwise.
 */
- (instancetype)initWithAvatarImage:(UIImage *)avatarImage
                   highlightedImage:(UIImage *)highlightedImage
                   placeholderImage:(UIImage *)placeholderImage;

@end