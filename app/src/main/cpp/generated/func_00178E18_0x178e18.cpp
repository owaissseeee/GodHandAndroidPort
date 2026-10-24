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

// Function: func_00178E18
// Address: 0x178e18 - 0x178f58
void func_00178E18_0x178e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00178E18_0x178e18");
#endif

    switch (ctx->pc) {
        case 0x178e38u: goto label_178e38;
        case 0x178ea0u: goto label_178ea0;
        case 0x178ed0u: goto label_178ed0;
        case 0x178f34u: goto label_178f34;
        default: break;
    }

    ctx->pc = 0x178e18u;

    // 0x178e18: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x178e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x178e1c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x178e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x178e20: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x178e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x178e24: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x178e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x178e28: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x178e28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x178e2c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x178e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x178e30: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x178E30u;
    SET_GPR_U32(ctx, 31, 0x178E38u);
    ctx->pc = 0x178E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178E30u;
    // 0x178e34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x178E30u, 0x178E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178E38u;
label_178e38:
    // 0x178e38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x178e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x178e3c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x178e3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x178e40: 0x3c014099  lui         $at, 0x4099
    ctx->pc = 0x178e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16537 << 16));
    // 0x178e44: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x178e44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x178e48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x178e48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x178e4c: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x178e4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x178e50: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x178e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x178e54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x178e54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x178e58: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x178e58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x178e5c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x178e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x178e60: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x178e60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x178e64: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x178e64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x178e68: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x178e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x178e6c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x178e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x178e70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x178e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178e74: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x178e74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x178e78: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x178e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x178e7c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x178e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x178e80: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x178e80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x178e84: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x178e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x178e88: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x178e88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x178e8c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x178e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x178e90: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x178e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x178e94: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x178e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x178e98: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x178E98u;
    SET_GPR_U32(ctx, 31, 0x178EA0u);
    ctx->pc = 0x178E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178E98u;
    // 0x178e9c: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x178E98u, 0x178EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178EA0u;
label_178ea0:
    // 0x178ea0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x178EA0u;
    {
        const bool branch_taken_0x178ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178EA0u;
        // 0x178ea4: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178ea0) {
            ctx->pc = 0x178EE0u;
            goto label_178ee0;
        }
    }
    ctx->pc = 0x178EA8u;
    // 0x178ea8: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x178ea8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x178eac: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x178eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x178eb0: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x178eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x178eb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x178eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178eb8: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x178eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x178ebc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x178ebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178ec0: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x178ec0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x178ec4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x178ec4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178ec8: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x178EC8u;
    SET_GPR_U32(ctx, 31, 0x178ED0u);
    ctx->pc = 0x178ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178EC8u;
    // 0x178ecc: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x178EC8u, 0x178ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178ED0u;
label_178ed0:
    // 0x178ed0: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x178ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x178ed4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x178ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x178ed8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x178ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x178edc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x178edcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_178ee0:
    // 0x178ee0: 0x8e0205b8  lw          $v0, 0x5B8($s0)
    ctx->pc = 0x178ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
    // 0x178ee4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x178ee4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x178ee8: 0x26070620  addiu       $a3, $s0, 0x620
    ctx->pc = 0x178ee8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x178eec: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x178eecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x178ef0: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x178ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x178ef4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x178ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x178ef8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x178ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x178efc: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x178efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x178f00: 0xae0005e8  sw          $zero, 0x5E8($s0)
    ctx->pc = 0x178f00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 0));
    // 0x178f04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x178f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178f08: 0xae0005e4  sw          $zero, 0x5E4($s0)
    ctx->pc = 0x178f08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 0));
    // 0x178f0c: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x178f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x178f10: 0xa609054a  sh          $t1, 0x54A($s0)
    ctx->pc = 0x178f10u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 9));
    // 0x178f14: 0xae070608  sw          $a3, 0x608($s0)
    ctx->pc = 0x178f14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 7));
    // 0x178f18: 0xa208060c  sb          $t0, 0x60C($s0)
    ctx->pc = 0x178f18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1548), (uint8_t)GPR_U32(ctx, 8));
    // 0x178f1c: 0xae0505ec  sw          $a1, 0x5EC($s0)
    ctx->pc = 0x178f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1516), GPR_U32(ctx, 5));
    // 0x178f20: 0xa60305f4  sh          $v1, 0x5F4($s0)
    ctx->pc = 0x178f20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1524), (uint16_t)GPR_U32(ctx, 3));
    // 0x178f24: 0xa60605f6  sh          $a2, 0x5F6($s0)
    ctx->pc = 0x178f24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1526), (uint16_t)GPR_U32(ctx, 6));
    // 0x178f28: 0xa6090548  sh          $t1, 0x548($s0)
    ctx->pc = 0x178f28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 9));
    // 0x178f2c: 0xc070a28  jal         func_1C28A0
    ctx->pc = 0x178F2Cu;
    SET_GPR_U32(ctx, 31, 0x178F34u);
    ctx->pc = 0x178F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178F2Cu;
    // 0x178f30: 0xae0205b8  sw          $v0, 0x5B8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1464), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C28A0u, 0x178F2Cu, 0x178F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178F34u;
label_178f34:
    // 0x178f34: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x178f34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x178f38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x178f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x178f3c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x178f3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x178f40: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x178f40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x178f44: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x178f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x178f48: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x178f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x178f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x178F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178F4Cu;
        // 0x178f50: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178F54u;
    // 0x178f54: 0x0  nop
    ctx->pc = 0x178f54u;
    // NOP
    ctx->pc = 0x178f58u;
}
