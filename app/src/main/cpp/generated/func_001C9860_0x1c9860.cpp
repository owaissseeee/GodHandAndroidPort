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

// Function: func_001C9860
// Address: 0x1c9860 - 0x1c9a50
void func_001C9860_0x1c9860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001C9860_0x1c9860");
#endif

    switch (ctx->pc) {
        case 0x1c9860u: goto label_1c9860;
        case 0x1c9864u: goto label_1c9864;
        case 0x1c9868u: goto label_1c9868;
        case 0x1c986cu: goto label_1c986c;
        case 0x1c9870u: goto label_1c9870;
        case 0x1c9874u: goto label_1c9874;
        case 0x1c9878u: goto label_1c9878;
        case 0x1c987cu: goto label_1c987c;
        case 0x1c9880u: goto label_1c9880;
        case 0x1c9884u: goto label_1c9884;
        case 0x1c9888u: goto label_1c9888;
        case 0x1c988cu: goto label_1c988c;
        case 0x1c9890u: goto label_1c9890;
        case 0x1c9894u: goto label_1c9894;
        case 0x1c9898u: goto label_1c9898;
        case 0x1c989cu: goto label_1c989c;
        case 0x1c98a0u: goto label_1c98a0;
        case 0x1c98a4u: goto label_1c98a4;
        case 0x1c98a8u: goto label_1c98a8;
        case 0x1c98acu: goto label_1c98ac;
        case 0x1c98b0u: goto label_1c98b0;
        case 0x1c98b4u: goto label_1c98b4;
        case 0x1c98b8u: goto label_1c98b8;
        case 0x1c98bcu: goto label_1c98bc;
        case 0x1c98c0u: goto label_1c98c0;
        case 0x1c98c4u: goto label_1c98c4;
        case 0x1c98c8u: goto label_1c98c8;
        case 0x1c98ccu: goto label_1c98cc;
        case 0x1c98d0u: goto label_1c98d0;
        case 0x1c98d4u: goto label_1c98d4;
        case 0x1c98d8u: goto label_1c98d8;
        case 0x1c98dcu: goto label_1c98dc;
        case 0x1c98e0u: goto label_1c98e0;
        case 0x1c98e4u: goto label_1c98e4;
        case 0x1c98e8u: goto label_1c98e8;
        case 0x1c98ecu: goto label_1c98ec;
        case 0x1c98f0u: goto label_1c98f0;
        case 0x1c98f4u: goto label_1c98f4;
        case 0x1c98f8u: goto label_1c98f8;
        case 0x1c98fcu: goto label_1c98fc;
        case 0x1c9900u: goto label_1c9900;
        case 0x1c9904u: goto label_1c9904;
        case 0x1c9908u: goto label_1c9908;
        case 0x1c990cu: goto label_1c990c;
        case 0x1c9910u: goto label_1c9910;
        case 0x1c9914u: goto label_1c9914;
        case 0x1c9918u: goto label_1c9918;
        case 0x1c991cu: goto label_1c991c;
        case 0x1c9920u: goto label_1c9920;
        case 0x1c9924u: goto label_1c9924;
        case 0x1c9928u: goto label_1c9928;
        case 0x1c992cu: goto label_1c992c;
        case 0x1c9930u: goto label_1c9930;
        case 0x1c9934u: goto label_1c9934;
        case 0x1c9938u: goto label_1c9938;
        case 0x1c993cu: goto label_1c993c;
        case 0x1c9940u: goto label_1c9940;
        case 0x1c9944u: goto label_1c9944;
        case 0x1c9948u: goto label_1c9948;
        case 0x1c994cu: goto label_1c994c;
        case 0x1c9950u: goto label_1c9950;
        case 0x1c9954u: goto label_1c9954;
        case 0x1c9958u: goto label_1c9958;
        case 0x1c995cu: goto label_1c995c;
        case 0x1c9960u: goto label_1c9960;
        case 0x1c9964u: goto label_1c9964;
        case 0x1c9968u: goto label_1c9968;
        case 0x1c996cu: goto label_1c996c;
        case 0x1c9970u: goto label_1c9970;
        case 0x1c9974u: goto label_1c9974;
        case 0x1c9978u: goto label_1c9978;
        case 0x1c997cu: goto label_1c997c;
        case 0x1c9980u: goto label_1c9980;
        case 0x1c9984u: goto label_1c9984;
        case 0x1c9988u: goto label_1c9988;
        case 0x1c998cu: goto label_1c998c;
        case 0x1c9990u: goto label_1c9990;
        case 0x1c9994u: goto label_1c9994;
        case 0x1c9998u: goto label_1c9998;
        case 0x1c999cu: goto label_1c999c;
        case 0x1c99a0u: goto label_1c99a0;
        case 0x1c99a4u: goto label_1c99a4;
        case 0x1c99a8u: goto label_1c99a8;
        case 0x1c99acu: goto label_1c99ac;
        case 0x1c99b0u: goto label_1c99b0;
        case 0x1c99b4u: goto label_1c99b4;
        case 0x1c99b8u: goto label_1c99b8;
        case 0x1c99bcu: goto label_1c99bc;
        case 0x1c99c0u: goto label_1c99c0;
        case 0x1c99c4u: goto label_1c99c4;
        case 0x1c99c8u: goto label_1c99c8;
        case 0x1c99ccu: goto label_1c99cc;
        case 0x1c99d0u: goto label_1c99d0;
        case 0x1c99d4u: goto label_1c99d4;
        case 0x1c99d8u: goto label_1c99d8;
        case 0x1c99dcu: goto label_1c99dc;
        case 0x1c99e0u: goto label_1c99e0;
        case 0x1c99e4u: goto label_1c99e4;
        case 0x1c99e8u: goto label_1c99e8;
        case 0x1c99ecu: goto label_1c99ec;
        case 0x1c99f0u: goto label_1c99f0;
        case 0x1c99f4u: goto label_1c99f4;
        case 0x1c99f8u: goto label_1c99f8;
        case 0x1c99fcu: goto label_1c99fc;
        case 0x1c9a00u: goto label_1c9a00;
        case 0x1c9a04u: goto label_1c9a04;
        case 0x1c9a08u: goto label_1c9a08;
        case 0x1c9a0cu: goto label_1c9a0c;
        case 0x1c9a10u: goto label_1c9a10;
        case 0x1c9a14u: goto label_1c9a14;
        case 0x1c9a18u: goto label_1c9a18;
        case 0x1c9a1cu: goto label_1c9a1c;
        case 0x1c9a20u: goto label_1c9a20;
        case 0x1c9a24u: goto label_1c9a24;
        case 0x1c9a28u: goto label_1c9a28;
        case 0x1c9a2cu: goto label_1c9a2c;
        case 0x1c9a30u: goto label_1c9a30;
        case 0x1c9a34u: goto label_1c9a34;
        case 0x1c9a38u: goto label_1c9a38;
        case 0x1c9a3cu: goto label_1c9a3c;
        case 0x1c9a40u: goto label_1c9a40;
        case 0x1c9a44u: goto label_1c9a44;
        case 0x1c9a48u: goto label_1c9a48;
        case 0x1c9a4cu: goto label_1c9a4c;
        default: break;
    }

    ctx->pc = 0x1c9860u;

