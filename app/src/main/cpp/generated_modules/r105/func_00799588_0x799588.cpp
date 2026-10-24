#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r105_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r105
{
// Function: func_00799588
// Address: 0x799588 - 0x799678
void func_00799588_0x799588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799588_0x799588");
#endif

    switch (ctx->pc) {
        case 0x7995b8u: goto label_7995b8;
        case 0x7995d4u: goto label_7995d4;
        case 0x7995f8u: goto label_7995f8;
        case 0x799600u: goto label_799600;
        case 0x799610u: goto label_799610;
        case 0x799618u: goto label_799618;
        case 0x79964cu: goto label_79964c;
        case 0x799660u: goto label_799660;
        default: break;
    }

    ctx->pc = 0x799588u;

    // 0x799588: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x799588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79958c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x79958cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x799590: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x799590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x799594: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x799594u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799598: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x799598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x79959c: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x79959Cu;
    {
        const bool branch_taken_0x79959c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x7995A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79959Cu;
        // 0x7995a0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79959c) {
            ctx->pc = 0x7995C0u;
            goto label_7995c0;
        }
    }
    ctx->pc = 0x7995A4u;
    // 0x7995a4: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x7995a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x7995a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7995a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995ac: 0x8c44a900  lw          $a0, -0x5700($v0)
    ctx->pc = 0x7995acu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x79A900u));
    // 0x7995b0: 0xc071f28  jal         func_1C7CA0
    ctx->pc = 0x7995B0u;
    SET_GPR_U32(ctx, 31, 0x7995B8u);
    ctx->pc = 0x7995B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995B0u;
    // 0x7995b4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7CA0u, 0x7995B0u, 0x7995B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995B8u;
label_7995b8:
    // 0x7995b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x7995B8u;
    {
        const bool branch_taken_0x7995b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995B8u;
        // 0x7995bc: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995b8) {
            ctx->pc = 0x7995D8u;
            goto label_7995d8;
        }
    }
    ctx->pc = 0x7995C0u;
label_7995c0:
    // 0x7995c0: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x7995c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x7995c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7995c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7995c8: 0x8c44a900  lw          $a0, -0x5700($v0)
    ctx->pc = 0x7995c8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x79A900u));
    // 0x7995cc: 0xc071f28  jal         func_1C7CA0
    ctx->pc = 0x7995CCu;
    SET_GPR_U32(ctx, 31, 0x7995D4u);
    ctx->pc = 0x7995D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995CCu;
    // 0x7995d0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7CA0u, 0x7995CCu, 0x7995D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995D4u;
label_7995d4:
    // 0x7995d4: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x7995d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_7995d8:
    // 0x7995d8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x7995d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7995dc: 0x2604ee00  addiu       $a0, $s0, -0x1200
    ctx->pc = 0x7995dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x7995e0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x7995e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x7995e4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7995e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7995e8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7995e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7995ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7995ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995f0: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x7995F0u;
    SET_GPR_U32(ctx, 31, 0x7995F8u);
    ctx->pc = 0x7995F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995F0u;
    // 0x7995f4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x7995F0u, 0x7995F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995F8u;
label_7995f8:
    // 0x7995f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x7995F8u;
    {
        const bool branch_taken_0x7995f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7995f8) {
            ctx->pc = 0x799610u;
            goto label_799610;
        }
    }
    ctx->pc = 0x799600u;
label_799600:
    // 0x799600: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799604: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x799604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
    // 0x799608: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799608u;
    SET_GPR_U32(ctx, 31, 0x799610u);
    ctx->pc = 0x79960Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799608u;
    // 0x79960c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799608u, 0x799610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799610u;
label_799610:
    // 0x799610: 0xc070fce  jal         func_1C3F38
    ctx->pc = 0x799610u;
    SET_GPR_U32(ctx, 31, 0x799618u);
    ctx->pc = 0x799614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799610u;
    // 0x799614: 0x8e44a900  lw          $a0, -0x5700($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945024)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F38u, 0x799610u, 0x799618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799618u;
label_799618:
    // 0x799618: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x799618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79961c: 0x5043fff8  beql        $v0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x79961Cu;
    {
        const bool branch_taken_0x79961c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x79961c) {
            ctx->pc = 0x799620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79961Cu;
            // 0x799620: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799600;
        }
    }
    ctx->pc = 0x799624u;
    // 0x799624: 0x1623000b  bne         $s1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x799624u;
    {
        const bool branch_taken_0x799624 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x799628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799624u;
        // 0x799628: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799624) {
            ctx->pc = 0x799654u;
            goto label_799654;
        }
    }
    ctx->pc = 0x79962Cu;
    // 0x79962c: 0x2604ee00  addiu       $a0, $s0, -0x1200
    ctx->pc = 0x79962cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x799630: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799634: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x799634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x799638: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799638u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79963c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79963cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799640: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799640u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799644: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x799644u;
    SET_GPR_U32(ctx, 31, 0x79964Cu);
    ctx->pc = 0x799648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799644u;
    // 0x799648: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799644u, 0x79964Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79964Cu;
label_79964c:
    // 0x79964c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79964Cu;
    {
        const bool branch_taken_0x79964c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79964Cu;
        // 0x799650: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79964c) {
            ctx->pc = 0x799664u;
            goto label_799664;
        }
    }
    ctx->pc = 0x799654u;
label_799654:
    // 0x799654: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x799654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    // 0x799658: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799658u;
    SET_GPR_U32(ctx, 31, 0x799660u);
    ctx->pc = 0x79965Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799658u;
    // 0x79965c: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799658u, 0x799660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799660u;
label_799660:
    // 0x799660: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x799660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_799664:
    // 0x799664: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x799664u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799668: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x799668u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79966c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79966cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799670: 0x3e00008  jr          $ra
    ctx->pc = 0x799670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799670u;
        // 0x799674: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799678u;
}
} // namespace gh_r105
