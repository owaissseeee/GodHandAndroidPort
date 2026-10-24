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

// Function: func_001BE860
// Address: 0x1be860 - 0x1be8b0
void func_001BE860_0x1be860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001BE860_0x1be860");
#endif

    switch (ctx->pc) {
        case 0x1be884u: goto label_1be884;
        case 0x1be89cu: goto label_1be89c;
        default: break;
    }

    ctx->pc = 0x1be860u;

    // 0x1be860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1be860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1be864: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1be864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1be868: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1be868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1be86c: 0x8c626128  lw          $v0, 0x6128($v1)
    ctx->pc = 0x1be86cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786128u));
    // 0x1be870: 0x24706128  addiu       $s0, $v1, 0x6128
    ctx->pc = 0x1be870u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24872));
    // 0x1be874: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BE874u;
    {
        const bool branch_taken_0x1be874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE874u;
        // 0x1be878: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be874) {
            ctx->pc = 0x1BE89Cu;
            goto label_1be89c;
        }
    }
    ctx->pc = 0x1BE87Cu;
    // 0x1be87c: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x1BE87Cu;
    SET_GPR_U32(ctx, 31, 0x1BE884u);
    ctx->pc = 0x1B8058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8058u, 0x1BE87Cu, 0x1BE884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE884u;
label_1be884:
    // 0x1be884: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x1be884u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x1be888: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1be888u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1be88c: 0x24a595a0  addiu       $a1, $a1, -0x6A60
    ctx->pc = 0x1be88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940064));
    // 0x1be890: 0x24c65878  addiu       $a2, $a2, 0x5878
    ctx->pc = 0x1be890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x1be894: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1BE894u;
    SET_GPR_U32(ctx, 31, 0x1BE89Cu);
    ctx->pc = 0x1BE898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE894u;
    // 0x1be898: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1BE894u, 0x1BE89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE89Cu;
label_1be89c:
    // 0x1be89c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1be89cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be8a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be8a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1be8a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be8a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE8A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE8A8u;
        // 0x1be8ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE8A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE8B0u;
}
