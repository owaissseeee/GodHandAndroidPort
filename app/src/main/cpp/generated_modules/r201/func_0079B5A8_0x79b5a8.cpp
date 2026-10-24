#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r201_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r201
{
// Function: func_0079B5A8
// Address: 0x79b5a8 - 0x79b6a0
void func_0079B5A8_0x79b5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079B5A8_0x79b5a8");
#endif

    switch (ctx->pc) {
        case 0x79b5ccu: goto label_79b5cc;
        case 0x79b5f0u: goto label_79b5f0;
        case 0x79b5fcu: goto label_79b5fc;
        case 0x79b620u: goto label_79b620;
        case 0x79b63cu: goto label_79b63c;
        case 0x79b648u: goto label_79b648;
        case 0x79b674u: goto label_79b674;
        case 0x79b680u: goto label_79b680;
        case 0x79b68cu: goto label_79b68c;
        default: break;
    }

    ctx->pc = 0x79b5a8u;

    // 0x79b5a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79b5a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79b5ac: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x79b5acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x79b5b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x79b5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79b5b4: 0x24509b70  addiu       $s0, $v0, -0x6490
    ctx->pc = 0x79b5b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x79b5b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x79b5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x79b5bc: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x79b5bcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x79b5c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79b5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79b5c4: 0xc07ea80  jal         func_1FAA00
    ctx->pc = 0x79B5C4u;
    SET_GPR_U32(ctx, 31, 0x79B5CCu);
    ctx->pc = 0x79B5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B5C4u;
    // 0x79b5c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAA00u, 0x79B5C4u, 0x79B5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B5CCu;
label_79b5cc:
    // 0x79b5cc: 0x5c40000c  bgtzl       $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x79B5CCu;
    {
        const bool branch_taken_0x79b5cc = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x79b5cc) {
            ctx->pc = 0x79B5D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B5CCu;
            // 0x79b5d0: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B600u;
            goto label_79b600;
        }
    }
    ctx->pc = 0x79B5D4u;
    // 0x79b5d4: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x79b5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79b5d8: 0x24051002  addiu       $a1, $zero, 0x1002
    ctx->pc = 0x79b5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4098));
    // 0x79b5dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79b5dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b5e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79b5e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b5e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79b5e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b5e8: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x79B5E8u;
    SET_GPR_U32(ctx, 31, 0x79B5F0u);
    ctx->pc = 0x79B5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B5E8u;
    // 0x79b5ec: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x79B5E8u, 0x79B5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B5F0u;
label_79b5f0:
    // 0x79b5f0: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79b5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79b5f4: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79B5F4u;
    SET_GPR_U32(ctx, 31, 0x79B5FCu);
    ctx->pc = 0x79B5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B5F4u;
    // 0x79b5f8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79B5F4u, 0x79B5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B5FCu;
label_79b5fc:
    // 0x79b5fc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79b5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_79b600:
    // 0x79b600: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79b600u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b604: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79b604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79b608: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79b608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79b60c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x79b60cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x79b610: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79b610u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79b614: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79b614u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79b618: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79B618u;
    SET_GPR_U32(ctx, 31, 0x79B620u);
    ctx->pc = 0x79B61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B618u;
    // 0x79b61c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79B618u, 0x79B620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B620u;
label_79b620:
    // 0x79b620: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x79b620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79b624: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79b624u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b628: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79b628u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b62c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79b62cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b630: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x79b630u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b634: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x79B634u;
    SET_GPR_U32(ctx, 31, 0x79B63Cu);
    ctx->pc = 0x79B638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B634u;
    // 0x79b638: 0x24051003  addiu       $a1, $zero, 0x1003 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4099));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x79B634u, 0x79B63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B63Cu;
label_79b63c:
    // 0x79b63c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b640: 0xc07ea6e  jal         func_1FA9B8
    ctx->pc = 0x79B640u;
    SET_GPR_U32(ctx, 31, 0x79B648u);
    ctx->pc = 0x79B644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B640u;
    // 0x79b644: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA9B8u, 0x79B640u, 0x79B648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B648u;
label_79b648:
    // 0x79b648: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x79b648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x79b64c: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x79b64cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
    // 0x79b650: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x79b650u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x79b654: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x79b654u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x79b658: 0x2610ea60  addiu       $s0, $s0, -0x15A0
    ctx->pc = 0x79b658u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x79b65c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b65cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b660: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79b660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79b664: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b668: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x79b668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x79b66c: 0xc0b0ab8  jal         func_2C2AE0
    ctx->pc = 0x79B66Cu;
    SET_GPR_U32(ctx, 31, 0x79B674u);
    ctx->pc = 0x79B670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B66Cu;
    // 0x79b670: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x79B66Cu, 0x79B674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B674u;
label_79b674:
    // 0x79b674: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b678: 0xc0b0a02  jal         func_2C2808
    ctx->pc = 0x79B678u;
    SET_GPR_U32(ctx, 31, 0x79B680u);
    ctx->pc = 0x79B67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B678u;
    // 0x79b67c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2808u, 0x79B678u, 0x79B680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B680u;
label_79b680:
    // 0x79b680: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79b680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79b684: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79B684u;
    SET_GPR_U32(ctx, 31, 0x79B68Cu);
    ctx->pc = 0x79B688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B684u;
    // 0x79b688: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79B684u, 0x79B68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B68Cu;
label_79b68c:
    // 0x79b68c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x79b68cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79b690: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x79b690u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79b694: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79b694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79b698: 0x3e00008  jr          $ra
    ctx->pc = 0x79B698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B698u;
        // 0x79b69c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B6A0u;
}
} // namespace gh_r201
