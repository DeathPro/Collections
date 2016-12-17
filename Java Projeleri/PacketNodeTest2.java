package javaileprogramlama;

class Node {
	private String type;
	private int ip;

	public void setVariable(String type, int ip) {
		this.type = type;
		this.ip = ip;
	}

	public String getType() {
		return type;
	}

	public int getIp() {
		return ip;
	}

	public void sendPacket(Packet p1) {
		System.out.println("Data Sent From " + p1.getSourceId() + " to " + p1.getDestId());
		// System.out.println("Type : " + p1.getType());
		// System.out.println("Source Id : " + p1.getSourceId());
	}

	public void receivePacket(Packet p1) {
		System.out.println("Data Receive From " + p1.getDestId() + " to " + p1.getSourceId());
		// System.out.println("Type : " + p1.getType());
		// System.out.println("Destination Id : " + p1.getDestId());
	}
}

class Packet {
	private String type;
	private int sourceId;
	private int destId;

	public void setVariable(String type, int sourceId, int destId) {
		this.type = type;
		this.sourceId = sourceId;
		this.destId = destId;
	}

	public String getType() {
		return type;
	}

	public int getSourceId() {
		return sourceId;
	}

	public int getDestId() {
		return destId;
	}
}

public class PacketNodeTest2 {

	public static void main(String[] args) {
		Node n1 = new Node();
		Node n2 = new Node();
		Packet p1 = new Packet();
		n1.setVariable("c1", 196);
		n2.setVariable("r1", 197);
		p1.setVariable("Control", n1.getIp(), n2.getIp());
		n1.sendPacket(p1);
		n2.receivePacket(p1);
	}

}
