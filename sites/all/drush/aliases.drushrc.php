<?php

$aliases['dev'] = array(
	'uri'=> 'say.ccistaging.com',
	'root' => '/home/staging/subdomains/say/public_html',
	'remote-host'=> 'host.ccistudios.com',
	'remote-user'=> 'staging',
	'path-aliases'=> array(
		'%files'=> 'sites/default/files',
	),
	'ssh-options'=> '-p 37241'
);

$aliases['live'] = array(
	'uri'=> 'servayard.com',
	'root' => '/home/say/subdomains/live/public_html',
	'remote-host'=> 'host.lambtonshield.com',
	'remote-user'=> 'say',
	'path-aliases'=> array(
		'%files'=> 'sites/default/files',
	)
);