label_1c9860:
    // 0x1c9860: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c9860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1c9864:
    // 0x1c9864: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c9864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1c9868:
    // 0x1c9868: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c9868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c986c:
    // 0x1c986c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c986cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c9870:
    // 0x1c9870: 0xc06ddac  jal         func_1B76B0
label_1c9874:
    if (ctx->pc == 0x1C9874u) {
        ctx->pc = 0x1C9874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9870u;
        // 0x1c9874: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9878u;
        goto label_1c9878;
    }
    ctx->pc = 0x1C9870u;
    SET_GPR_U32(ctx, 31, 0x1C9878u);
    ctx->pc = 0x1C9874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9870u;
    // 0x1c9874: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x1C9870u, 0x1C9878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9878u;
label_1c9878:
    // 0x1c9878: 0x50400070  beql        $v0, $zero, . + 4 + (0x70 << 2)
label_1c987c:
    if (ctx->pc == 0x1C987Cu) {
        ctx->pc = 0x1C987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9878u;
        // 0x1c987c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9880u;
        goto label_1c9880;
    }
    ctx->pc = 0x1C9878u;
    {
        const bool branch_taken_0x1c9878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9878) {
            ctx->pc = 0x1C987Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9878u;
            // 0x1c987c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9A3Cu;
            goto label_1c9a3c;
        }
    }
    ctx->pc = 0x1C9880u;
