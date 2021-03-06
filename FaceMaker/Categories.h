//
//  Categories.h
//  FaceMaker
//
//  Created by slim on 15-3-6.
//  Copyright (c) 2015年 UC CS. All rights reserved.
//

#import "Components.h"

/*************************
  contains a list of Components which belong to a certain category, i.e. nose, mouse, or ear
 ************************/

@interface Categories : Components

@property (nonatomic, assign, readonly) CType type;

+ (Categories *)createComponentCategoriesByType:(CType)type;
- (Components *)componentsAtIndex:(NSInteger)index;
- (NSInteger)countOfComponents;

@end
