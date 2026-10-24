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

// Function: DamagedObj_setupHitCylinder
// Address: 0x1a6098 - 0x1a6188
void DamagedObj_setupHitCylinder_0x1a6098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DamagedObj_setupHitCylinder_0x1a6098");
#endif

    switch (ctx->pc) {
        case 0x1a60b4u: goto label_1a60b4;
        case 0x1a611cu: goto label_1a611c;
        case 0x1a615cu: goto label_1a615c;
        default: break;
    }

    ctx->pc = 0x1a6098u;

    // 0x1a6098: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1a6098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1a609c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1a609cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1a60a0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1a60a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1a60a4: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1a60a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1a60a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a60a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a60ac: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x1A60ACu;
    SET_GPR_U32(ctx, 31, 0x1A60B4u);
    ctx->pc = 0x1A60B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A60ACu;
    // 0x1a60b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x1A60ACu, 0x1A60B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A60B4u;
label_1a60b4:
    // 0x1a60b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a60b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a60b8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a60b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a60bc: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x1a60bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
    // 0x1a60c0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1a60c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1a60c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a60c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a60c8: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x1a60c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a60cc: 0x3c01400f  lui         $at, 0x400F
    ctx->pc = 0x1a60ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16399 << 16));
    // 0x1a60d0: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1a60d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x1a60d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a60d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a60d8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1a60d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1a60dc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1a60dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1a60e0: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x1a60e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x1a60e4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1a60e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1a60e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a60e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a60ec: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1a60ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a60f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a60f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a60f4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1a60f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1a60f8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1a60f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1a60fc: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1a60fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1a6100: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1a6100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1a6104: 0xe7b4001c  swc1        $f20, 0x1C($sp)
    ctx->pc = 0x1a6104u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1a6108: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1a6108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x1a610c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1a610cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1a6110: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1a6110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x1a6114: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x1A6114u;
    SET_GPR_U32(ctx, 31, 0x1A611Cu);
    ctx->pc = 0x1A6118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6114u;
    // 0x1a6118: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x1A6114u, 0x1A611Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A611Cu;
label_1a611c:
    // 0x1a611c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1A611Cu;
    {
        const bool branch_taken_0x1a611c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A611Cu;
        // 0x1a6120: 0xae020608  sw          $v0, 0x608($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a611c) {
            ctx->pc = 0x1A615Cu;
            goto label_1a615c;
        }
    }
    ctx->pc = 0x1A6124u;
    // 0x1a6124: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x1a6124u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a6128: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1a6128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1a612c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1a612cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1a6130: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a6130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6134: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1a6134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1a6138: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a6138u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a613c: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x1a613cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x1a6140: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x1a6140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1a6144: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a6144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1a6148: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a6148u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a614c: 0xc7ad0010  lwc1        $f13, 0x10($sp)
    ctx->pc = 0x1a614cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1a6150: 0xc7ac0014  lwc1        $f12, 0x14($sp)
    ctx->pc = 0x1a6150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a6154: 0xc07f700  jal         func_1FDC00
    ctx->pc = 0x1A6154u;
    SET_GPR_U32(ctx, 31, 0x1A615Cu);
    ctx->pc = 0x1A6158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6154u;
    // 0x1a6158: 0x46006b42  mul.s       $f13, $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDC00u, 0x1A6154u, 0x1A615Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A615Cu;
label_1a615c:
    // 0x1a615c: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x1a615cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1a6160: 0xa2000604  sb          $zero, 0x604($s0)
    ctx->pc = 0x1a6160u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1540), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a6164: 0xa603054a  sh          $v1, 0x54A($s0)
    ctx->pc = 0x1a6164u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a6168: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a6168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a616c: 0xa6030548  sh          $v1, 0x548($s0)
    ctx->pc = 0x1a616cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a6170: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1a6170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a6174: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1a6174u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a6178: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a6178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a617c: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1a617cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a6180: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6180u;
        // 0x1a6184: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6188u;
}
