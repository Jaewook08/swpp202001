import java.io.IOException;

interface InputStream {
    public int read() throws IOException;
    public int read(byte[] b, int offset, int len) throws IOException;
}

class LowerCaseInputStream implements InputStream {
    InputStream in;
    public LowerCaseInputStream(InputStream in) {
	this.in = in;
    }
    public int read() throws IOException {
	int c = in.read();
	return (c == -1 ? c : Character.toLowerCase((char)c));
    }
    public int read(byte[] b, int offset, int len) throws IOException {
	int result = in.read(b, offset, len);
	for (int i = offset; i < offset+result; i++) {
	    b[i] = (byte)Character.toLowerCase((char)b[i]);
	}
	return result;
    }
}
