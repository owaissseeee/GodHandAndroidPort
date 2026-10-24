#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r503_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r503
{
// Function: DoorTask__5cR503P5cR503
// Address: 0x7998a8 - 0x7999a0
void DoorTask__5cR503P5cR503_0x7998a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DoorTask__5cR503P5cR503_0x7998a8");
#endif

    switch (ctx->pc) {
        case 0x7998c8u: goto label_7998c8;
        case 0x7998f4u: goto label_7998f4;
        case 0x799918u: goto label_799918;
        case 0x799934u: goto label_799934;
        case 0x799948u: goto label_799948;
        case 0x799954u: goto label_799954;
        case 0x79997cu: goto label_79997c;
        case 0x799988u: goto label_799988;
        default: break;
    }

    ctx->pc = 0x7998a8u;

    // 0x7998a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7998a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7998ac: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x7998acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x7998b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7998b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7998b4: 0x24509b70  addiu       $s0, $v0, -0x6490
    ctx->pc = 0x7998b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x7998b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7998b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7998bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7998bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7998c0: 0xc07ea80  jal         func_1FAA00
    ctx->pc = 0x7998C0u;
    SET_GPR_U32(ctx, 31, 0x7998C8u);
    ctx->pc = 0x7998C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998C0u;
    // 0x7998c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAA00u, 0x7998C0u, 0x7998C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998C8u;
label_7998c8:
    // 0x7998c8: 0x18400024  blez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x7998C8u;
    {
        const bool branch_taken_0x7998c8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x7998CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998C8u;
        // 0x7998cc: 0x3c02005f  lui         $v0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998c8) {
            ctx->pc = 0x79995Cu;
            goto label_79995c;
        }
    }
    ctx->pc = 0x7998D0u;
    // 0x7998d0: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x7998d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x7998d4: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x7998d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936152)));
    // 0x7998d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7998d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7998dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998e0: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x7998e0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x7998e4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7998e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x7998e8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x7998e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x7998ec: 0xc07ea6e  jal         func_1FA9B8
    ctx->pc = 0x7998ECu;
    SET_GPR_U32(ctx, 31, 0x7998F4u);
    ctx->pc = 0x7998F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998ECu;
    // 0x7998f0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA9B8u, 0x7998ECu, 0x7998F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998F4u;
label_7998f4:
    // 0x7998f4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x7998f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x7998f8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x7998f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998fc: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7998fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x799900: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799904: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x799904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x799908: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799908u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79990c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79990cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799910: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x799910u;
    SET_GPR_U32(ctx, 31, 0x799918u);
    ctx->pc = 0x799914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799910u;
    // 0x799914: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799910u, 0x799918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799918u;
label_799918:
    // 0x799918: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x799918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79991c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79991cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799920: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799920u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799924: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799924u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799928: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x799928u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79992c: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x79992Cu;
    SET_GPR_U32(ctx, 31, 0x799934u);
    ctx->pc = 0x799930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79992Cu;
    // 0x799930: 0x2405300b  addiu       $a1, $zero, 0x300B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12299));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x79992Cu, 0x799934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799934u;
label_799934:
    // 0x799934: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x799934u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x799938: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79993c: 0x2610ea60  addiu       $s0, $s0, -0x15A0
    ctx->pc = 0x79993cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x799940: 0xc0b0ab8  jal         func_2C2AE0
    ctx->pc = 0x799940u;
    SET_GPR_U32(ctx, 31, 0x799948u);
    ctx->pc = 0x799944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799940u;
    // 0x799944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x799940u, 0x799948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799948u;
label_799948:
    // 0x799948: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79994c: 0xc0b0a02  jal         func_2C2808
    ctx->pc = 0x79994Cu;
    SET_GPR_U32(ctx, 31, 0x799954u);
    ctx->pc = 0x799950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79994Cu;
    // 0x799950: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2808u, 0x79994Cu, 0x799954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799954u;
label_799954:
    // 0x799954: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x799954u;
    {
        const bool branch_taken_0x799954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799954u;
        // 0x799958: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799954) {
            ctx->pc = 0x79997Cu;
            goto label_79997c;
        }
    }
    ctx->pc = 0x79995Cu;
label_79995c:
    // 0x79995c: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x79995cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x799960: 0x2405300c  addiu       $a1, $zero, 0x300C
    ctx->pc = 0x799960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12300));
    // 0x799964: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x799964u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x799968: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79996c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79996cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799970: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799970u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799974: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x799974u;
    SET_GPR_U32(ctx, 31, 0x79997Cu);
    ctx->pc = 0x799978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799974u;
    // 0x799978: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x799974u, 0x79997Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79997Cu;
label_79997c:
    // 0x79997c: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79997cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799980: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799980u;
    SET_GPR_U32(ctx, 31, 0x799988u);
    ctx->pc = 0x799984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799980u;
    // 0x799984: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799980u, 0x799988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799988u;
label_799988:
    // 0x799988: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x799988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79998c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x79998cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799990: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799994: 0x3e00008  jr          $ra
    ctx->pc = 0x799994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799994u;
        // 0x799998: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79999Cu;
    // 0x79999c: 0x0  nop
    ctx->pc = 0x79999cu;
    // NOP
    ctx->pc = 0x7999a0u;
}
} // namespace gh_r503
