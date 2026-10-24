#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r301_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r301
{
// Function: __lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i
// Address: 0x79db98 - 0x79dbf8
void ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x79db98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___lexicographical_compare_3way__H2ZPCScZPCSc_X01X01X11X11_i_0x79db98");
#endif

    switch (ctx->pc) {
        case 0x79dbb0u: goto label_79dbb0;
        default: break;
    }

    ctx->pc = 0x79db98u;

    // 0x79db98: 0x1085000f  beq         $a0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x79DB98u;
    {
        const bool branch_taken_0x79db98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x79db98) {
            ctx->pc = 0x79DBD8u;
            goto label_79dbd8;
        }
    }
    ctx->pc = 0x79DBA0u;
    // 0x79dba0: 0x10c70013  beq         $a2, $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x79DBA0u;
    {
        const bool branch_taken_0x79dba0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x79DBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DBA0u;
        // 0x79dba4: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79dba0) {
            ctx->pc = 0x79DBF0u;
            goto label_79dbf0;
        }
    }
    ctx->pc = 0x79DBA8u;
    // 0x79dba8: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x79dba8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79dbac: 0x0  nop
    ctx->pc = 0x79dbacu;
    // NOP
label_79dbb0:
    // 0x79dbb0: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x79dbb0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79dbb4: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x79dbb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79dbb8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79DBB8u;
    {
        const bool branch_taken_0x79dbb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79DBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DBB8u;
        // 0x79dbbc: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79dbb8) {
            ctx->pc = 0x79DBE0u;
            goto label_79dbe0;
        }
    }
    ctx->pc = 0x79DBC0u;
    // 0x79dbc0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79DBC0u;
    {
        const bool branch_taken_0x79dbc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79DBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DBC0u;
        // 0x79dbc4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79dbc0) {
            ctx->pc = 0x79DBE8u;
            goto label_79dbe8;
        }
    }
    ctx->pc = 0x79DBC8u;
    // 0x79dbc8: 0x10850003  beq         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x79DBC8u;
    {
        const bool branch_taken_0x79dbc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x79DBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DBC8u;
        // 0x79dbcc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79dbc8) {
            ctx->pc = 0x79DBD8u;
            goto label_79dbd8;
        }
    }
    ctx->pc = 0x79DBD0u;
    // 0x79dbd0: 0x54c7fff7  bnel        $a2, $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79DBD0u;
    {
        const bool branch_taken_0x79dbd0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x79dbd0) {
            ctx->pc = 0x79DBD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79DBD0u;
            // 0x79dbd4: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79DBB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79dbb0;
        }
    }
    ctx->pc = 0x79DBD8u;
label_79dbd8:
    // 0x79dbd8: 0x10c70005  beq         $a2, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x79DBD8u;
    {
        const bool branch_taken_0x79dbd8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x79DBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DBD8u;
        // 0x79dbdc: 0x851026  xor         $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79dbd8) {
            ctx->pc = 0x79DBF0u;
            goto label_79dbf0;
        }
    }
    ctx->pc = 0x79DBE0u;
label_79dbe0:
    // 0x79dbe0: 0x3e00008  jr          $ra
    ctx->pc = 0x79DBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79DBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DBE0u;
        // 0x79dbe4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79DBE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79DBE8u;
label_79dbe8:
    // 0x79dbe8: 0x3e00008  jr          $ra
    ctx->pc = 0x79DBE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79DBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DBE8u;
        // 0x79dbec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79DBE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79DBF0u;
label_79dbf0:
    // 0x79dbf0: 0x3e00008  jr          $ra
    ctx->pc = 0x79DBF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79DBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DBF0u;
        // 0x79dbf4: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79DBF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79DBF8u;
}
} // namespace gh_r301
