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

// Function: func_00313450
// Address: 0x313450 - 0x313510
void func_00313450_0x313450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00313450_0x313450");
#endif

    switch (ctx->pc) {
        case 0x313488u: goto label_313488;
        case 0x3134a4u: goto label_3134a4;
        case 0x3134acu: goto label_3134ac;
        case 0x3134c8u: goto label_3134c8;
        default: break;
    }

    ctx->pc = 0x313450u;

    // 0x313450: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x313450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x313454: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x313454u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x313458: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x313458u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31345c: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x31345cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x313460: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x313460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x313464: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x313464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x313468: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x313468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x31346c: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x31346Cu;
    {
        const bool branch_taken_0x31346c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x313470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31346Cu;
        // 0x313470: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31346c) {
            ctx->pc = 0x3134F8u;
            goto label_3134f8;
        }
    }
    ctx->pc = 0x313474u;
    // 0x313474: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x313474u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x313478: 0x240421c0  addiu       $a0, $zero, 0x21C0
    ctx->pc = 0x313478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8640));
    // 0x31347c: 0x24c64220  addiu       $a2, $a2, 0x4220
    ctx->pc = 0x31347cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16928));
    // 0x313480: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x313480u;
    SET_GPR_U32(ctx, 31, 0x313488u);
    ctx->pc = 0x313484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313480u;
    // 0x313484: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x313480u, 0x313488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313488u;
label_313488:
    // 0x313488: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x313488u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31348c: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x31348Cu;
    {
        const bool branch_taken_0x31348c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x313490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31348Cu;
        // 0x313490: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31348c) {
            ctx->pc = 0x3134F8u;
            goto label_3134f8;
        }
    }
    ctx->pc = 0x313494u;
    // 0x313494: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x313494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313498: 0x240621c0  addiu       $a2, $zero, 0x21C0
    ctx->pc = 0x313498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8640));
    // 0x31349c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x31349Cu;
    SET_GPR_U32(ctx, 31, 0x3134A4u);
    ctx->pc = 0x3134A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31349Cu;
    // 0x3134a0: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x31349Cu, 0x3134A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3134A4u;
label_3134a4:
    // 0x3134a4: 0xc0a9cce  jal         func_2A7338
    ctx->pc = 0x3134A4u;
    SET_GPR_U32(ctx, 31, 0x3134ACu);
    ctx->pc = 0x3134A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3134A4u;
    // 0x3134a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7338u, 0x3134A4u, 0x3134ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3134ACu;
label_3134ac:
    // 0x3134ac: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x3134acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x3134b0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3134b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3134b4: 0x24428948  addiu       $v0, $v0, -0x76B8
    ctx->pc = 0x3134b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936904));
    // 0x3134b8: 0x260305b0  addiu       $v1, $s0, 0x5B0
    ctx->pc = 0x3134b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1456));
    // 0x3134bc: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x3134bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x3134c0: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x3134c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x3134c4: 0x0  nop
    ctx->pc = 0x3134c4u;
    // NOP
label_3134c8:
    // 0x3134c8: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x3134c8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x3134cc: 0xf8600010  sqc2        $vf0, 0x10($v1)
    ctx->pc = 0x3134ccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x3134d0: 0xf8600030  sqc2        $vf0, 0x30($v1)
    ctx->pc = 0x3134d0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x3134d4: 0xf8600040  sqc2        $vf0, 0x40($v1)
    ctx->pc = 0x3134d4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x3134d8: 0xf8600050  sqc2        $vf0, 0x50($v1)
    ctx->pc = 0x3134d8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x3134dc: 0xf8600080  sqc2        $vf0, 0x80($v1)
    ctx->pc = 0x3134dcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x3134e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3134e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3134e4: 0x1444fff8  bne         $v0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3134E4u;
    {
        const bool branch_taken_0x3134e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3134E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3134E4u;
        // 0x3134e8: 0x246300a0  addiu       $v1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3134e4) {
            ctx->pc = 0x3134C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3134c8;
        }
    }
    ctx->pc = 0x3134ECu;
    // 0x3134ec: 0xfa202190  sqc2        $vf0, 0x2190($s1)
    ctx->pc = 0x3134ecu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 8592), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x3134f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3134F0u;
    {
        const bool branch_taken_0x3134f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3134F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3134F0u;
        // 0x3134f4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3134f0) {
            ctx->pc = 0x3134FCu;
            goto label_3134fc;
        }
    }
    ctx->pc = 0x3134F8u;
label_3134f8:
    // 0x3134f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3134f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3134fc:
    // 0x3134fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3134fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x313500: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x313500u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x313504: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x313504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x313508: 0x3e00008  jr          $ra
    ctx->pc = 0x313508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313508u;
        // 0x31350c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313510u;
}
