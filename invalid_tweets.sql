-- # Write your MySQL query statement below
-- # select tweet_id from (select tweet_id as tweet_id,content as content from Tweets having length(content) > 15) order by tweet_id;
select tweet_id from Tweets where char_length(content) > 15;