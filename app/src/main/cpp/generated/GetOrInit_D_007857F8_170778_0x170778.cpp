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

// Function: GetOrInit_D_007857F8_170778
// Address: 0x170778 - 0x1707c8
void GetOrInit_D_007857F8_170778_0x170778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetOrInit_D_007857F8_170778_0x170778");
#endif

    switch (ctx->pc) {
        case 0x17079cu: goto label_17079c;
        case 0x1707b4u: goto label_1707b4;
        default: break;
    }

    ctx->pc = 0x170778u;

    // 0x170778: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x170778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17077c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x17077cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x170780: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x170780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x170784: 0x8c6257f8  lw          $v0, 0x57F8($v1)
    ctx->pc = 0x170784u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7857F8u));
    // 0x170788: 0x247057f8  addiu       $s0, $v1, 0x57F8
    ctx->pc = 0x170788u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22520));
    // 0x17078c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17078Cu;
    {
        const bool branch_taken_0x17078c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17078Cu;
        // 0x170790: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17078c) {
            ctx->pc = 0x1707B4u;
            goto label_1707b4;
        }
    }
    ctx->pc = 0x170794u;
    // 0x170794: 0xc070006  jal         func_1C0018
    ctx->pc = 0x170794u;
    SET_GPR_U32(ctx, 31, 0x17079Cu);
    ctx->pc = 0x1C0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0018u, 0x170794u, 0x17079Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17079Cu;
label_17079c:
    // 0x17079c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x17079cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x1707a0: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1707a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1707a4: 0x24a50698  addiu       $a1, $a1, 0x698
    ctx->pc = 0x1707a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1688));
    // 0x1707a8: 0x24c65808  addiu       $a2, $a2, 0x5808
    ctx->pc = 0x1707a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22536));
    // 0x1707ac: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1707ACu;
    SET_GPR_U32(ctx, 31, 0x1707B4u);
    ctx->pc = 0x1707B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1707ACu;
    // 0x1707b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1707ACu, 0x1707B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1707B4u;
label_1707b4:
    // 0x1707b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1707b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1707b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1707b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1707bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1707bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1707c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1707C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1707C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1707C0u;
        // 0x1707c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1707C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1707C8u;
}
