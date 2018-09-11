Action()
{
lr_start_transaction("01_Launch");

			web_custom_request("web_custom_request",
		"URL=https://www.example.com",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"Referer=",
		"Body=",
		LAST);

	lr_end_transaction("01_Launch", LR_AUTO);



	return 0;
}
