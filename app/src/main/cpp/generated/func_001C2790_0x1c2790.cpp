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

// Function: func_001C2790
// Address: 0x1c2790 - 0x1c27e8
void func_001C2790_0x1c2790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001C2790_0x1c2790");
#endif

    switch (ctx->pc) {
        case 0x1c27b4u: goto label_1c27b4;
        case 0x1c27ccu: goto label_1c27cc;
        default: break;
    }

    ctx->pc = 0x1c2790u;

    // 0x1c2790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c2790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c2794: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1c2794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1c2798: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c2798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c279c: 0x8c626158  lw          $v0, 0x6158($v1)
    ctx->pc = 0x1c279cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786158u));
    // 0x1c27a0: 0x24706158  addiu       $s0, $v1, 0x6158
    ctx->pc = 0x1c27a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24920));
    // 0x1c27a4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C27A4u;
    {
        const bool branch_taken_0x1c27a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C27A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C27A4u;
        // 0x1c27a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c27a4) {
            ctx->pc = 0x1C27CCu;
            goto label_1c27cc;
        }
    }
    ctx->pc = 0x1C27ACu;
    // 0x1c27ac: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x1C27ACu;
    SET_GPR_U32(ctx, 31, 0x1C27B4u);
    ctx->pc = 0x1B8058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8058u, 0x1C27ACu, 0x1C27B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C27B4u;
label_1c27b4:
    // 0x1c27b4: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x1c27b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x1c27b8: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1c27b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1c27bc: 0x24a59c38  addiu       $a1, $a1, -0x63C8
    ctx->pc = 0x1c27bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941752));
    // 0x1c27c0: 0x24c65878  addiu       $a2, $a2, 0x5878
    ctx->pc = 0x1c27c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x1c27c4: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1C27C4u;
    SET_GPR_U32(ctx, 31, 0x1C27CCu);
    ctx->pc = 0x1C27C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C27C4u;
    // 0x1c27c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1C27C4u, 0x1C27CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C27CCu;
label_1c27cc:
    // 0x1c27cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c27ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c27d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c27d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c27d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c27d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c27d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C27D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C27DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C27D8u;
        // 0x1c27dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C27D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C27E0u;
    // 0x1c27e0: 0xa0820676  sb          $v0, 0x676($a0)
    ctx->pc = 0x1c27e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1654), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c27e4: 0x0  nop
    ctx->pc = 0x1c27e4u;
    // NOP
    ctx->pc = 0x1c27e8u;
}
