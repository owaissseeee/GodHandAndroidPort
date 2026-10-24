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

// Function: func_003132D0
// Address: 0x3132d0 - 0x313390
void func_003132D0_0x3132d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003132D0_0x3132d0");
#endif

    switch (ctx->pc) {
        case 0x313308u: goto label_313308;
        case 0x313324u: goto label_313324;
        case 0x31332cu: goto label_31332c;
        case 0x313348u: goto label_313348;
        default: break;
    }

    ctx->pc = 0x3132d0u;

    // 0x3132d0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x3132d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x3132d4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3132d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3132d8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x3132d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x3132dc: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x3132dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x3132e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3132e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3132e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3132e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3132e8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3132e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3132ec: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x3132ECu;
    {
        const bool branch_taken_0x3132ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3132F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3132ECu;
        // 0x3132f0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3132ec) {
            ctx->pc = 0x313378u;
            goto label_313378;
        }
    }
    ctx->pc = 0x3132F4u;
    // 0x3132f4: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x3132f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x3132f8: 0x240421c0  addiu       $a0, $zero, 0x21C0
    ctx->pc = 0x3132f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8640));
    // 0x3132fc: 0x24c64220  addiu       $a2, $a2, 0x4220
    ctx->pc = 0x3132fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16928));
    // 0x313300: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x313300u;
    SET_GPR_U32(ctx, 31, 0x313308u);
    ctx->pc = 0x313304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313300u;
    // 0x313304: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x313300u, 0x313308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313308u;
label_313308:
    // 0x313308: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x313308u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31330c: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x31330Cu;
    {
        const bool branch_taken_0x31330c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x313310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31330Cu;
        // 0x313310: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31330c) {
            ctx->pc = 0x313378u;
            goto label_313378;
        }
    }
    ctx->pc = 0x313314u;
    // 0x313314: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x313314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313318: 0x240621c0  addiu       $a2, $zero, 0x21C0
    ctx->pc = 0x313318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8640));
    // 0x31331c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x31331Cu;
    SET_GPR_U32(ctx, 31, 0x313324u);
    ctx->pc = 0x313320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31331Cu;
    // 0x313320: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x31331Cu, 0x313324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313324u;
label_313324:
    // 0x313324: 0xc0a9cce  jal         func_2A7338
    ctx->pc = 0x313324u;
    SET_GPR_U32(ctx, 31, 0x31332Cu);
    ctx->pc = 0x313328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313324u;
    // 0x313328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7338u, 0x313324u, 0x31332Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31332Cu;
label_31332c:
    // 0x31332c: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x31332cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x313330: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x313330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x313334: 0x24427f70  addiu       $v0, $v0, 0x7F70
    ctx->pc = 0x313334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32624));
    // 0x313338: 0x260305b0  addiu       $v1, $s0, 0x5B0
    ctx->pc = 0x313338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1456));
    // 0x31333c: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x31333cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x313340: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x313340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x313344: 0x0  nop
    ctx->pc = 0x313344u;
    // NOP
label_313348:
    // 0x313348: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x313348u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x31334c: 0xf8600010  sqc2        $vf0, 0x10($v1)
    ctx->pc = 0x31334cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x313350: 0xf8600030  sqc2        $vf0, 0x30($v1)
    ctx->pc = 0x313350u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x313354: 0xf8600040  sqc2        $vf0, 0x40($v1)
    ctx->pc = 0x313354u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x313358: 0xf8600050  sqc2        $vf0, 0x50($v1)
    ctx->pc = 0x313358u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x31335c: 0xf8600080  sqc2        $vf0, 0x80($v1)
    ctx->pc = 0x31335cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x313360: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x313360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x313364: 0x1444fff8  bne         $v0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x313364u;
    {
        const bool branch_taken_0x313364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x313368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313364u;
        // 0x313368: 0x246300a0  addiu       $v1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313364) {
            ctx->pc = 0x313348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_313348;
        }
    }
    ctx->pc = 0x31336Cu;
    // 0x31336c: 0xfa202190  sqc2        $vf0, 0x2190($s1)
    ctx->pc = 0x31336cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 8592), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x313370: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x313370u;
    {
        const bool branch_taken_0x313370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313370u;
        // 0x313374: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313370) {
            ctx->pc = 0x31337Cu;
            goto label_31337c;
        }
    }
    ctx->pc = 0x313378u;
label_313378:
    // 0x313378: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x313378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31337c:
    // 0x31337c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x31337cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x313380: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x313380u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x313384: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x313384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x313388: 0x3e00008  jr          $ra
    ctx->pc = 0x313388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313388u;
        // 0x31338c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313390u;
}
