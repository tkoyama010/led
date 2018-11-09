OPTION=-m leonardo

all:
	make build
	make upload
	make serial
build:
	ino build $(OPTION)
upload:
	ino upload $(OPTION)
serial:
	ino serial
