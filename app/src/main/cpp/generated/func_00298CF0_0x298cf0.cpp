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

// Function: func_00298CF0
// Address: 0x298cf0 - 0x298d78
void func_00298CF0_0x298cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00298CF0_0x298cf0");
#endif

    switch (ctx->pc) {
        case 0x298d20u: goto label_298d20;
        case 0x298d50u: goto label_298d50;
        default: break;
    }

    ctx->pc = 0x298cf0u;

    // 0x298cf0: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x298cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x298cf4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x298cf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x298cf8: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x298cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x298cfc: 0x8044abe0  lb          $a0, -0x5420($v0)
    ctx->pc = 0x298cfcu;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x44ABE0u));
    // 0x298d00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x298d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x298d04: 0x2446abe0  addiu       $a2, $v0, -0x5420
    ctx->pc = 0x298d04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945760));
    // 0x298d08: 0x24684c58  addiu       $t0, $v1, 0x4C58
    ctx->pc = 0x298d08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x298d0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x298d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298d10: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x298D10u;
    {
        const bool branch_taken_0x298d10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x298D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298D10u;
        // 0x298d14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298d10) {
            ctx->pc = 0x298D48u;
            goto label_298d48;
        }
    }
    ctx->pc = 0x298D18u;
    // 0x298d18: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x298d18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x298d1c: 0x0  nop
    ctx->pc = 0x298d1cu;
    // NOP
label_298d20:
    // 0x298d20: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x298d20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x298d24: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x298d24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x298d28: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x298d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x298d2c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x298d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x298d30: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x298d30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x298d34: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x298D34u;
    {
        const bool branch_taken_0x298d34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x298D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298D34u;
        // 0x298d38: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298d34) {
            ctx->pc = 0x298D48u;
            goto label_298d48;
        }
    }
    ctx->pc = 0x298D3Cu;
    // 0x298d3c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x298d3cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x298d40: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x298D40u;
    {
        const bool branch_taken_0x298d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x298d40) {
            ctx->pc = 0x298D44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298D40u;
            // 0x298d44: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_298d20;
        }
    }
    ctx->pc = 0x298D48u;
label_298d48:
    // 0x298d48: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x298D48u;
    SET_GPR_U32(ctx, 31, 0x298D50u);
    ctx->pc = 0x298D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298D48u;
    // 0x298d4c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x298D48u, 0x298D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298D50u;
label_298d50:
    // 0x298d50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x298d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298d54: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x298D54u;
    {
        const bool branch_taken_0x298d54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x298D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298D54u;
        // 0x298d58: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298d54) {
            ctx->pc = 0x298D70u;
            goto label_298d70;
        }
    }
    ctx->pc = 0x298D5Cu;
    // 0x298d5c: 0x8c830250  lw          $v1, 0x250($a0)
    ctx->pc = 0x298d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
    // 0x298d60: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x298d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x298d64: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x298d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x298d68: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x298d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x298d6c: 0xac830250  sw          $v1, 0x250($a0)
    ctx->pc = 0x298d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 3));
label_298d70:
    // 0x298d70: 0x3e00008  jr          $ra
    ctx->pc = 0x298D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298D70u;
        // 0x298d74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298D78u;
}
