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

// Function: func_001A0968
// Address: 0x1a0968 - 0x1a0a80
void func_001A0968_0x1a0968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A0968_0x1a0968");
#endif

    switch (ctx->pc) {
        case 0x1a0988u: goto label_1a0988;
        case 0x1a09e4u: goto label_1a09e4;
        case 0x1a0a14u: goto label_1a0a14;
        case 0x1a0a5cu: goto label_1a0a5c;
        default: break;
    }

    ctx->pc = 0x1a0968u;

    // 0x1a0968: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1a0968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1a096c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1a096cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1a0970: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1a0970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1a0974: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1a0974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1a0978: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x1a0978u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1a097c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a097cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a0980: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x1A0980u;
    SET_GPR_U32(ctx, 31, 0x1A0988u);
    ctx->pc = 0x1A0984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0980u;
    // 0x1a0984: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x1A0980u, 0x1A0988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0988u;
label_1a0988:
    // 0x1a0988: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a0988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a098c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a098cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a0990: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1a0990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1a0994: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a0994u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a0998: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x1a0998u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a099c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1a099cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a09a0: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x1a09a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a09a4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1a09a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1a09a8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1a09a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1a09ac: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1a09acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1a09b0: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x1a09b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x1a09b4: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x1a09b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1a09b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a09b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a09bc: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1a09bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1a09c0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a09c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a09c4: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x1a09c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1a09c8: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x1a09c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1a09cc: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x1a09ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1a09d0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1a09d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x1a09d4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1a09d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1a09d8: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1a09d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x1a09dc: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x1A09DCu;
    SET_GPR_U32(ctx, 31, 0x1A09E4u);
    ctx->pc = 0x1A09E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A09DCu;
    // 0x1a09e0: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x1A09DCu, 0x1A09E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A09E4u;
label_1a09e4:
    // 0x1a09e4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A09E4u;
    {
        const bool branch_taken_0x1a09e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A09E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A09E4u;
        // 0x1a09e8: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a09e4) {
            ctx->pc = 0x1A0A14u;
            goto label_1a0a14;
        }
    }
    ctx->pc = 0x1A09ECu;
    // 0x1a09ec: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x1a09ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a09f0: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1a09f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1a09f4: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1a09f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1a09f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a09f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a09fc: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1a09fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1a0a00: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a0a00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0a04: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x1a0a04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x1a0a08: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1a0a08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0a0c: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x1A0A0Cu;
    SET_GPR_U32(ctx, 31, 0x1A0A14u);
    ctx->pc = 0x1A0A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0A0Cu;
    // 0x1a0a10: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x1A0A0Cu, 0x1A0A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0A14u;
label_1a0a14:
    // 0x1a0a14: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a0a14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0a18: 0x26030620  addiu       $v1, $s0, 0x620
    ctx->pc = 0x1a0a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x1a0a1c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1a0a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a0a20: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x1a0a20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1a0a24: 0x2407002e  addiu       $a3, $zero, 0x2E
    ctx->pc = 0x1a0a24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x1a0a28: 0xae0005e8  sw          $zero, 0x5E8($s0)
    ctx->pc = 0x1a0a28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 0));
    // 0x1a0a2c: 0xae0005e4  sw          $zero, 0x5E4($s0)
    ctx->pc = 0x1a0a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 0));
    // 0x1a0a30: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a0a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a0a34: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x1a0a34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x1a0a38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0a3c: 0xa608054a  sh          $t0, 0x54A($s0)
    ctx->pc = 0x1a0a3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 8));
    // 0x1a0a40: 0xae030608  sw          $v1, 0x608($s0)
    ctx->pc = 0x1a0a40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 3));
    // 0x1a0a44: 0xa205060c  sb          $a1, 0x60C($s0)
    ctx->pc = 0x1a0a44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1548), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a0a48: 0xae0605ec  sw          $a2, 0x5EC($s0)
    ctx->pc = 0x1a0a48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1516), GPR_U32(ctx, 6));
    // 0x1a0a4c: 0xa60705f6  sh          $a3, 0x5F6($s0)
    ctx->pc = 0x1a0a4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1526), (uint16_t)GPR_U32(ctx, 7));
    // 0x1a0a50: 0xa6080548  sh          $t0, 0x548($s0)
    ctx->pc = 0x1a0a50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 8));
    // 0x1a0a54: 0xc070a28  jal         func_1C28A0
    ctx->pc = 0x1A0A54u;
    SET_GPR_U32(ctx, 31, 0x1A0A5Cu);
    ctx->pc = 0x1A0A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0A54u;
    // 0x1a0a58: 0xa60205f4  sh          $v0, 0x5F4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1524), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C28A0u, 0x1A0A54u, 0x1A0A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0A5Cu;
label_1a0a5c:
    // 0x1a0a5c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1a0a5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a0a60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a0a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0a64: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1a0a64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a0a68: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1a0a68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a0a6c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a0a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0a70: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x1a0a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a0a74: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0A74u;
        // 0x1a0a78: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0A7Cu;
    // 0x1a0a7c: 0x0  nop
    ctx->pc = 0x1a0a7cu;
    // NOP
    ctx->pc = 0x1a0a80u;
}
