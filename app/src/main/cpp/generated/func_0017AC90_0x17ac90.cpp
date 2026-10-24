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

// Function: func_0017AC90
// Address: 0x17ac90 - 0x17ade0
void func_0017AC90_0x17ac90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017AC90_0x17ac90");
#endif

    switch (ctx->pc) {
        case 0x17aca4u: goto label_17aca4;
        case 0x17acdcu: goto label_17acdc;
        case 0x17ad3cu: goto label_17ad3c;
        case 0x17ad84u: goto label_17ad84;
        default: break;
    }

    ctx->pc = 0x17ac90u;

    // 0x17ac90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17ac90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17ac94: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x17ac94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x17ac98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17ac98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17ac9c: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x17AC9Cu;
    SET_GPR_U32(ctx, 31, 0x17ACA4u);
    ctx->pc = 0x17ACA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AC9Cu;
    // 0x17aca0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x17AC9Cu, 0x17ACA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ACA4u;
label_17aca4:
    // 0x17aca4: 0x3c014011  lui         $at, 0x4011
    ctx->pc = 0x17aca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16401 << 16));
    // 0x17aca8: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x17aca8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
    // 0x17acac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17acacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17acb0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x17acb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x17acb4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17acb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17acb8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x17acb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17acbc: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x17acbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x17acc0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x17acc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x17acc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17acc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17acc8: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x17acc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x17accc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x17acccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17acd0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x17acd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x17acd4: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x17ACD4u;
    SET_GPR_U32(ctx, 31, 0x17ACDCu);
    ctx->pc = 0x17ACD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ACD4u;
    // 0x17acd8: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x17ACD4u, 0x17ACDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ACDCu;
label_17acdc:
    // 0x17acdc: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x17ACDCu;
    {
        const bool branch_taken_0x17acdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ACE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ACDCu;
        // 0x17ace0: 0xae02060c  sw          $v0, 0x60C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1548), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17acdc) {
            ctx->pc = 0x17AD4Cu;
            goto label_17ad4c;
        }
    }
    ctx->pc = 0x17ACE4u;
    // 0x17ace4: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x17ace4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x17ace8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17ACE8u;
    {
        const bool branch_taken_0x17ace8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ACE8u;
        // 0x17acec: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ace8) {
            ctx->pc = 0x17ACFCu;
            goto label_17acfc;
        }
    }
    ctx->pc = 0x17ACF0u;
    // 0x17acf0: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x17acf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x17acf4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17ACF4u;
    {
        const bool branch_taken_0x17acf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ACF4u;
        // 0x17acf8: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17acf4) {
            ctx->pc = 0x17AD00u;
            goto label_17ad00;
        }
    }
    ctx->pc = 0x17ACFCu;
label_17acfc:
    // 0x17acfc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17acfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17ad00:
    // 0x17ad00: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x17AD00u;
    {
        const bool branch_taken_0x17ad00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ad00) {
            ctx->pc = 0x17AD04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17AD00u;
            // 0x17ad04: 0x8e030250  lw          $v1, 0x250($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17AD50u;
            goto label_17ad50;
        }
    }
    ctx->pc = 0x17AD08u;
    // 0x17ad08: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x17ad08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x17ad0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17AD0Cu;
    {
        const bool branch_taken_0x17ad0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AD0Cu;
        // 0x17ad10: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ad0c) {
            ctx->pc = 0x17AD20u;
            goto label_17ad20;
        }
    }
    ctx->pc = 0x17AD14u;
    // 0x17ad14: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x17ad14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x17ad18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17AD18u;
    {
        const bool branch_taken_0x17ad18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AD18u;
        // 0x17ad1c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ad18) {
            ctx->pc = 0x17AD24u;
            goto label_17ad24;
        }
    }
    ctx->pc = 0x17AD20u;
label_17ad20:
    // 0x17ad20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17ad20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17ad24:
    // 0x17ad24: 0x8e04060c  lw          $a0, 0x60C($s0)
    ctx->pc = 0x17ad24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1548)));
    // 0x17ad28: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x17ad28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x17ad2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17ad2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17ad30: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x17ad30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17ad34: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x17AD34u;
    SET_GPR_U32(ctx, 31, 0x17AD3Cu);
    ctx->pc = 0x17AD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AD34u;
    // 0x17ad38: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x17AD34u, 0x17AD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AD3Cu;
