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

// Function: func_001A3E10
// Address: 0x1a3e10 - 0x1a3fd8
void func_001A3E10_0x1a3e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A3E10_0x1a3e10");
#endif

    switch (ctx->pc) {
        case 0x1a3e30u: goto label_1a3e30;
        case 0x1a3e9cu: goto label_1a3e9c;
        case 0x1a3edcu: goto label_1a3edc;
        case 0x1a3efcu: goto label_1a3efc;
        case 0x1a3f38u: goto label_1a3f38;
        case 0x1a3f5cu: goto label_1a3f5c;
        case 0x1a3fa8u: goto label_1a3fa8;
        default: break;
    }

    ctx->pc = 0x1a3e10u;

    // 0x1a3e10: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1a3e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1a3e14: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1a3e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1a3e18: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1a3e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1a3e1c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1a3e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1a3e20: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x1a3e20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1a3e24: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a3e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a3e28: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x1A3E28u;
    SET_GPR_U32(ctx, 31, 0x1A3E30u);
    ctx->pc = 0x1A3E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3E28u;
    // 0x1a3e2c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x1A3E28u, 0x1A3E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3E30u;
label_1a3e30:
    // 0x1a3e30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a3e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a3e34: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a3e34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a3e38: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x1a3e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
    // 0x1a3e3c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1a3e3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1a3e40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a3e40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3e44: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1a3e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x1a3e48: 0x3c01400c  lui         $at, 0x400C
    ctx->pc = 0x1a3e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16396 << 16));
    // 0x1a3e4c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1a3e4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1a3e50: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a3e50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a3e54: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x1a3e54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a3e58: 0x24524380  addiu       $s2, $v0, 0x4380
    ctx->pc = 0x1a3e58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 17280));
    // 0x1a3e5c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1a3e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1a3e60: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1a3e60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1a3e64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a3e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3e68: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1a3e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a3e6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a3e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3e70: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1a3e70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1a3e74: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a3e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a3e78: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1a3e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1a3e7c: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1a3e7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1a3e80: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1a3e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1a3e84: 0xe7b4001c  swc1        $f20, 0x1C($sp)
    ctx->pc = 0x1a3e84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1a3e88: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1a3e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x1a3e8c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1a3e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1a3e90: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1a3e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x1a3e94: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x1A3E94u;
    SET_GPR_U32(ctx, 31, 0x1A3E9Cu);
    ctx->pc = 0x1A3E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3E94u;
    // 0x1a3e98: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x1A3E94u, 0x1A3E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3E9Cu;
label_1a3e9c:
    // 0x1a3e9c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A3E9Cu;
    {
        const bool branch_taken_0x1a3e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3E9Cu;
        // 0x1a3ea0: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3e9c) {
            ctx->pc = 0x1A3EECu;
            goto label_1a3eec;
        }
    }
    ctx->pc = 0x1A3EA4u;
    // 0x1a3ea4: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x1a3ea4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a3ea8: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1a3ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1a3eac: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1a3eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1a3eb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a3eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3eb4: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1a3eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1a3eb8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a3eb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3ebc: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x1a3ebcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x1a3ec0: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x1a3ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1a3ec4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a3ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1a3ec8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a3ec8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3ecc: 0xc7ad0010  lwc1        $f13, 0x10($sp)
    ctx->pc = 0x1a3eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1a3ed0: 0xc7ac0014  lwc1        $f12, 0x14($sp)
    ctx->pc = 0x1a3ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a3ed4: 0xc07f700  jal         func_1FDC00
    ctx->pc = 0x1A3ED4u;
    SET_GPR_U32(ctx, 31, 0x1A3EDCu);
    ctx->pc = 0x1A3ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3ED4u;
    // 0x1a3ed8: 0x46006b42  mul.s       $f13, $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDC00u, 0x1A3ED4u, 0x1A3EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3EDCu;
label_1a3edc:
    // 0x1a3edc: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x1a3edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1a3ee0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a3ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a3ee4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a3ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1a3ee8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1a3ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1a3eec:
    // 0x1a3eec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a3eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3ef0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a3ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3ef4: 0xc07f83a  jal         func_1FE0E8
    ctx->pc = 0x1A3EF4u;
    SET_GPR_U32(ctx, 31, 0x1A3EFCu);
    ctx->pc = 0x1A3EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3EF4u;
    // 0x1a3ef8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE0E8u, 0x1A3EF4u, 0x1A3EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3EFCu;
