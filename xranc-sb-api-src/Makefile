include Makefile.am.libasncodec

LIBS += -lm
CFLAGS += $(ASN_MODULE_CFLAGS) -DPDU=XRANCPDU -I.
ASN_LIBRARY ?= libasncodec.a
#ASN_PROGRAM_SRCS ?= \
#	converter-example.c

#all: $(ASN_PROGRAM)

all: $(ASN_LIBRARY)

#$(ASN_PROGRAM): $(ASN_LIBRARY) $(ASN_PROGRAM_SRCS:.c=.o)
#	$(CC) $(CFLAGS) $(CPPFLAGS) -o $(ASN_PROGRAM) $(ASN_PROGRAM_SRCS:.c=.o) $(LDFLAGS) $(ASN_LIBRARY) $(LIBS)

$(ASN_LIBRARY): $(ASN_MODULE_SRCS:.c=.o)
	$(AR) rcs $@ $(ASN_MODULE_SRCS:.c=.o)

.SUFFIXES:
.SUFFIXES: .c .o

.c.o:
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -f $(ASN_LIBRARY)

generate: clean-generate
	git submodule update --init
	asn1c -fcompound-names -pdu=XRANCPDU ../xranc-sb-api/xRAN-API-IEs.asn1 ../xranc-sb-api/xRAN-API-PDUs.asn1

clean-generate: clean
#	rm -f $(ASN_MODULE_SRCS:.c=.o) $(ASN_PROGRAM_SRCS:.c=.o)
	rm -f $(ASN_MODULE_SRCS:.c=.o)


