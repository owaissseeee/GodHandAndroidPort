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

// Function: func_00193D08
// Address: 0x193d08 - 0x193e38
void func_00193D08_0x193d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00193D08_0x193d08");
#endif

    switch (ctx->pc) {
        case 0x193d28u: goto label_193d28;
        case 0x193da0u: goto label_193da0;
        case 0x193dd0u: goto label_193dd0;
        case 0x193e14u: goto label_193e14;
        default: break;
    }

    ctx->pc = 0x193d08u;

    // 0x193d08: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x193d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x193d0c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x193d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x193d10: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x193d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x193d14: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x193d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x193d18: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x193d18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x193d1c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x193d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x193d20: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x193D20u;
    SET_GPR_U32(ctx, 31, 0x193D28u);
    ctx->pc = 0x193D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193D20u;
    // 0x193d24: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x193D20u, 0x193D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193D28u;
label_193d28:
    // 0x193d28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x193d28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x193d2c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x193d2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x193d30: 0x3c01401b  lui         $at, 0x401B
    ctx->pc = 0x193d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16411 << 16));
    // 0x193d34: 0x34218ef3  ori         $at, $at, 0x8EF3
    ctx->pc = 0x193d34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36595);
    // 0x193d38: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x193d38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x193d3c: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x193d3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x193d40: 0x3c013f94  lui         $at, 0x3F94
    ctx->pc = 0x193d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16276 << 16));
    // 0x193d44: 0x34215d64  ori         $at, $at, 0x5D64
    ctx->pc = 0x193d44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23908);
    // 0x193d48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x193d48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x193d4c: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x193d4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x193d50: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x193d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x193d54: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x193d54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x193d58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x193d58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193d5c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x193d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x193d60: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x193d60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x193d64: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x193d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x193d68: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x193d68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x193d6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x193d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193d70: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x193d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x193d74: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x193d74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x193d78: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x193d78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x193d7c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x193d7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x193d80: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x193d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x193d84: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x193d84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x193d88: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x193d88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x193d8c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x193d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x193d90: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x193d90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x193d94: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x193d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x193d98: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x193D98u;
    SET_GPR_U32(ctx, 31, 0x193DA0u);
    ctx->pc = 0x193D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193D98u;
    // 0x193d9c: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x193D98u, 0x193DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193DA0u;
label_193da0:
    // 0x193da0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x193DA0u;
    {
        const bool branch_taken_0x193da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x193DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193DA0u;
        // 0x193da4: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193da0) {
            ctx->pc = 0x193DD0u;
            goto label_193dd0;
        }
    }
    ctx->pc = 0x193DA8u;
    // 0x193da8: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x193da8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x193dac: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x193dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x193db0: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x193db0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x193db4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x193db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193db8: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x193db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x193dbc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x193dbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193dc0: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x193dc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x193dc4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x193dc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193dc8: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x193DC8u;
    SET_GPR_U32(ctx, 31, 0x193DD0u);
    ctx->pc = 0x193DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193DC8u;
    // 0x193dcc: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x193DC8u, 0x193DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193DD0u;
label_193dd0:
    // 0x193dd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x193dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193dd4: 0x26050620  addiu       $a1, $s0, 0x620
    ctx->pc = 0x193dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x193dd8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x193dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x193ddc: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x193ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x193de0: 0xae0005e8  sw          $zero, 0x5E8($s0)
    ctx->pc = 0x193de0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 0));
    // 0x193de4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x193de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x193de8: 0xae0005e4  sw          $zero, 0x5E4($s0)
    ctx->pc = 0x193de8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 0));
    // 0x193dec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193df0: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x193df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x193df4: 0xa60005f6  sh          $zero, 0x5F6($s0)
    ctx->pc = 0x193df4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1526), (uint16_t)GPR_U32(ctx, 0));
    // 0x193df8: 0xa603054a  sh          $v1, 0x54A($s0)
    ctx->pc = 0x193df8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
    // 0x193dfc: 0xae050608  sw          $a1, 0x608($s0)
    ctx->pc = 0x193dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 5));
    // 0x193e00: 0xa206060c  sb          $a2, 0x60C($s0)
    ctx->pc = 0x193e00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1548), (uint8_t)GPR_U32(ctx, 6));
    // 0x193e04: 0xae0705ec  sw          $a3, 0x5EC($s0)
    ctx->pc = 0x193e04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1516), GPR_U32(ctx, 7));
    // 0x193e08: 0xa6030548  sh          $v1, 0x548($s0)
    ctx->pc = 0x193e08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 3));
    // 0x193e0c: 0xc070a28  jal         func_1C28A0
    ctx->pc = 0x193E0Cu;
    SET_GPR_U32(ctx, 31, 0x193E14u);
    ctx->pc = 0x193E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193E0Cu;
    // 0x193e10: 0xa60205f4  sh          $v0, 0x5F4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1524), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C28A0u, 0x193E0Cu, 0x193E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193E14u;
label_193e14:
    // 0x193e14: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x193e14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x193e18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x193e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193e1c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x193e1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x193e20: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x193e20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x193e24: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x193e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x193e28: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x193e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x193e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x193E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193E2Cu;
        // 0x193e30: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193E34u;
    // 0x193e34: 0x0  nop
    ctx->pc = 0x193e34u;
    // NOP
    ctx->pc = 0x193e38u;
}
