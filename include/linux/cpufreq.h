#ifdef CONFIG_CPU_FREQ_GOV_PERFORMANCE
extern struct cpufreq_governor cpufreq_gov_performance;
#ifdef CONFIG_CPU_FREQ_DEFAULT_GOV_PERFORMANCE
#define CPUFREQ_DEFAULT_GOVERNOR	(&cpufreq_gov_performance)
#elif defined(CONFIG_CPU_FREQ_DEFAULT_GOV_POWERSAVE)
extern struct cpufreq_governor cpufreq_gov_powersave;
#define CPUFREQ_DEFAULT_GOVERNOR	(&cpufreq_gov_powersave)
#elif defined(CONFIG_CPU_FREQ_DEFAULT_GOV_USERSPACE)
extern struct cpufreq_governor cpufreq_gov_userspace;
#define CPUFREQ_DEFAULT_GOVERNOR	(&cpufreq_gov_userspace)
#elif defined(CONFIG_CPU_FREQ_DEFAULT_GOV_ONDEMAND)
extern struct cpufreq_governor cpufreq_gov_ondemand;
#define CPUFREQ_DEFAULT_GOVERNOR	(&cpufreq_gov_ondemand)
#elif defined(CONFIG_CPU_FREQ_DEFAULT_GOV_CONSERVATIVE)
extern struct cpufreq_governor cpufreq_gov_conservative;
#define CPUFREQ_DEFAULT_GOVERNOR	(&cpufreq_gov_conservative)
#elif defined(CONFIG_CPU_FREQ_DEFAULT_GOV_INTERACTIVE)
extern struct cpufreq_governor cpufreq_gov_interactive;
#define CPUFREQ_DEFAULT_GOVERNOR	(&cpufreq_gov_interactive)
#elif defined(CONFIG_CPU_FREQ_DEFAULT_GOV_DYNAMIC_INTERACTIVE)
extern struct cpufreq_governor cpufreq_gov_dynamic_interactive;
#define CPUFREQ_DEFAULT_GOVERNOR	(&cpufreq_gov_dynamic_interactive)
#elif defined(CONFIG_CPU_FREQ_DEFAULT_GOV_HOTPLUG)
extern struct cpufreq_governor cpufreq_gov_hotplug;
#define CPUFREQ_DEFAULT_GOVERNOR	(&cpufreq_gov_hotplug)
#elif defined(CONFIG_CPU_FREQ_DEFAULT_GOV_LAZY)
extern struct cpufreq_governor cpufreq_gov_lazy;
#define CPUFREQ_DEFAULT_GOVERNOR  (&cpufreq_gov_lazy)
#elif defined(CONFIG_CPU_FREQ_DEFAULT_GOV_WHEATLEY)
extern struct cpufreq_governor cpufreq_gov_wheatley;
#define CPUFREQ_DEFAULT_GOVERNOR  (&cpufreq_gov_wheatley)
#endif
