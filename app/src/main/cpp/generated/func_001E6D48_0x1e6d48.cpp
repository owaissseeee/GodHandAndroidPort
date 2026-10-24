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

// Function: func_001E6D48
// Address: 0x1e6d48 - 0x1e6da0
void func_001E6D48_0x1e6d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001E6D48_0x1e6d48");
#endif

    switch (ctx->pc) {
        case 0x1e6d80u: goto label_1e6d80;
        case 0x1e6d94u: goto label_1e6d94;
        default: break;
    }

    ctx->pc = 0x1e6d48u;

    // 0x1e6d48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e6d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e6d4c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1e6d4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6d50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6d54: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6D54u;
    {
        const bool branch_taken_0x1e6d54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6D54u;
        // 0x1e6d58: 0xa46003e4  sh          $zero, 0x3E4($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 996), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6d54) {
            ctx->pc = 0x1E6D64u;
            goto label_1e6d64;
        }
    }
    ctx->pc = 0x1E6D5Cu;
    // 0x1e6d5c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1e6d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e6d60: 0xa46203e4  sh          $v0, 0x3E4($v1)
    ctx->pc = 0x1e6d60u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 996), (uint16_t)GPR_U32(ctx, 2));
label_1e6d64:
    // 0x1e6d64: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E6D64u;
    {
        const bool branch_taken_0x1e6d64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6D64u;
        // 0x1e6d68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6d64) {
            ctx->pc = 0x1E6D88u;
            goto label_1e6d88;
        }
    }
    ctx->pc = 0x1E6D6Cu;
    // 0x1e6d6c: 0x946203e4  lhu         $v0, 0x3E4($v1)
    ctx->pc = 0x1e6d6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 996)));
    // 0x1e6d70: 0x8c6403c8  lw          $a0, 0x3C8($v1)
    ctx->pc = 0x1e6d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 968)));
    // 0x1e6d74: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1e6d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1e6d78: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E6D78u;
    SET_GPR_U32(ctx, 31, 0x1E6D80u);
    ctx->pc = 0x1E6D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6D78u;
    // 0x1e6d7c: 0xa46203e4  sh          $v0, 0x3E4($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 996), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E6D78u, 0x1E6D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6D80u;
label_1e6d80:
    // 0x1e6d80: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E6D80u;
    {
        const bool branch_taken_0x1e6d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6D80u;
        // 0x1e6d84: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6d80) {
            ctx->pc = 0x1E6D98u;
            goto label_1e6d98;
        }
    }
    ctx->pc = 0x1E6D88u;
label_1e6d88:
    // 0x1e6d88: 0x8c6403c8  lw          $a0, 0x3C8($v1)
    ctx->pc = 0x1e6d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 968)));
    // 0x1e6d8c: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E6D8Cu;
    SET_GPR_U32(ctx, 31, 0x1E6D94u);
    ctx->pc = 0x1E6D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6D8Cu;
    // 0x1e6d90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E6D8Cu, 0x1E6D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6D94u;
label_1e6d94:
    // 0x1e6d94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e6d98:
    // 0x1e6d98: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6D98u;
        // 0x1e6d9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6DA0u;
}
