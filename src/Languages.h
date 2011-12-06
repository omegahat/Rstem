
extern SN_env *french_ISO_8859_1_create_env(void);
extern void french_ISO_8859_1_close_env(SN_env*);
extern int french_ISO_8859_1_stem(struct SN_env *);
extern SN_env *english_ISO_8859_1_create_env(void);
extern void english_ISO_8859_1_close_env(SN_env*);
extern int english_ISO_8859_1_stem(struct SN_env *);
extern SN_env *italian_ISO_8859_1_create_env(void);
extern void italian_ISO_8859_1_close_env(SN_env*);
extern int italian_ISO_8859_1_stem(struct SN_env *);
extern SN_env *spanish_ISO_8859_1_create_env(void);
extern void spanish_ISO_8859_1_close_env(SN_env*);
extern int spanish_ISO_8859_1_stem(struct SN_env *);
#if 0
extern SN_env *romanian_ISO_8859_1_create_env(void);
extern void romanian_ISO_8859_1_close_env(SN_env*);
extern int romanian_ISO_8859_1_stem(struct SN_env *);
#endif
extern SN_env *portuguese_ISO_8859_1_create_env(void);
extern void portuguese_ISO_8859_1_close_env(SN_env*);
extern int portuguese_ISO_8859_1_stem(struct SN_env *);
extern SN_env *german_ISO_8859_1_create_env(void);
extern void german_ISO_8859_1_close_env(SN_env*);
extern int german_ISO_8859_1_stem(struct SN_env *);
extern SN_env *dutch_ISO_8859_1_create_env(void);
extern void dutch_ISO_8859_1_close_env(SN_env*);
extern int dutch_ISO_8859_1_stem(struct SN_env *);
extern SN_env *swedish_ISO_8859_1_create_env(void);
extern void swedish_ISO_8859_1_close_env(SN_env*);
extern int swedish_ISO_8859_1_stem(struct SN_env *);
extern SN_env *norwegian_ISO_8859_1_create_env(void);
extern void norwegian_ISO_8859_1_close_env(SN_env*);
extern int norwegian_ISO_8859_1_stem(struct SN_env *);
extern SN_env *danish_ISO_8859_1_create_env(void);
extern void danish_ISO_8859_1_close_env(SN_env*);
extern int danish_ISO_8859_1_stem(struct SN_env *);
extern SN_env *russian_ISO_8859_1_create_env(void);
extern void russian_ISO_8859_1_close_env(SN_env*);
extern int russian_ISO_8859_1_stem(struct SN_env *);
extern SN_env *finnish_ISO_8859_1_create_env(void);
extern void finnish_ISO_8859_1_close_env(SN_env*);
extern int finnish_ISO_8859_1_stem(struct SN_env *);
StemLanguage languages[] = {

{"french", &french_ISO_8859_1_create_env, &french_ISO_8859_1_close_env, &french_ISO_8859_1_stem},
{"english", &english_ISO_8859_1_create_env, &english_ISO_8859_1_close_env, &english_ISO_8859_1_stem},
{"italian", &italian_ISO_8859_1_create_env, &italian_ISO_8859_1_close_env, &italian_ISO_8859_1_stem},
{"spanish", &spanish_ISO_8859_1_create_env, &spanish_ISO_8859_1_close_env, &spanish_ISO_8859_1_stem},
#if 0
{"romanian", &romanian_ISO_8859_1_create_env, &romanian_ISO_8859_1_close_env, &romanian_ISO_8859_1_stem},
#endif
{"portuguese", &portuguese_ISO_8859_1_create_env, &portuguese_ISO_8859_1_close_env, &portuguese_ISO_8859_1_stem},
{"german", &german_ISO_8859_1_create_env, &german_ISO_8859_1_close_env, &german_ISO_8859_1_stem},
{"dutch", &dutch_ISO_8859_1_create_env, &dutch_ISO_8859_1_close_env, &dutch_ISO_8859_1_stem},
{"swedish", &swedish_ISO_8859_1_create_env, &swedish_ISO_8859_1_close_env, &swedish_ISO_8859_1_stem},
{"norwegian", &norwegian_ISO_8859_1_create_env, &norwegian_ISO_8859_1_close_env, &norwegian_ISO_8859_1_stem},
{"danish", &danish_ISO_8859_1_create_env, &danish_ISO_8859_1_close_env, &danish_ISO_8859_1_stem},
{"russian", &russian_ISO_8859_1_create_env, &russian_ISO_8859_1_close_env, &russian_ISO_8859_1_stem},
{"finnish", &finnish_ISO_8859_1_create_env, &finnish_ISO_8859_1_close_env, &finnish_ISO_8859_1_stem},
};
