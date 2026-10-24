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

// Function: func_0019AD00
// Address: 0x19ad00 - 0x19ae28
void func_0019AD00_0x19ad00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019AD00_0x19ad00");
#endif

    switch (ctx->pc) {
        case 0x19ad20u: goto label_19ad20;
        case 0x19ad98u: goto label_19ad98;
        case 0x19adc8u: goto label_19adc8;
        case 0x19ae08u: goto label_19ae08;
        default: break;
    }

    ctx->pc = 0x19ad00u;

    // 0x19ad00: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x19ad00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x19ad04: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x19ad04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x19ad08: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x19ad08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x19ad0c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x19ad0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x19ad10: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x19ad10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x19ad14: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19ad14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19ad18: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x19AD18u;
    SET_GPR_U32(ctx, 31, 0x19AD20u);
    ctx->pc = 0x19AD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AD18u;
    // 0x19ad1c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x19AD18u, 0x19AD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AD20u;
label_19ad20:
    // 0x19ad20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19ad20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19ad24: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x19ad24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x19ad28: 0x3c01404c  lui         $at, 0x404C
    ctx->pc = 0x19ad28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16460 << 16));
    // 0x19ad2c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x19ad2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x19ad30: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x19ad30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19ad34: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x19ad34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19ad38: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x19ad38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
    // 0x19ad3c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x19ad3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x19ad40: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19ad40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19ad44: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x19ad44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19ad48: 0x3c013fb3  lui         $at, 0x3FB3
    ctx->pc = 0x19ad48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
    // 0x19ad4c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x19ad4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x19ad50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19ad50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ad54: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x19ad54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x19ad58: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x19ad58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x19ad5c: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x19ad5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x19ad60: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x19ad60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x19ad64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19ad64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ad68: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x19ad68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x19ad6c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19ad6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19ad70: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x19ad70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19ad74: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x19ad74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x19ad78: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x19ad78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x19ad7c: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x19ad7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x19ad80: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x19ad80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x19ad84: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x19ad84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x19ad88: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x19ad88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x19ad8c: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x19ad8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x19ad90: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x19AD90u;
    SET_GPR_U32(ctx, 31, 0x19AD98u);
    ctx->pc = 0x19AD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AD90u;
    // 0x19ad94: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x19AD90u, 0x19AD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AD98u;
label_19ad98:
    // 0x19ad98: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19AD98u;
    {
        const bool branch_taken_0x19ad98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD98u;
        // 0x19ad9c: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ad98) {
            ctx->pc = 0x19ADC8u;
            goto label_19adc8;
        }
    }
    ctx->pc = 0x19ADA0u;
    // 0x19ada0: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x19ada0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19ada4: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x19ada4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x19ada8: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x19ada8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x19adac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19adacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19adb0: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x19adb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x19adb4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x19adb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19adb8: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x19adb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x19adbc: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x19adbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19adc0: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x19ADC0u;
    SET_GPR_U32(ctx, 31, 0x19ADC8u);
    ctx->pc = 0x19ADC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ADC0u;
    // 0x19adc4: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x19ADC0u, 0x19ADC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ADC8u;
label_19adc8:
    // 0x19adc8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19adc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19adcc: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x19adccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19add0: 0x26030620  addiu       $v1, $s0, 0x620
    ctx->pc = 0x19add0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x19add4: 0xae0005e8  sw          $zero, 0x5E8($s0)
    ctx->pc = 0x19add4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 0));
    // 0x19add8: 0xae0005e4  sw          $zero, 0x5E4($s0)
    ctx->pc = 0x19add8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1508), GPR_U32(ctx, 0));
    // 0x19addc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19addcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19ade0: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x19ade0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
    // 0x19ade4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ade4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ade8: 0xa60005f6  sh          $zero, 0x5F6($s0)
    ctx->pc = 0x19ade8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1526), (uint16_t)GPR_U32(ctx, 0));
    // 0x19adec: 0xa605054a  sh          $a1, 0x54A($s0)
    ctx->pc = 0x19adecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 5));
    // 0x19adf0: 0xae030608  sw          $v1, 0x608($s0)
    ctx->pc = 0x19adf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 3));
    // 0x19adf4: 0xae0605ec  sw          $a2, 0x5EC($s0)
    ctx->pc = 0x19adf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1516), GPR_U32(ctx, 6));
    // 0x19adf8: 0xa6050548  sh          $a1, 0x548($s0)
    ctx->pc = 0x19adf8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 5));
    // 0x19adfc: 0xa206060c  sb          $a2, 0x60C($s0)
    ctx->pc = 0x19adfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1548), (uint8_t)GPR_U32(ctx, 6));
    // 0x19ae00: 0xc070a28  jal         func_1C28A0
    ctx->pc = 0x19AE00u;
    SET_GPR_U32(ctx, 31, 0x19AE08u);
    ctx->pc = 0x19AE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AE00u;
    // 0x19ae04: 0xa60205f4  sh          $v0, 0x5F4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1524), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C28A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C28A0u, 0x19AE00u, 0x19AE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AE08u;
label_19ae08:
    // 0x19ae08: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x19ae08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19ae0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19ae0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ae10: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x19ae10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19ae14: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x19ae14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19ae18: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19ae18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19ae1c: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x19ae1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19ae20: 0x3e00008  jr          $ra
    ctx->pc = 0x19AE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AE20u;
        // 0x19ae24: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AE20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19AE28u;
}
