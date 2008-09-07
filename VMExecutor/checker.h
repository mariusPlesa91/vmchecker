/*
 * checker.h - VMchecker header file
 *
 * (C) 2008 Adriana Szekeres <aaa_sz@yahoo.com>
 * coding issues, Razvan Deaconescu <razvan@rosedu.org>
 */

#ifndef CHECKER_H_
#define CHECKER_H_	1

#include <time.h>
#include <string>

using namespace std;

struct run_struct {
	string vmname;
	string vmdesc;
	string vmpath;
	string local_ip;
	string guest_user;
	string guest_pass;
	string guest_home;
	string guest_shell;
	string guest_home_in_bash;
	string guest_ip;
	string build_command_args;
	string run_command_args;
	Bool km_enable;	
};

/* define ip addresses*/
#define	WIN_VM_IP	"172.16.173.128"
#define LIN_VM_IP	"172.16.173.129"

/* define run timeout */
#define TIMEOUT		120

/* define nr. of variables in checker.conf */
#define NUM_VAR		9 

/* define path to files*/
#define jobs_path "/home/student/jobs/"
#define scripts_path "/home/student/scripts"

/* define file names */
#define CHECKER_FILE		"file.zip"
#define CHECKER_TEST		"tests.zip"
#define BUILD_SCRIPT		"build.sh"
#define RUN_SCRIPT		"run.sh"
#define LOCAL_SCRIPT		"local.sh"
#define BUILD_OUTPUT_FILE	"job_build"
#define RUN_OUTPUT_FILE		"job_run"
#define ERROR_OUTPUT_FILE	"job_errors"
#define RESULT_OUTPUT_FILE	"job_results"
#define KMESSAGE_OUTPUT_FILE	"job_km"
#define CHECKER_CONFIG		"checker.conf"

#endif
