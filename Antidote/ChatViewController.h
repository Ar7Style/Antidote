//
//  ChatViewController.h
//  Antidote
//
//  Created by Dmitry Vorobyov on 27.07.14.
//  Copyright (c) 2014 dvor. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "CDChat.h"

@interface ChatViewController : UIViewController

- (instancetype)initWithChat:(CDChat *)chat;

@end
