/*
 * FreeRTOS V202012.00
 * Copyright (C) 2017 Amazon.com, Inc. or its affiliates.  All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * http://aws.amazon.com/freertos
 * http://www.FreeRTOS.org
 */

#ifndef AWS_CLIENT_CREDENTIAL_KEYS_H
#define AWS_CLIENT_CREDENTIAL_KEYS_H

/*
 * PEM-encoded client certificate
 *
 * Must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"\
 * "...base64 data...\n"\
 * "-----END CERTIFICATE-----\n"
 */
#define keyCLIENT_CERTIFICATE_PEM \
"-----BEGIN CERTIFICATE-----\n"\
"MIIDWTCCAkGgAwIBAgIUPWKYISH92FALhcmfc+oUoZ02x0wwDQYJKoZIhvcNAQEL\n"\
"BQAwTTFLMEkGA1UECwxCQW1hem9uIFdlYiBTZXJ2aWNlcyBPPUFtYXpvbi5jb20g\n"\
"SW5jLiBMPVNlYXR0bGUgU1Q9V2FzaGluZ3RvbiBDPVVTMB4XDTIxMDQwMzE3MjMx\n"\
"OFoXDTQ5MTIzMTIzNTk1OVowHjEcMBoGA1UEAwwTQVdTIElvVCBDZXJ0aWZpY2F0\n"\
"ZTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBAMrnhwRvGKKunXGcJvRh\n"\
"hQ27BFDVFqUrJsdUftQhLO+3a3uqNNcZlsKwbkOOxcBwicZv7g+Oqx317mY7Fn1b\n"\
"C+QWULl2Ae6sUlDq7hbCUQ/UWvYv25G3LoCNRq+bwdHfy1BqYjuOeBwpHkPi3Jj+\n"\
"B8JA9EODMIbxVcvMgzWYkC2Z6rOy75eMMEI7bPNCgfjdRfBWizjFNrAq9MF3V8MM\n"\
"D7w3yxnF04YpSdtZ2i9epcfAUb9qNuNMSB0f90EvnkuDuuEsmHKqaOA9ArbgtjgV\n"\
"QKEFwnZ1l2EWfS08FNd5rF8+q1vlygnVt9p216eFPoRcXzB82Ig59oOo7gnfV82B\n"\
"w6ECAwEAAaNgMF4wHwYDVR0jBBgwFoAUzx0XY7nIV0C6AISj9lpUY9CslA0wHQYD\n"\
"VR0OBBYEFEOsCdlfecPX9nhrVR8yCH7MchgoMAwGA1UdEwEB/wQCMAAwDgYDVR0P\n"\
"AQH/BAQDAgeAMA0GCSqGSIb3DQEBCwUAA4IBAQA/pHiTL9esv7cdVyxZ92bPOQA/\n"\
"Mn8YR5LjLciV8uAu5PA/DDW3dbN/47Wz/9oVsfQ1lKyHYjz50UxLTL2EdpoWEOtO\n"\
"rDefXBx8GzRRHTglFcFdEID+sq3Czd0cMhJKN7UY7lYdFN9brXHxT3+qTHvnQtvy\n"\
"AFTFtmZstWVFXFQCSfE4GuT9jEtsXr8vQd++Q9N6K3nhpUuxMjmTia4UxOF5t08+\n"\
"CR8IqlN1YzS395Cum5PgrcyPghpXGzzgeK+9V3u1TGWdnzjyrjhtQk7SWSrjNooX\n"\
"NtGcLLgkOKgHP1LFG75yWknkj2ZKE9jXRsreyXPM/WGbSVZBUf9ICGG8il9J\n"\
"-----END CERTIFICATE-----\n"

/*
 * PEM-encoded issuer certificate for AWS IoT Just In Time Registration (JITR).
 * This is required if you're using JITR, since the issuer (Certificate
 * Authority) of the client certificate is used by the server for routing the
 * device's initial request. (The device client certificate must always be
 * sent as well.) For more information about JITR, see:
 *  https://docs.aws.amazon.com/iot/latest/developerguide/jit-provisioning.html,
 *  https://aws.amazon.com/blogs/iot/just-in-time-registration-of-device-certificates-on-aws-iot/.
 *
 * If you're not using JITR, set below to NULL.
 *
 * Must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"\
 * "...base64 data...\n"\
 * "-----END CERTIFICATE-----\n"
 */
#define keyJITR_DEVICE_CERTIFICATE_AUTHORITY_PEM  ""

/*
 * PEM-encoded client private key.
 *
 * Must include the PEM header and footer:
 * "-----BEGIN RSA PRIVATE KEY-----\n"\
 * "...base64 data...\n"\
 * "-----END RSA PRIVATE KEY-----\n"
 */