label_1c9880:
    // 0x1c9880: 0x8e020650  lw          $v0, 0x650($s0)
    ctx->pc = 0x1c9880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1616)));
label_1c9884:
    // 0x1c9884: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1c9888:
    if (ctx->pc == 0x1C9888u) {
        ctx->pc = 0x1C9888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9884u;
        // 0x1c9888: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C988Cu;
        goto label_1c988c;
    }
    ctx->pc = 0x1C9884u;
    {
        const bool branch_taken_0x1c9884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9884u;
        // 0x1c9888: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9884) {
            ctx->pc = 0x1C98A0u;
            goto label_1c98a0;
        }
    }
    ctx->pc = 0x1C988Cu;
label_1c988c:
    // 0x1c988c: 0xa4400046  sh          $zero, 0x46($v0)
    ctx->pc = 0x1c988cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
label_1c9890:
    // 0x1c9890: 0x8e020650  lw          $v0, 0x650($s0)
    ctx->pc = 0x1c9890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1616)));
label_1c9894:
    // 0x1c9894: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x1c9894u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
label_1c9898:
    // 0x1c9898: 0xc07f59a  jal         func_1FD668
label_1c989c:
    if (ctx->pc == 0x1C989Cu) {
        ctx->pc = 0x1C989Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9898u;
        // 0x1c989c: 0x8e040650  lw          $a0, 0x650($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C98A0u;
        goto label_1c98a0;
    }
    ctx->pc = 0x1C9898u;
    SET_GPR_U32(ctx, 31, 0x1C98A0u);
    ctx->pc = 0x1C989Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9898u;
    // 0x1c989c: 0x8e040650  lw          $a0, 0x650($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1616)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1C9898u, 0x1C98A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C98A0u;
label_1c98a0:
    // 0x1c98a0: 0x8e020658  lw          $v0, 0x658($s0)
    ctx->pc = 0x1c98a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1624)));
label_1c98a4:
    // 0x1c98a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1c98a8:
    if (ctx->pc == 0x1C98A8u) {
        ctx->pc = 0x1C98A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C98A4u;
        // 0x1c98a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C98ACu;
        goto label_1c98ac;
    }
    ctx->pc = 0x1C98A4u;
    {
        const bool branch_taken_0x1c98a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C98A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C98A4u;
        // 0x1c98a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c98a4) {
            ctx->pc = 0x1C98C0u;
            goto label_1c98c0;
        }
    }
    ctx->pc = 0x1C98ACu;
label_1c98ac:
    // 0x1c98ac: 0xa4400046  sh          $zero, 0x46($v0)
    ctx->pc = 0x1c98acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
label_1c98b0:
    // 0x1c98b0: 0x8e020658  lw          $v0, 0x658($s0)
    ctx->pc = 0x1c98b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1624)));
label_1c98b4:
    // 0x1c98b4: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x1c98b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
label_1c98b8:
    // 0x1c98b8: 0xc07f59a  jal         func_1FD668
label_1c98bc:
    if (ctx->pc == 0x1C98BCu) {
        ctx->pc = 0x1C98BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C98B8u;
        // 0x1c98bc: 0x8e040658  lw          $a0, 0x658($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C98C0u;
        goto label_1c98c0;
    }
    ctx->pc = 0x1C98B8u;
    SET_GPR_U32(ctx, 31, 0x1C98C0u);
    ctx->pc = 0x1C98BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C98B8u;
    // 0x1c98bc: 0x8e040658  lw          $a0, 0x658($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1624)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1C98B8u, 0x1C98C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C98C0u;
