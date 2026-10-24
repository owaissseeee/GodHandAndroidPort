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

// Function: fflush
// Address: 0x3a6020 - 0x3a6130
void fflush_0x3a6020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fflush_0x3a6020");
#endif

    switch (ctx->pc) {
        case 0x3a6020u: goto label_3a6020;
        case 0x3a6024u: goto label_3a6024;
        case 0x3a6028u: goto label_3a6028;
        case 0x3a602cu: goto label_3a602c;
        case 0x3a6030u: goto label_3a6030;
        case 0x3a6034u: goto label_3a6034;
        case 0x3a6038u: goto label_3a6038;
        case 0x3a603cu: goto label_3a603c;
        case 0x3a6040u: goto label_3a6040;
        case 0x3a6044u: goto label_3a6044;
        case 0x3a6048u: goto label_3a6048;
        case 0x3a604cu: goto label_3a604c;
        case 0x3a6050u: goto label_3a6050;
        case 0x3a6054u: goto label_3a6054;
        case 0x3a6058u: goto label_3a6058;
        case 0x3a605cu: goto label_3a605c;
        case 0x3a6060u: goto label_3a6060;
        case 0x3a6064u: goto label_3a6064;
        case 0x3a6068u: goto label_3a6068;
        case 0x3a606cu: goto label_3a606c;
        case 0x3a6070u: goto label_3a6070;
        case 0x3a6074u: goto label_3a6074;
        case 0x3a6078u: goto label_3a6078;
        case 0x3a607cu: goto label_3a607c;
        case 0x3a6080u: goto label_3a6080;
        case 0x3a6084u: goto label_3a6084;
        case 0x3a6088u: goto label_3a6088;
        case 0x3a608cu: goto label_3a608c;
        case 0x3a6090u: goto label_3a6090;
        case 0x3a6094u: goto label_3a6094;
        case 0x3a6098u: goto label_3a6098;
        case 0x3a609cu: goto label_3a609c;
        case 0x3a60a0u: goto label_3a60a0;
        case 0x3a60a4u: goto label_3a60a4;
        case 0x3a60a8u: goto label_3a60a8;
        case 0x3a60acu: goto label_3a60ac;
        case 0x3a60b0u: goto label_3a60b0;
        case 0x3a60b4u: goto label_3a60b4;
        case 0x3a60b8u: goto label_3a60b8;
        case 0x3a60bcu: goto label_3a60bc;
        case 0x3a60c0u: goto label_3a60c0;
        case 0x3a60c4u: goto label_3a60c4;
        case 0x3a60c8u: goto label_3a60c8;
        case 0x3a60ccu: goto label_3a60cc;
        case 0x3a60d0u: goto label_3a60d0;
        case 0x3a60d4u: goto label_3a60d4;
        case 0x3a60d8u: goto label_3a60d8;
        case 0x3a60dcu: goto label_3a60dc;
        case 0x3a60e0u: goto label_3a60e0;
        case 0x3a60e4u: goto label_3a60e4;
        case 0x3a60e8u: goto label_3a60e8;
        case 0x3a60ecu: goto label_3a60ec;
        case 0x3a60f0u: goto label_3a60f0;
        case 0x3a60f4u: goto label_3a60f4;
        case 0x3a60f8u: goto label_3a60f8;
        case 0x3a60fcu: goto label_3a60fc;
        case 0x3a6100u: goto label_3a6100;
        case 0x3a6104u: goto label_3a6104;
        case 0x3a6108u: goto label_3a6108;
        case 0x3a610cu: goto label_3a610c;
        case 0x3a6110u: goto label_3a6110;
        case 0x3a6114u: goto label_3a6114;
        case 0x3a6118u: goto label_3a6118;
        case 0x3a611cu: goto label_3a611c;
        case 0x3a6120u: goto label_3a6120;
        case 0x3a6124u: goto label_3a6124;
        case 0x3a6128u: goto label_3a6128;
        case 0x3a612cu: goto label_3a612c;
        default: break;
    }

    ctx->pc = 0x3a6020u;

