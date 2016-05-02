##Team: JLU-Helix##

Problem-solving ideas:

At the first of the competition, we have tried various kinds of methods on the datasets in order to find the most suitable one. We has tried KNN, SVM, Decision Tree, Genetic Algorithm, native Bayesian and etc.

Soon, we discover that it is unwise and impossible to consider all the genes which are over 20,000. So we move our attention on the eigenvalues extraction. We roughly calculate the correlation coefficient of the genes, and find lots of relevant genes. We exclude them to simplify this problem.

Then, we process the data by promoting the increase of the inter-class distance and the decrease of the inner-class distance with single instance results filtered. After this, we use genetic algorithm on data to generate the final features we selected.

Finally, we decide to KNN( K-nearest neighbours ) as our classification algorithm. KNN is a non-parametric method used for classification and regression. In KNN classification, the output is a class membership. An object is classified by a majority vote of its neighbours, with the object being assigned to the class most common among its k nearest neighbours. The output is the property value for the object. This value is the average of the values of its nearest neighbours. KNN is a type of instance-based learning, or lazy learning, where the function is only approximated locally and all computation is deferred until classification.

Finally, we use cross validation to test our results, which divide our dataset in to k parts, each time use one part to test and the other as training sets. This way can make sure we validate all the samples in acceptable time.

date: 2016/05/02 Mon by WangBin
