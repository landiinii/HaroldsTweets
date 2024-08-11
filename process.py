import json
import httpx
from parsel import Selector

HEADERS = {
    "User-Agent": "Mozilla/5.0 (Windows NT 10.0; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/94.0.4606.54 Safari/537.36",
    "Accept-Encoding": "gzip, deflate, br",
    "Accept-Language": "en-US,en;q=0.9",
}


# retrieve embed HTML
with httpx.Client(http2=True, headers=HEADERS) as client:
    response = client.get(
        "https://syndication.twitter.com/srv/timeline-profile/screen-name/j_hancock34"
    )
    assert response.status_code == 200
sel = Selector(response.text)
# find data cache:
data = json.loads(sel.css("script#__NEXT_DATA__::text").get())
# parse tweet data from data cache JSON:
print(data)
tweet_data = data["props"]["pageProps"]["timeline"]["entries"]
tweets = [tweet["content"]["tweet"] for tweet in tweet_data]
print(tweets)