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

// Function: GetSingleton786178_1D0C28
// Address: 0x1d0c28 - 0x1d0c78
void GetSingleton786178_1D0C28_0x1d0c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSingleton786178_1D0C28_0x1d0c28");
#endif

    switch (ctx->pc) {
        case 0x1d0c4cu: goto label_1d0c4c;
        case 0x1d0c64u: goto label_1d0c64;
        default: break;
    }

    ctx->pc = 0x1d0c28u;

    // 0x1d0c28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d0c2c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1d0c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1d0c30: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d0c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d0c34: 0x8c626178  lw          $v0, 0x6178($v1)
    ctx->pc = 0x1d0c34u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786178u));
    // 0x1d0c38: 0x24706178  addiu       $s0, $v1, 0x6178
    ctx->pc = 0x1d0c38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24952));
    // 0x1d0c3c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D0C3Cu;
    {
        const bool branch_taken_0x1d0c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0C3Cu;
        // 0x1d0c40: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0c3c) {
            ctx->pc = 0x1D0C64u;
            goto label_1d0c64;
        }
    }
    ctx->pc = 0x1D0C44u;
    // 0x1d0c44: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x1D0C44u;
    SET_GPR_U32(ctx, 31, 0x1D0C4Cu);
    ctx->pc = 0x1B8058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8058u, 0x1D0C44u, 0x1D0C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0C4Cu;
label_1d0c4c:
    // 0x1d0c4c: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x1d0c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x1d0c50: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1d0c50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1d0c54: 0x24a5ab48  addiu       $a1, $a1, -0x54B8
    ctx->pc = 0x1d0c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945608));
    // 0x1d0c58: 0x24c65878  addiu       $a2, $a2, 0x5878
    ctx->pc = 0x1d0c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x1d0c5c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1D0C5Cu;
    SET_GPR_U32(ctx, 31, 0x1D0C64u);
    ctx->pc = 0x1D0C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0C5Cu;
    // 0x1d0c60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1D0C5Cu, 0x1D0C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0C64u;
label_1d0c64:
    // 0x1d0c64: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d0c64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0c68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0c6c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d0c6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0c70: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0C70u;
        // 0x1d0c74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0C78u;
}