label_1a3efc:
    // 0x1a3efc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a3efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3f00: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1A3F00u;
    {
        const bool branch_taken_0x1a3f00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F00u;
        // 0x1a3f04: 0xae040604  sw          $a0, 0x604($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1540), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3f00) {
            ctx->pc = 0x1A3F5Cu;
            goto label_1a3f5c;
        }
    }
    ctx->pc = 0x1A3F08u;
    // 0x1a3f08: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1a3f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1a3f0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a3f0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3f10: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1a3f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a3f14: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1a3f14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1a3f18: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a3f18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3f1c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1a3f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1a3f20: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x1a3f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1a3f24: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1a3f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1a3f28: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1a3f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1a3f2c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a3f2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a3f30: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x1A3F30u;
    SET_GPR_U32(ctx, 31, 0x1A3F38u);
    ctx->pc = 0x1A3F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3F30u;
    // 0x1a3f34: 0xe454000c  swc1        $f20, 0xC($v0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x1A3F30u, 0x1A3F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3F38u;
label_1a3f38:
    // 0x1a3f38: 0x8e040604  lw          $a0, 0x604($s0)
    ctx->pc = 0x1a3f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x1a3f3c: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x1a3f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x1a3f40: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1a3f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1a3f44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a3f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3f48: 0xa4830046  sh          $v1, 0x46($a0)
    ctx->pc = 0x1a3f48u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a3f4c: 0x8e020604  lw          $v0, 0x604($s0)
    ctx->pc = 0x1a3f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x1a3f50: 0xac46004c  sw          $a2, 0x4C($v0)
    ctx->pc = 0x1a3f50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 6));
    // 0x1a3f54: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1A3F54u;
    SET_GPR_U32(ctx, 31, 0x1A3F5Cu);
    ctx->pc = 0x1A3F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3F54u;
    // 0x1a3f58: 0x8e040604  lw          $a0, 0x604($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1A3F54u, 0x1A3F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3F5Cu;
label_1a3f5c:
    // 0x1a3f5c: 0x26040620  addiu       $a0, $s0, 0x620
    ctx->pc = 0x1a3f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x1a3f60: 0x24080032  addiu       $t0, $zero, 0x32
    ctx->pc = 0x1a3f60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1a3f64: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1a3f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1a3f68: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a3f68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3f6c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1a3f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a3f70: 0x2403002e  addiu       $v1, $zero, 0x2E
    ctx->pc = 0x1a3f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x1a3f74: 0xae040608  sw          $a0, 0x608($s0)
    ctx->pc = 0x1a3f74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 4));
    // 0x1a3f78: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x1a3f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1a3f7c: 0xae0005e8  sw          $zero, 0x5E8($s0)
    ctx->pc = 0x1a3f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 0));
    // 0x1a3f80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3f84: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x1a3f84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x1a3f88: 0xa608054a  sh          $t0, 0x54A($s0)
    ctx->pc = 0x1a3f88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 8));
    // 0x1a3f8c: 0xa205060c  sb          $a1, 0x60C($s0)
    ctx->pc = 0x1a3f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1548), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a3f90: 0xae0605e4  sw          $a2, 0x5E4($s0)
    ctx->pc = 0x1a3f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 6));
    // 0x1a3f94: 0xae0705ec  sw          $a3, 0x5EC($s0)
    ctx->pc = 0x1a3f94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1516), GPR_U32(ctx, 7));
    // 0x1a3f98: 0xa60305f6  sh          $v1, 0x5F6($s0)
    ctx->pc = 0x1a3f98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1526), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a3f9c: 0xa6080548  sh          $t0, 0x548($s0)
    ctx->pc = 0x1a3f9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 8));
    // 0x1a3fa0: 0xc070a28  jal         func_1C28A0
    ctx->pc = 0x1A3FA0u;
    SET_GPR_U32(ctx, 31, 0x1A3FA8u);
    ctx->pc = 0x1A3FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3FA0u;
    // 0x1a3fa4: 0xa60205f4  sh          $v0, 0x5F4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1524), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C28A0u, 0x1A3FA0u, 0x1A3FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3FA8u;
label_1a3fa8:
    // 0x1a3fa8: 0x8e0305b8  lw          $v1, 0x5B8($s0)
    ctx->pc = 0x1a3fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
    // 0x1a3fac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a3facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3fb0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1a3fb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a3fb4: 0x34630180  ori         $v1, $v1, 0x180
    ctx->pc = 0x1a3fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)384);
    // 0x1a3fb8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1a3fb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a3fbc: 0xae0305b8  sw          $v1, 0x5B8($s0)
    ctx->pc = 0x1a3fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1464), GPR_U32(ctx, 3));
    // 0x1a3fc0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1a3fc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a3fc4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a3fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a3fc8: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x1a3fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a3fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3FCCu;
        // 0x1a3fd0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3FD4u;
    // 0x1a3fd4: 0x0  nop
    ctx->pc = 0x1a3fd4u;
    // NOP
    ctx->pc = 0x1a3fd8u;
}
