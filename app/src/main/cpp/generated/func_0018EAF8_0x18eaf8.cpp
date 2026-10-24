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

// Function: func_0018EAF8
// Address: 0x18eaf8 - 0x18ec28
void func_0018EAF8_0x18eaf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018EAF8_0x18eaf8");
#endif

    switch (ctx->pc) {
        case 0x18eb18u: goto label_18eb18;
        case 0x18eb90u: goto label_18eb90;
        case 0x18ebc0u: goto label_18ebc0;
        case 0x18ec04u: goto label_18ec04;
        default: break;
    }

    ctx->pc = 0x18eaf8u;

    // 0x18eaf8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x18eaf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x18eafc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x18eafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x18eb00: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x18eb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x18eb04: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x18eb04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x18eb08: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x18eb08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x18eb0c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18eb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18eb10: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x18EB10u;
    SET_GPR_U32(ctx, 31, 0x18EB18u);
    ctx->pc = 0x18EB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EB10u;
    // 0x18eb14: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x18EB10u, 0x18EB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EB18u;
label_18eb18:
    // 0x18eb18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18eb18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18eb1c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x18eb1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x18eb20: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x18eb20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x18eb24: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x18eb24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x18eb28: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x18eb28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18eb2c: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x18eb2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18eb30: 0x3c013f9c  lui         $at, 0x3F9C
    ctx->pc = 0x18eb30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16284 << 16));
    // 0x18eb34: 0x342163f1  ori         $at, $at, 0x63F1
    ctx->pc = 0x18eb34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25585);
    // 0x18eb38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18eb38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18eb3c: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x18eb3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18eb40: 0x3c014095  lui         $at, 0x4095
    ctx->pc = 0x18eb40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16533 << 16));
    // 0x18eb44: 0x34218106  ori         $at, $at, 0x8106
    ctx->pc = 0x18eb44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33030);
    // 0x18eb48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18eb48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18eb4c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x18eb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x18eb50: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x18eb50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x18eb54: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x18eb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x18eb58: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x18eb58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x18eb5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18eb5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18eb60: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x18eb60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x18eb64: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x18eb64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18eb68: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x18eb68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x18eb6c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x18eb6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x18eb70: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x18eb70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x18eb74: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x18eb74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x18eb78: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x18eb78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x18eb7c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x18eb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x18eb80: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x18eb80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x18eb84: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x18eb84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x18eb88: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x18EB88u;
    SET_GPR_U32(ctx, 31, 0x18EB90u);
    ctx->pc = 0x18EB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EB88u;
    // 0x18eb8c: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x18EB88u, 0x18EB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EB90u;
label_18eb90:
    // 0x18eb90: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18EB90u;
    {
        const bool branch_taken_0x18eb90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EB90u;
        // 0x18eb94: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18eb90) {
            ctx->pc = 0x18EBC0u;
            goto label_18ebc0;
        }
    }
    ctx->pc = 0x18EB98u;
    // 0x18eb98: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x18eb98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18eb9c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x18eb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x18eba0: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x18eba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x18eba4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18eba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18eba8: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x18eba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x18ebac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x18ebacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ebb0: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x18ebb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x18ebb4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x18ebb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ebb8: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x18EBB8u;
    SET_GPR_U32(ctx, 31, 0x18EBC0u);
    ctx->pc = 0x18EBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EBB8u;
    // 0x18ebbc: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x18EBB8u, 0x18EBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EBC0u;
label_18ebc0:
    // 0x18ebc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18ebc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ebc4: 0x26050620  addiu       $a1, $s0, 0x620
    ctx->pc = 0x18ebc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x18ebc8: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x18ebc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x18ebcc: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x18ebccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x18ebd0: 0xae0005e8  sw          $zero, 0x5E8($s0)
    ctx->pc = 0x18ebd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 0));
    // 0x18ebd4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18ebd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18ebd8: 0xae0005e4  sw          $zero, 0x5E4($s0)
    ctx->pc = 0x18ebd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 0));
    // 0x18ebdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18ebdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ebe0: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x18ebe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x18ebe4: 0xa60005f6  sh          $zero, 0x5F6($s0)
    ctx->pc = 0x18ebe4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1526), (uint16_t)GPR_U32(ctx, 0));
    // 0x18ebe8: 0xa603054a  sh          $v1, 0x54A($s0)
    ctx->pc = 0x18ebe8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
    // 0x18ebec: 0xae050608  sw          $a1, 0x608($s0)
    ctx->pc = 0x18ebecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 5));
    // 0x18ebf0: 0xa206060c  sb          $a2, 0x60C($s0)
    ctx->pc = 0x18ebf0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1548), (uint8_t)GPR_U32(ctx, 6));
    // 0x18ebf4: 0xae0705ec  sw          $a3, 0x5EC($s0)
    ctx->pc = 0x18ebf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1516), GPR_U32(ctx, 7));
    // 0x18ebf8: 0xa6030548  sh          $v1, 0x548($s0)
    ctx->pc = 0x18ebf8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 3));
    // 0x18ebfc: 0xc070a28  jal         func_1C28A0
    ctx->pc = 0x18EBFCu;
    SET_GPR_U32(ctx, 31, 0x18EC04u);
    ctx->pc = 0x18EC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EBFCu;
    // 0x18ec00: 0xa60205f4  sh          $v0, 0x5F4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1524), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C28A0u, 0x18EBFCu, 0x18EC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EC04u;
label_18ec04:
    // 0x18ec04: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x18ec04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18ec08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18ec08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ec0c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x18ec0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18ec10: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x18ec10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18ec14: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18ec14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18ec18: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x18ec18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18ec1c: 0x3e00008  jr          $ra
    ctx->pc = 0x18EC1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18EC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EC1Cu;
        // 0x18ec20: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EC1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18EC24u;
    // 0x18ec24: 0x0  nop
    ctx->pc = 0x18ec24u;
    // NOP
    ctx->pc = 0x18ec28u;
}
