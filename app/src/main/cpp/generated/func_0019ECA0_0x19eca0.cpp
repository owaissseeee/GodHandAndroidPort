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

// Function: func_0019ECA0
// Address: 0x19eca0 - 0x19edc0
void func_0019ECA0_0x19eca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019ECA0_0x19eca0");
#endif

    switch (ctx->pc) {
        case 0x19ecc0u: goto label_19ecc0;
        case 0x19ed2cu: goto label_19ed2c;
        case 0x19ed5cu: goto label_19ed5c;
        case 0x19eda0u: goto label_19eda0;
        default: break;
    }

    ctx->pc = 0x19eca0u;

    // 0x19eca0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x19eca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x19eca4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x19eca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x19eca8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x19eca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x19ecac: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x19ecacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x19ecb0: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x19ecb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x19ecb4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19ecb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19ecb8: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x19ECB8u;
    SET_GPR_U32(ctx, 31, 0x19ECC0u);
    ctx->pc = 0x19ECBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ECB8u;
    // 0x19ecbc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x19ECB8u, 0x19ECC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ECC0u;
label_19ecc0:
    // 0x19ecc0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19ecc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19ecc4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x19ecc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x19ecc8: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x19ecc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x19eccc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x19ecccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x19ecd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19ecd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ecd4: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x19ecd4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19ecd8: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x19ecd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x19ecdc: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x19ecdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x19ece0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19ece0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19ece4: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x19ece4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19ece8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x19ece8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x19ecec: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x19ececu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x19ecf0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x19ecf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x19ecf4: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x19ecf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x19ecf8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x19ecf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19ecfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19ecfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ed00: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x19ed00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x19ed04: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19ed04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19ed08: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x19ed08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x19ed0c: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x19ed0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x19ed10: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x19ed10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x19ed14: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x19ed14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x19ed18: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x19ed18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x19ed1c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x19ed1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x19ed20: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x19ed20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x19ed24: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x19ED24u;
    SET_GPR_U32(ctx, 31, 0x19ED2Cu);
    ctx->pc = 0x19ED28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ED24u;
    // 0x19ed28: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x19ED24u, 0x19ED2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ED2Cu;
label_19ed2c:
    // 0x19ed2c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19ED2Cu;
    {
        const bool branch_taken_0x19ed2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ED30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ED2Cu;
        // 0x19ed30: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ed2c) {
            ctx->pc = 0x19ED5Cu;
            goto label_19ed5c;
        }
    }
    ctx->pc = 0x19ED34u;
    // 0x19ed34: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x19ed34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19ed38: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x19ed38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x19ed3c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x19ed3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x19ed40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19ed40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ed44: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x19ed44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x19ed48: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x19ed48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ed4c: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x19ed4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x19ed50: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x19ed50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ed54: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x19ED54u;
    SET_GPR_U32(ctx, 31, 0x19ED5Cu);
    ctx->pc = 0x19ED58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ED54u;
    // 0x19ed58: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x19ED54u, 0x19ED5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ED5Cu;
label_19ed5c:
    // 0x19ed5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19ed5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ed60: 0x26060620  addiu       $a2, $s0, 0x620
    ctx->pc = 0x19ed60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x19ed64: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x19ed64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19ed68: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x19ed68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x19ed6c: 0xae0005e8  sw          $zero, 0x5E8($s0)
    ctx->pc = 0x19ed6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 0));
    // 0x19ed70: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19ed70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19ed74: 0xae0005e4  sw          $zero, 0x5E4($s0)
    ctx->pc = 0x19ed74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 0));
    // 0x19ed78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ed78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ed7c: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x19ed7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x19ed80: 0xae0005ec  sw          $zero, 0x5EC($s0)
    ctx->pc = 0x19ed80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1516), GPR_U32(ctx, 0));
    // 0x19ed84: 0xa605054a  sh          $a1, 0x54A($s0)
    ctx->pc = 0x19ed84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 5));
    // 0x19ed88: 0xae060608  sw          $a2, 0x608($s0)
    ctx->pc = 0x19ed88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 6));
    // 0x19ed8c: 0xa207060c  sb          $a3, 0x60C($s0)
    ctx->pc = 0x19ed8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1548), (uint8_t)GPR_U32(ctx, 7));
    // 0x19ed90: 0xa60305f6  sh          $v1, 0x5F6($s0)
    ctx->pc = 0x19ed90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1526), (uint16_t)GPR_U32(ctx, 3));
    // 0x19ed94: 0xa6050548  sh          $a1, 0x548($s0)
    ctx->pc = 0x19ed94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 5));
    // 0x19ed98: 0xc070a28  jal         func_1C28A0
    ctx->pc = 0x19ED98u;
    SET_GPR_U32(ctx, 31, 0x19EDA0u);
    ctx->pc = 0x19ED9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ED98u;
    // 0x19ed9c: 0xa60205f4  sh          $v0, 0x5F4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1524), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C28A0u, 0x19ED98u, 0x19EDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EDA0u;
label_19eda0:
    // 0x19eda0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x19eda0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19eda4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19eda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19eda8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x19eda8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19edac: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x19edacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19edb0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19edb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19edb4: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x19edb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19edb8: 0x3e00008  jr          $ra
    ctx->pc = 0x19EDB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EDB8u;
        // 0x19edbc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EDB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19EDC0u;
}