label_1c98c0:
    // 0x1c98c0: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1c98c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_1c98c4:
    // 0x1c98c4: 0xc0a4bd4  jal         func_292F50
label_1c98c8:
    if (ctx->pc == 0x1C98C8u) {
        ctx->pc = 0x1C98C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C98C4u;
        // 0x1c98c8: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C98CCu;
        goto label_1c98cc;
    }
    ctx->pc = 0x1C98C4u;
    SET_GPR_U32(ctx, 31, 0x1C98CCu);
    ctx->pc = 0x1C98C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C98C4u;
    // 0x1c98c8: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1C98C4u, 0x1C98CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C98CCu;
label_1c98cc:
    // 0x1c98cc: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x1c98ccu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_1c98d0:
    // 0x1c98d0: 0xc601066c  lwc1        $f1, 0x66C($s0)
    ctx->pc = 0x1c98d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c98d4:
    // 0x1c98d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c98d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c98d8:
    // 0x1c98d8: 0x0  nop
    ctx->pc = 0x1c98d8u;
    // NOP
label_1c98dc:
    // 0x1c98dc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c98dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c98e0:
    // 0x1c98e0: 0x0  nop
    ctx->pc = 0x1c98e0u;
    // NOP
label_1c98e4:
    // 0x1c98e4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1c98e8:
    if (ctx->pc == 0x1C98E8u) {
        ctx->pc = 0x1C98E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C98E4u;
        // 0x1c98e8: 0xe60205a8  swc1        $f2, 0x5A8($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C98ECu;
        goto label_1c98ec;
    }
    ctx->pc = 0x1C98E4u;
    {
        const bool branch_taken_0x1c98e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C98E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C98E4u;
        // 0x1c98e8: 0xe60205a8  swc1        $f2, 0x5A8($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c98e4) {
            ctx->pc = 0x1C98F4u;
            goto label_1c98f4;
        }
    }
    ctx->pc = 0x1C98ECu;
label_1c98ec:
    // 0x1c98ec: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x1c98ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1c98f0:
    // 0x1c98f0: 0xe600066c  swc1        $f0, 0x66C($s0)
    ctx->pc = 0x1c98f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1644), bits); }
label_1c98f4:
    // 0x1c98f4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1c98f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_1c98f8:
    // 0x1c98f8: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x1c98f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_1c98fc:
    // 0x1c98fc: 0x2446de88  addiu       $a2, $v0, -0x2178
    ctx->pc = 0x1c98fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958728));
label_1c9900:
    // 0x1c9900: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1c9900u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c9904:
    // 0x1c9904: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1c9904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1c9908:
    // 0x1c9908: 0xa2000665  sb          $zero, 0x665($s0)
    ctx->pc = 0x1c9908u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1637), (uint8_t)GPR_U32(ctx, 0));
label_1c990c:
    // 0x1c990c: 0xa2000664  sb          $zero, 0x664($s0)
    ctx->pc = 0x1c990cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1636), (uint8_t)GPR_U32(ctx, 0));
label_1c9910:
    // 0x1c9910: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x1c9910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1c9914:
    // 0x1c9914: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x1c9914u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1c9918:
    // 0x1c9918: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_1c991c:
    if (ctx->pc == 0x1C991Cu) {
        ctx->pc = 0x1C991Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9918u;
        // 0x1c991c: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9920u;
        goto label_1c9920;
    }
    ctx->pc = 0x1C9918u;
    {
        const bool branch_taken_0x1c9918 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1C991Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9918u;
        // 0x1c991c: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9918) {
            ctx->pc = 0x1C9944u;
            goto label_1c9944;
        }
    }
    ctx->pc = 0x1C9920u;
