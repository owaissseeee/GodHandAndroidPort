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

// Function: func_0019BF10
// Address: 0x19bf10 - 0x19c030
void func_0019BF10_0x19bf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019BF10_0x19bf10");
#endif

    switch (ctx->pc) {
        case 0x19bf30u: goto label_19bf30;
        case 0x19bf9cu: goto label_19bf9c;
        case 0x19bfccu: goto label_19bfcc;
        case 0x19c010u: goto label_19c010;
        default: break;
    }

    ctx->pc = 0x19bf10u;

    // 0x19bf10: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x19bf10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x19bf14: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x19bf14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x19bf18: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x19bf18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x19bf1c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x19bf1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x19bf20: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x19bf20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x19bf24: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19bf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19bf28: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x19BF28u;
    SET_GPR_U32(ctx, 31, 0x19BF30u);
    ctx->pc = 0x19BF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BF28u;
    // 0x19bf2c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x19BF28u, 0x19BF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BF30u;
label_19bf30:
    // 0x19bf30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19bf30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19bf34: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x19bf34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x19bf38: 0x3c013fb3  lui         $at, 0x3FB3
    ctx->pc = 0x19bf38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
    // 0x19bf3c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x19bf3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x19bf40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19bf40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19bf44: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x19bf44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19bf48: 0x3c01400c  lui         $at, 0x400C
    ctx->pc = 0x19bf48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16396 << 16));
    // 0x19bf4c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x19bf4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x19bf50: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19bf50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19bf54: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x19bf54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19bf58: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x19bf58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x19bf5c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x19bf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x19bf60: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x19bf60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x19bf64: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x19bf64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x19bf68: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x19bf68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19bf6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19bf6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bf70: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x19bf70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x19bf74: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19bf74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19bf78: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x19bf78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x19bf7c: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x19bf7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x19bf80: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x19bf80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x19bf84: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x19bf84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x19bf88: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x19bf88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x19bf8c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x19bf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x19bf90: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x19bf90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x19bf94: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x19BF94u;
    SET_GPR_U32(ctx, 31, 0x19BF9Cu);
    ctx->pc = 0x19BF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BF94u;
    // 0x19bf98: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x19BF94u, 0x19BF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BF9Cu;
label_19bf9c:
    // 0x19bf9c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19BF9Cu;
    {
        const bool branch_taken_0x19bf9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BF9Cu;
        // 0x19bfa0: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bf9c) {
            ctx->pc = 0x19BFCCu;
            goto label_19bfcc;
        }
    }
    ctx->pc = 0x19BFA4u;
    // 0x19bfa4: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x19bfa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19bfa8: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x19bfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x19bfac: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x19bfacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x19bfb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19bfb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bfb4: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x19bfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x19bfb8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x19bfb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bfbc: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x19bfbcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x19bfc0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x19bfc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bfc4: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x19BFC4u;
    SET_GPR_U32(ctx, 31, 0x19BFCCu);
    ctx->pc = 0x19BFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BFC4u;
    // 0x19bfc8: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x19BFC4u, 0x19BFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BFCCu;
label_19bfcc:
    // 0x19bfcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19bfccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19bfd0: 0x26050620  addiu       $a1, $s0, 0x620
    ctx->pc = 0x19bfd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x19bfd4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x19bfd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x19bfd8: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x19bfd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19bfdc: 0xae0005e8  sw          $zero, 0x5E8($s0)
    ctx->pc = 0x19bfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 0));
    // 0x19bfe0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19bfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19bfe4: 0xae0005e4  sw          $zero, 0x5E4($s0)
    ctx->pc = 0x19bfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 0));
    // 0x19bfe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19bfe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bfec: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x19bfecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x19bff0: 0xa60005f6  sh          $zero, 0x5F6($s0)
    ctx->pc = 0x19bff0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1526), (uint16_t)GPR_U32(ctx, 0));
    // 0x19bff4: 0xa603054a  sh          $v1, 0x54A($s0)
    ctx->pc = 0x19bff4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
    // 0x19bff8: 0xae050608  sw          $a1, 0x608($s0)
    ctx->pc = 0x19bff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 5));
    // 0x19bffc: 0xa206060c  sb          $a2, 0x60C($s0)
    ctx->pc = 0x19bffcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1548), (uint8_t)GPR_U32(ctx, 6));
    // 0x19c000: 0xae0705ec  sw          $a3, 0x5EC($s0)
    ctx->pc = 0x19c000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1516), GPR_U32(ctx, 7));
    // 0x19c004: 0xa6030548  sh          $v1, 0x548($s0)
    ctx->pc = 0x19c004u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 3));
    // 0x19c008: 0xc070a28  jal         func_1C28A0
    ctx->pc = 0x19C008u;
    SET_GPR_U32(ctx, 31, 0x19C010u);
    ctx->pc = 0x19C00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C008u;
    // 0x19c00c: 0xa60205f4  sh          $v0, 0x5F4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1524), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C28A0u, 0x19C008u, 0x19C010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C010u;
label_19c010:
    // 0x19c010: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x19c010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19c014: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19c014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c018: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x19c018u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19c01c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x19c01cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19c020: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19c020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19c024: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x19c024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19c028: 0x3e00008  jr          $ra
    ctx->pc = 0x19C028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C028u;
        // 0x19c02c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C030u;
}
