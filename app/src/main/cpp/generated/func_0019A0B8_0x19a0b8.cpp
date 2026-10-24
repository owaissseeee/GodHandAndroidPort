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

// Function: func_0019A0B8
// Address: 0x19a0b8 - 0x19a1d0
void func_0019A0B8_0x19a0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019A0B8_0x19a0b8");
#endif

    switch (ctx->pc) {
        case 0x19a0d8u: goto label_19a0d8;
        case 0x19a140u: goto label_19a140;
        case 0x19a170u: goto label_19a170;
        case 0x19a1b0u: goto label_19a1b0;
        default: break;
    }

    ctx->pc = 0x19a0b8u;

    // 0x19a0b8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x19a0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x19a0bc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x19a0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x19a0c0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x19a0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x19a0c4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x19a0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x19a0c8: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x19a0c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x19a0cc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19a0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19a0d0: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x19A0D0u;
    SET_GPR_U32(ctx, 31, 0x19A0D8u);
    ctx->pc = 0x19A0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A0D0u;
    // 0x19a0d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x19A0D0u, 0x19A0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A0D8u;
label_19a0d8:
    // 0x19a0d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19a0d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19a0dc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x19a0dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x19a0e0: 0x3c014066  lui         $at, 0x4066
    ctx->pc = 0x19a0e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16486 << 16));
    // 0x19a0e4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x19a0e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x19a0e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19a0e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a0ec: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x19a0ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19a0f0: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x19a0f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
    // 0x19a0f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19a0f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19a0f8: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x19a0f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19a0fc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x19a0fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x19a100: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x19a100u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x19a104: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x19a104u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x19a108: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x19a108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x19a10c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x19a10cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19a110: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19a110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a114: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x19a114u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x19a118: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19a118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19a11c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x19a11cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x19a120: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x19a120u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x19a124: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x19a124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x19a128: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x19a128u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x19a12c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x19a12cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x19a130: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x19a130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x19a134: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x19a134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x19a138: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x19A138u;
    SET_GPR_U32(ctx, 31, 0x19A140u);
    ctx->pc = 0x19A13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A138u;
    // 0x19a13c: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x19A138u, 0x19A140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A140u;
label_19a140:
    // 0x19a140: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19A140u;
    {
        const bool branch_taken_0x19a140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A140u;
        // 0x19a144: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a140) {
            ctx->pc = 0x19A170u;
            goto label_19a170;
        }
    }
    ctx->pc = 0x19A148u;
    // 0x19a148: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x19a148u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19a14c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x19a14cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x19a150: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x19a150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x19a154: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19a154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a158: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x19a158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x19a15c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x19a15cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a160: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x19a160u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x19a164: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x19a164u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a168: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x19A168u;
    SET_GPR_U32(ctx, 31, 0x19A170u);
    ctx->pc = 0x19A16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A168u;
    // 0x19a16c: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x19A168u, 0x19A170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A170u;
label_19a170:
    // 0x19a170: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19a170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a174: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x19a174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19a178: 0x26030620  addiu       $v1, $s0, 0x620
    ctx->pc = 0x19a178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x19a17c: 0xae0005e8  sw          $zero, 0x5E8($s0)
    ctx->pc = 0x19a17cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 0));
    // 0x19a180: 0xae0005e4  sw          $zero, 0x5E4($s0)
    ctx->pc = 0x19a180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 0));
    // 0x19a184: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19a184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19a188: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x19a188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x19a18c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a190: 0xa60005f6  sh          $zero, 0x5F6($s0)
    ctx->pc = 0x19a190u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1526), (uint16_t)GPR_U32(ctx, 0));
    // 0x19a194: 0xa605054a  sh          $a1, 0x54A($s0)
    ctx->pc = 0x19a194u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 5));
    // 0x19a198: 0xae030608  sw          $v1, 0x608($s0)
    ctx->pc = 0x19a198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 3));
    // 0x19a19c: 0xae0605ec  sw          $a2, 0x5EC($s0)
    ctx->pc = 0x19a19cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1516), GPR_U32(ctx, 6));
    // 0x19a1a0: 0xa6050548  sh          $a1, 0x548($s0)
    ctx->pc = 0x19a1a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 5));
    // 0x19a1a4: 0xa206060c  sb          $a2, 0x60C($s0)
    ctx->pc = 0x19a1a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1548), (uint8_t)GPR_U32(ctx, 6));
    // 0x19a1a8: 0xc070a28  jal         func_1C28A0
    ctx->pc = 0x19A1A8u;
    SET_GPR_U32(ctx, 31, 0x19A1B0u);
    ctx->pc = 0x19A1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A1A8u;
    // 0x19a1ac: 0xa60205f4  sh          $v0, 0x5F4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1524), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C28A0u, 0x19A1A8u, 0x19A1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A1B0u;
label_19a1b0:
    // 0x19a1b0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x19a1b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19a1b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19a1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a1b8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x19a1b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19a1bc: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x19a1bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19a1c0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19a1c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19a1c4: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x19a1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19a1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x19A1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A1C8u;
        // 0x19a1cc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A1C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A1D0u;
}