label_1c9920:
    // 0x1c9920: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x1c9920u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1c9924:
    // 0x1c9924: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1c9924u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1c9928:
    // 0x1c9928: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1c9928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1c992c:
    // 0x1c992c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1c992cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c9930:
    // 0x1c9930: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c9930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1c9934:
    // 0x1c9934: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x1c9934u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_1c9938:
    // 0x1c9938: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x1c9938u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_1c993c:
    // 0x1c993c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1c9940:
    if (ctx->pc == 0x1C9940u) {
        ctx->pc = 0x1C9940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C993Cu;
        // 0x1c9940: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9944u;
        goto label_1c9944;
    }
    ctx->pc = 0x1C993Cu;
    {
        const bool branch_taken_0x1c993c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C993Cu;
        // 0x1c9940: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c993c) {
            ctx->pc = 0x1C994Cu;
            goto label_1c994c;
        }
    }
    ctx->pc = 0x1C9944u;
label_1c9944:
    // 0x1c9944: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1c9944u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1c9948:
    // 0x1c9948: 0x920202f4  lbu         $v0, 0x2F4($s0)
    ctx->pc = 0x1c9948u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_1c994c:
    // 0x1c994c: 0x24e3de88  addiu       $v1, $a3, -0x2178
    ctx->pc = 0x1c994cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958728));
label_1c9950:
    // 0x1c9950: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1c9950u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1c9954:
    // 0x1c9954: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c9954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c9958:
    // 0x1c9958: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1c995c:
    if (ctx->pc == 0x1C995Cu) {
        ctx->pc = 0x1C995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9958u;
        // 0x1c995c: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9960u;
        goto label_1c9960;
    }
    ctx->pc = 0x1C9958u;
    {
        const bool branch_taken_0x1c9958 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1C995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9958u;
        // 0x1c995c: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9958) {
            ctx->pc = 0x1C9974u;
            goto label_1c9974;
        }
    }
    ctx->pc = 0x1C9960u;
label_1c9960:
    // 0x1c9960: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1c9960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_1c9964:
    // 0x1c9964: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1c9964u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1c9968:
    // 0x1c9968: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1c9968u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1c996c:
    // 0x1c996c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c9970:
    if (ctx->pc == 0x1C9970u) {
        ctx->pc = 0x1C9970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C996Cu;
        // 0x1c9970: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9974u;
        goto label_1c9974;
    }
    ctx->pc = 0x1C996Cu;
    {
        const bool branch_taken_0x1c996c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C996Cu;
        // 0x1c9970: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c996c) {
            ctx->pc = 0x1C9978u;
            goto label_1c9978;
        }
    }
    ctx->pc = 0x1C9974u;
label_1c9974:
    // 0x1c9974: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1c9974u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1c9978:
    // 0x1c9978: 0xc0f809  jalr        $a2
label_1c997c:
    if (ctx->pc == 0x1C997Cu) {
        ctx->pc = 0x1C997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9978u;
        // 0x1c997c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9980u;
        goto label_1c9980;
    }
    ctx->pc = 0x1C9978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1C9980u);
        ctx->pc = 0x1C997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9978u;
        // 0x1c997c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9978u, 0x1C9980u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C9980u;
label_1c9980:
    // 0x1c9980: 0xc60c05a8  lwc1        $f12, 0x5A8($s0)
    ctx->pc = 0x1c9980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c9984:
    // 0x1c9984: 0xc053934  jal         func_14E4D0
label_1c9988:
    if (ctx->pc == 0x1C9988u) {
        ctx->pc = 0x1C9988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9984u;
        // 0x1c9988: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C998Cu;
        goto label_1c998c;
    }
    ctx->pc = 0x1C9984u;
    SET_GPR_U32(ctx, 31, 0x1C998Cu);
    ctx->pc = 0x1C9988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9984u;
    // 0x1c9988: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E4D0u, 0x1C9984u, 0x1C998Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C998Cu;
label_1c998c:
    // 0x1c998c: 0xc073cea  jal         func_1CF3A8
label_1c9990:
    if (ctx->pc == 0x1C9990u) {
        ctx->pc = 0x1C9990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C998Cu;
        // 0x1c9990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9994u;
        goto label_1c9994;
    }
    ctx->pc = 0x1C998Cu;
    SET_GPR_U32(ctx, 31, 0x1C9994u);
    ctx->pc = 0x1C9990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C998Cu;
    // 0x1c9990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF3A8u, 0x1C998Cu, 0x1C9994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9994u;
