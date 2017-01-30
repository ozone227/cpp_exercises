# Sequencing Threads with Condition Variable
When authoring concurrent applications, there will likely be use cases where a thread may need to execute only after another has completed. This can be accomplished a handful of different ways, but this is an example of coupling *condition_variable()* with *mutex()* and setting a boolean to toggle the desired outcome
