#include <stdio.h>
#include <stdlib.h>
#include <string.h>





struct _strings{
	size_t curr_len;
	size_t malloc_len;
	char *content;
};

typedef struct _strings soul_string;


soul_string *add(soul_string *s, const char *append);

soul_string *add(soul_string *s, const char *append){

	// 计算添加的字符串长度
	size_t allow = strlen(append);
	size_t total = s->malloc_len;
	if ((total - s->curr_len) < allow)
	{
		char *tmp = s->content;
		// 分配更多内存
		s->content = NULL;
		// 分配逻辑可以优化
		// 按照当前使用的倍数来分配
		total = (allow + s->malloc_len) * 2;
		size_t new_need = total;
		printf("重新分配内存 %ld\n",new_need);
		// 重新分配
		s->content = (char *)malloc(sizeof(char) *  new_need);
		if (tmp != NULL)
		{
			strcpy(s->content, tmp);
		}
	}
	// printf("1111\n");
	// 复制新的字符串到content 后面
	size_t i =0;
	for (i = 0; i < allow; ++i)
	{
		if (append[i] != '\0')
		{
			s->content[i + s->curr_len] = append[i];
		}
	}
	s->curr_len = i + s->curr_len;
	i = s->curr_len;
	for (; i < total; ++i)
	{
		s->content[i] = '\0';
	}

	s->malloc_len = total;

	return s;
}

void statics(soul_string *s);
void statics(soul_string *s)
{
	printf("\n当前内容 %s\n", s->content);
	printf("当前分配内存 %d\n", s->malloc_len);
	printf("当前分配内存使用 %d\n", s->curr_len);

}


int main(int argc, char const *argv[])
{
	soul_string s;
	s.malloc_len = 0;
	s.curr_len = 0;
	s.content = NULL;
	// s->malloc_len = (size_t)10;
	// s->curr_len = 0;
	// set(s, "1234");
	// printf("%s\n", s.content);

	// printf("%d\n", s->curr_len);

	char *add_arr[5] = {
		"11111111111111111",
		"22222222222222222",
		"aslkdjflksajflksadjklfsadjlkfjaslkfdjlkasjdlkj",
		"aslkdjflksajflksadjklfsadjlkfjaslkfdjlkasjdlkj892nknxkjhoiuadsf",
		"xnzmvcnxzkjsakjfoiwquroiweqsdakkjvlsadkjioxczuivouw09r890q",
	};
// return 1;
	int i;
	for ( i = 0; i < 10000; ++i)
	{
		sleep(1);
		add(&s, add_arr[i%5]);
		statics(&s);
	}
/*	statics(&s);
	add(&s, "9");
	statics(&s);
	add(&s, "abcdefg");
	statics(&s);
*/
	return 0;
}