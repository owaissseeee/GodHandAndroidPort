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

// Function: func_0019EA20
// Address: 0x19ea20 - 0x19eb48
void func_0019EA20_0x19ea20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019EA20_0x19ea20");
#endif

    switch (ctx->pc) {
        case 0x19ea40u: goto label_19ea40;
        case 0x19eab4u: goto label_19eab4;
        case 0x19eae4u: goto label_19eae4;
        case 0x19eb28u: goto label_19eb28;
        default: break;
    }

    ctx->pc = 0x19ea20u;

    // 0x19ea20: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x19ea20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x19ea24: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x19ea24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x19ea28: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x19ea28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x19ea2c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x19ea2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x19ea30: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x19ea30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x19ea34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19ea34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19ea38: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x19EA38u;
    SET_GPR_U32(ctx, 31, 0x19EA40u);
    ctx->pc = 0x19EA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EA38u;
    // 0x19ea3c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x19EA38u, 0x19EA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EA40u;
label_19ea40:
    // 0x19ea40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19ea40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19ea44: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x19ea44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x19ea48: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x19ea48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x19ea4c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x19ea4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19ea50: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x19ea50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19ea54: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x19ea54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
    // 0x19ea58: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x19ea58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x19ea5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19ea5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19ea60: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x19ea60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19ea64: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x19ea64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x19ea68: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x19ea68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x19ea6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19ea6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ea70: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x19ea70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x19ea74: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x19ea74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x19ea78: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x19ea78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x19ea7c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x19ea7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x19ea80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19ea80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ea84: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x19ea84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x19ea88: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19ea88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19ea8c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x19ea8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19ea90: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x19ea90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x19ea94: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x19ea94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x19ea98: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x19ea98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x19ea9c: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x19ea9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x19eaa0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x19eaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x19eaa4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x19eaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x19eaa8: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x19eaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x19eaac: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x19EAACu;
    SET_GPR_U32(ctx, 31, 0x19EAB4u);
    ctx->pc = 0x19EAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EAACu;
    // 0x19eab0: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x19EAACu, 0x19EAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EAB4u;
label_19eab4:
    // 0x19eab4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19EAB4u;
    {
        const bool branch_taken_0x19eab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EAB4u;
        // 0x19eab8: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eab4) {
            ctx->pc = 0x19EAE4u;
            goto label_19eae4;
        }
    }
    ctx->pc = 0x19EABCu;
    // 0x19eabc: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x19eabcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19eac0: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x19eac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x19eac4: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x19eac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x19eac8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19eac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eacc: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x19eaccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x19ead0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x19ead0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ead4: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x19ead4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x19ead8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x19ead8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eadc: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x19EADCu;
    SET_GPR_U32(ctx, 31, 0x19EAE4u);
    ctx->pc = 0x19EAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EADCu;
    // 0x19eae0: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x19EADCu, 0x19EAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EAE4u;
label_19eae4:
    // 0x19eae4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19eae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19eae8: 0x26050620  addiu       $a1, $s0, 0x620
    ctx->pc = 0x19eae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x19eaec: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x19eaecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19eaf0: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x19eaf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19eaf4: 0xae0005e8  sw          $zero, 0x5E8($s0)
    ctx->pc = 0x19eaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 0));
    // 0x19eaf8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19eaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19eafc: 0xae0005e4  sw          $zero, 0x5E4($s0)
    ctx->pc = 0x19eafcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 0));
    // 0x19eb00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19eb00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eb04: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x19eb04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x19eb08: 0xa60005f6  sh          $zero, 0x5F6($s0)
    ctx->pc = 0x19eb08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1526), (uint16_t)GPR_U32(ctx, 0));
    // 0x19eb0c: 0xa603054a  sh          $v1, 0x54A($s0)
    ctx->pc = 0x19eb0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
    // 0x19eb10: 0xae050608  sw          $a1, 0x608($s0)
    ctx->pc = 0x19eb10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 5));
    // 0x19eb14: 0xa206060c  sb          $a2, 0x60C($s0)
    ctx->pc = 0x19eb14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1548), (uint8_t)GPR_U32(ctx, 6));
    // 0x19eb18: 0xae0705ec  sw          $a3, 0x5EC($s0)
    ctx->pc = 0x19eb18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1516), GPR_U32(ctx, 7));
    // 0x19eb1c: 0xa6030548  sh          $v1, 0x548($s0)
    ctx->pc = 0x19eb1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 3));
    // 0x19eb20: 0xc070a28  jal         func_1C28A0
    ctx->pc = 0x19EB20u;
    SET_GPR_U32(ctx, 31, 0x19EB28u);
    ctx->pc = 0x19EB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EB20u;
    // 0x19eb24: 0xa60205f4  sh          $v0, 0x5F4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1524), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C28A0u, 0x19EB20u, 0x19EB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EB28u;
label_19eb28:
    // 0x19eb28: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x19eb28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19eb2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19eb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19eb30: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x19eb30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19eb34: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x19eb34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19eb38: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19eb38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19eb3c: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x19eb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19eb40: 0x3e00008  jr          $ra
    ctx->pc = 0x19EB40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EB40u;
        // 0x19eb44: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EB40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19EB48u;
}
