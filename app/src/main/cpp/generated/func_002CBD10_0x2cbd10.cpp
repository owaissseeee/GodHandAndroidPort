#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_002CBD10
// Address: 0x2cbd10 - 0x2cbdc0
void func_002CBD10_0x2cbd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002CBD10_0x2cbd10");
#endif

    switch (ctx->pc) {
        case 0x2cbd40u: goto label_2cbd40;
        default: break;
    }

    ctx->pc = 0x2cbd10u;

    // 0x2cbd10: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2cbd10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2cbd14: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x2cbd14u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x2cbd18: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x2cbd18u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x2cbd1c: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x2cbd1cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x2cbd20: 0x8c8b01e0  lw          $t3, 0x1E0($a0)
    ctx->pc = 0x2cbd20u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 480)));
    // 0x2cbd24: 0x248e0164  addiu       $t6, $a0, 0x164
    ctx->pc = 0x2cbd24u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), 356));
    // 0x2cbd28: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x2cbd28u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x2cbd2c: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x2cbd2cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x2cbd30: 0x84403  sra         $t0, $t0, 16
    ctx->pc = 0x2cbd30u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 16));
    // 0x2cbd34: 0x94c03  sra         $t1, $t1, 16
    ctx->pc = 0x2cbd34u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 16));
    // 0x2cbd38: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2cbd38u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbd3c: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x2cbd3cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2cbd40:
    // 0x2cbd40: 0x25630010  addiu       $v1, $t3, 0x10
    ctx->pc = 0x2cbd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x2cbd44: 0x1ab102a  slt         $v0, $t5, $t3
    ctx->pc = 0x2cbd44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x2cbd48: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CBD48u;
    {
        const bool branch_taken_0x2cbd48 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBD48u;
        // 0x2cbd4c: 0x62580a  movz        $t3, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbd48) {
            ctx->pc = 0x2CBD64u;
            goto label_2cbd64;
        }
    }
    ctx->pc = 0x2CBD50u;
    // 0x2cbd50: 0xb10c0  sll         $v0, $t3, 3
    ctx->pc = 0x2cbd50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x2cbd54: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x2cbd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x2cbd58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2cbd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cbd5c: 0x54e30013  bnel        $a3, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2CBD5Cu;
    {
        const bool branch_taken_0x2cbd5c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x2cbd5c) {
            ctx->pc = 0x2CBD60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CBD5Cu;
            // 0x2cbd60: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CBDACu;
            goto label_2cbdac;
        }
    }
    ctx->pc = 0x2CBD64u;
label_2cbd64:
    // 0x2cbd64: 0xb10c0  sll         $v0, $t3, 3
    ctx->pc = 0x2cbd64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x2cbd68: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2cbd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2cbd6c: 0x84430160  lh          $v1, 0x160($v0)
    ctx->pc = 0x2cbd6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x2cbd70: 0x54a3000e  bnel        $a1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2CBD70u;
    {
        const bool branch_taken_0x2cbd70 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2cbd70) {
            ctx->pc = 0x2CBD74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CBD70u;
            // 0x2cbd74: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CBDACu;
            goto label_2cbdac;
        }
    }
    ctx->pc = 0x2CBD78u;
    // 0x2cbd78: 0x84430162  lh          $v1, 0x162($v0)
    ctx->pc = 0x2cbd78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 354)));
    // 0x2cbd7c: 0x14c30003  bne         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CBD7Cu;
    {
        const bool branch_taken_0x2cbd7c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x2CBD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBD7Cu;
        // 0x2cbd80: 0x68102a  slt         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbd7c) {
            ctx->pc = 0x2CBD8Cu;
            goto label_2cbd8c;
        }
    }
    ctx->pc = 0x2CBD84u;
    // 0x2cbd84: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBD84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBD84u;
        // 0x2cbd88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBD84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CBD8Cu;
label_2cbd8c:
    // 0x2cbd8c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CBD8Cu;
    {
        const bool branch_taken_0x2cbd8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CBD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBD8Cu;
        // 0x2cbd90: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbd8c) {
            ctx->pc = 0x2CBDACu;
            goto label_2cbdac;
        }
    }
    ctx->pc = 0x2CBD94u;
    // 0x2cbd94: 0x123102a  slt         $v0, $t1, $v1
    ctx->pc = 0x2cbd94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2cbd98: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CBD98u;
    {
        const bool branch_taken_0x2cbd98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cbd98) {
            ctx->pc = 0x2CBDACu;
            goto label_2cbdac;
        }
    }
    ctx->pc = 0x2CBDA0u;
    // 0x2cbda0: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x2cbda0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x2cbda4: 0x114d0004  beq         $t2, $t5, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CBDA4u;
    {
        const bool branch_taken_0x2cbda4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 13));
        if (branch_taken_0x2cbda4) {
            ctx->pc = 0x2CBDB8u;
            goto label_2cbdb8;
        }
    }
    ctx->pc = 0x2CBDACu;
label_2cbdac:
    // 0x2cbdac: 0x29820010  slti        $v0, $t4, 0x10
    ctx->pc = 0x2cbdacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2cbdb0: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2CBDB0u;
    {
        const bool branch_taken_0x2cbdb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CBDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBDB0u;
        // 0x2cbdb4: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbdb0) {
            ctx->pc = 0x2CBD40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cbd40;
        }
    }
    ctx->pc = 0x2CBDB8u;
label_2cbdb8:
    // 0x2cbdb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBDB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBDB8u;
        // 0x2cbdbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBDB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CBDC0u;
}
