Action()
{
	
	web_custom_request("web_custom_request",
		"URL=http://blazedemo.com",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"Referer=",
		"Body=",
		LAST);

	web_custom_request("web_custom_request",
		"URL=www.mail.ru",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"Referer=",
		"Body=",
		LAST);

	return 0;
}
