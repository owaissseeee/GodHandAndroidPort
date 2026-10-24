#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r000_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r000
{
// Function: func_0079C358
// Address: 0x79c358 - 0x79c428
void func_0079C358_0x79c358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079C358_0x79c358");
#endif

    switch (ctx->pc) {
        case 0x79c3ccu: goto label_79c3cc;
        case 0x79c3d8u: goto label_79c3d8;
        case 0x79c3ecu: goto label_79c3ec;
        case 0x79c3fcu: goto label_79c3fc;
        case 0x79c408u: goto label_79c408;
        case 0x79c414u: goto label_79c414;
        default: break;
    }

    ctx->pc = 0x79c358u;

    // 0x79c358: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x79c358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x79c35c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79c35cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79c360: 0x8c637a28  lw          $v1, 0x7A28($v1)
    ctx->pc = 0x79c360u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A28u));
    // 0x79c364: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x79c364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x79c368: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x79c368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x79c36c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x79c36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79c370: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x79c370u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x79c374: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x79c374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x79c378: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x79C378u;
    {
        const bool branch_taken_0x79c378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C378u;
        // 0x79c37c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c378) {
            ctx->pc = 0x79C3D8u;
            goto label_79c3d8;
        }
    }
    ctx->pc = 0x79C380u;
    // 0x79c380: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x79c380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x79c384: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x79c384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x79c388: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x79C388u;
    {
        const bool branch_taken_0x79c388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C388u;
        // 0x79c38c: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c388) {
            ctx->pc = 0x79C3DCu;
            goto label_79c3dc;
        }
    }
    ctx->pc = 0x79C390u;
    // 0x79c390: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x79c390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x79c394: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x79c394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x79c398: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x79C398u;
    {
        const bool branch_taken_0x79c398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C398u;
        // 0x79c39c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c398) {
            ctx->pc = 0x79C3E0u;
            goto label_79c3e0;
        }
    }
    ctx->pc = 0x79C3A0u;
    // 0x79c3a0: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x79c3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x79c3a4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x79c3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x79c3a8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x79C3A8u;
    {
        const bool branch_taken_0x79c3a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C3A8u;
        // 0x79c3ac: 0x2610ea60  addiu       $s0, $s0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c3a8) {
            ctx->pc = 0x79C3E4u;
            goto label_79c3e4;
        }
    }
    ctx->pc = 0x79C3B0u;
    // 0x79c3b0: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x79c3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79c3b4: 0x2405102d  addiu       $a1, $zero, 0x102D
    ctx->pc = 0x79c3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4141));
    // 0x79c3b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79c3b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c3bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79c3bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c3c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79c3c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c3c4: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x79C3C4u;
    SET_GPR_U32(ctx, 31, 0x79C3CCu);
    ctx->pc = 0x79C3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C3C4u;
    // 0x79c3c8: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x79C3C4u, 0x79C3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C3CCu;
label_79c3cc:
    // 0x79c3cc: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79c3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79c3d0: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79C3D0u;
    SET_GPR_U32(ctx, 31, 0x79C3D8u);
    ctx->pc = 0x79C3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C3D0u;
    // 0x79c3d4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79C3D0u, 0x79C3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C3D8u;
label_79c3d8:
    // 0x79c3d8: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x79c3d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_79c3dc:
    // 0x79c3dc: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x79c3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_79c3e0:
    // 0x79c3e0: 0x2610ea60  addiu       $s0, $s0, -0x15A0
    ctx->pc = 0x79c3e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
label_79c3e4:
    // 0x79c3e4: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x79C3E4u;
    SET_GPR_U32(ctx, 31, 0x79C3ECu);
    ctx->pc = 0x79C3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C3E4u;
    // 0x79c3e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x79C3E4u, 0x79C3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C3ECu;
label_79c3ec:
    // 0x79c3ec: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79c3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79c3f0: 0x8c64ca70  lw          $a0, -0x3590($v1)
    ctx->pc = 0x79c3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x79CA70u));
    // 0x79c3f4: 0xc07d730  jal         func_1F5CC0
    ctx->pc = 0x79C3F4u;
    SET_GPR_U32(ctx, 31, 0x79C3FCu);
    ctx->pc = 0x79C3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C3F4u;
    // 0x79c3f8: 0x248461f0  addiu       $a0, $a0, 0x61F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5CC0u, 0x79C3F4u, 0x79C3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C3FCu;
label_79c3fc:
    // 0x79c3fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79c3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c400: 0xc0b0a54  jal         func_2C2950
    ctx->pc = 0x79C400u;
    SET_GPR_U32(ctx, 31, 0x79C408u);
    ctx->pc = 0x79C404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C400u;
    // 0x79c404: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x79C400u, 0x79C408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C408u;
label_79c408:
    // 0x79c408: 0x8e232f84  lw          $v1, 0x2F84($s1)
    ctx->pc = 0x79c408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79c40c: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79C40Cu;
    SET_GPR_U32(ctx, 31, 0x79C414u);
    ctx->pc = 0x79C410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C40Cu;
    // 0x79c410: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79C40Cu, 0x79C414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C414u;
label_79c414:
    // 0x79c414: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x79c414u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79c418: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x79c418u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79c41c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79c41cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79c420: 0x3e00008  jr          $ra
    ctx->pc = 0x79C420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C420u;
        // 0x79c424: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C428u;
}
} // namespace gh_r000
