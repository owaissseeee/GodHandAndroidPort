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

// Function: func_0019AA80
// Address: 0x19aa80 - 0x19aba8
void func_0019AA80_0x19aa80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019AA80_0x19aa80");
#endif

    switch (ctx->pc) {
        case 0x19aaa0u: goto label_19aaa0;
        case 0x19ab18u: goto label_19ab18;
        case 0x19ab48u: goto label_19ab48;
        case 0x19ab88u: goto label_19ab88;
        default: break;
    }

    ctx->pc = 0x19aa80u;

    // 0x19aa80: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x19aa80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x19aa84: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x19aa84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x19aa88: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x19aa88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x19aa8c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x19aa8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x19aa90: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x19aa90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x19aa94: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19aa94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19aa98: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x19AA98u;
    SET_GPR_U32(ctx, 31, 0x19AAA0u);
    ctx->pc = 0x19AA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AA98u;
    // 0x19aa9c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x19AA98u, 0x19AAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AAA0u;
label_19aaa0:
    // 0x19aaa0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19aaa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19aaa4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x19aaa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x19aaa8: 0x3c014033  lui         $at, 0x4033
    ctx->pc = 0x19aaa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16435 << 16));
    // 0x19aaac: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x19aaacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x19aab0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x19aab0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19aab4: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x19aab4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19aab8: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x19aab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
    // 0x19aabc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x19aabcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x19aac0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19aac0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19aac4: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x19aac4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19aac8: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x19aac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x19aacc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x19aaccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x19aad0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19aad0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19aad4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x19aad4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x19aad8: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x19aad8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x19aadc: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x19aadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x19aae0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x19aae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x19aae4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19aae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aae8: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x19aae8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x19aaec: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19aaecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19aaf0: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x19aaf0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19aaf4: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x19aaf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x19aaf8: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x19aaf8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x19aafc: 0xe7b40014  swc1        $f20, 0x14($sp)
    ctx->pc = 0x19aafcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x19ab00: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x19ab00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x19ab04: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x19ab04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x19ab08: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x19ab08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x19ab0c: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x19ab0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x19ab10: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x19AB10u;
    SET_GPR_U32(ctx, 31, 0x19AB18u);
    ctx->pc = 0x19AB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AB10u;
    // 0x19ab14: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x19AB10u, 0x19AB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AB18u;
label_19ab18:
    // 0x19ab18: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19AB18u;
    {
        const bool branch_taken_0x19ab18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB18u;
        // 0x19ab1c: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ab18) {
            ctx->pc = 0x19AB48u;
            goto label_19ab48;
        }
    }
    ctx->pc = 0x19AB20u;
    // 0x19ab20: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x19ab20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19ab24: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x19ab24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x19ab28: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x19ab28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x19ab2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19ab2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ab30: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x19ab30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x19ab34: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x19ab34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ab38: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x19ab38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x19ab3c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x19ab3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ab40: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x19AB40u;
    SET_GPR_U32(ctx, 31, 0x19AB48u);
    ctx->pc = 0x19AB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AB40u;
    // 0x19ab44: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x19AB40u, 0x19AB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AB48u;
label_19ab48:
    // 0x19ab48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19ab48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ab4c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x19ab4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19ab50: 0x26030620  addiu       $v1, $s0, 0x620
    ctx->pc = 0x19ab50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x19ab54: 0xae0005e8  sw          $zero, 0x5E8($s0)
    ctx->pc = 0x19ab54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 0));
    // 0x19ab58: 0xae0005e4  sw          $zero, 0x5E4($s0)
    ctx->pc = 0x19ab58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 0));
    // 0x19ab5c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19ab5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19ab60: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x19ab60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x19ab64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ab64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ab68: 0xa60005f6  sh          $zero, 0x5F6($s0)
    ctx->pc = 0x19ab68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1526), (uint16_t)GPR_U32(ctx, 0));
    // 0x19ab6c: 0xa605054a  sh          $a1, 0x54A($s0)
    ctx->pc = 0x19ab6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 5));
    // 0x19ab70: 0xae030608  sw          $v1, 0x608($s0)
    ctx->pc = 0x19ab70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 3));
    // 0x19ab74: 0xae0605ec  sw          $a2, 0x5EC($s0)
    ctx->pc = 0x19ab74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1516), GPR_U32(ctx, 6));
    // 0x19ab78: 0xa6050548  sh          $a1, 0x548($s0)
    ctx->pc = 0x19ab78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 5));
    // 0x19ab7c: 0xa206060c  sb          $a2, 0x60C($s0)
    ctx->pc = 0x19ab7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1548), (uint8_t)GPR_U32(ctx, 6));
    // 0x19ab80: 0xc070a28  jal         func_1C28A0
    ctx->pc = 0x19AB80u;
    SET_GPR_U32(ctx, 31, 0x19AB88u);
    ctx->pc = 0x19AB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AB80u;
    // 0x19ab84: 0xa60205f4  sh          $v0, 0x5F4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1524), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C28A0u, 0x19AB80u, 0x19AB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AB88u;
label_19ab88:
    // 0x19ab88: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x19ab88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19ab8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19ab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ab90: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x19ab90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19ab94: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x19ab94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19ab98: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19ab98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19ab9c: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x19ab9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19aba0: 0x3e00008  jr          $ra
    ctx->pc = 0x19ABA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19ABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ABA0u;
        // 0x19aba4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19ABA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19ABA8u;
}
