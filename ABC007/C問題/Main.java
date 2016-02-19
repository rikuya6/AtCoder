import java.util.*;

public class Main{
	public static void main(String[] args){
		int r, c, sy, sx, gy, gx;
		boolean [][] route;
		int [][] move = {{1,0}, {-1,0}, {0,-1}, {0,1}}; //上下左右への移動方向。y,xの順番
		String work;
		Queue<Pair> que = new LinkedList<Pair>();
		Pair pos = null;
		Scanner sc = new Scanner(System.in);
		r = sc.nextInt(); c = sc.nextInt(); sy = sc.nextInt(); sx = sc.nextInt(); gy = sc.nextInt(); gx = sc.nextInt();
		route = new boolean[r][c];
		for(int i=0; i<r; i++){
			work = sc.next();
			for(int k=0; k<c; k++){
				if(work.charAt(k) == '.') route[i][k] = true;
				else route[i][k] = false;
			}
		}
		sc.close();
		que.add(new Pair(sy - 1, sx - 1, 0));
		while(!que.isEmpty()){
			pos = que.poll();
			if(pos.getY() == gy-1 && pos.getX() == gx-1){
				System.out.println(pos.getValue());
				break;
			}
			for(int i=0; i<4; i++){
				if(route[pos.getY() + move[i][0]][pos.getX() + move[i][1]] == true){
					que.add(new Pair(pos.getY() + move[i][0], pos.getX() + move[i][1], pos.getValue() + 1));
					route[pos.getY() + move[i][0]][pos.getX() + move[i][1]] = false;
				}
			}
		}
	}
}

class Pair{
	private int y, x, value;
	Pair(int y, int x, int value){
		this.y = y;
		this.x = x;
		this.value = value;
	}

	int getY(){
		return this.y;
	}

	int getX(){
		return this.x;
	}

	int getValue(){
		return this.value;
	}

}
