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

// Function: func_001816E8
// Address: 0x1816e8 - 0x1817c8
void func_001816E8_0x1816e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001816E8_0x1816e8");
#endif

    switch (ctx->pc) {
        case 0x181700u: goto label_181700;
        case 0x18178cu: goto label_18178c;
        case 0x1817a0u: goto label_1817a0;
        default: break;
    }

    ctx->pc = 0x1816e8u;

    // 0x1816e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1816e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1816ec: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1816ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1816f0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1816f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1816f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1816f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1816f8: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x1816F8u;
    SET_GPR_U32(ctx, 31, 0x181700u);
    ctx->pc = 0x1816FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1816F8u;
    // 0x1816fc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x1816F8u, 0x181700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181700u;
label_181700:
    // 0x181700: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x181700u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181704: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x181704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x181708: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x181708u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x18170c: 0x26020610  addiu       $v0, $s0, 0x610
    ctx->pc = 0x18170cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x181710: 0x3c013fd4  lui         $at, 0x3FD4
    ctx->pc = 0x181710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16340 << 16));
    // 0x181714: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x181714u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
    // 0x181718: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x181718u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18171c: 0x3c01408f  lui         $at, 0x408F
    ctx->pc = 0x18171cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16527 << 16));
    // 0x181720: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x181720u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
    // 0x181724: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x181724u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x181728: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x181728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x18172c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x18172cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x181730: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x181730u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x181734: 0x3c01bf54  lui         $at, 0xBF54
    ctx->pc = 0x181734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48980 << 16));
    // 0x181738: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x181738u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
    // 0x18173c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x18173cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x181740: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x181740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x181744: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x181744u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x181748: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x181748u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x18174c: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x18174cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x181750: 0xe7a4001c  swc1        $f4, 0x1C($sp)
    ctx->pc = 0x181750u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x181754: 0xe7a4000c  swc1        $f4, 0xC($sp)
    ctx->pc = 0x181754u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x181758: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x181758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x18175c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x18175cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x181760: 0xa6110548  sh          $s1, 0x548($s0)
    ctx->pc = 0x181760u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 17));
    // 0x181764: 0x105d0007  beq         $v0, $sp, . + 4 + (0x7 << 2)
    ctx->pc = 0x181764u;
    {
        const bool branch_taken_0x181764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x181768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181764u;
        // 0x181768: 0xa611054a  sh          $s1, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181764) {
            ctx->pc = 0x181784u;
            goto label_181784;
        }
    }
    ctx->pc = 0x18176Cu;
    // 0x18176c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x18176cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181770: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x181770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x181774: 0xe6000610  swc1        $f0, 0x610($s0)
    ctx->pc = 0x181774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1552), bits); }
    // 0x181778: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x181778u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x18177c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x18177cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181780: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x181780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_181784:
    // 0x181784: 0xc06f48a  jal         func_1BD228
    ctx->pc = 0x181784u;
    SET_GPR_U32(ctx, 31, 0x18178Cu);
    ctx->pc = 0x181788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181784u;
    // 0x181788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD228u, 0x181784u, 0x18178Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18178Cu;
label_18178c:
    // 0x18178c: 0xa2110624  sb          $s1, 0x624($s0)
    ctx->pc = 0x18178cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1572), (uint8_t)GPR_U32(ctx, 17));
    // 0x181790: 0x26020650  addiu       $v0, $s0, 0x650
    ctx->pc = 0x181790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x181794: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181798: 0xc06efda  jal         func_1BBF68
    ctx->pc = 0x181798u;
    SET_GPR_U32(ctx, 31, 0x1817A0u);
    ctx->pc = 0x18179Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181798u;
    // 0x18179c: 0xae020628  sw          $v0, 0x628($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1576), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBF68u, 0x181798u, 0x1817A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1817A0u;
label_1817a0:
    // 0x1817a0: 0x8e0305b8  lw          $v1, 0x5B8($s0)
    ctx->pc = 0x1817a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
    // 0x1817a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1817a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1817a8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1817a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1817ac: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1817acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1817b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1817b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1817b4: 0xae0305b8  sw          $v1, 0x5B8($s0)
    ctx->pc = 0x1817b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1464), GPR_U32(ctx, 3));
    // 0x1817b8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1817b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1817bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1817BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1817C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1817BCu;
        // 0x1817c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1817BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1817C4u;
    // 0x1817c4: 0x0  nop
    ctx->pc = 0x1817c4u;
    // NOP
    ctx->pc = 0x1817c8u;
}
