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

// Function: func_0019EF18
// Address: 0x19ef18 - 0x19f038
void func_0019EF18_0x19ef18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019EF18_0x19ef18");
#endif

    switch (ctx->pc) {
        case 0x19ef38u: goto label_19ef38;
        case 0x19efa4u: goto label_19efa4;
        case 0x19efd4u: goto label_19efd4;
        case 0x19f018u: goto label_19f018;
        default: break;
    }

    ctx->pc = 0x19ef18u;

    // 0x19ef18: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x19ef18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x19ef1c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x19ef1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x19ef20: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x19ef20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x19ef24: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x19ef24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x19ef28: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x19ef28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x19ef2c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19ef2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19ef30: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x19EF30u;
    SET_GPR_U32(ctx, 31, 0x19EF38u);
    ctx->pc = 0x19EF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EF30u;
    // 0x19ef34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x19EF30u, 0x19EF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EF38u;
label_19ef38:
    // 0x19ef38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19ef38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19ef3c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x19ef3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x19ef40: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x19ef40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x19ef44: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x19ef44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x19ef48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19ef48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ef4c: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x19ef4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19ef50: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x19ef50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x19ef54: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x19ef54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x19ef58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19ef58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19ef5c: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x19ef5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19ef60: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x19ef60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x19ef64: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x19ef64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x19ef68: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x19ef68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x19ef6c: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x19ef6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x19ef70: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x19ef70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19ef74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19ef74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ef78: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x19ef78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x19ef7c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19ef7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19ef80: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x19ef80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x19ef84: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x19ef84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x19ef88: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x19ef88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x19ef8c: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x19ef8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x19ef90: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x19ef90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x19ef94: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x19ef94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x19ef98: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x19ef98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x19ef9c: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x19EF9Cu;
    SET_GPR_U32(ctx, 31, 0x19EFA4u);
    ctx->pc = 0x19EFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EF9Cu;
    // 0x19efa0: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x19EF9Cu, 0x19EFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EFA4u;
label_19efa4:
    // 0x19efa4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19EFA4u;
    {
        const bool branch_taken_0x19efa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EFA4u;
        // 0x19efa8: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19efa4) {
            ctx->pc = 0x19EFD4u;
            goto label_19efd4;
        }
    }
    ctx->pc = 0x19EFACu;
    // 0x19efac: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x19efacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19efb0: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x19efb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x19efb4: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x19efb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x19efb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19efb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19efbc: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x19efbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x19efc0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x19efc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19efc4: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x19efc4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x19efc8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x19efc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19efcc: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x19EFCCu;
    SET_GPR_U32(ctx, 31, 0x19EFD4u);
    ctx->pc = 0x19EFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EFCCu;
    // 0x19efd0: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x19EFCCu, 0x19EFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EFD4u;
label_19efd4:
    // 0x19efd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19efd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19efd8: 0x26050620  addiu       $a1, $s0, 0x620
    ctx->pc = 0x19efd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x19efdc: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x19efdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19efe0: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x19efe0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19efe4: 0xae0005e8  sw          $zero, 0x5E8($s0)
    ctx->pc = 0x19efe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 0));
    // 0x19efe8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19efe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19efec: 0xae0005e4  sw          $zero, 0x5E4($s0)
    ctx->pc = 0x19efecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 0));
    // 0x19eff0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19eff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eff4: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x19eff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x19eff8: 0xa60005f6  sh          $zero, 0x5F6($s0)
    ctx->pc = 0x19eff8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1526), (uint16_t)GPR_U32(ctx, 0));
    // 0x19effc: 0xa603054a  sh          $v1, 0x54A($s0)
    ctx->pc = 0x19effcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
    // 0x19f000: 0xae050608  sw          $a1, 0x608($s0)
    ctx->pc = 0x19f000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 5));
    // 0x19f004: 0xa206060c  sb          $a2, 0x60C($s0)
    ctx->pc = 0x19f004u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1548), (uint8_t)GPR_U32(ctx, 6));
    // 0x19f008: 0xae0705ec  sw          $a3, 0x5EC($s0)
    ctx->pc = 0x19f008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1516), GPR_U32(ctx, 7));
    // 0x19f00c: 0xa6030548  sh          $v1, 0x548($s0)
    ctx->pc = 0x19f00cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 3));
    // 0x19f010: 0xc070a28  jal         func_1C28A0
    ctx->pc = 0x19F010u;
    SET_GPR_U32(ctx, 31, 0x19F018u);
    ctx->pc = 0x19F014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F010u;
    // 0x19f014: 0xa60205f4  sh          $v0, 0x5F4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1524), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C28A0u, 0x19F010u, 0x19F018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F018u;
label_19f018:
    // 0x19f018: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x19f018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19f01c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19f01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f020: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x19f020u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19f024: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x19f024u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19f028: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19f028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19f02c: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x19f02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19f030: 0x3e00008  jr          $ra
    ctx->pc = 0x19F030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F030u;
        // 0x19f034: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F038u;
}
