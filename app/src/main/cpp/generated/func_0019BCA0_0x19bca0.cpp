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

// Function: func_0019BCA0
// Address: 0x19bca0 - 0x19bdb8
void func_0019BCA0_0x19bca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019BCA0_0x19bca0");
#endif

    switch (ctx->pc) {
        case 0x19bcc0u: goto label_19bcc0;
        case 0x19bd24u: goto label_19bd24;
        case 0x19bd54u: goto label_19bd54;
        case 0x19bd98u: goto label_19bd98;
        default: break;
    }

    ctx->pc = 0x19bca0u;

    // 0x19bca0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x19bca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x19bca4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x19bca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x19bca8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x19bca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x19bcac: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x19bcacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x19bcb0: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x19bcb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x19bcb4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19bcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19bcb8: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x19BCB8u;
    SET_GPR_U32(ctx, 31, 0x19BCC0u);
    ctx->pc = 0x19BCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BCB8u;
    // 0x19bcbc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x19BCB8u, 0x19BCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BCC0u;
label_19bcc0:
    // 0x19bcc0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19bcc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19bcc4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x19bcc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x19bcc8: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x19bcc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x19bccc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19bcccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19bcd0: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x19bcd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19bcd4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x19bcd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x19bcd8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19bcd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19bcdc: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x19bcdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19bce0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x19bce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x19bce4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x19bce4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x19bce8: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x19bce8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x19bcec: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x19bcecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x19bcf0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x19bcf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19bcf4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19bcf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bcf8: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x19bcf8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x19bcfc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19bcfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19bd00: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x19bd00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x19bd04: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x19bd04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x19bd08: 0xe7b40014  swc1        $f20, 0x14($sp)
    ctx->pc = 0x19bd08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x19bd0c: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x19bd0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x19bd10: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x19bd10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x19bd14: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x19bd14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x19bd18: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x19bd18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x19bd1c: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x19BD1Cu;
    SET_GPR_U32(ctx, 31, 0x19BD24u);
    ctx->pc = 0x19BD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BD1Cu;
    // 0x19bd20: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x19BD1Cu, 0x19BD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BD24u;
label_19bd24:
    // 0x19bd24: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19BD24u;
    {
        const bool branch_taken_0x19bd24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BD24u;
        // 0x19bd28: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bd24) {
            ctx->pc = 0x19BD54u;
            goto label_19bd54;
        }
    }
    ctx->pc = 0x19BD2Cu;
    // 0x19bd2c: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x19bd2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19bd30: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x19bd30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x19bd34: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x19bd34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x19bd38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19bd38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bd3c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x19bd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x19bd40: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x19bd40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bd44: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x19bd44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x19bd48: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x19bd48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bd4c: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x19BD4Cu;
    SET_GPR_U32(ctx, 31, 0x19BD54u);
    ctx->pc = 0x19BD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BD4Cu;
    // 0x19bd50: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x19BD4Cu, 0x19BD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BD54u;
label_19bd54:
    // 0x19bd54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19bd54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19bd58: 0x26050620  addiu       $a1, $s0, 0x620
    ctx->pc = 0x19bd58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x19bd5c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x19bd5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x19bd60: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x19bd60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19bd64: 0xae0005e8  sw          $zero, 0x5E8($s0)
    ctx->pc = 0x19bd64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 0));
    // 0x19bd68: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19bd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19bd6c: 0xae0005e4  sw          $zero, 0x5E4($s0)
    ctx->pc = 0x19bd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 0));
    // 0x19bd70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19bd70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bd74: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x19bd74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x19bd78: 0xa60005f6  sh          $zero, 0x5F6($s0)
    ctx->pc = 0x19bd78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1526), (uint16_t)GPR_U32(ctx, 0));
    // 0x19bd7c: 0xa603054a  sh          $v1, 0x54A($s0)
    ctx->pc = 0x19bd7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
    // 0x19bd80: 0xae050608  sw          $a1, 0x608($s0)
    ctx->pc = 0x19bd80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 5));
    // 0x19bd84: 0xa206060c  sb          $a2, 0x60C($s0)
    ctx->pc = 0x19bd84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1548), (uint8_t)GPR_U32(ctx, 6));
    // 0x19bd88: 0xae0705ec  sw          $a3, 0x5EC($s0)
    ctx->pc = 0x19bd88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1516), GPR_U32(ctx, 7));
    // 0x19bd8c: 0xa6030548  sh          $v1, 0x548($s0)
    ctx->pc = 0x19bd8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 3));
    // 0x19bd90: 0xc070a28  jal         func_1C28A0
    ctx->pc = 0x19BD90u;
    SET_GPR_U32(ctx, 31, 0x19BD98u);
    ctx->pc = 0x19BD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BD90u;
    // 0x19bd94: 0xa60205f4  sh          $v0, 0x5F4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1524), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C28A0u, 0x19BD90u, 0x19BD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BD98u;
label_19bd98:
    // 0x19bd98: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x19bd98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19bd9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19bd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19bda0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x19bda0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19bda4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x19bda4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19bda8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19bda8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19bdac: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x19bdacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19bdb0: 0x3e00008  jr          $ra
    ctx->pc = 0x19BDB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BDB0u;
        // 0x19bdb4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BDB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19BDB8u;
}