#define keyCLIENT_PRIVATE_KEY_PEM \
"-----BEGIN RSA PRIVATE KEY-----\n"\
"MIIEpAIBAAKCAQEAyueHBG8Yoq6dcZwm9GGFDbsEUNUWpSsmx1R+1CEs77dre6o0\n"\
"1xmWwrBuQ47FwHCJxm/uD46rHfXuZjsWfVsL5BZQuXYB7qxSUOruFsJRD9Ra9i/b\n"\
"kbcugI1Gr5vB0d/LUGpiO454HCkeQ+LcmP4HwkD0Q4MwhvFVy8yDNZiQLZnqs7Lv\n"\
"l4wwQjts80KB+N1F8FaLOMU2sCr0wXdXwwwPvDfLGcXThilJ21naL16lx8BRv2o2\n"\
"40xIHR/3QS+eS4O64SyYcqpo4D0CtuC2OBVAoQXCdnWXYRZ9LTwU13msXz6rW+XK\n"\
"CdW32nbXp4U+hFxfMHzYiDn2g6juCd9XzYHDoQIDAQABAoIBAHhusfoUwueUgwjy\n"\
"6UA2PdYngelEgVtp4GuBoIHiaxyhnt9Y6GIf4xcNx3S74m5VncE1oHSFdtWiqmzt\n"\
"d2zSRJ2ODT33aDA1AerbdpP1pE2j+pWTVF0KAET3FdSXu5QJpFDHxCSbbHkygq9C\n"\
"kTMR3KMVEKad0IjX59e+PMbsFe+qE63MiYv6M7SofELB4/fiuSPnMfmcCAwR9AKI\n"\
"d5oBtBOYMOn57LAdgUgg4sv+wtzd7pmyNwnw4EHGVyvCIsWBHHd9sMZdodFjW7yO\n"\
"ujOsKydsgInSXJdqBkuj9gAdJGe/DCAkgXelbWYfGgx4SpEQmx4y/xBRu+7/XLnp\n"\
"9NZiPn0CgYEA9CVeJGsQnjkzMMFHR1GhQBCOI0E8+b3EPKSUpoqFb46RYjx78pUT\n"\
"dRh80u43dGTjYA0QXC/yq22iwyyrAc9Tvl0IE3/ajToatTKKi0nC6oy07QWcQYFF\n"\
"XA8LiNU+OuSjU0xi5vtI/Ib8nbb4q785WUxHcjVpFgSyVNZk9oFbbzMCgYEA1MGL\n"\
"Vf45uLoM8qEs58jx87TAyuOwoqoWbb4ghXCdb3Z0m1PZV+HteQ/ZOZTQxt2/YOhH\n"\
"MtCEq9MOZaRhPZ7JCaee3h9lgxYavYCVELcyDN+VUvDukEHRvJs1wUT6LLTprHMK\n"\
"Vgj4OKdgjwlkBSKHWfQlum9fcwAn4u82wqt70dsCgYEAwZfr6ZbYK46Rz+RC4AOT\n"\
"iJhYDQ6LCkF2nNuoX9LRch8rmyj44+df8WcEe8GXSX1CawSQ53jBxTt/Z6JAy4Oa\n"\
"FQXyBHxKUdg0G2BDSaWooJIIWTYsrCiUViY78DmfSdXIyKF2f0/clRl4sJrI3m8Y\n"\
"S33X3XEKrgH1Yp5KmskCNs8CgYAaZWTnJ2J788FVfP+4RisWpG9i/LrWg6nCtdsN\n"\
"EzrFMHopJ08I40P2SCwYQ8lfUvXCjS8AM/Sx6L6Zh7p0zbV9mClSv6x1hhGNP12/\n"\
"NCtmg3rgTnoatb/S2aLitq8fStbPCXrXz8cUKFgHhw+8v1rxoyPnLJg4CWXpduph\n"\
"Xqs/DwKBgQCocKBlcm7k+vuVLUHu6lC8GViaa1vIKrD6M3r1EWYgzAC3kIukEjkH\n"\
"50qN+FBv1ImTDL17Y3WBm8sfFT9aMuZ2l2n1a+C3zhz8CheY6H9Mxz3QeQ9HBG6K\n"\
"Bnv00QWpUmMMOOtREjMYtYxIA5nEYjkXz69vTiCo6MSlr+Ou/U4lWA==\n"\
"-----END RSA PRIVATE KEY-----\n"

#endif /* AWS_CLIENT_CREDENTIAL_KEYS_H */
