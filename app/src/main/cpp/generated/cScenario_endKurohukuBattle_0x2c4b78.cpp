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

// Function: cScenario_endKurohukuBattle
// Address: 0x2c4b78 - 0x2c4c58
void cScenario_endKurohukuBattle_0x2c4b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScenario_endKurohukuBattle_0x2c4b78");
#endif

    switch (ctx->pc) {
        case 0x2c4ba8u: goto label_2c4ba8;
        case 0x2c4be4u: goto label_2c4be4;
        case 0x2c4c10u: goto label_2c4c10;
        default: break;
    }

    ctx->pc = 0x2c4b78u;

    // 0x2c4b78: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c4b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c4b7c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2c4b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2c4b80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c4b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c4b84: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2c4b84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2c4b88: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2c4b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2c4b8c: 0x94900016  lhu         $s0, 0x16($a0)
    ctx->pc = 0x2c4b8cu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x2c4b90: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2c4b90u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c4b94: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2c4b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2c4b98: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2c4b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2c4b9c: 0xc4940010  lwc1        $f20, 0x10($a0)
    ctx->pc = 0x2c4b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c4ba0: 0xc0b00ba  jal         func_2C02E8
    ctx->pc = 0x2C4BA0u;
    SET_GPR_U32(ctx, 31, 0x2C4BA8u);
    ctx->pc = 0x2C4BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4BA0u;
    // 0x2c4ba4: 0x8c44264c  lw          $a0, 0x264C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C02E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C02E8u, 0x2C4BA0u, 0x2C4BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4BA8u;
label_2c4ba8:
    // 0x2c4ba8: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x2c4ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x2c4bac: 0x9c628240  lwu         $v0, -0x7DC0($v1)
    ctx->pc = 0x2c4bacu;
    SET_GPR_ZE32(ctx, 2, FAST_READ32(0x568240u));
    // 0x2c4bb0: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x2c4bb0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x2c4bb4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c4bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c4bb8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C4BB8u;
    {
        const bool branch_taken_0x2c4bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4BB8u;
        // 0x2c4bbc: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4bb8) {
            ctx->pc = 0x2C4BECu;
            goto label_2c4bec;
        }
    }
    ctx->pc = 0x2C4BC0u;
    // 0x2c4bc0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2c4bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2c4bc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c4bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4bc8: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x2c4bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x2c4bcc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c4bccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2c4bd0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2c4bd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4bd4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c4bd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4bd8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2c4bd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c4bdc: 0xc0b1152  jal         func_2C4548
    ctx->pc = 0x2C4BDCu;
    SET_GPR_U32(ctx, 31, 0x2C4BE4u);
    ctx->pc = 0x2C4BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4BDCu;
    // 0x2c4be0: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4548u, 0x2C4BDCu, 0x2C4BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4BE4u;
label_2c4be4:
    // 0x2c4be4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C4BE4u;
    {
        const bool branch_taken_0x2c4be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4BE4u;
        // 0x2c4be8: 0x8e238240  lw          $v1, -0x7DC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294935104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4be4) {
            ctx->pc = 0x2C4C14u;
            goto label_2c4c14;
        }
    }
    ctx->pc = 0x2C4BECu;
label_2c4bec:
    // 0x2c4bec: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2c4becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2c4bf0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c4bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4bf4: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x2c4bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x2c4bf8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c4bf8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2c4bfc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2c4bfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4c00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c4c00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4c04: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c4c04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4c08: 0xc0b1152  jal         func_2C4548
    ctx->pc = 0x2C4C08u;
    SET_GPR_U32(ctx, 31, 0x2C4C10u);
    ctx->pc = 0x2C4C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4C08u;
    // 0x2c4c0c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4548u, 0x2C4C08u, 0x2C4C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4C10u;
label_2c4c10:
    // 0x2c4c10: 0x8e238240  lw          $v1, -0x7DC0($s1)
    ctx->pc = 0x2c4c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294935104)));
label_2c4c14:
    // 0x2c4c14: 0x2405fff7  addiu       $a1, $zero, -0x9
    ctx->pc = 0x2c4c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x2c4c18: 0x3c070074  lui         $a3, 0x74
    ctx->pc = 0x2c4c18u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)116 << 16));
    // 0x2c4c1c: 0x2406ffef  addiu       $a2, $zero, -0x11
    ctx->pc = 0x2c4c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x2c4c20: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2c4c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2c4c24: 0x8ce47a24  lw          $a0, 0x7A24($a3)
    ctx->pc = 0x2c4c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 31268)));
    // 0x2c4c28: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x2c4c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x2c4c2c: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x2c4c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x2c4c30: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c4c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2c4c34: 0xae238240  sw          $v1, -0x7DC0($s1)
    ctx->pc = 0x2c4c34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294935104), GPR_U32(ctx, 3));
    // 0x2c4c38: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x2c4c38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2c4c3c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2c4c3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c4c40: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2c4c40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c4c44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c4c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c4c48: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2c4c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c4c4c: 0xace47a24  sw          $a0, 0x7A24($a3)
    ctx->pc = 0x2c4c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 31268), GPR_U32(ctx, 4));
    // 0x2c4c50: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4C50u;
        // 0x2c4c54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4C58u;
}
