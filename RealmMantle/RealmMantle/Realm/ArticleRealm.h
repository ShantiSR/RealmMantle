//
//  ArticleRealm.h
//  RealmMantle
//
//  Created by Santiago Sánchez Rodríguez on 30/7/15.
//  Copyright (c) 2015 Shanti Rodríguez. All rights reserved.
//

#import "RLMObject.h"
#import "ArticleModel.h"

@interface ArticleRealm : RLMObject

@property NSString *leadParagraph;
@property NSString *url;

- (id)initWithMantleModel:(ArticleModel *)articleModel;

@end
