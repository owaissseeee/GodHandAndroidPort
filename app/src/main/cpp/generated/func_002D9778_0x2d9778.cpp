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

// Function: func_002D9778
// Address: 0x2d9778 - 0x2d98a0
void func_002D9778_0x2d9778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D9778_0x2d9778");
#endif

    switch (ctx->pc) {
        case 0x2d9798u: goto label_2d9798;
        case 0x2d97acu: goto label_2d97ac;
        case 0x2d97c0u: goto label_2d97c0;
        case 0x2d9890u: goto label_2d9890;
        default: break;
    }

    ctx->pc = 0x2d9778u;

    // 0x2d9778: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2d9778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2d977c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2d977cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2d9780: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d9780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9784: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2d9784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2d9788: 0x3404e8a0  ori         $a0, $zero, 0xE8A0
    ctx->pc = 0x2d9788u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59552);
    // 0x2d978c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d978cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9790: 0xc0b6516  jal         func_2D9458
    ctx->pc = 0x2D9790u;
    SET_GPR_U32(ctx, 31, 0x2D9798u);
    ctx->pc = 0x2D9794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9790u;
    // 0x2d9794: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9458u, 0x2D9790u, 0x2D9798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9798u;
label_2d9798:
    // 0x2d9798: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x2d9798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x2d979c: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x2d979cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x2d97a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d97a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d97a4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2D97A4u;
    SET_GPR_U32(ctx, 31, 0x2D97ACu);
    ctx->pc = 0x2D97A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D97A4u;
    // 0x2d97a8: 0x24067000  addiu       $a2, $zero, 0x7000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2D97A4u, 0x2D97ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D97ACu;
label_2d97ac:
    // 0x2d97ac: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x2d97acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d97b0: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x2d97b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d97b4: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2d97b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2d97b8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2d97b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2d97bc: 0x26027010  addiu       $v0, $s0, 0x7010
    ctx->pc = 0x2d97bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28688));
label_2d97c0:
    // 0x2d97c0: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x2d97c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x2d97c4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2d97c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2d97c8: 0x0  nop
    ctx->pc = 0x2d97c8u;
    // NOP
    // 0x2d97cc: 0x0  nop
    ctx->pc = 0x2d97ccu;
    // NOP
    // 0x2d97d0: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D97D0u;
    {
        const bool branch_taken_0x2d97d0 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x2D97D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D97D0u;
        // 0x2d97d4: 0x2442ff90  addiu       $v0, $v0, -0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d97d0) {
            ctx->pc = 0x2D97C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d97c0;
        }
    }
    ctx->pc = 0x2D97D8u;
    // 0x2d97d8: 0x3c013ee6  lui         $at, 0x3EE6
    ctx->pc = 0x2d97d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16102 << 16));
    // 0x2d97dc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2d97dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x2d97e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d97e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d97e4: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x2d97e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2d97e8: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x2d97e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x2d97ec: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2d97ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2d97f0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2d97f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2d97f4: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x2d97f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2d97f8: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x2d97f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2d97fc: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x2d97fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2d9800: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d9800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d9804: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2d9804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d9808: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d9808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d980c: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x2d980cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x2d9810: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2d9810u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2d9814: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2d9814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d9818: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2d9818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d981c: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x2d981cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
    // 0x2d9820: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d9820u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d9824: 0x3c038700  lui         $v1, 0x8700
    ctx->pc = 0x2d9824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34560 << 16));
    // 0x2d9828: 0xa7a20002  sh          $v0, 0x2($sp)
    ctx->pc = 0x2d9828u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d982c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d982cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9830: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x2d9830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x2d9834: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d9834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9838: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2d9838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2d983c: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x2d983cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d9840: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2d9840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2d9844: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2d9844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2d9848: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d9848u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d984c: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x2d984cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x2d9850: 0xe4e30004  swc1        $f3, 0x4($a3)
    ctx->pc = 0x2d9850u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x2d9854: 0xe4e2000c  swc1        $f2, 0xC($a3)
    ctx->pc = 0x2d9854u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x2d9858: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2d9858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2d985c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2d985cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x2d9860: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2d9860u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2d9864: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d9864u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d9868: 0xe502000c  swc1        $f2, 0xC($t0)
    ctx->pc = 0x2d9868u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x2d986c: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x2d986cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x2d9870: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x2d9870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x2d9874: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x2d9874u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2d9878: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x2d9878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x2d987c: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x2d987cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x2d9880: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x2d9880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x2d9884: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x2d9884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x2d9888: 0xc0b642c  jal         func_2D90B0
    ctx->pc = 0x2D9888u;
    SET_GPR_U32(ctx, 31, 0x2D9890u);
    ctx->pc = 0x2D988Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9888u;
    // 0x2d988c: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D90B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D90B0u, 0x2D9888u, 0x2D9890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9890u;
label_2d9890:
    // 0x2d9890: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2d9890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d9894: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2d9894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d9898: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D989Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9898u;
        // 0x2d989c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D98A0u;
}