label_3a6020:
    // 0x3a6020: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3a6020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3a6024:
    // 0x3a6024: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3a6024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3a6028:
    // 0x3a6028: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3a6028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3a602c:
    // 0x3a602c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a602cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a6030:
    // 0x3a6030: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3a6030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3a6034:
    // 0x3a6034: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
label_3a6038:
    if (ctx->pc == 0x3A6038u) {
        ctx->pc = 0x3A6038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6034u;
        // 0x3a6038: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A603Cu;
        goto label_3a603c;
    }
    ctx->pc = 0x3A6034u;
    {
        const bool branch_taken_0x3a6034 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A6038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6034u;
        // 0x3a6038: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6034) {
            ctx->pc = 0x3A6058u;
            goto label_3a6058;
        }
    }
    ctx->pc = 0x3A603Cu;
label_3a603c:
    // 0x3a603c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3a603cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_3a6040:
    // 0x3a6040: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x3a6040u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
label_3a6044:
    // 0x3a6044: 0x8c44a62c  lw          $a0, -0x59D4($v0)
    ctx->pc = 0x3a6044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944300)));
label_3a6048:
    // 0x3a6048: 0xc0e9a0c  jal         func_3A6830
label_3a604c:
    if (ctx->pc == 0x3A604Cu) {
        ctx->pc = 0x3A604Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6048u;
        // 0x3a604c: 0x24a56020  addiu       $a1, $a1, 0x6020 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6050u;
        goto label_3a6050;
    }
    ctx->pc = 0x3A6048u;
    SET_GPR_U32(ctx, 31, 0x3A6050u);
    ctx->pc = 0x3A604Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6048u;
    // 0x3a604c: 0x24a56020  addiu       $a1, $a1, 0x6020 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6830u, 0x3A6048u, 0x3A6050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6050u;
label_3a6050:
    // 0x3a6050: 0x10000031  b           . + 4 + (0x31 << 2)
label_3a6054:
    if (ctx->pc == 0x3A6054u) {
        ctx->pc = 0x3A6054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6050u;
        // 0x3a6054: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6058u;
        goto label_3a6058;
    }
    ctx->pc = 0x3A6050u;
    {
        const bool branch_taken_0x3a6050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6050u;
        // 0x3a6054: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6050) {
            ctx->pc = 0x3A6118u;
            goto label_3a6118;
        }
    }
    ctx->pc = 0x3A6058u;
label_3a6058:
    // 0x3a6058: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3a6058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3a605c:
    // 0x3a605c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_3a6060:
    if (ctx->pc == 0x3A6060u) {
        ctx->pc = 0x3A6060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A605Cu;
        // 0x3a6060: 0x8e240054  lw          $a0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6064u;
        goto label_3a6064;
    }
    ctx->pc = 0x3A605Cu;
    {
        const bool branch_taken_0x3a605c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a605c) {
            ctx->pc = 0x3A6060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A605Cu;
            // 0x3a6060: 0x8e240054  lw          $a0, 0x54($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6078u;
            goto label_3a6078;
        }
    }
    ctx->pc = 0x3A6064u;
label_3a6064:
    // 0x3a6064: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3a6064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_3a6068:
    // 0x3a6068: 0x8c43a62c  lw          $v1, -0x59D4($v0)
    ctx->pc = 0x3a6068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944300)));
label_3a606c:
    // 0x3a606c: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x3a606cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_3a6070:
    // 0x3a6070: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x3a6070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3a6074:
    // 0x3a6074: 0x0  nop
    ctx->pc = 0x3a6074u;
    // NOP
label_3a6078:
    // 0x3a6078: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x3a6078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_3a607c:
    // 0x3a607c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_3a6080:
    if (ctx->pc == 0x3A6080u) {
        ctx->pc = 0x3A6080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A607Cu;
        // 0x3a6080: 0x8623000c  lh          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6084u;
        goto label_3a6084;
    }
    ctx->pc = 0x3A607Cu;
    {
        const bool branch_taken_0x3a607c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a607c) {
            ctx->pc = 0x3A6080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A607Cu;
            // 0x3a6080: 0x8623000c  lh          $v1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6090u;
            goto label_3a6090;
        }
    }
    ctx->pc = 0x3A6084u;
