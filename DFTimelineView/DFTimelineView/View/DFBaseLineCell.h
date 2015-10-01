//
//  DFBaseLineCell.h
//  DFTimelineView
//
//  Created by Allen Zhong on 15/9/27.
//  Copyright (c) 2015年 Datafans, Inc. All rights reserved.
//

#import "UIImageView+WebCache.h"
#import "DFBaseLineItem.h"

#import "Const.h"


#define Margin 15

#define Padding 10

#define UserAvatarSize 40

#define  BodyMaxWidth [UIScreen mainScreen].bounds.size.width - UserAvatarSize - 3*Margin




@protocol DFLineCellDelegate <NSObject>

@optional
-(void) onLike:(long long) itemId;
-(void) onComment:(long long) itemId;

-(void) onClickUser:(NSUInteger) userId;


@end

@interface DFBaseLineCell : UITableViewCell


@property (nonatomic, strong) UIView *bodyView;

@property (nonatomic, assign) id<DFLineCellDelegate> delegate;


-(void) updateWithItem:(DFBaseLineItem *) item;

+(CGFloat) getCellHeight:(DFBaseLineItem *) item;

-(void)updateBodyView:(CGFloat) height;

-(void) hideLikeCommentToolbar;

@end