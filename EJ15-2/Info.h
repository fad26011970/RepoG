//
//  Info.h
//  EJ15-2
//
//  Created by Felix Alvarez on 23/10/12.
//  Copyright (c) 2012 Felix Alvarez. All rights reserved.
//
/*
 git remote add origin https://github.com/fad26011970/RepoG.git
 git pull origin master (escribir mensaje en vi)
 git push origin master
 */

#import <Foundation/Foundation.h>

@interface Info : NSObject

@property (nonatomic, strong) NSString	*appName, *imageURL, *appURL;
@property NSInteger index;
@property (nonatomic, strong) UIImage *appIcon;

@end
