
![[Pasted image 20241221142153.png]]

some constants and types

		null
			constant macro
			used as pointer
		FILE
			type for handling I/O stream
			fpos_t to keep track of file
			from stdio.h
		EOF
			also used from other like indicacting failure
		size_t 
			used to represent datasize
			returned by sizeof
		pterfiff_t
			it can represent difference in two pointers
			between PTRDIFF_MAZ and PTRDIFF_MIN (stdio.h)
		_bool
			from stdbool.h
			two mactro constants true and false i.e 1,0
		
		
	Fixed - width integertype
		defined in stdint.h
		for portability
			int8_t
			int16_t
			int32_t
			int64_t
			uint8_t
			uint16_t
			uint32_t
			uint64_t