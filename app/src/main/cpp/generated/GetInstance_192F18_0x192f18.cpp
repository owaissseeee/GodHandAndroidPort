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

// Function: GetInstance_192F18
// Address: 0x192f18 - 0x192f68
void GetInstance_192F18_0x192f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetInstance_192F18_0x192f18");
#endif

    switch (ctx->pc) {
        case 0x192f3cu: goto label_192f3c;
        case 0x192f54u: goto label_192f54;
        default: break;
    }

    ctx->pc = 0x192f18u;

    // 0x192f18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x192f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x192f1c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x192f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x192f20: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x192f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x192f24: 0x8c625c48  lw          $v0, 0x5C48($v1)
    ctx->pc = 0x192f24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785C48u));
    // 0x192f28: 0x24705c48  addiu       $s0, $v1, 0x5C48
    ctx->pc = 0x192f28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23624));
    // 0x192f2c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x192F2Cu;
    {
        const bool branch_taken_0x192f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x192F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192F2Cu;
        // 0x192f30: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192f2c) {
            ctx->pc = 0x192F54u;
            goto label_192f54;
        }
    }
    ctx->pc = 0x192F34u;
    // 0x192f34: 0xc070efa  jal         func_1C3BE8
    ctx->pc = 0x192F34u;
    SET_GPR_U32(ctx, 31, 0x192F3Cu);
    ctx->pc = 0x1C3BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3BE8u, 0x192F34u, 0x192F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192F3Cu;
label_192f3c:
    // 0x192f3c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x192f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x192f40: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x192f40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x192f44: 0x24a545a8  addiu       $a1, $a1, 0x45A8
    ctx->pc = 0x192f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17832));
    // 0x192f48: 0x24c65798  addiu       $a2, $a2, 0x5798
    ctx->pc = 0x192f48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22424));
    // 0x192f4c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x192F4Cu;
    SET_GPR_U32(ctx, 31, 0x192F54u);
    ctx->pc = 0x192F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192F4Cu;
    // 0x192f50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x192F4Cu, 0x192F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192F54u;
label_192f54:
    // 0x192f54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x192f54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192f58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x192f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192f5c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x192f5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192f60: 0x3e00008  jr          $ra
    ctx->pc = 0x192F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192F60u;
        // 0x192f64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192F60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192F68u;
}
