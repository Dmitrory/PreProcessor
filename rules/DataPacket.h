use pocketmine\utils\Binary;

#define $this->getLong() Binary::readLong($this->get(8))
#define $this->putLong(data) $this->buffer .= Binary::writeLong(data)

#define $this->getInt() Binary::readInt($this->get(4))
#define $this->putInt(data) $this->buffer .= Binary::writeInt(data)

#define $this->getShort() Binary::readShort($this->get(2))
#define $this->getSignedShort() Binary::readSignedShort($this->get(2))
#define $this->putShort(data) $this->buffer .= Binary::writeShort(data)

#define $this->getFloat() Binary::readFloat($this->get(4))
#define $this->putFloat(data) $this->buffer .= Binary::writeFloat(data)

#define $this->getTriad() Binary::readTriad($this->get(3))
#define $this->putTriad(data) $this->buffer .= Binary::writeTriad(data)

#define $this->getLTriad() Binary::readTriad($this->get(3))
#define $this->putLTriad(data) $this->buffer .= Binary::writeTriad(data)

#define $this->getByte() ord($this->get(1))
#define $this->putByte(data) $this->buffer .= chr(data)