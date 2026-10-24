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
// Function: func_0079B4B0
// Address: 0x79b4b0 - 0x79b5a8
void func_0079B4B0_0x79b4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079B4B0_0x79b4b0");
#endif

    switch (ctx->pc) {
        case 0x79b4d4u: goto label_79b4d4;
        case 0x79b4f8u: goto label_79b4f8;
        case 0x79b504u: goto label_79b504;
        case 0x79b528u: goto label_79b528;
        case 0x79b544u: goto label_79b544;
        case 0x79b550u: goto label_79b550;
        case 0x79b57cu: goto label_79b57c;
        case 0x79b588u: goto label_79b588;
        case 0x79b594u: goto label_79b594;
        default: break;
    }

    ctx->pc = 0x79b4b0u;

    // 0x79b4b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79b4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79b4b4: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x79b4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x79b4b8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x79b4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79b4bc: 0x24509b70  addiu       $s0, $v0, -0x6490
    ctx->pc = 0x79b4bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x79b4c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x79b4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x79b4c4: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x79b4c4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x79b4c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79b4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79b4cc: 0xc07ea80  jal         func_1FAA00
    ctx->pc = 0x79B4CCu;
    SET_GPR_U32(ctx, 31, 0x79B4D4u);
    ctx->pc = 0x79B4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B4CCu;
    // 0x79b4d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAA00u, 0x79B4CCu, 0x79B4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B4D4u;
label_79b4d4:
    // 0x79b4d4: 0x5c40000c  bgtzl       $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x79B4D4u;
    {
        const bool branch_taken_0x79b4d4 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x79b4d4) {
            ctx->pc = 0x79B4D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B4D4u;
            // 0x79b4d8: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B508u;
            goto label_79b508;
        }
    }
    ctx->pc = 0x79B4DCu;
    // 0x79b4dc: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x79b4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79b4e0: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x79b4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x79b4e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79b4e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b4e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79b4e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b4ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79b4ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b4f0: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x79B4F0u;
    SET_GPR_U32(ctx, 31, 0x79B4F8u);
    ctx->pc = 0x79B4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B4F0u;
    // 0x79b4f4: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x79B4F0u, 0x79B4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B4F8u;
label_79b4f8:
    // 0x79b4f8: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79b4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79b4fc: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79B4FCu;
    SET_GPR_U32(ctx, 31, 0x79B504u);
    ctx->pc = 0x79B500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B4FCu;
    // 0x79b500: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79B4FCu, 0x79B504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B504u;
label_79b504:
    // 0x79b504: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79b504u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_79b508:
    // 0x79b508: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79b508u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b50c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79b50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79b510: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79b510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79b514: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x79b514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x79b518: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79b518u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79b51c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79b51cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79b520: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79B520u;
    SET_GPR_U32(ctx, 31, 0x79B528u);
    ctx->pc = 0x79B524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B520u;
    // 0x79b524: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79B520u, 0x79B528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B528u;
label_79b528:
    // 0x79b528: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x79b528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79b52c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79b52cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b530: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79b530u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b534: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79b534u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b538: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x79b538u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b53c: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x79B53Cu;
    SET_GPR_U32(ctx, 31, 0x79B544u);
    ctx->pc = 0x79B540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B53Cu;
    // 0x79b540: 0x24051001  addiu       $a1, $zero, 0x1001 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x79B53Cu, 0x79B544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B544u;
label_79b544:
    // 0x79b544: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b548: 0xc07ea6e  jal         func_1FA9B8
    ctx->pc = 0x79B548u;
    SET_GPR_U32(ctx, 31, 0x79B550u);
    ctx->pc = 0x79B54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B548u;
    // 0x79b54c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA9B8u, 0x79B548u, 0x79B550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B550u;
label_79b550:
    // 0x79b550: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x79b550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x79b554: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x79b554u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x79b558: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x79b558u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x79b55c: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x79b55cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x79b560: 0x2610ea60  addiu       $s0, $s0, -0x15A0
    ctx->pc = 0x79b560u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x79b564: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x79b564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79b568: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79b568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79b56c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b570: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x79b570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x79b574: 0xc0b0ab8  jal         func_2C2AE0
    ctx->pc = 0x79B574u;
    SET_GPR_U32(ctx, 31, 0x79B57Cu);
    ctx->pc = 0x79B578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B574u;
    // 0x79b578: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x79B574u, 0x79B57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B57Cu;
label_79b57c:
    // 0x79b57c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b580: 0xc0b0a02  jal         func_2C2808
    ctx->pc = 0x79B580u;
    SET_GPR_U32(ctx, 31, 0x79B588u);
    ctx->pc = 0x79B584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B580u;
    // 0x79b584: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2808u, 0x79B580u, 0x79B588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B588u;
label_79b588:
    // 0x79b588: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79b588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79b58c: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79B58Cu;
    SET_GPR_U32(ctx, 31, 0x79B594u);
    ctx->pc = 0x79B590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B58Cu;
    // 0x79b590: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79B58Cu, 0x79B594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B594u;
label_79b594:
    // 0x79b594: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x79b594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79b598: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x79b598u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79b59c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79b59cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79b5a0: 0x3e00008  jr          $ra
    ctx->pc = 0x79B5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B5A0u;
        // 0x79b5a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B5A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B5A8u;
}
} // namespace gh_r201
