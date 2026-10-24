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
// Function: func_0079B530
// Address: 0x79b530 - 0x79b628
void func_0079B530_0x79b530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079B530_0x79b530");
#endif

    switch (ctx->pc) {
        case 0x79b558u: goto label_79b558;
        case 0x79b574u: goto label_79b574;
        case 0x79b5bcu: goto label_79b5bc;
        case 0x79b5dcu: goto label_79b5dc;
        case 0x79b5f0u: goto label_79b5f0;
        case 0x79b5fcu: goto label_79b5fc;
        case 0x79b604u: goto label_79b604;
        case 0x79b610u: goto label_79b610;
        default: break;
    }

    ctx->pc = 0x79b530u;

    // 0x79b530: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x79b530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79b534: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79b534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79b538: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x79b538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x79b53c: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x79b53cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x79b540: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x79b540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x79b544: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79b544u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79b548: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x79b548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x79b54c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79b54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79b550: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x79B550u;
    SET_GPR_U32(ctx, 31, 0x79B558u);
    ctx->pc = 0x79B554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B550u;
    // 0x79b554: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79B550u, 0x79B558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B558u;
label_79b558:
    // 0x79b558: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79b558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79b55c: 0x2405101e  addiu       $a1, $zero, 0x101E
    ctx->pc = 0x79b55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4126));
    // 0x79b560: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79b560u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b564: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79b564u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b568: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79b568u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b56c: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x79B56Cu;
    SET_GPR_U32(ctx, 31, 0x79B574u);
    ctx->pc = 0x79B570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B56Cu;
    // 0x79b570: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x79B56Cu, 0x79B574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B574u;
label_79b574:
    // 0x79b574: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79b574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79b578: 0x8c4323a4  lw          $v1, 0x23A4($v0)
    ctx->pc = 0x79b578u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C23A4u));
    // 0x79b57c: 0x84640bec  lh          $a0, 0xBEC($v1)
    ctx->pc = 0x79b57cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 3052)));
    // 0x79b580: 0x1480001e  bnez        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x79B580u;
    {
        const bool branch_taken_0x79b580 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B580u;
        // 0x79b584: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b580) {
            ctx->pc = 0x79B5FCu;
            goto label_79b5fc;
        }
    }
    ctx->pc = 0x79B588u;
    // 0x79b588: 0x3c120200  lui         $s2, 0x200
    ctx->pc = 0x79b588u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)512 << 16));
    // 0x79b58c: 0x8e039b70  lw          $v1, -0x6490($s0)
    ctx->pc = 0x79b58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941552)));
    // 0x79b590: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x79b590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x79b594: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x79b594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x79b598: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x79B598u;
    {
        const bool branch_taken_0x79b598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b598) {
            ctx->pc = 0x79B59Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B598u;
            // 0x79b59c: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B5D0u;
            goto label_79b5d0;
        }
    }
    ctx->pc = 0x79B5A0u;
    // 0x79b5a0: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x79b5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79b5a4: 0x2405101f  addiu       $a1, $zero, 0x101F
    ctx->pc = 0x79b5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4127));
    // 0x79b5a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79b5a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b5ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79b5acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b5b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79b5b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b5b4: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x79B5B4u;
    SET_GPR_U32(ctx, 31, 0x79B5BCu);
    ctx->pc = 0x79B5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B5B4u;
    // 0x79b5b8: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x79B5B4u, 0x79B5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B5BCu;
label_79b5bc:
    // 0x79b5bc: 0x8e039b70  lw          $v1, -0x6490($s0)
    ctx->pc = 0x79b5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941552)));
    // 0x79b5c0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x79b5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x79b5c4: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x79b5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x79b5c8: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x79b5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x79b5cc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79b5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_79b5d0:
    // 0x79b5d0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x79b5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79b5d4: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x79B5D4u;
    SET_GPR_U32(ctx, 31, 0x79B5DCu);
    ctx->pc = 0x79B5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B5D4u;
    // 0x79b5d8: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x79B5D4u, 0x79B5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B5DCu;
label_79b5dc:
    // 0x79b5dc: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x79b5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79b5e0: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79b5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79b5e4: 0x24a5bba8  addiu       $a1, $a1, -0x4458
    ctx->pc = 0x79b5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949800));
    // 0x79b5e8: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x79B5E8u;
    SET_GPR_U32(ctx, 31, 0x79B5F0u);
    ctx->pc = 0x79B5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B5E8u;
    // 0x79b5ec: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x79B5E8u, 0x79B5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B5F0u;
label_79b5f0:
    // 0x79b5f0: 0x8e232f84  lw          $v1, 0x2F84($s1)
    ctx->pc = 0x79b5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79b5f4: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79B5F4u;
    SET_GPR_U32(ctx, 31, 0x79B5FCu);
    ctx->pc = 0x79B5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B5F4u;
    // 0x79b5f8: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79B5F4u, 0x79B5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B5FCu;
label_79b5fc:
    // 0x79b5fc: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79B5FCu;
    SET_GPR_U32(ctx, 31, 0x79B604u);
    ctx->pc = 0x79B600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B5FCu;
    // 0x79b600: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79B5FCu, 0x79B604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B604u;
label_79b604:
    // 0x79b604: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79b604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79b608: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79B608u;
    SET_GPR_U32(ctx, 31, 0x79B610u);
    ctx->pc = 0x79B60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B608u;
    // 0x79b60c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79B608u, 0x79B610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B610u;
label_79b610:
    // 0x79b610: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x79b610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79b614: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x79b614u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79b618: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x79b618u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79b61c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79b61cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79b620: 0x3e00008  jr          $ra
    ctx->pc = 0x79B620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B620u;
        // 0x79b624: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B628u;
}
} // namespace gh_r000
