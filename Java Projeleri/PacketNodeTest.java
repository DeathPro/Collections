package javaileprogramlama;

class Packet {
	private String type;
	private int sourceId;
	private int destId;

	public void setVariable(String typ, int sId, int dId) {
		type = typ;
		sourceId = sId;
		destId = dId;
	}

	String getType() {
		return type;
	}

	int getSourceId() {
		return sourceId;
	}

	int getDestId() {
		return destId;
	}
}

class Node {
	private String type;
	private int ip;

	public void setVariable(String typ, int i) {
		type = typ;
		ip = i;
	}

	public String getType() {
		return type;
	}

	public int getIp() {
		return ip;
	}

	public void sendPacket(Packet p) {
		System.out.println(p.getType() + " sent from " + p.getSourceId() + " to " + p.getDestId());
	}

	public void receivePacket(Packet p) {
	}
}

public class PacketNodeTest {
	public static void main(String[] args) {
		Node n1 = new Node();
		Node n2 = new Node();
		Packet p = new Packet();
		n1.setVariable("c1", 194);
		n2.setVariable("r1", 195);
		p.setVariable("control", n1.getIp(), n2.getIp());
		n1.sendPacket(p);
		n2.receivePacket(p);
	}
}
