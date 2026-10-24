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

// Function: func_001A3B80
// Address: 0x1a3b80 - 0x1a3ca0
void func_001A3B80_0x1a3b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A3B80_0x1a3b80");
#endif

    switch (ctx->pc) {
        case 0x1a3ba0u: goto label_1a3ba0;
        case 0x1a3c08u: goto label_1a3c08;
        case 0x1a3c38u: goto label_1a3c38;
        case 0x1a3c7cu: goto label_1a3c7c;
        default: break;
    }

    ctx->pc = 0x1a3b80u;

    // 0x1a3b80: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1a3b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1a3b84: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1a3b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1a3b88: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1a3b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1a3b8c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1a3b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1a3b90: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x1a3b90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1a3b94: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a3b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a3b98: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x1A3B98u;
    SET_GPR_U32(ctx, 31, 0x1A3BA0u);
    ctx->pc = 0x1A3B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3B98u;
    // 0x1a3b9c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x1A3B98u, 0x1A3BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3BA0u;
label_1a3ba0:
    // 0x1a3ba0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a3ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a3ba4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a3ba4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a3ba8: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x1a3ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x1a3bac: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1a3bacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1a3bb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a3bb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3bb4: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x1a3bb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a3bb8: 0x3c014088  lui         $at, 0x4088
    ctx->pc = 0x1a3bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16520 << 16));
    // 0x1a3bbc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a3bbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a3bc0: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x1a3bc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a3bc4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1a3bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1a3bc8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1a3bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1a3bcc: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1a3bccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1a3bd0: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x1a3bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x1a3bd4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1a3bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a3bd8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a3bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3bdc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1a3bdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1a3be0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a3be0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a3be4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1a3be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1a3be8: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1a3be8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1a3bec: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1a3becu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1a3bf0: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x1a3bf0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1a3bf4: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1a3bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x1a3bf8: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1a3bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1a3bfc: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1a3bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x1a3c00: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x1A3C00u;
    SET_GPR_U32(ctx, 31, 0x1A3C08u);
    ctx->pc = 0x1A3C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3C00u;
    // 0x1a3c04: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x1A3C00u, 0x1A3C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3C08u;
label_1a3c08:
    // 0x1a3c08: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A3C08u;
    {
        const bool branch_taken_0x1a3c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C08u;
        // 0x1a3c0c: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3c08) {
            ctx->pc = 0x1A3C38u;
            goto label_1a3c38;
        }
    }
    ctx->pc = 0x1A3C10u;
    // 0x1a3c10: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x1a3c10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a3c14: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1a3c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1a3c18: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1a3c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1a3c1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a3c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3c20: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1a3c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1a3c24: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a3c24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3c28: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x1a3c28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x1a3c2c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1a3c2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3c30: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x1A3C30u;
    SET_GPR_U32(ctx, 31, 0x1A3C38u);
    ctx->pc = 0x1A3C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3C30u;
    // 0x1a3c34: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x1A3C30u, 0x1A3C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3C38u;
label_1a3c38:
    // 0x1a3c38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a3c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3c3c: 0x26050620  addiu       $a1, $s0, 0x620
    ctx->pc = 0x1a3c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x1a3c40: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1a3c40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1a3c44: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x1a3c44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a3c48: 0xae0005e8  sw          $zero, 0x5E8($s0)
    ctx->pc = 0x1a3c48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 0));
    // 0x1a3c4c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a3c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a3c50: 0xae0005e4  sw          $zero, 0x5E4($s0)
    ctx->pc = 0x1a3c50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 0));
    // 0x1a3c54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3c58: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x1a3c58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x1a3c5c: 0xa60005f6  sh          $zero, 0x5F6($s0)
    ctx->pc = 0x1a3c5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1526), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a3c60: 0xa603054a  sh          $v1, 0x54A($s0)
    ctx->pc = 0x1a3c60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a3c64: 0xae050608  sw          $a1, 0x608($s0)
    ctx->pc = 0x1a3c64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 5));
    // 0x1a3c68: 0xa206060c  sb          $a2, 0x60C($s0)
    ctx->pc = 0x1a3c68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1548), (uint8_t)GPR_U32(ctx, 6));
    // 0x1a3c6c: 0xae0705ec  sw          $a3, 0x5EC($s0)
    ctx->pc = 0x1a3c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1516), GPR_U32(ctx, 7));
    // 0x1a3c70: 0xa6030548  sh          $v1, 0x548($s0)
    ctx->pc = 0x1a3c70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a3c74: 0xc070a28  jal         func_1C28A0
    ctx->pc = 0x1A3C74u;
    SET_GPR_U32(ctx, 31, 0x1A3C7Cu);
    ctx->pc = 0x1A3C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3C74u;
    // 0x1a3c78: 0xa60205f4  sh          $v0, 0x5F4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1524), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C28A0u, 0x1A3C74u, 0x1A3C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3C7Cu;
label_1a3c7c:
    // 0x1a3c7c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1a3c7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a3c80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a3c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a3c84: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1a3c84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a3c88: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1a3c88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a3c8c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a3c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a3c90: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x1a3c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a3c94: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C94u;
        // 0x1a3c98: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3C9Cu;
    // 0x1a3c9c: 0x0  nop
    ctx->pc = 0x1a3c9cu;
    // NOP
    ctx->pc = 0x1a3ca0u;
}