label_3a6084:
    // 0x3a6084: 0xc0e987c  jal         func_3A61F0
label_3a6088:
    if (ctx->pc == 0x3A6088u) {
        ctx->pc = 0x3A608Cu;
        goto label_3a608c;
    }
    ctx->pc = 0x3A6084u;
    SET_GPR_U32(ctx, 31, 0x3A608Cu);
    ctx->pc = 0x3A61F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A61F0u, 0x3A6084u, 0x3A608Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A608Cu;
label_3a608c:
    // 0x3a608c: 0x8623000c  lh          $v1, 0xC($s1)
    ctx->pc = 0x3a608cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_3a6090:
    // 0x3a6090: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x3a6090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_3a6094:
    // 0x3a6094: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_3a6098:
    if (ctx->pc == 0x3A6098u) {
        ctx->pc = 0x3A6098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6094u;
        // 0x3a6098: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A609Cu;
        goto label_3a609c;
    }
    ctx->pc = 0x3A6094u;
    {
        const bool branch_taken_0x3a6094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6094u;
        // 0x3a6098: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6094) {
            ctx->pc = 0x3A6114u;
            goto label_3a6114;
        }
    }
    ctx->pc = 0x3A609Cu;
label_3a609c:
    // 0x3a609c: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x3a609cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3a60a0:
    // 0x3a60a0: 0x56400008  bnel        $s2, $zero, . + 4 + (0x8 << 2)
label_3a60a4:
    if (ctx->pc == 0x3A60A4u) {
        ctx->pc = 0x3A60A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A60A0u;
        // 0x3a60a4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A60A8u;
        goto label_3a60a8;
    }
    ctx->pc = 0x3A60A0u;
    {
        const bool branch_taken_0x3a60a0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a60a0) {
            ctx->pc = 0x3A60A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A60A0u;
            // 0x3a60a4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A60C4u;
            goto label_3a60c4;
        }
    }
    ctx->pc = 0x3A60A8u;
label_3a60a8:
    // 0x3a60a8: 0x1000001b  b           . + 4 + (0x1B << 2)
label_3a60ac:
    if (ctx->pc == 0x3A60ACu) {
        ctx->pc = 0x3A60ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A60A8u;
        // 0x3a60ac: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A60B0u;
        goto label_3a60b0;
    }
    ctx->pc = 0x3A60A8u;
    {
        const bool branch_taken_0x3a60a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A60ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A60A8u;
        // 0x3a60ac: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a60a8) {
            ctx->pc = 0x3A6118u;
            goto label_3a6118;
        }
    }
    ctx->pc = 0x3A60B0u;
label_3a60b0:
    // 0x3a60b0: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x3a60b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_3a60b4:
    // 0x3a60b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3a60b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3a60b8:
    // 0x3a60b8: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3a60b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_3a60bc:
    // 0x3a60bc: 0x10000015  b           . + 4 + (0x15 << 2)
label_3a60c0:
    if (ctx->pc == 0x3A60C0u) {
        ctx->pc = 0x3A60C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A60BCu;
        // 0x3a60c0: 0xa623000c  sh          $v1, 0xC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A60C4u;
        goto label_3a60c4;
    }
    ctx->pc = 0x3A60BCu;
    {
        const bool branch_taken_0x3a60bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A60C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A60BCu;
        // 0x3a60c0: 0xa623000c  sh          $v1, 0xC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a60bc) {
            ctx->pc = 0x3A6114u;
            goto label_3a6114;
        }
    }
    ctx->pc = 0x3A60C4u;
label_3a60c4:
    // 0x3a60c4: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x3a60c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_3a60c8:
    // 0x3a60c8: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x3a60c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
label_3a60cc:
    // 0x3a60cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a60ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a60d0:
    // 0x3a60d0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_3a60d4:
    if (ctx->pc == 0x3A60D4u) {
        ctx->pc = 0x3A60D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A60D0u;
        // 0x3a60d4: 0x528023  subu        $s0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A60D8u;
        goto label_3a60d8;
    }
    ctx->pc = 0x3A60D0u;
    {
        const bool branch_taken_0x3a60d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A60D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A60D0u;
        // 0x3a60d4: 0x528023  subu        $s0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a60d0) {
            ctx->pc = 0x3A60DCu;
            goto label_3a60dc;
        }
    }
    ctx->pc = 0x3A60D8u;
