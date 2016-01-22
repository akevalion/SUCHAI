/**
 * @file  cmdEPS.h
 * @author Tomas Opazo T
 * @author Francisco Reyes A
 * @date 2012
 * @copyright GNU Public License.
 *
 * Este header contiene las definiciones de comandos asociados a la EPS. Comandos
 * para configuracion y lectura de datos.
 */

#ifndef CMD_EPS_H
#define CMD_EPS_H

//#include "eps_suchai.h"
#include "nanopower.h"
#include "cmdIncludes.h"    //para CMD_XXX
#include "DebugIncludes.h"  //para con_printf
#include "SUCHAI_config.h"

/**
 * Lista de comandos disponibles.
 */
typedef enum{
    eps_id_isAlive=((unsigned int)(SCH_CMD_EPS)*0x100), ///< @cmd_first
    eps_id_initialize,   ///<@cmd
    eps_id_print_hk, ///<@cmd
            
    //Olds commands
    eps_id_readreg, ///< @cmd
    eps_id_status_read, ///< @cmd

    eps_id_update_internal_vars, ///< @cmd
    eps_id_soc_estimation, ///< @cmd
    eps_id_energy_estimation, ///< @cmd

    eps_id_current_meassurement, ///< @cmd
    eps_id_panel_pwr_meassuerement, ///< @cmd
    eps_id_pdm_off, ///< @cmd
    
    eps_id_print_all_reg, ///< @cmd

    //*********************
    eps_id_last_one    //Elemento sin sentido, solo se utiliza para marcar el largo del arreglo
}EPS_CmdIndx;


#define EPS_NCMD ((unsigned char)eps_id_last_one)


void eps_onResetCmdEPS(void);

//Commands
int eps_isAlive(void *param);
int eps_initialize(void *param);
int eps_print_hk(void *param);

#endif /* CMD_EPS_H */