label_1c9994:
    // 0x1c9994: 0xc0527ae  jal         func_149EB8
label_1c9998:
    if (ctx->pc == 0x1C9998u) {
        ctx->pc = 0x1C9998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9994u;
        // 0x1c9998: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C999Cu;
        goto label_1c999c;
    }
    ctx->pc = 0x1C9994u;
    SET_GPR_U32(ctx, 31, 0x1C999Cu);
    ctx->pc = 0x1C9998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9994u;
    // 0x1c9998: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1C9994u, 0x1C999Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C999Cu;
label_1c999c:
    // 0x1c999c: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1c999cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_1c99a0:
    // 0x1c99a0: 0x26030490  addiu       $v1, $s0, 0x490
    ctx->pc = 0x1c99a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
label_1c99a4:
    // 0x1c99a4: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_1c99a8:
    if (ctx->pc == 0x1C99A8u) {
        ctx->pc = 0x1C99A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C99A4u;
        // 0x1c99a8: 0x260305d0  addiu       $v1, $s0, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1488));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C99ACu;
        goto label_1c99ac;
    }
    ctx->pc = 0x1C99A4u;
    {
        const bool branch_taken_0x1c99a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c99a4) {
            ctx->pc = 0x1C99A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C99A4u;
            // 0x1c99a8: 0x260305d0  addiu       $v1, $s0, 0x5D0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1488));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C99C8u;
            goto label_1c99c8;
        }
    }
    ctx->pc = 0x1C99ACu;
label_1c99ac:
    // 0x1c99ac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1c99acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c99b0:
    // 0x1c99b0: 0xe6000490  swc1        $f0, 0x490($s0)
    ctx->pc = 0x1c99b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1168), bits); }
label_1c99b4:
    // 0x1c99b4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1c99b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c99b8:
    // 0x1c99b8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1c99b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1c99bc:
    // 0x1c99bc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1c99bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c99c0:
    // 0x1c99c0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1c99c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1c99c4:
    // 0x1c99c4: 0x260305d0  addiu       $v1, $s0, 0x5D0
    ctx->pc = 0x1c99c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1488));
label_1c99c8:
    // 0x1c99c8: 0x26020100  addiu       $v0, $s0, 0x100
    ctx->pc = 0x1c99c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_1c99cc:
    // 0x1c99cc: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_1c99d0:
    if (ctx->pc == 0x1C99D0u) {
        ctx->pc = 0x1C99D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C99CCu;
        // 0x1c99d0: 0x8e020600  lw          $v0, 0x600($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C99D4u;
        goto label_1c99d4;
    }
    ctx->pc = 0x1C99CCu;
    {
        const bool branch_taken_0x1c99cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c99cc) {
            ctx->pc = 0x1C99D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C99CCu;
            // 0x1c99d0: 0x8e020600  lw          $v0, 0x600($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C99F0u;
            goto label_1c99f0;
        }
    }
    ctx->pc = 0x1C99D4u;
label_1c99d4:
    // 0x1c99d4: 0xc6000100  lwc1        $f0, 0x100($s0)
    ctx->pc = 0x1c99d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c99d8:
    // 0x1c99d8: 0xe60005d0  swc1        $f0, 0x5D0($s0)
    ctx->pc = 0x1c99d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1488), bits); }
label_1c99dc:
    // 0x1c99dc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1c99dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c99e0:
    // 0x1c99e0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1c99e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1c99e4:
    // 0x1c99e4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1c99e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c99e8:
    // 0x1c99e8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1c99e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1c99ec:
    // 0x1c99ec: 0x8e020600  lw          $v0, 0x600($s0)
    ctx->pc = 0x1c99ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
