#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: func_007CDAB8
// Address: 0x7cdab8 - 0x7cdb68
void func_007CDAB8_0x7cdab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007CDAB8_0x7cdab8");
#endif

    switch (ctx->pc) {
        case 0x7cdae0u: goto label_7cdae0;
        case 0x7cdb38u: goto label_7cdb38;
        default: break;
    }

    ctx->pc = 0x7cdab8u;

    // 0x7cdab8: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x7cdab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x7cdabc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x7cdabcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x7cdac0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x7cdac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x7cdac4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x7CDAC4u;
    {
        const bool branch_taken_0x7cdac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CDAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDAC4u;
        // 0x7cdac8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cdac4) {
            ctx->pc = 0x7CDB10u;
            goto label_7cdb10;
        }
    }
    ctx->pc = 0x7CDACCu;
    // 0x7cdacc: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x7cdaccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x7cdad0: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x7CDAD0u;
    {
        const bool branch_taken_0x7cdad0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x7CDAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDAD0u;
        // 0x7cdad4: 0xc33825  or          $a3, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cdad0) {
            ctx->pc = 0x7CDB10u;
            goto label_7cdb10;
        }
    }
    ctx->pc = 0x7CDAD8u;
    // 0x7cdad8: 0x24880010  addiu       $t0, $a0, 0x10
    ctx->pc = 0x7cdad8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x7cdadc: 0x3c09007d  lui         $t1, 0x7D
    ctx->pc = 0x7cdadcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)125 << 16));
label_7cdae0:
    // 0x7cdae0: 0x1051021  addu        $v0, $t0, $a1
    ctx->pc = 0x7cdae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x7cdae4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x7cdae4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7cdae8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x7cdae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x7cdaec: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x7cdaecu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x7cdaf0: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x7cdaf0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x7cdaf4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7cdaf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x7cdaf8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x7cdaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x7cdafc: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x7cdafcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x7cdb00: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x7CDB00u;
    {
        const bool branch_taken_0x7cdb00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CDB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDB00u;
        // 0x7cdb04: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cdb00) {
            ctx->pc = 0x7CDAE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7cdae0;
        }
    }
    ctx->pc = 0x7CDB08u;
    // 0x7cdb08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x7CDB08u;
    {
        const bool branch_taken_0x7cdb08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CDB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDB08u;
        // 0x7cdb0c: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cdb08) {
            ctx->pc = 0x7CDB18u;
            goto label_7cdb18;
        }
    }
    ctx->pc = 0x7CDB10u;
label_7cdb10:
    // 0x7cdb10: 0x3c09007d  lui         $t1, 0x7D
    ctx->pc = 0x7cdb10u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)125 << 16));
    // 0x7cdb14: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x7cdb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_7cdb18:
    // 0x7cdb18: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x7CDB18u;
    {
        const bool branch_taken_0x7cdb18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CDB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDB18u;
        // 0x7cdb1c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cdb18) {
            ctx->pc = 0x7CDB60u;
            goto label_7cdb60;
        }
    }
    ctx->pc = 0x7CDB20u;
    // 0x7cdb20: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x7cdb20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x7cdb24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7cdb24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cdb28: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x7CDB28u;
    {
        const bool branch_taken_0x7cdb28 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x7CDB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDB28u;
        // 0x7cdb2c: 0xc23825  or          $a3, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cdb28) {
            ctx->pc = 0x7CDB60u;
            goto label_7cdb60;
        }
    }
    ctx->pc = 0x7CDB30u;
    // 0x7cdb30: 0x24880050  addiu       $t0, $a0, 0x50
    ctx->pc = 0x7cdb30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x7cdb34: 0x0  nop
    ctx->pc = 0x7cdb34u;
    // NOP
label_7cdb38:
    // 0x7cdb38: 0x1051021  addu        $v0, $t0, $a1
    ctx->pc = 0x7cdb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x7cdb3c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x7cdb3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7cdb40: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x7cdb40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x7cdb44: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x7cdb44u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x7cdb48: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x7cdb48u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x7cdb4c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7cdb4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x7cdb50: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x7cdb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x7cdb54: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x7cdb54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x7cdb58: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x7CDB58u;
    {
        const bool branch_taken_0x7cdb58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CDB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CDB58u;
        // 0x7cdb5c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cdb58) {
            ctx->pc = 0x7CDB38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7cdb38;
        }
    }
    ctx->pc = 0x7CDB60u;
label_7cdb60:
    // 0x7cdb60: 0x80ebf34  j           func_3AFCD0
    ctx->pc = 0x7CDB60u;
    ctx->pc = 0x7CDB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CDB60u;
    // 0x7cdb64: 0x8d2407b8  lw          $a0, 0x7B8($t1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1976)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCD0u, 0x7CDB60u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x7CDB68u;
}
} // namespace gh_mcport
