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

// Function: ForwardInitBuffer_3146A0
// Address: 0x3146a0 - 0x314710
void ForwardInitBuffer_3146A0_0x3146a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitBuffer_3146A0_0x3146a0");
#endif

    switch (ctx->pc) {
        case 0x3146d4u: goto label_3146d4;
        case 0x3146ecu: goto label_3146ec;
        case 0x3146f4u: goto label_3146f4;
        default: break;
    }

    ctx->pc = 0x3146a0u;

    // 0x3146a0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x3146a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x3146a4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3146a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3146a8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x3146a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x3146ac: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3146acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x3146b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3146b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3146b4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3146b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3146b8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3146B8u;
    {
        const bool branch_taken_0x3146b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3146BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3146B8u;
        // 0x3146bc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3146b8) {
            ctx->pc = 0x3146FCu;
            goto label_3146fc;
        }
    }
    ctx->pc = 0x3146C0u;
    // 0x3146c0: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x3146c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x3146c4: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x3146c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x3146c8: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x3146c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x3146cc: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x3146CCu;
    SET_GPR_U32(ctx, 31, 0x3146D4u);
    ctx->pc = 0x3146D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3146CCu;
    // 0x3146d0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x3146CCu, 0x3146D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3146D4u;
label_3146d4:
    // 0x3146d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3146d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3146d8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3146D8u;
    {
        const bool branch_taken_0x3146d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3146DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3146D8u;
        // 0x3146dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3146d8) {
            ctx->pc = 0x3146FCu;
            goto label_3146fc;
        }
    }
    ctx->pc = 0x3146E0u;
    // 0x3146e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3146e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3146e4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x3146E4u;
    SET_GPR_U32(ctx, 31, 0x3146ECu);
    ctx->pc = 0x3146E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3146E4u;
    // 0x3146e8: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3146E4u, 0x3146ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3146ECu;
label_3146ec:
    // 0x3146ec: 0xc064e66  jal         func_193998
    ctx->pc = 0x3146ECu;
    SET_GPR_U32(ctx, 31, 0x3146F4u);
    ctx->pc = 0x3146F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3146ECu;
    // 0x3146f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193998u, 0x3146ECu, 0x3146F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3146F4u;
label_3146f4:
    // 0x3146f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3146F4u;
    {
        const bool branch_taken_0x3146f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3146F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3146F4u;
        // 0x3146f8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3146f4) {
            ctx->pc = 0x314704u;
            goto label_314704;
        }
    }
    ctx->pc = 0x3146FCu;
label_3146fc:
    // 0x3146fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3146fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314700: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x314700u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_314704:
    // 0x314704: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x314704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314708: 0x3e00008  jr          $ra
    ctx->pc = 0x314708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314708u;
        // 0x31470c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314710u;
}
