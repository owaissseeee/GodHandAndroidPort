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

// Function: SpawnDamageTakeVolumeE
// Address: 0x19c1b0 - 0x19c2b0
void SpawnDamageTakeVolumeE_0x19c1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SpawnDamageTakeVolumeE_0x19c1b0");
#endif

    switch (ctx->pc) {
        case 0x19c1d0u: goto label_19c1d0;
        case 0x19c24cu: goto label_19c24c;
        case 0x19c27cu: goto label_19c27c;
        case 0x19c290u: goto label_19c290;
        default: break;
    }

    ctx->pc = 0x19c1b0u;

    // 0x19c1b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x19c1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x19c1b4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x19c1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x19c1b8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x19c1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x19c1bc: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x19c1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x19c1c0: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x19c1c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x19c1c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19c1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19c1c8: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x19C1C8u;
    SET_GPR_U32(ctx, 31, 0x19C1D0u);
    ctx->pc = 0x19C1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C1C8u;
    // 0x19c1cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x19C1C8u, 0x19C1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C1D0u;
label_19c1d0:
    // 0x19c1d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19c1d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19c1d4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x19c1d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x19c1d8: 0x3c013f57  lui         $at, 0x3F57
    ctx->pc = 0x19c1d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16215 << 16));
    // 0x19c1dc: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x19c1dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
    // 0x19c1e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19c1e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19c1e4: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x19c1e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19c1e8: 0x3c013fad  lui         $at, 0x3FAD
    ctx->pc = 0x19c1e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16301 << 16));
    // 0x19c1ec: 0x34219168  ori         $at, $at, 0x9168
    ctx->pc = 0x19c1ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37224);
    // 0x19c1f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19c1f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19c1f4: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x19c1f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19c1f8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x19c1f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x19c1fc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x19c1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x19c200: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x19c200u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x19c204: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x19c204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x19c208: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x19c208u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x19c20c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19c20cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c210: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x19c210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19c214: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19c214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19c218: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x19c218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x19c21c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x19c21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x19c220: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x19c220u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x19c224: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x19c224u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x19c228: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x19c228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x19c22c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19c22cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19c230: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x19c230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19c234: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x19c234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x19c238: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x19c238u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x19c23c: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x19c23cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x19c240: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x19c240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x19c244: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x19C244u;
    SET_GPR_U32(ctx, 31, 0x19C24Cu);
    ctx->pc = 0x19C248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C244u;
    // 0x19c248: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x19C244u, 0x19C24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C24Cu;
label_19c24c:
    // 0x19c24c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19C24Cu;
    {
        const bool branch_taken_0x19c24c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C24Cu;
        // 0x19c250: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c24c) {
            ctx->pc = 0x19C27Cu;
            goto label_19c27c;
        }
    }
    ctx->pc = 0x19C254u;
    // 0x19c254: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x19c254u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19c258: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x19c258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x19c25c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x19c25cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x19c260: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19c260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c264: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x19c264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x19c268: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x19c268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c26c: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x19c26cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x19c270: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x19c270u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c274: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x19C274u;
    SET_GPR_U32(ctx, 31, 0x19C27Cu);
    ctx->pc = 0x19C278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C274u;
    // 0x19c278: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x19C274u, 0x19C27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C27Cu;
label_19c27c:
    // 0x19c27c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19c27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c280: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c284: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x19c284u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x19c288: 0xc06feca  jal         func_1BFB28
    ctx->pc = 0x19C288u;
    SET_GPR_U32(ctx, 31, 0x19C290u);
    ctx->pc = 0x19C28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C288u;
    // 0x19c28c: 0xa6020548  sh          $v0, 0x548($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFB28u, 0x19C288u, 0x19C290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C290u;
label_19c290:
    // 0x19c290: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x19c290u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19c294: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19c294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c298: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x19c298u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19c29c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x19c29cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19c2a0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19c2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19c2a4: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x19c2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19c2a8: 0x3e00008  jr          $ra
    ctx->pc = 0x19C2A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C2A8u;
        // 0x19c2ac: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C2A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C2B0u;
}
