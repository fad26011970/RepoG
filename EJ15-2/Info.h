//
//  Info.h
//  EJ15-2
//
//  Created by Felix Alvarez on 23/10/12.
//  Copyright (c) 2012 Felix Alvarez. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Info : NSObject

@property (nonatomic, strong) NSString	*appName, *imageURL, *appURL;
@property NSInteger index;
@property (nonatomic, strong) UIImage *appIcon;

@end