label_1c99f0:
    // 0x1c99f0: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_1c99f4:
    if (ctx->pc == 0x1C99F4u) {
        ctx->pc = 0x1C99F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C99F0u;
        // 0x1c99f4: 0x960302fe  lhu         $v1, 0x2FE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C99F8u;
        goto label_1c99f8;
    }
    ctx->pc = 0x1C99F0u;
    {
        const bool branch_taken_0x1c99f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c99f0) {
            ctx->pc = 0x1C99F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C99F0u;
            // 0x1c99f4: 0x960302fe  lhu         $v1, 0x2FE($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9A24u;
            goto label_1c9a24;
        }
    }
    ctx->pc = 0x1C99F8u;
label_1c99f8:
    // 0x1c99f8: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1c99f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_1c99fc:
    // 0x1c99fc: 0x3c01c47a  lui         $at, 0xC47A
    ctx->pc = 0x1c99fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50298 << 16));
label_1c9a00:
    // 0x1c9a00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c9a00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c9a04:
    // 0x1c9a04: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1c9a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c9a08:
    // 0x1c9a08: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c9a08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c9a0c:
    // 0x1c9a0c: 0x0  nop
    ctx->pc = 0x1c9a0cu;
    // NOP
label_1c9a10:
    // 0x1c9a10: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_1c9a14:
    if (ctx->pc == 0x1C9A14u) {
        ctx->pc = 0x1C9A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A10u;
        // 0x1c9a14: 0x960302fe  lhu         $v1, 0x2FE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9A18u;
        goto label_1c9a18;
    }
    ctx->pc = 0x1C9A10u;
    {
        const bool branch_taken_0x1c9a10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c9a10) {
            ctx->pc = 0x1C9A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9A10u;
            // 0x1c9a14: 0x960302fe  lhu         $v1, 0x2FE($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9A24u;
            goto label_1c9a24;
        }
    }
    ctx->pc = 0x1C9A18u;
label_1c9a18:
    // 0x1c9a18: 0xc06de6c  jal         func_1B79B0
label_1c9a1c:
    if (ctx->pc == 0x1C9A1Cu) {
        ctx->pc = 0x1C9A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A18u;
        // 0x1c9a1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9A20u;
        goto label_1c9a20;
    }
    ctx->pc = 0x1C9A18u;
    SET_GPR_U32(ctx, 31, 0x1C9A20u);
    ctx->pc = 0x1C9A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9A18u;
    // 0x1c9a1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B79B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B79B0u, 0x1C9A18u, 0x1C9A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A20u;
label_1c9a20:
    // 0x1c9a20: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x1c9a20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
label_1c9a24:
    // 0x1c9a24: 0x24020390  addiu       $v0, $zero, 0x390
    ctx->pc = 0x1c9a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
label_1c9a28:
    // 0x1c9a28: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_1c9a2c:
    if (ctx->pc == 0x1C9A2Cu) {
        ctx->pc = 0x1C9A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A28u;
        // 0x1c9a2c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9A30u;
        goto label_1c9a30;
    }
    ctx->pc = 0x1C9A28u;
    {
        const bool branch_taken_0x1c9a28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c9a28) {
            ctx->pc = 0x1C9A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9A28u;
            // 0x1c9a2c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9A3Cu;
            goto label_1c9a3c;
        }
    }
    ctx->pc = 0x1C9A30u;
label_1c9a30:
    // 0x1c9a30: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x1c9a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_1c9a34:
    // 0x1c9a34: 0xae020668  sw          $v0, 0x668($s0)
    ctx->pc = 0x1c9a34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1640), GPR_U32(ctx, 2));
label_1c9a38:
    // 0x1c9a38: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c9a38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c9a3c:
    // 0x1c9a3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c9a3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c9a40:
    // 0x1c9a40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c9a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c9a44:
    // 0x1c9a44: 0x3e00008  jr          $ra
label_1c9a48:
    if (ctx->pc == 0x1C9A48u) {
        ctx->pc = 0x1C9A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A44u;
        // 0x1c9a48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9A4Cu;
        goto label_1c9a4c;
    }
    ctx->pc = 0x1C9A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A44u;
        // 0x1c9a48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9A4Cu;
label_1c9a4c:
    // 0x1c9a4c: 0x0  nop
    ctx->pc = 0x1c9a4cu;
    // NOP
    ctx->pc = 0x1c9a50u;
}
