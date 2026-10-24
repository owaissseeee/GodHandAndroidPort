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

// Function: func_00312F70
// Address: 0x312f70 - 0x313030
void func_00312F70_0x312f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00312F70_0x312f70");
#endif

    switch (ctx->pc) {
        case 0x312fa8u: goto label_312fa8;
        case 0x312fc4u: goto label_312fc4;
        case 0x312fccu: goto label_312fcc;
        case 0x312fe8u: goto label_312fe8;
        default: break;
    }

    ctx->pc = 0x312f70u;

    // 0x312f70: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x312f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x312f74: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x312f74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x312f78: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x312f78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x312f7c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x312f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x312f80: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x312f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x312f84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x312f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x312f88: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x312f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x312f8c: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x312F8Cu;
    {
        const bool branch_taken_0x312f8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x312F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312F8Cu;
        // 0x312f90: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312f8c) {
            ctx->pc = 0x313018u;
            goto label_313018;
        }
    }
    ctx->pc = 0x312F94u;
    // 0x312f94: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x312f94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x312f98: 0x240420e0  addiu       $a0, $zero, 0x20E0
    ctx->pc = 0x312f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8416));
    // 0x312f9c: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x312f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x312fa0: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x312FA0u;
    SET_GPR_U32(ctx, 31, 0x312FA8u);
    ctx->pc = 0x312FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312FA0u;
    // 0x312fa4: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x312FA0u, 0x312FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312FA8u;
label_312fa8:
    // 0x312fa8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x312fa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312fac: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x312FACu;
    {
        const bool branch_taken_0x312fac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x312FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312FACu;
        // 0x312fb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312fac) {
            ctx->pc = 0x313018u;
            goto label_313018;
        }
    }
    ctx->pc = 0x312FB4u;
    // 0x312fb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x312fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312fb8: 0x240620e0  addiu       $a2, $zero, 0x20E0
    ctx->pc = 0x312fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8416));
    // 0x312fbc: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x312FBCu;
    SET_GPR_U32(ctx, 31, 0x312FC4u);
    ctx->pc = 0x312FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312FBCu;
    // 0x312fc0: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x312FBCu, 0x312FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312FC4u;
label_312fc4:
    // 0x312fc4: 0xc053a64  jal         func_14E990
    ctx->pc = 0x312FC4u;
    SET_GPR_U32(ctx, 31, 0x312FCCu);
    ctx->pc = 0x312FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312FC4u;
    // 0x312fc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E990u, 0x312FC4u, 0x312FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312FCCu;
label_312fcc:
    // 0x312fcc: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x312fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x312fd0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x312fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x312fd4: 0x2442b6a0  addiu       $v0, $v0, -0x4960
    ctx->pc = 0x312fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948512));
    // 0x312fd8: 0x260304d0  addiu       $v1, $s0, 0x4D0
    ctx->pc = 0x312fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1232));
    // 0x312fdc: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x312fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x312fe0: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x312fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x312fe4: 0x0  nop
    ctx->pc = 0x312fe4u;
    // NOP
label_312fe8:
    // 0x312fe8: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x312fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x312fec: 0xf8600010  sqc2        $vf0, 0x10($v1)
    ctx->pc = 0x312fecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x312ff0: 0xf8600030  sqc2        $vf0, 0x30($v1)
    ctx->pc = 0x312ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x312ff4: 0xf8600040  sqc2        $vf0, 0x40($v1)
    ctx->pc = 0x312ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x312ff8: 0xf8600050  sqc2        $vf0, 0x50($v1)
    ctx->pc = 0x312ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x312ffc: 0xf8600080  sqc2        $vf0, 0x80($v1)
    ctx->pc = 0x312ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x313000: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x313000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x313004: 0x1444fff8  bne         $v0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x313004u;
    {
        const bool branch_taken_0x313004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x313008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313004u;
        // 0x313008: 0x246300a0  addiu       $v1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313004) {
            ctx->pc = 0x312FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312fe8;
        }
    }
    ctx->pc = 0x31300Cu;
    // 0x31300c: 0xfa2020b0  sqc2        $vf0, 0x20B0($s1)
    ctx->pc = 0x31300cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 8368), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x313010: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x313010u;
    {
        const bool branch_taken_0x313010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313010u;
        // 0x313014: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313010) {
            ctx->pc = 0x31301Cu;
            goto label_31301c;
        }
    }
    ctx->pc = 0x313018u;
label_313018:
    // 0x313018: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x313018u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31301c:
    // 0x31301c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x31301cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x313020: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x313020u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x313024: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x313024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x313028: 0x3e00008  jr          $ra
    ctx->pc = 0x313028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31302Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313028u;
        // 0x31302c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313030u;
}
