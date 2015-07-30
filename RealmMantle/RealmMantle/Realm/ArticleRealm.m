//
//  ArticleRealm.m
//  RealmMantle
//
//  Created by Santiago Sánchez Rodríguez on 30/7/15.
//  Copyright (c) 2015 Shanti Rodríguez. All rights reserved.
//

#import "ArticleRealm.h"

@implementation ArticleRealm

- (id)initWithMantleModel:(ArticleModel *)articleModel{
    self = [super init];
    if(!self) return nil;
    
    self.leadParagraph = articleModel.leadParagraph;
    self.url = articleModel.url;
    
    return self;
}

@end
