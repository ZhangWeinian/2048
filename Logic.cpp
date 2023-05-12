#include "Base.h"

int main(void)
{
	game_1 game_2048;

	do
	{
		// 是否开始游戏
		if (!game_2048.begin())
		{
			return 0;
		}

		// 先落两子
		game_2048.board_add();
		game_2048.board_add();

		// 初始化棋盘
		game_2048.display_board();

		do
		{
			// 我方操作
			if (game_2048.go_to() == -1)
			{
				break;
			}

			// 电脑计算
			game_2048.board_add();

			system("cls");

			// 显示棋盘
			game_2048.display_board();

			// 判断输赢
			if (game_2048.is_win() == 1 || game_2048.is_win() == -1)
			{
				break;
			}
		} while (true);
	} while (true);

	return 0;
}
