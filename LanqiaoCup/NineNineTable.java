/**
 * @author AAmei
 * 功能：打印输出九九乘法表
 * 文件名 ：NineNineTable.java
 */
public class NineNineTable {
	public static void main(String[] args) {
		for(int i = 1, j = 1; i < 10; j = j==i?(++i/i):(j + 1))    //这里 ++i/i 始终等于一，++在前，先递增
		{
			System.out.print(j + "X" + i + "=" + i*j + (j==i?'\n':'\t'));
		}
	}
}
