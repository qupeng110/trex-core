/*
Copyright (c) 2015-2015 Cisco Systems, Inc.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#include "UdpHeader.h"


void UDPHeader::dump(FILE *fd)
{
    fprintf(fd, "\nUDPHeader");
    fprintf(fd, "\nSourcePort 0x%.4X, DestPort 0x%.4X",
            getSourcePort(), getDestPort());
    fprintf(fd, "\nLength : %d, Checksum : 0x%.4X",
            getLength(), getChecksum());
	fprintf(fd, "\n");
}
