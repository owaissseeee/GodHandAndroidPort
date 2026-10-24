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

// Function: MessWin_closeIfNoEndCode
// Address: 0x2b43b0 - 0x2b4428
void MessWin_closeIfNoEndCode_0x2b43b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MessWin_closeIfNoEndCode_0x2b43b0");
#endif

    switch (ctx->pc) {
        case 0x2b43ccu: goto label_2b43cc;
        case 0x2b43e4u: goto label_2b43e4;
        case 0x2b43fcu: goto label_2b43fc;
        case 0x2b4414u: goto label_2b4414;
        default: break;
    }

    ctx->pc = 0x2b43b0u;

    // 0x2b43b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b43b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b43b4: 0x3406d200  ori         $a2, $zero, 0xD200
    ctx->pc = 0x2b43b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53760);
    // 0x2b43b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b43b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b43bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b43bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b43c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b43c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b43c4: 0xc0ad17e  jal         func_2B45F8
    ctx->pc = 0x2B43C4u;
    SET_GPR_U32(ctx, 31, 0x2B43CCu);
    ctx->pc = 0x2B43C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B43C4u;
    // 0x2b43c8: 0x8e05008c  lw          $a1, 0x8C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B45F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B45F8u, 0x2B43C4u, 0x2B43CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B43CCu;
label_2b43cc:
    // 0x2b43cc: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2B43CCu;
    {
        const bool branch_taken_0x2b43cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b43cc) {
            ctx->pc = 0x2B43D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B43CCu;
            // 0x2b43d0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4418u;
            goto label_2b4418;
        }
    }
    ctx->pc = 0x2B43D4u;
    // 0x2b43d4: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x2b43d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2b43d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b43d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b43dc: 0xc0ad17e  jal         func_2B45F8
    ctx->pc = 0x2B43DCu;
    SET_GPR_U32(ctx, 31, 0x2B43E4u);
    ctx->pc = 0x2B43E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B43DCu;
    // 0x2b43e0: 0x3406d900  ori         $a2, $zero, 0xD900 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55552);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B45F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B45F8u, 0x2B43DCu, 0x2B43E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B43E4u;
label_2b43e4:
    // 0x2b43e4: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2B43E4u;
    {
        const bool branch_taken_0x2b43e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b43e4) {
            ctx->pc = 0x2B43E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B43E4u;
            // 0x2b43e8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4418u;
            goto label_2b4418;
        }
    }
    ctx->pc = 0x2B43ECu;
    // 0x2b43ec: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x2b43ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2b43f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b43f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b43f4: 0xc0ad17e  jal         func_2B45F8
    ctx->pc = 0x2B43F4u;
    SET_GPR_U32(ctx, 31, 0x2B43FCu);
    ctx->pc = 0x2B43F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B43F4u;
    // 0x2b43f8: 0x3406da00  ori         $a2, $zero, 0xDA00 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55808);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B45F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B45F8u, 0x2B43F4u, 0x2B43FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B43FCu;
label_2b43fc:
    // 0x2b43fc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B43FCu;
    {
        const bool branch_taken_0x2b43fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b43fc) {
            ctx->pc = 0x2B4400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B43FCu;
            // 0x2b4400: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4418u;
            goto label_2b4418;
        }
    }
    ctx->pc = 0x2B4404u;
    // 0x2b4404: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b4404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4408: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b4408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b440c: 0xc0ad10a  jal         func_2B4428
    ctx->pc = 0x2B440Cu;
    SET_GPR_U32(ctx, 31, 0x2B4414u);
    ctx->pc = 0x2B4410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B440Cu;
    // 0x2b4410: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4428u, 0x2B440Cu, 0x2B4414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4414u;
label_2b4414:
    // 0x2b4414: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b4414u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b4418:
    // 0x2b4418: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b4418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b441c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B441Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B441Cu;
        // 0x2b4420: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B441Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4424u;
    // 0x2b4424: 0x0  nop
    ctx->pc = 0x2b4424u;
    // NOP
    ctx->pc = 0x2b4428u;
}
