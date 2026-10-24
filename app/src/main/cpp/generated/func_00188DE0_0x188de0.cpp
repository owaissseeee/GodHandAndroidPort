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

// Function: func_00188DE0
// Address: 0x188de0 - 0x188f10
void func_00188DE0_0x188de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00188DE0_0x188de0");
#endif

    switch (ctx->pc) {
        case 0x188e00u: goto label_188e00;
        case 0x188e74u: goto label_188e74;
        case 0x188ea4u: goto label_188ea4;
        case 0x188eecu: goto label_188eec;
        default: break;
    }

    ctx->pc = 0x188de0u;

    // 0x188de0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x188de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x188de4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x188de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x188de8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x188de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x188dec: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x188decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x188df0: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x188df0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x188df4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x188df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x188df8: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x188DF8u;
    SET_GPR_U32(ctx, 31, 0x188E00u);
    ctx->pc = 0x188DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188DF8u;
    // 0x188dfc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x188DF8u, 0x188E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188E00u;
label_188e00:
    // 0x188e00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x188e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x188e04: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x188e04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x188e08: 0x3c01408c  lui         $at, 0x408C
    ctx->pc = 0x188e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16524 << 16));
    // 0x188e0c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x188e0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x188e10: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x188e10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x188e14: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x188e14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x188e18: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x188e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x188e1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x188e1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x188e20: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x188e20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x188e24: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x188e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x188e28: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x188e28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x188e2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x188e2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188e30: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x188e30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x188e34: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x188e34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x188e38: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x188e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x188e3c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x188e3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x188e40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x188e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188e44: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x188e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x188e48: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x188e48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x188e4c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x188e4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x188e50: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x188e50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x188e54: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x188e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x188e58: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x188e58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x188e5c: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x188e5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x188e60: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x188e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x188e64: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x188e64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x188e68: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x188e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x188e6c: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x188E6Cu;
    SET_GPR_U32(ctx, 31, 0x188E74u);
    ctx->pc = 0x188E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188E6Cu;
    // 0x188e70: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x188E6Cu, 0x188E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188E74u;
label_188e74:
    // 0x188e74: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x188E74u;
    {
        const bool branch_taken_0x188e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188E74u;
        // 0x188e78: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188e74) {
            ctx->pc = 0x188EA4u;
            goto label_188ea4;
        }
    }
    ctx->pc = 0x188E7Cu;
    // 0x188e7c: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x188e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x188e80: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x188e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x188e84: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x188e84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x188e88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x188e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188e8c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x188e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x188e90: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x188e90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188e94: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x188e94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x188e98: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x188e98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188e9c: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x188E9Cu;
    SET_GPR_U32(ctx, 31, 0x188EA4u);
    ctx->pc = 0x188EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188E9Cu;
    // 0x188ea0: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x188E9Cu, 0x188EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188EA4u;
label_188ea4:
    // 0x188ea4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x188ea4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188ea8: 0x26030620  addiu       $v1, $s0, 0x620
    ctx->pc = 0x188ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x188eac: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x188eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x188eb0: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x188eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x188eb4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x188eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x188eb8: 0xae0005e8  sw          $zero, 0x5E8($s0)
    ctx->pc = 0x188eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 0));
    // 0x188ebc: 0xae0005e4  sw          $zero, 0x5E4($s0)
    ctx->pc = 0x188ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 0));
    // 0x188ec0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x188ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x188ec4: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x188ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x188ec8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x188ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188ecc: 0xa608054a  sh          $t0, 0x54A($s0)
    ctx->pc = 0x188eccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 8));
    // 0x188ed0: 0xae030608  sw          $v1, 0x608($s0)
    ctx->pc = 0x188ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 3));
    // 0x188ed4: 0xa205060c  sb          $a1, 0x60C($s0)
    ctx->pc = 0x188ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1548), (uint8_t)GPR_U32(ctx, 5));
    // 0x188ed8: 0xae0605ec  sw          $a2, 0x5EC($s0)
    ctx->pc = 0x188ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1516), GPR_U32(ctx, 6));
    // 0x188edc: 0xa60705f6  sh          $a3, 0x5F6($s0)
    ctx->pc = 0x188edcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1526), (uint16_t)GPR_U32(ctx, 7));
    // 0x188ee0: 0xa6080548  sh          $t0, 0x548($s0)
    ctx->pc = 0x188ee0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 8));
    // 0x188ee4: 0xc070a28  jal         func_1C28A0
    ctx->pc = 0x188EE4u;
    SET_GPR_U32(ctx, 31, 0x188EECu);
    ctx->pc = 0x188EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188EE4u;
    // 0x188ee8: 0xa60205f4  sh          $v0, 0x5F4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1524), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C28A0u, 0x188EE4u, 0x188EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188EECu;
label_188eec:
    // 0x188eec: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x188eecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x188ef0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x188ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188ef4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x188ef4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x188ef8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x188ef8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x188efc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x188efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x188f00: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x188f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x188f04: 0x3e00008  jr          $ra
    ctx->pc = 0x188F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188F04u;
        // 0x188f08: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188F0Cu;
    // 0x188f0c: 0x0  nop
    ctx->pc = 0x188f0cu;
    // NOP
    ctx->pc = 0x188f10u;
}
