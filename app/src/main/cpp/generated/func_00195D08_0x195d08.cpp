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

// Function: func_00195D08
// Address: 0x195d08 - 0x195e58
void func_00195D08_0x195d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00195D08_0x195d08");
#endif

    switch (ctx->pc) {
        case 0x195d28u: goto label_195d28;
        case 0x195dacu: goto label_195dac;
        case 0x195ddcu: goto label_195ddc;
        case 0x195e34u: goto label_195e34;
        default: break;
    }

    ctx->pc = 0x195d08u;

    // 0x195d08: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x195d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x195d0c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x195d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x195d10: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x195d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x195d14: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x195d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x195d18: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x195d18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x195d1c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x195d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x195d20: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x195D20u;
    SET_GPR_U32(ctx, 31, 0x195D28u);
    ctx->pc = 0x195D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195D20u;
    // 0x195d24: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x195D20u, 0x195D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195D28u;
label_195d28:
    // 0x195d28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x195d28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x195d2c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x195d2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x195d30: 0x3c0140a6  lui         $at, 0x40A6
    ctx->pc = 0x195d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16550 << 16));
    // 0x195d34: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x195d34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x195d38: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x195d38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x195d3c: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x195d3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x195d40: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x195d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x195d44: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x195d44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x195d48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x195d48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x195d4c: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x195d4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x195d50: 0x3c014019  lui         $at, 0x4019
    ctx->pc = 0x195d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16409 << 16));
    // 0x195d54: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x195d54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x195d58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x195d58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x195d5c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x195d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x195d60: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x195d60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x195d64: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x195d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x195d68: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x195d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x195d6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x195d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195d70: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x195d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x195d74: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x195d74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x195d78: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x195d78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x195d7c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x195d7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x195d80: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x195d80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x195d84: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x195d84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x195d88: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x195d88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x195d8c: 0x3c01becc  lui         $at, 0xBECC
    ctx->pc = 0x195d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48844 << 16));
    // 0x195d90: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x195d90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x195d94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x195d94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x195d98: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x195d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x195d9c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x195d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x195da0: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x195da0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x195da4: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x195DA4u;
    SET_GPR_U32(ctx, 31, 0x195DACu);
    ctx->pc = 0x195DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195DA4u;
    // 0x195da8: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x195DA4u, 0x195DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195DACu;
label_195dac:
    // 0x195dac: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x195DACu;
    {
        const bool branch_taken_0x195dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195DACu;
        // 0x195db0: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195dac) {
            ctx->pc = 0x195DECu;
            goto label_195dec;
        }
    }
    ctx->pc = 0x195DB4u;
    // 0x195db4: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x195db4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x195db8: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x195db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x195dbc: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x195dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x195dc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x195dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195dc4: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x195dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x195dc8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x195dc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195dcc: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x195dccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x195dd0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x195dd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195dd4: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x195DD4u;
    SET_GPR_U32(ctx, 31, 0x195DDCu);
    ctx->pc = 0x195DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195DD4u;
    // 0x195dd8: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x195DD4u, 0x195DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195DDCu;
label_195ddc:
    // 0x195ddc: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x195ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x195de0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x195de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x195de4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x195de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x195de8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x195de8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_195dec:
    // 0x195dec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x195decu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x195df0: 0x26030620  addiu       $v1, $s0, 0x620
    ctx->pc = 0x195df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x195df4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x195df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x195df8: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x195df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x195dfc: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x195dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x195e00: 0xae0005e8  sw          $zero, 0x5E8($s0)
    ctx->pc = 0x195e00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 0));
    // 0x195e04: 0xae0005e4  sw          $zero, 0x5E4($s0)
    ctx->pc = 0x195e04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 0));
    // 0x195e08: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x195e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x195e0c: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x195e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x195e10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x195e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195e14: 0xa608054a  sh          $t0, 0x54A($s0)
    ctx->pc = 0x195e14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 8));
    // 0x195e18: 0xae030608  sw          $v1, 0x608($s0)
    ctx->pc = 0x195e18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 3));
    // 0x195e1c: 0xa205060c  sb          $a1, 0x60C($s0)
    ctx->pc = 0x195e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1548), (uint8_t)GPR_U32(ctx, 5));
    // 0x195e20: 0xae0605ec  sw          $a2, 0x5EC($s0)
    ctx->pc = 0x195e20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1516), GPR_U32(ctx, 6));
    // 0x195e24: 0xa60705f6  sh          $a3, 0x5F6($s0)
    ctx->pc = 0x195e24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1526), (uint16_t)GPR_U32(ctx, 7));
    // 0x195e28: 0xa6080548  sh          $t0, 0x548($s0)
    ctx->pc = 0x195e28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 8));
    // 0x195e2c: 0xc070a28  jal         func_1C28A0
    ctx->pc = 0x195E2Cu;
    SET_GPR_U32(ctx, 31, 0x195E34u);
    ctx->pc = 0x195E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195E2Cu;
    // 0x195e30: 0xa60205f4  sh          $v0, 0x5F4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1524), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C28A0u, 0x195E2Cu, 0x195E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195E34u;
label_195e34:
    // 0x195e34: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x195e34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x195e38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x195e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x195e3c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x195e3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x195e40: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x195e40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x195e44: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x195e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x195e48: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x195e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x195e4c: 0x3e00008  jr          $ra
    ctx->pc = 0x195E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195E4Cu;
        // 0x195e50: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195E54u;
    // 0x195e54: 0x0  nop
    ctx->pc = 0x195e54u;
    // NOP
    ctx->pc = 0x195e58u;
}