label_17ad3c:
    // 0x17ad3c: 0x8e03060c  lw          $v1, 0x60C($s0)
    ctx->pc = 0x17ad3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1548)));
    // 0x17ad40: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17ad40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17ad44: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x17ad44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x17ad48: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x17ad48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_17ad4c:
    // 0x17ad4c: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x17ad4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_17ad50:
    // 0x17ad50: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x17ad50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x17ad54: 0x8e0205b8  lw          $v0, 0x5B8($s0)
    ctx->pc = 0x17ad54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
    // 0x17ad58: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x17ad58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x17ad5c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x17ad5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x17ad60: 0xa2000602  sb          $zero, 0x602($s0)
    ctx->pc = 0x17ad60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1538), (uint8_t)GPR_U32(ctx, 0));
    // 0x17ad64: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x17ad64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x17ad68: 0xa2000600  sb          $zero, 0x600($s0)
    ctx->pc = 0x17ad68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1536), (uint8_t)GPR_U32(ctx, 0));
    // 0x17ad6c: 0xae0205b8  sw          $v0, 0x5B8($s0)
    ctx->pc = 0x17ad6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1464), GPR_U32(ctx, 2));
    // 0x17ad70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17ad70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ad74: 0xa605054a  sh          $a1, 0x54A($s0)
    ctx->pc = 0x17ad74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 5));
    // 0x17ad78: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x17ad78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
    // 0x17ad7c: 0xc05ed78  jal         func_17B5E0
    ctx->pc = 0x17AD7Cu;
    SET_GPR_U32(ctx, 31, 0x17AD84u);
    ctx->pc = 0x17AD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AD7Cu;
    // 0x17ad80: 0xa6050548  sh          $a1, 0x548($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B5E0u, 0x17AD7Cu, 0x17AD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AD84u;
label_17ad84:
    // 0x17ad84: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x17ad84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x17ad88: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17AD88u;
    {
        const bool branch_taken_0x17ad88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AD88u;
        // 0x17ad8c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ad88) {
            ctx->pc = 0x17AD9Cu;
            goto label_17ad9c;
        }
    }
    ctx->pc = 0x17AD90u;
    // 0x17ad90: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x17ad90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x17ad94: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17AD94u;
    {
        const bool branch_taken_0x17ad94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AD94u;
        // 0x17ad98: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ad94) {
            ctx->pc = 0x17ADA0u;
            goto label_17ada0;
        }
    }
    ctx->pc = 0x17AD9Cu;
label_17ad9c:
    // 0x17ad9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17ad9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17ada0:
    // 0x17ada0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x17ADA0u;
    {
        const bool branch_taken_0x17ada0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ada0) {
            ctx->pc = 0x17ADA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17ADA0u;
            // 0x17ada4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17ADD0u;
            goto label_17add0;
        }
    }
    ctx->pc = 0x17ADA8u;
    // 0x17ada8: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x17ada8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x17adac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17ADACu;
    {
        const bool branch_taken_0x17adac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ADACu;
        // 0x17adb0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17adac) {
            ctx->pc = 0x17ADC0u;
            goto label_17adc0;
        }
    }
    ctx->pc = 0x17ADB4u;
    // 0x17adb4: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x17adb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x17adb8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17ADB8u;
    {
        const bool branch_taken_0x17adb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ADBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ADB8u;
        // 0x17adbc: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17adb8) {
            ctx->pc = 0x17ADC4u;
            goto label_17adc4;
        }
    }
    ctx->pc = 0x17ADC0u;
label_17adc0:
    // 0x17adc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17adc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17adc4:
    // 0x17adc4: 0xc4400100  lwc1        $f0, 0x100($v0)
    ctx->pc = 0x17adc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17adc8: 0xe6000608  swc1        $f0, 0x608($s0)
    ctx->pc = 0x17adc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1544), bits); }
    // 0x17adcc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x17adccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17add0:
    // 0x17add0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17add0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17add4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17add4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17add8: 0x3e00008  jr          $ra
    ctx->pc = 0x17ADD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17ADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ADD8u;
        // 0x17addc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17ADD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17ADE0u;
}
