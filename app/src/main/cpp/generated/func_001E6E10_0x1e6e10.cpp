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

// Function: func_001E6E10
// Address: 0x1e6e10 - 0x1e6e68
void func_001E6E10_0x1e6e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001E6E10_0x1e6e10");
#endif

    switch (ctx->pc) {
        case 0x1e6e48u: goto label_1e6e48;
        case 0x1e6e5cu: goto label_1e6e5c;
        default: break;
    }

    ctx->pc = 0x1e6e10u;

    // 0x1e6e10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e6e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e6e14: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1e6e14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6e18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6e1c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6E1Cu;
    {
        const bool branch_taken_0x1e6e1c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6E1Cu;
        // 0x1e6e20: 0xa46003e6  sh          $zero, 0x3E6($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 998), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6e1c) {
            ctx->pc = 0x1E6E2Cu;
            goto label_1e6e2c;
        }
    }
    ctx->pc = 0x1E6E24u;
    // 0x1e6e24: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1e6e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e6e28: 0xa46203e6  sh          $v0, 0x3E6($v1)
    ctx->pc = 0x1e6e28u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 998), (uint16_t)GPR_U32(ctx, 2));
label_1e6e2c:
    // 0x1e6e2c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E6E2Cu;
    {
        const bool branch_taken_0x1e6e2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6E2Cu;
        // 0x1e6e30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6e2c) {
            ctx->pc = 0x1E6E50u;
            goto label_1e6e50;
        }
    }
    ctx->pc = 0x1E6E34u;
    // 0x1e6e34: 0x946203e6  lhu         $v0, 0x3E6($v1)
    ctx->pc = 0x1e6e34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 998)));
    // 0x1e6e38: 0x8c6403c8  lw          $a0, 0x3C8($v1)
    ctx->pc = 0x1e6e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 968)));
    // 0x1e6e3c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1e6e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1e6e40: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E6E40u;
    SET_GPR_U32(ctx, 31, 0x1E6E48u);
    ctx->pc = 0x1E6E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6E40u;
    // 0x1e6e44: 0xa46203e6  sh          $v0, 0x3E6($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 998), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E6E40u, 0x1E6E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6E48u;
label_1e6e48:
    // 0x1e6e48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E6E48u;
    {
        const bool branch_taken_0x1e6e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6E48u;
        // 0x1e6e4c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6e48) {
            ctx->pc = 0x1E6E60u;
            goto label_1e6e60;
        }
    }
    ctx->pc = 0x1E6E50u;
label_1e6e50:
    // 0x1e6e50: 0x8c6403c8  lw          $a0, 0x3C8($v1)
    ctx->pc = 0x1e6e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 968)));
    // 0x1e6e54: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E6E54u;
    SET_GPR_U32(ctx, 31, 0x1E6E5Cu);
    ctx->pc = 0x1E6E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6E54u;
    // 0x1e6e58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E6E54u, 0x1E6E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6E5Cu;
label_1e6e5c:
    // 0x1e6e5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e6e60:
    // 0x1e6e60: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6E60u;
        // 0x1e6e64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6E60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6E68u;
}
