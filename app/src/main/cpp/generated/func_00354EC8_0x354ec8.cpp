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

// Function: func_00354EC8
// Address: 0x354ec8 - 0x3550d0
void func_00354EC8_0x354ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00354EC8_0x354ec8");
#endif

    switch (ctx->pc) {
        case 0x354ef4u: goto label_354ef4;
        default: break;
    }

    ctx->pc = 0x354ec8u;

    // 0x354ec8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x354ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x354ecc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x354eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x354ed0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x354ed0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354ed4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x354ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x354ed8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x354ed8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354edc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x354edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x354ee0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x354ee0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354ee4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x354ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x354ee8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x354ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x354eec: 0xc0d5524  jal         func_355490
    ctx->pc = 0x354EECu;
    SET_GPR_U32(ctx, 31, 0x354EF4u);
    ctx->pc = 0x354EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354EECu;
    // 0x354ef0: 0x8e111fc0  lw          $s1, 0x1FC0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x355490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355490u, 0x354EECu, 0x354EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354EF4u;
label_354ef4:
    // 0x354ef4: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x354ef4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x354ef8: 0x2669005c  addiu       $t1, $s3, 0x5C
    ctx->pc = 0x354ef8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 92));
    // 0x354efc: 0xac4a0000  sw          $t2, 0x0($v0)
    ctx->pc = 0x354efcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
    // 0x354f00: 0x24480008  addiu       $t0, $v0, 0x8
    ctx->pc = 0x354f00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x354f04: 0x8d230018  lw          $v1, 0x18($t1)
    ctx->pc = 0x354f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x354f08: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x354f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x354f0c: 0xad030010  sw          $v1, 0x10($t0)
    ctx->pc = 0x354f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 3));
    // 0x354f10: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x354f10u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x354f14: 0x8e060038  lw          $a2, 0x38($s0)
    ctx->pc = 0x354f14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x354f18: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x354f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x354f1c: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x354f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x354f20: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x354f20u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x354f24: 0x8e650054  lw          $a1, 0x54($s3)
    ctx->pc = 0x354f24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x354f28: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x354f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x354f2c: 0x8d270040  lw          $a3, 0x40($t1)
    ctx->pc = 0x354f2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 64)));
    // 0x354f30: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x354f30u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
    // 0x354f34: 0xae330070  sw          $s3, 0x70($s1)
    ctx->pc = 0x354f34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 19));
    // 0x354f38: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x354f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x354f3c: 0xad06001c  sw          $a2, 0x1C($t0)
    ctx->pc = 0x354f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 6));
    // 0x354f40: 0xad02000c  sw          $v0, 0xC($t0)
    ctx->pc = 0x354f40u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
    // 0x354f44: 0xad040020  sw          $a0, 0x20($t0)
    ctx->pc = 0x354f44u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 4));
    // 0x354f48: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x354f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x354f4c: 0xad050038  sw          $a1, 0x38($t0)
    ctx->pc = 0x354f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 56), GPR_U32(ctx, 5));
    // 0x354f50: 0xad020014  sw          $v0, 0x14($t0)
    ctx->pc = 0x354f50u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 2));
    // 0x354f54: 0xae480000  sw          $t0, 0x0($s2)
    ctx->pc = 0x354f54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 8));
    // 0x354f58: 0x8e62003c  lw          $v0, 0x3C($s3)
    ctx->pc = 0x354f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x354f5c: 0xad020018  sw          $v0, 0x18($t0)
    ctx->pc = 0x354f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 2));
    // 0x354f60: 0x8e630040  lw          $v1, 0x40($s3)
    ctx->pc = 0x354f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x354f64: 0xad030024  sw          $v1, 0x24($t0)
    ctx->pc = 0x354f64u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 36), GPR_U32(ctx, 3));
    // 0x354f68: 0x8e620044  lw          $v0, 0x44($s3)
    ctx->pc = 0x354f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x354f6c: 0xad020028  sw          $v0, 0x28($t0)
    ctx->pc = 0x354f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 2));
    // 0x354f70: 0x8e630048  lw          $v1, 0x48($s3)
    ctx->pc = 0x354f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x354f74: 0xad03002c  sw          $v1, 0x2C($t0)
    ctx->pc = 0x354f74u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 44), GPR_U32(ctx, 3));
    // 0x354f78: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x354f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x354f7c: 0xad020030  sw          $v0, 0x30($t0)
    ctx->pc = 0x354f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 48), GPR_U32(ctx, 2));
    // 0x354f80: 0x8e630050  lw          $v1, 0x50($s3)
    ctx->pc = 0x354f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x354f84: 0xad030034  sw          $v1, 0x34($t0)
    ctx->pc = 0x354f84u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 52), GPR_U32(ctx, 3));
    // 0x354f88: 0x8d220044  lw          $v0, 0x44($t1)
    ctx->pc = 0x354f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 68)));
    // 0x354f8c: 0xad07003c  sw          $a3, 0x3C($t0)
    ctx->pc = 0x354f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 60), GPR_U32(ctx, 7));
    // 0x354f90: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x354F90u;
    {
        const bool branch_taken_0x354f90 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x354F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354F90u;
        // 0x354f94: 0xad020040  sw          $v0, 0x40($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354f90) {
            ctx->pc = 0x354FA8u;
            goto label_354fa8;
        }
    }
    ctx->pc = 0x354F98u;
    // 0x354f98: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x354f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x354f9c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x354F9Cu;
    {
        const bool branch_taken_0x354f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354F9Cu;
        // 0x354fa0: 0xad020048  sw          $v0, 0x48($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354f9c) {
            ctx->pc = 0x354FACu;
            goto label_354fac;
        }
    }
    ctx->pc = 0x354FA4u;
    // 0x354fa4: 0x0  nop
    ctx->pc = 0x354fa4u;
    // NOP
