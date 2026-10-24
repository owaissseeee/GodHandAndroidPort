#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: __tf7cMcLoad
// Address: 0x7cf3b8 - 0x7cf430
void ps2___tf7cMcLoad_0x7cf3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf7cMcLoad_0x7cf3b8");
#endif

    switch (ctx->pc) {
        case 0x7cf400u: goto label_7cf400;
        case 0x7cf414u: goto label_7cf414;
        default: break;
    }

    ctx->pc = 0x7cf3b8u;

    // 0x7cf3b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x7cf3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x7cf3bc: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7cf3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7cf3c0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x7cf3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x7cf3c4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x7cf3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x7cf3c8: 0x245158b8  addiu       $s1, $v0, 0x58B8
    ctx->pc = 0x7cf3c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 22712));
    // 0x7cf3cc: 0x8c4358b8  lw          $v1, 0x58B8($v0)
    ctx->pc = 0x7cf3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7D58B8u));
    // 0x7cf3d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x7cf3d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cf3d4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x7cf3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x7cf3d8: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x7CF3D8u;
    {
        const bool branch_taken_0x7cf3d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CF3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CF3D8u;
        // 0x7cf3dc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cf3d8) {
            ctx->pc = 0x7CF414u;
            goto label_7cf414;
        }
    }
    ctx->pc = 0x7CF3E0u;
    // 0x7cf3e0: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7cf3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7cf3e4: 0x8c621480  lw          $v0, 0x1480($v1)
    ctx->pc = 0x7cf3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7D1480u));
    // 0x7cf3e8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7CF3E8u;
    {
        const bool branch_taken_0x7cf3e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CF3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CF3E8u;
        // 0x7cf3ec: 0x24701480  addiu       $s0, $v1, 0x1480 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 5248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cf3e8) {
            ctx->pc = 0x7CF400u;
            goto label_7cf400;
        }
    }
    ctx->pc = 0x7CF3F0u;
    // 0x7cf3f0: 0x3c05007d  lui         $a1, 0x7D
    ctx->pc = 0x7cf3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)125 << 16));
    // 0x7cf3f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7cf3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cf3f8: 0xc1f2614  jal         func_7C9850
    ctx->pc = 0x7CF3F8u;
    SET_GPR_U32(ctx, 31, 0x7CF400u);
    ctx->pc = 0x7CF3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CF3F8u;
    // 0x7cf3fc: 0x24a50ae8  addiu       $a1, $a1, 0xAE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C9850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9850u, 0x7CF3F8u, 0x7CF400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CF400u;
label_7cf400:
    // 0x7cf400: 0x3c05007d  lui         $a1, 0x7D
    ctx->pc = 0x7cf400u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)125 << 16));
    // 0x7cf404: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7cf404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cf408: 0x24a50af0  addiu       $a1, $a1, 0xAF0
    ctx->pc = 0x7cf408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2800));
    // 0x7cf40c: 0xc1f260c  jal         func_7C9830
    ctx->pc = 0x7CF40Cu;
    SET_GPR_U32(ctx, 31, 0x7CF414u);
    ctx->pc = 0x7CF410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CF40Cu;
    // 0x7cf410: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C9830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9830u, 0x7CF40Cu, 0x7CF414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CF414u;
label_7cf414:
    // 0x7cf414: 0x264258b8  addiu       $v0, $s2, 0x58B8
    ctx->pc = 0x7cf414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 22712));
    // 0x7cf418: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x7cf418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7cf41c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x7cf41cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7cf420: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x7cf420u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7cf424: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7cf424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7cf428: 0x3e00008  jr          $ra
    ctx->pc = 0x7CF428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CF42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CF428u;
        // 0x7cf42c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CF428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CF430u;
}
} // namespace gh_mcport
