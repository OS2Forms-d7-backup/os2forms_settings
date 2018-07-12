<?php
/**
 * @file
 * os2forms_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function os2forms_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nemid_login_base_url_live';
  $strongarm->value = 'https://applet.danid.dk';
  $export['nemid_login_base_url_live'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nemid_login_base_url_test';
  $strongarm->value = 'https://appletk.danid.dk';
  $export['nemid_login_base_url_test'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nemid_login_certificateandkey_live';
  $strongarm->value = '../certificateandkey.pem';
  $export['nemid_login_certificateandkey_live'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nemid_login_certificateandkey_test';
  $strongarm->value = '../certificateandkey_test.pem';
  $export['nemid_login_certificateandkey_test'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nemid_login_certificate_test';
  $strongarm->value = '-----BEGIN CERTIFICATE-----
MIIGNDCCBRygAwIBAgIETBJt6DANBgkqhkiG9w0BAQsFADBIMQswCQYDVQQGEwJE
SzESMBAGA1UECgwJVFJVU1QyNDA4MSUwIwYDVQQDDBxUUlVTVDI0MDggU3lzdGVt
dGVzdCBWSUlJIENBMB4XDTE0MDMyNDEyNDA0M1oXDTE3MDMyNDEyMzkwOFowgYMx
CzAJBgNVBAYTAkRLMScwJQYDVQQKDB5ORVRTIERBTklEIEEvUyAvLyBDVlI6MzA4
MDg0NjAxSzAgBgNVBAUTGUNWUjozMDgwODQ2MC1VSUQ6MjUzNTE3MzgwJwYDVQQD
DCBORVRTIERBTklEIEEvUyAtIFRVIFZPQ0VTIGd5bGRpZzCCASIwDQYJKoZIhvcN
AQEBBQADggEPADCCAQoCggEBAJoe9UsBtUHUbW/I77XZhSOfdLH1yLf9Nfcvyr1G
9B1mej9OdzmAWn6fHm/ayZNG18g4Q3UUawCffph/rsbdA7qDqn0m74iUkGsNcXUU
eyGUiJYUeOvzlEpBAnBniQJKEFEorOhDFqEFBk2Sfl9RIoPgEgM25WbnX+bMaidB
eOsuWBbnhyBBsRyqO8f3EEhwhBX9MGwn4uue09NCLgw62HelyQ8EvrXgNL9LzwUt
Ln6KlLD5lgyJI4nzHr4w04pI/Z5CuqWmV7IoA7V/nr8xWUkRGNt2es7L9XBVEN69
SeXP1Mg5IibsIX65EVHVyblk48oSCmKuzMUM2AW+kz6EtQ8CAwEAAaOCAugwggLk
MA4GA1UdDwEB/wQEAwIEsDCBlAYIKwYBBQUHAQEEgYcwgYQwOwYIKwYBBQUHMAGG
L2h0dHA6Ly9vY3NwLnN5c3RlbXRlc3Q4LnRydXN0MjQwOC5jb20vcmVzcG9uZGVy
MEUGCCsGAQUFBzAChjlodHRwOi8vdi5haWEuc3lzdGVtdGVzdDgudHJ1c3QyNDA4
LmNvbS9zeXN0ZW10ZXN0OC1jYS5jZXIwggEgBgNVHSAEggEXMIIBEzCCAQ8GDSsG
AQQBgfRRAgQGAwQwgf0wLwYIKwYBBQUHAgEWI2h0dHA6Ly93d3cudHJ1c3QyNDA4
LmNvbS9yZXBvc2l0b3J5MIHJBggrBgEFBQcCAjCBvDAMFgVEYW5JRDADAgEBGoGr
RGFuSUQgdGVzdCBjZXJ0aWZpa2F0ZXIgZnJhIGRlbm5lIENBIHVkc3RlZGVzIHVu
ZGVyIE9JRCAxLjMuNi4xLjQuMS4zMTMxMy4yLjQuNi4zLjQuIERhbklEIHRlc3Qg
Y2VydGlmaWNhdGVzIGZyb20gdGhpcyBDQSBhcmUgaXNzdWVkIHVuZGVyIE9JRCAx
LjMuNi4xLjQuMS4zMTMxMy4yLjQuNi4zLjQuMB4GA1UdEQQXMBWBE3R1LXN1cHBv
cnRAZGFuaWQuZGswgasGA1UdHwSBozCBoDA6oDigNoY0aHR0cDovL2NybC5zeXN0
ZW10ZXN0OC50cnVzdDI0MDguY29tL3N5c3RlbXRlc3Q4LmNybDBioGCgXqRcMFox
CzAJBgNVBAYTAkRLMRIwEAYDVQQKDAlUUlVTVDI0MDgxJTAjBgNVBAMMHFRSVVNU
MjQwOCBTeXN0ZW10ZXN0IFZJSUkgQ0ExEDAOBgNVBAMMB0NSTDE2NjYwHwYDVR0j
BBgwFoAUlhs2EzsiKcI9+ef5k+vGyz4SXwQwHQYDVR0OBBYEFJkaQjzszJqwFiTo
ZiRGmYQrk1w0MAkGA1UdEwQCMAAwDQYJKoZIhvcNAQELBQADggEBAM7023pMr/wc
octe4vUBjE1dBIrW6n4RYxebzs80zC7WVyZbDvKAAuomq/tMPes822ilhWVasH0W
pk7JJMoDoqa3DYLCOKtvE6GhZCAghKpzPbnmGyOpvEclWRxruwEMSPNK2Y+OGZux
hk/5G7uylxoBhuW9Sb2hAAOZlxZ92dBJG/SwelPjeTHhWdy/zojT3OsZHOi/wYdM
05uMIrSe3WrnlpJLowcFk1JPXLfIGPDbY/y/T/jmVWosO2Gi2kGZ4e8djNq+VMmN
tvw7spmc45CIaIU/pT4WF5sjrK4RoEX05sFDJrDMGYRDhc0q1LdnPPrpPEsr2zbE
6nb7TZG4MU0=
-----END CERTIFICATE-----';
  $export['nemid_login_certificate_test'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nemid_login_form_help';
  $strongarm->value = array(
    'value' => '<p><strong>Hvorfor skal jeg logge på med NemID?</strong></p>

<p>Du skal logge på med dit NemID for din egen sikkerheds skyld, så det kun er dig, der kan udfylde denne blanket.</p>

<p><strong>Jeg har ikke NemID</strong></p>

<p>Du kan bestille et NemID på&nbsp;<a href="http://www.nemid.nu/">www.NemId.nu</a>, hvis du har et gyldigt pas eller kørekort. Hvis du ikke har et gyldigt pas eller kørekort, skal du bestille tid i Borgerservice hos din kommune.</p>

<p>Hvis du ikke er interesseret i at få NemID kan du få hjælp til at udfylde blanketten i Borgerservice - Ballerup kommune. Du kan bestille tid på telefon 4477 2000</p>
',
    'format' => 'filtered_html',
  );
  $export['nemid_login_form_help'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nemid_login_mode';
  $strongarm->value = 'live';
  $export['nemid_login_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nemid_login_private_key_password_test';
  $strongarm->value = 'Test1234';
  $export['nemid_login_private_key_password_test'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nemid_login_private_key_test';
  $strongarm->value = '-----BEGIN PRIVATE KEY-----
MIIEvQIBADANBgkqhkiG9w0BAQEFAASCBKcwggSjAgEAAoIBAQCaHvVLAbVB1G1v
yO+12YUjn3Sx9ci3/TX3L8q9RvQdZno/Tnc5gFp+nx5v2smTRtfIOEN1FGsAn36Y
f67G3QO6g6p9Ju+IlJBrDXF1FHshlIiWFHjr85RKQQJwZ4kCShBRKKzoQxahBQZN
kn5fUSKD4BIDNuVm51/mzGonQXjrLlgW54cgQbEcqjvH9xBIcIQV/TBsJ+LrntPT
Qi4MOth3pckPBL614DS/S88FLS5+ipSw+ZYMiSOJ8x6+MNOKSP2eQrqlpleyKAO1
f56/MVlJERjbdnrOy/VwVRDevUnlz9TIOSIm7CF+uRFR1cm5ZOPKEgpirszFDNgF
vpM+hLUPAgMBAAECggEAd1qcOa8j8MwSyCwDP4AptDGrjJm8DIiCf2A6kKRfLlmL
OHWKrTQyYLbXOmZkDrMhLoQr8YKTbxMVVgIjlwvX9Fw87tj1TX9H7C+n+rSWuqWt
tRQ7pPaok2yO9/+mQeibhE6MwP4biy05+V8GkMhjg19Gc8jSlQN/6FvLpYT1oKK6
e2rbyTboIYDzkOQXT4N46A+ppWgQtChSpPF4/O5IX2QNtlJa6z7I9wAE7UWYLUCy
odlTp3xxCP0ZjndwEzZuNVHHax9hAZMfgrq3NRE+M0mbnD6h+IDfK1Pp8kSIeMDt
qWhOGUQmUdx7OmxKC0NI30kmN3voFDFzI5SXyD+J6QKBgQDMbCdKeWKVvz2D/+DC
qRfTv3r7ZGEKtMAtOMR/9cJrDL3WXJwqFkjfD5bIuO8czaIJhVBZC2gKD5bBoRn0
0sQ1jyJ52faKobSLbA8lAr0elMOQD84Sa3swNLTpfWaN7Mb4EHUrHxf6GxkRINeB
OOcSR9KhJ6ChiNSfYhYj7Ela1QKBgQDBAcdtvr3POR9RGdZqF83eqN/3mUS1N7oi
CjDHbAQTOMa48iJxJ99XomqKKFYcnLZyZDhXEqwGWUvkZuTKQUYY3FuaQdbZ79c4
ZlxYWIEQpkV1mUL7LxH2uA0t5riMrvnehFEE1pkBKQyzBKIoFMOq44WXXDlseCFI
ykbFN4g6UwKBgG41EKmx71hUFdIILSBFETdzT9YgM8EV2VWH+UgTMpGL+PyMSRTX
lsnLGbt1GFQq+GSxnrOi1qA170zMkbXPu0A0vp16yNPMgg14YGHPrC3Effo4yxxb
HbrLb41Bsfxp3or2NHTe+oo3+bemQQjFqK3OUtvXBV6Q6jBTLSSIyrNRAoGBAIrt
guXmNK6jCX3RQVugwtmRaZXKR4DCGkNCXpZNlClZ5wFdmZkmAEgOau4D1uhFjbaN
mVhj4lu3jz9bKTjE/3YJuA4zcjnxwFOiqroVCuI3LSxXI7W2zhFvrlzqBNGPaeDY
EZGP/xasu61ommiLecTafWDUS6leV2cT4xk2veJtAoGABwxHiaPymE1BgOvMd/1I
LDyox4tUypZ1sAX/2JEh6K9e17eHdN7t/uGtkt06fGnCBGGC7kC9qdkS+bmSR/cV
3xuQ+E6URLR634S2qI0lHF6XfaJfpp2LUXh41jz2GuutrKOIKjgHZZVdHAbxiLPa
+x9SxfrzSliMDfr/ZJyXBps=
-----END PRIVATE KEY-----';
  $export['nemid_login_private_key_test'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nemid_login_serviceid_live';
  $strongarm->value = '162400329';
  $export['nemid_login_serviceid_live'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nemid_login_serviceid_test';
  $strongarm->value = '162400329';
  $export['nemid_login_serviceid_test'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nemid_login_ui_mode_live';
  $strongarm->value = 'std';
  $export['nemid_login_ui_mode_live'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nemid_login_ui_mode_test';
  $strongarm->value = 'std';
  $export['nemid_login_ui_mode_test'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_export_existing';
  $strongarm->value = 'revision';
  $export['node_export_existing'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'use_serviceplatform_to_get_address';
  $strongarm->value = 1;
  $export['use_serviceplatform_to_get_address'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vcv_serviceplatformen_accountinginfo';
  $strongarm->value = 'Valghalla';
  $export['vcv_serviceplatformen_accountinginfo'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vcv_serviceplatformen_adrsog_location';
  $strongarm->value = '';
  $export['vcv_serviceplatformen_adrsog_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vcv_serviceplatformen_adrsog_serviceagreementuuid';
  $strongarm->value = '';
  $export['vcv_serviceplatformen_adrsog_serviceagreementuuid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vcv_serviceplatformen_adrsog_serviceuuid';
  $strongarm->value = '';
  $export['vcv_serviceplatformen_adrsog_serviceuuid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vcv_serviceplatformen_certfile';
  $strongarm->value = '/var/www/cert/certfile.pem';
  $export['vcv_serviceplatformen_certfile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vcv_serviceplatformen_location';
  $strongarm->value = 'https://prod.serviceplatformen.dk/service/CPRBasicInformation/CPRBasicInformation/1';
  $export['vcv_serviceplatformen_location'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vcv_serviceplatformen_serviceagreementuuid';
  $strongarm->value = 'b8cb9543-ff6e-4e84-a641-8617bd5315f0';
  $export['vcv_serviceplatformen_serviceagreementuuid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vcv_serviceplatformen_serviceuuid';
  $strongarm->value = 'd84f1ac8-76ca-11e3-abab-138252136bdf';
  $export['vcv_serviceplatformen_serviceuuid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vcv_serviceplatformen_usersystemuuid';
  $strongarm->value = '8a0aa317-6805-427a-acd5-78f2af15a3c9';
  $export['vcv_serviceplatformen_usersystemuuid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vcv_serviceplatformen_useruuid';
  $strongarm->value = 'c808550f-2e42-4fbc-82c2-2355a4905d6b';
  $export['vcv_serviceplatformen_useruuid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vcv_serviceplatformen_wsdl';
  $strongarm->value = 'https://www.serviceplatformen.dk/administration/wsdl/CPRBasicInformationService.wsdl';
  $export['vcv_serviceplatformen_wsdl'] = $strongarm;

  return $export;
}
