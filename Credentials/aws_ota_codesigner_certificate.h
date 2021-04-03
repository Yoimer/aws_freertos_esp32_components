/*
 * FreeRTOS V202012.00
 * Copyright (C) 2020 Amazon.com, Inc. or its affiliates.  All Rights Reserved.
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

#ifndef __AWS_CODESIGN_KEYS__H__
#define __AWS_CODESIGN_KEYS__H__

/*
 * PEM-encoded code signer certificate
 *
 * Must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"
 * "...base64 data...\n"
 * "-----END CERTIFICATE-----\n";
 */
//static const char signingcredentialSIGNING_CERTIFICATE_PEM[] = "Paste code signing certificate here.";
static const char signingcredentialSIGNING_CERTIFICATE_PEM[] ="-----BEGIN CERTIFICATE-----\n"
"MIIBXDCCAQKgAwIBAgIUJLComZ/ypzpb5Ap5uoVeq2cyla4wCgYIKoZIzj0EAwIw\n"
"GzEZMBcGA1UEAwwQeWRyZjE5QGdtYWlsLmNvbTAeFw0yMTAzMTYyMDExNDBaFw0y\n"
"MjAzMTYyMDExNDBaMBsxGTAXBgNVBAMMEHlkcmYxOUBnbWFpbC5jb20wWTATBgcq\n"
"hkjOPQIBBggqhkjOPQMBBwNCAAS8nTaIhKE+F2dHLM/zERX/RzedOrxIsbVgRZdm\n"
"ZM2gE2eFxXvB3j3fJOa9vuJkdD6ydx+QXgHER6+ovynFqcPzoyQwIjALBgNVHQ8E\n"
"BAMCB4AwEwYDVR0lBAwwCgYIKwYBBQUHAwMwCgYIKoZIzj0EAwIDSAAwRQIgSx2Z\n"
"w78PU0ECfoj5EqE3QKWKTLWKMpdeML+9j2xe7K8CIQDGkXx8qEFpbAZZJUqN+XCv\n"
"l7JbMaVDBqK03Hcnoe7hKg==\n"
"-----END CERTIFICATE-----\n";
#endif