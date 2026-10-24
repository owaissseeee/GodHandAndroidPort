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

// Function: func_00192A98
// Address: 0x192a98 - 0x192bc8
void func_00192A98_0x192a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00192A98_0x192a98");
#endif

    switch (ctx->pc) {
        case 0x192ab8u: goto label_192ab8;
        case 0x192b30u: goto label_192b30;
        case 0x192b60u: goto label_192b60;
        case 0x192ba4u: goto label_192ba4;
        default: break;
    }

    ctx->pc = 0x192a98u;

    // 0x192a98: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x192a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x192a9c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x192a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x192aa0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x192aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x192aa4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x192aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x192aa8: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x192aa8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x192aac: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x192aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x192ab0: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x192AB0u;
    SET_GPR_U32(ctx, 31, 0x192AB8u);
    ctx->pc = 0x192AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192AB0u;
    // 0x192ab4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x192AB0u, 0x192AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192AB8u;
label_192ab8:
    // 0x192ab8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x192ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x192abc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x192abcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x192ac0: 0x3c014086  lui         $at, 0x4086
    ctx->pc = 0x192ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16518 << 16));
    // 0x192ac4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x192ac4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x192ac8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x192ac8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x192acc: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x192accu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x192ad0: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x192ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x192ad4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x192ad4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x192ad8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x192ad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192adc: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x192adcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x192ae0: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x192ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x192ae4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x192ae4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x192ae8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x192ae8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192aec: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x192aecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x192af0: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x192af0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x192af4: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x192af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x192af8: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x192af8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x192afc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x192afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192b00: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x192b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x192b04: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x192b04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x192b08: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x192b08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x192b0c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x192b0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x192b10: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x192b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x192b14: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x192b14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x192b18: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x192b18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x192b1c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x192b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x192b20: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x192b20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x192b24: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x192b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x192b28: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x192B28u;
    SET_GPR_U32(ctx, 31, 0x192B30u);
    ctx->pc = 0x192B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192B28u;
    // 0x192b2c: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x192B28u, 0x192B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192B30u;
label_192b30:
    // 0x192b30: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x192B30u;
    {
        const bool branch_taken_0x192b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192B30u;
        // 0x192b34: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192b30) {
            ctx->pc = 0x192B60u;
            goto label_192b60;
        }
    }
    ctx->pc = 0x192B38u;
    // 0x192b38: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x192b38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x192b3c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x192b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x192b40: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x192b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x192b44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x192b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192b48: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x192b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x192b4c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x192b4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192b50: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x192b50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x192b54: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x192b54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192b58: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x192B58u;
    SET_GPR_U32(ctx, 31, 0x192B60u);
    ctx->pc = 0x192B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192B58u;
    // 0x192b5c: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x192B58u, 0x192B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192B60u;
label_192b60:
    // 0x192b60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x192b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192b64: 0x26050620  addiu       $a1, $s0, 0x620
    ctx->pc = 0x192b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x192b68: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x192b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x192b6c: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x192b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x192b70: 0xae0005e8  sw          $zero, 0x5E8($s0)
    ctx->pc = 0x192b70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 0));
    // 0x192b74: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x192b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x192b78: 0xae0005e4  sw          $zero, 0x5E4($s0)
    ctx->pc = 0x192b78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 0));
    // 0x192b7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x192b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192b80: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x192b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x192b84: 0xa60005f6  sh          $zero, 0x5F6($s0)
    ctx->pc = 0x192b84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1526), (uint16_t)GPR_U32(ctx, 0));
    // 0x192b88: 0xa603054a  sh          $v1, 0x54A($s0)
    ctx->pc = 0x192b88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
    // 0x192b8c: 0xae050608  sw          $a1, 0x608($s0)
    ctx->pc = 0x192b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 5));
    // 0x192b90: 0xa206060c  sb          $a2, 0x60C($s0)
    ctx->pc = 0x192b90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1548), (uint8_t)GPR_U32(ctx, 6));
    // 0x192b94: 0xae0705ec  sw          $a3, 0x5EC($s0)
    ctx->pc = 0x192b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1516), GPR_U32(ctx, 7));
    // 0x192b98: 0xa6030548  sh          $v1, 0x548($s0)
    ctx->pc = 0x192b98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 3));
    // 0x192b9c: 0xc070a28  jal         func_1C28A0
    ctx->pc = 0x192B9Cu;
    SET_GPR_U32(ctx, 31, 0x192BA4u);
    ctx->pc = 0x192BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192B9Cu;
    // 0x192ba0: 0xa60205f4  sh          $v0, 0x5F4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1524), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C28A0u, 0x192B9Cu, 0x192BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192BA4u;
label_192ba4:
    // 0x192ba4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x192ba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x192ba8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x192ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192bac: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x192bacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x192bb0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x192bb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x192bb4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x192bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x192bb8: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x192bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x192bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x192BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192BBCu;
        // 0x192bc0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192BC4u;
    // 0x192bc4: 0x0  nop
    ctx->pc = 0x192bc4u;
    // NOP
    ctx->pc = 0x192bc8u;
}