label_354fa8:
    // 0x354fa8: 0xad0a0048  sw          $t2, 0x48($t0)
    ctx->pc = 0x354fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 72), GPR_U32(ctx, 10));
label_354fac:
    // 0x354fac: 0xde6300e0  ld          $v1, 0xE0($s3)
    ctx->pc = 0x354facu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 224)));
    // 0x354fb0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x354fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x354fb4: 0xfc430050  sd          $v1, 0x50($v0)
    ctx->pc = 0x354fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 80), GPR_U64(ctx, 3));
    // 0x354fb8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x354fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x354fbc: 0x8d220038  lw          $v0, 0x38($t1)
    ctx->pc = 0x354fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 56)));
    // 0x354fc0: 0xac820058  sw          $v0, 0x58($a0)
    ctx->pc = 0x354fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 2));
    // 0x354fc4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x354fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x354fc8: 0x8d22003c  lw          $v0, 0x3C($t1)
    ctx->pc = 0x354fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 60)));
    // 0x354fcc: 0xac62005c  sw          $v0, 0x5C($v1)
    ctx->pc = 0x354fccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
    // 0x354fd0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x354fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x354fd4: 0x8d220048  lw          $v0, 0x48($t1)
    ctx->pc = 0x354fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 72)));
    // 0x354fd8: 0xac820060  sw          $v0, 0x60($a0)
    ctx->pc = 0x354fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 2));
    // 0x354fdc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x354fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x354fe0: 0x8d22004c  lw          $v0, 0x4C($t1)
    ctx->pc = 0x354fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 76)));
    // 0x354fe4: 0xac620064  sw          $v0, 0x64($v1)
    ctx->pc = 0x354fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 2));
    // 0x354fe8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x354fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x354fec: 0x95220050  lhu         $v0, 0x50($t1)
    ctx->pc = 0x354fecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 80)));
    // 0x354ff0: 0xa4820068  sh          $v0, 0x68($a0)
    ctx->pc = 0x354ff0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 104), (uint16_t)GPR_U32(ctx, 2));
    // 0x354ff4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x354ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x354ff8: 0x95220052  lhu         $v0, 0x52($t1)
    ctx->pc = 0x354ff8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 82)));
    // 0x354ffc: 0xa462006a  sh          $v0, 0x6A($v1)
    ctx->pc = 0x354ffcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 106), (uint16_t)GPR_U32(ctx, 2));
    // 0x355000: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x355000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x355004: 0x91220055  lbu         $v0, 0x55($t1)
    ctx->pc = 0x355004u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 85)));
    // 0x355008: 0xa082006c  sb          $v0, 0x6C($a0)
    ctx->pc = 0x355008u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 108), (uint8_t)GPR_U32(ctx, 2));
    // 0x35500c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x35500cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x355010: 0x91220056  lbu         $v0, 0x56($t1)
    ctx->pc = 0x355010u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 86)));
    // 0x355014: 0xa062006d  sb          $v0, 0x6D($v1)
    ctx->pc = 0x355014u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 109), (uint8_t)GPR_U32(ctx, 2));
    // 0x355018: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x355018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x35501c: 0x91220057  lbu         $v0, 0x57($t1)
    ctx->pc = 0x35501cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 87)));
    // 0x355020: 0xa082006e  sb          $v0, 0x6E($a0)
    ctx->pc = 0x355020u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 110), (uint8_t)GPR_U32(ctx, 2));
    // 0x355024: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x355024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x355028: 0x91220059  lbu         $v0, 0x59($t1)
    ctx->pc = 0x355028u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 89)));
    // 0x35502c: 0xa062006f  sb          $v0, 0x6F($v1)
    ctx->pc = 0x35502cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 111), (uint8_t)GPR_U32(ctx, 2));
    // 0x355030: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x355030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x355034: 0x9122005a  lbu         $v0, 0x5A($t1)
    ctx->pc = 0x355034u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 90)));
    // 0x355038: 0xa0820070  sb          $v0, 0x70($a0)
    ctx->pc = 0x355038u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 112), (uint8_t)GPR_U32(ctx, 2));
    // 0x35503c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x35503cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x355040: 0x9122005b  lbu         $v0, 0x5B($t1)
    ctx->pc = 0x355040u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 91)));
    // 0x355044: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x355044u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x355048: 0xa0620071  sb          $v0, 0x71($v1)
    ctx->pc = 0x355048u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 113), (uint8_t)GPR_U32(ctx, 2));
    // 0x35504c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35504cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x355050: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x355050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x355054: 0x9122005c  lbu         $v0, 0x5C($t1)
    ctx->pc = 0x355054u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 92)));
    // 0x355058: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x355058u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35505c: 0xa0820072  sb          $v0, 0x72($a0)
    ctx->pc = 0x35505cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 114), (uint8_t)GPR_U32(ctx, 2));
    // 0x355060: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x355060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x355064: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x355064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x355068: 0x9122005d  lbu         $v0, 0x5D($t1)
    ctx->pc = 0x355068u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 93)));
    // 0x35506c: 0xa0620073  sb          $v0, 0x73($v1)
    ctx->pc = 0x35506cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 115), (uint8_t)GPR_U32(ctx, 2));
    // 0x355070: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x355070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x355074: 0x9122005e  lbu         $v0, 0x5E($t1)
    ctx->pc = 0x355074u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 94)));
    // 0x355078: 0xa0820074  sb          $v0, 0x74($a0)
    ctx->pc = 0x355078u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 116), (uint8_t)GPR_U32(ctx, 2));
    // 0x35507c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x35507cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x355080: 0x9122005f  lbu         $v0, 0x5F($t1)
    ctx->pc = 0x355080u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 95)));
    // 0x355084: 0xa0620075  sb          $v0, 0x75($v1)
    ctx->pc = 0x355084u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 117), (uint8_t)GPR_U32(ctx, 2));
    // 0x355088: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x355088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x35508c: 0x91220060  lbu         $v0, 0x60($t1)
    ctx->pc = 0x35508cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 96)));
    // 0x355090: 0xa0820076  sb          $v0, 0x76($a0)
    ctx->pc = 0x355090u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 118), (uint8_t)GPR_U32(ctx, 2));
    // 0x355094: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x355094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x355098: 0x91220061  lbu         $v0, 0x61($t1)
    ctx->pc = 0x355098u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 97)));
    // 0x35509c: 0xa0620077  sb          $v0, 0x77($v1)
    ctx->pc = 0x35509cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 119), (uint8_t)GPR_U32(ctx, 2));
    // 0x3550a0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3550a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3550a4: 0x91220062  lbu         $v0, 0x62($t1)
    ctx->pc = 0x3550a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 98)));
    // 0x3550a8: 0xa0820078  sb          $v0, 0x78($a0)
    ctx->pc = 0x3550a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 120), (uint8_t)GPR_U32(ctx, 2));
    // 0x3550ac: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3550acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3550b0: 0x91220063  lbu         $v0, 0x63($t1)
    ctx->pc = 0x3550b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 99)));
    // 0x3550b4: 0xa0620079  sb          $v0, 0x79($v1)
    ctx->pc = 0x3550b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 121), (uint8_t)GPR_U32(ctx, 2));
    // 0x3550b8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3550b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3550bc: 0x91220064  lbu         $v0, 0x64($t1)
    ctx->pc = 0x3550bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 100)));
    // 0x3550c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3550c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3550c4: 0xa082007a  sb          $v0, 0x7A($a0)
    ctx->pc = 0x3550c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 122), (uint8_t)GPR_U32(ctx, 2));
    // 0x3550c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3550C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3550CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3550C8u;
        // 0x3550cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3550C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3550D0u;
}