label_3a60d8:
    // 0x3a60d8: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x3a60d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3a60dc:
    // 0x3a60dc: 0x1a00000c  blez        $s0, . + 4 + (0xC << 2)
label_3a60e0:
    if (ctx->pc == 0x3A60E0u) {
        ctx->pc = 0x3A60E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A60DCu;
        // 0x3a60e0: 0xae240008  sw          $a0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A60E4u;
        goto label_3a60e4;
    }
    ctx->pc = 0x3A60DCu;
    {
        const bool branch_taken_0x3a60dc = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x3A60E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A60DCu;
        // 0x3a60e0: 0xae240008  sw          $a0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a60dc) {
            ctx->pc = 0x3A6110u;
            goto label_3a6110;
        }
    }
    ctx->pc = 0x3A60E4u;
label_3a60e4:
    // 0x3a60e4: 0x0  nop
    ctx->pc = 0x3a60e4u;
    // NOP
label_3a60e8:
    // 0x3a60e8: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x3a60e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3a60ec:
    // 0x3a60ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3a60ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a60f0:
    // 0x3a60f0: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x3a60f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_3a60f4:
    // 0x3a60f4: 0x40f809  jalr        $v0
label_3a60f8:
    if (ctx->pc == 0x3A60F8u) {
        ctx->pc = 0x3A60F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A60F4u;
        // 0x3a60f8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A60FCu;
        goto label_3a60fc;
    }
    ctx->pc = 0x3A60F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A60FCu);
        ctx->pc = 0x3A60F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A60F4u;
        // 0x3a60f8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A60F4u, 0x3A60FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A60FCu;
label_3a60fc:
    // 0x3a60fc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3a60fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a6100:
    // 0x3a6100: 0x1860ffeb  blez        $v1, . + 4 + (-0x15 << 2)
label_3a6104:
    if (ctx->pc == 0x3A6104u) {
        ctx->pc = 0x3A6104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6100u;
        // 0x3a6104: 0x2038023  subu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6108u;
        goto label_3a6108;
    }
    ctx->pc = 0x3A6100u;
    {
        const bool branch_taken_0x3a6100 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x3A6104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6100u;
        // 0x3a6104: 0x2038023  subu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6100) {
            ctx->pc = 0x3A60B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a60b0;
        }
    }
    ctx->pc = 0x3A6108u;
label_3a6108:
    // 0x3a6108: 0x1e00fff7  bgtz        $s0, . + 4 + (-0x9 << 2)
label_3a610c:
    if (ctx->pc == 0x3A610Cu) {
        ctx->pc = 0x3A610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6108u;
        // 0x3a610c: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6110u;
        goto label_3a6110;
    }
    ctx->pc = 0x3A6108u;
    {
        const bool branch_taken_0x3a6108 = (GPR_S64(ctx, 16) > 0);
        ctx->pc = 0x3A610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6108u;
        // 0x3a610c: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6108) {
            ctx->pc = 0x3A60E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a60e8;
        }
    }
    ctx->pc = 0x3A6110u;
label_3a6110:
    // 0x3a6110: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a6110u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a6114:
    // 0x3a6114: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3a6114u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a6118:
    // 0x3a6118: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3a6118u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a611c:
    // 0x3a611c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3a611cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a6120:
    // 0x3a6120: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a6120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a6124:
    // 0x3a6124: 0x3e00008  jr          $ra
label_3a6128:
    if (ctx->pc == 0x3A6128u) {
        ctx->pc = 0x3A6128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6124u;
        // 0x3a6128: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A612Cu;
        goto label_3a612c;
    }
    ctx->pc = 0x3A6124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6124u;
        // 0x3a6128: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A612Cu;
label_3a612c:
    // 0x3a612c: 0x0  nop
    ctx->pc = 0x3a612cu;
    // NOP
    ctx->pc = 0x3a6130u;
}
