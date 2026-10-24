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

// Function: func_0019DAA8
// Address: 0x19daa8 - 0x19dbd8
void func_0019DAA8_0x19daa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019DAA8_0x19daa8");
#endif

    switch (ctx->pc) {
        case 0x19dac8u: goto label_19dac8;
        case 0x19db40u: goto label_19db40;
        case 0x19db70u: goto label_19db70;
        case 0x19dbb4u: goto label_19dbb4;
        default: break;
    }

    ctx->pc = 0x19daa8u;

    // 0x19daa8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x19daa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x19daac: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x19daacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x19dab0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x19dab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x19dab4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x19dab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x19dab8: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x19dab8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x19dabc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19dabcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19dac0: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x19DAC0u;
    SET_GPR_U32(ctx, 31, 0x19DAC8u);
    ctx->pc = 0x19DAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DAC0u;
    // 0x19dac4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x19DAC0u, 0x19DAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DAC8u;
label_19dac8:
    // 0x19dac8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19dac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19dacc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x19daccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x19dad0: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x19dad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
    // 0x19dad4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x19dad4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x19dad8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x19dad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19dadc: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x19dadcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19dae0: 0x3c013ff3  lui         $at, 0x3FF3
    ctx->pc = 0x19dae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16371 << 16));
    // 0x19dae4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x19dae4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x19dae8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19dae8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19daec: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x19daecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19daf0: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x19daf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x19daf4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x19daf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x19daf8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19daf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19dafc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x19dafcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x19db00: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x19db00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x19db04: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x19db04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x19db08: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x19db08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x19db0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19db0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19db10: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x19db10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x19db14: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19db14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19db18: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x19db18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19db1c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x19db1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x19db20: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x19db20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x19db24: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x19db24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x19db28: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x19db28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x19db2c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x19db2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x19db30: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x19db30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x19db34: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x19db34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x19db38: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x19DB38u;
    SET_GPR_U32(ctx, 31, 0x19DB40u);
    ctx->pc = 0x19DB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DB38u;
    // 0x19db3c: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x19DB38u, 0x19DB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DB40u;
label_19db40:
    // 0x19db40: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19DB40u;
    {
        const bool branch_taken_0x19db40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DB40u;
        // 0x19db44: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19db40) {
            ctx->pc = 0x19DB70u;
            goto label_19db70;
        }
    }
    ctx->pc = 0x19DB48u;
    // 0x19db48: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x19db48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19db4c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x19db4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x19db50: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x19db50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x19db54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19db54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19db58: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x19db58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x19db5c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x19db5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19db60: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x19db60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x19db64: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x19db64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19db68: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x19DB68u;
    SET_GPR_U32(ctx, 31, 0x19DB70u);
    ctx->pc = 0x19DB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DB68u;
    // 0x19db6c: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x19DB68u, 0x19DB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DB70u;
label_19db70:
    // 0x19db70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19db70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19db74: 0x26050620  addiu       $a1, $s0, 0x620
    ctx->pc = 0x19db74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x19db78: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x19db78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19db7c: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x19db7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19db80: 0xae0005e8  sw          $zero, 0x5E8($s0)
    ctx->pc = 0x19db80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 0));
    // 0x19db84: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19db84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19db88: 0xae0005e4  sw          $zero, 0x5E4($s0)
    ctx->pc = 0x19db88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 0));
    // 0x19db8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19db8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19db90: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x19db90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x19db94: 0xa60005f6  sh          $zero, 0x5F6($s0)
    ctx->pc = 0x19db94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1526), (uint16_t)GPR_U32(ctx, 0));
    // 0x19db98: 0xa603054a  sh          $v1, 0x54A($s0)
    ctx->pc = 0x19db98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
    // 0x19db9c: 0xae050608  sw          $a1, 0x608($s0)
    ctx->pc = 0x19db9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 5));
    // 0x19dba0: 0xa206060c  sb          $a2, 0x60C($s0)
    ctx->pc = 0x19dba0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1548), (uint8_t)GPR_U32(ctx, 6));
    // 0x19dba4: 0xae0705ec  sw          $a3, 0x5EC($s0)
    ctx->pc = 0x19dba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1516), GPR_U32(ctx, 7));
    // 0x19dba8: 0xa6030548  sh          $v1, 0x548($s0)
    ctx->pc = 0x19dba8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 3));
    // 0x19dbac: 0xc070a28  jal         func_1C28A0
    ctx->pc = 0x19DBACu;
    SET_GPR_U32(ctx, 31, 0x19DBB4u);
    ctx->pc = 0x19DBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DBACu;
    // 0x19dbb0: 0xa60205f4  sh          $v0, 0x5F4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1524), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C28A0u, 0x19DBACu, 0x19DBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DBB4u;
label_19dbb4:
    // 0x19dbb4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x19dbb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19dbb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19dbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19dbbc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x19dbbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19dbc0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x19dbc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19dbc4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19dbc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19dbc8: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x19dbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19dbcc: 0x3e00008  jr          $ra
    ctx->pc = 0x19DBCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DBCCu;
        // 0x19dbd0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DBCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DBD4u;
    // 0x19dbd4: 0x0  nop
    ctx->pc = 0x19dbd4u;
    // NOP
    ctx->pc = 0x19dbd8u;
}
