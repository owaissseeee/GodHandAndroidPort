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

// Function: func_001E9F68
// Address: 0x1e9f68 - 0x1ea1a8
void func_001E9F68_0x1e9f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001E9F68_0x1e9f68");
#endif

    switch (ctx->pc) {
        case 0x1e9fa8u: goto label_1e9fa8;
        case 0x1e9fe4u: goto label_1e9fe4;
        case 0x1e9ff0u: goto label_1e9ff0;
        case 0x1e9ffcu: goto label_1e9ffc;
        case 0x1ea018u: goto label_1ea018;
        case 0x1ea068u: goto label_1ea068;
        case 0x1ea070u: goto label_1ea070;
        case 0x1ea080u: goto label_1ea080;
        case 0x1ea100u: goto label_1ea100;
        case 0x1ea120u: goto label_1ea120;
        case 0x1ea128u: goto label_1ea128;
        case 0x1ea134u: goto label_1ea134;
        case 0x1ea15cu: goto label_1ea15c;
        case 0x1ea164u: goto label_1ea164;
        case 0x1ea174u: goto label_1ea174;
        case 0x1ea17cu: goto label_1ea17c;
        case 0x1ea188u: goto label_1ea188;
        default: break;
    }

    ctx->pc = 0x1e9f68u;

    // 0x1e9f68: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e9f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e9f6c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1e9f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1e9f70: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1e9f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1e9f74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e9f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9f78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e9f78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9f7c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1e9f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1e9f80: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x1e9f80u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x1e9f84: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1e9f84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9f88: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1e9f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1e9f8c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1e9f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1e9f90: 0x3c100074  lui         $s0, 0x74
    ctx->pc = 0x1e9f90u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)116 << 16));
    // 0x1e9f94: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1e9f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1e9f98: 0x3c130074  lui         $s3, 0x74
    ctx->pc = 0x1e9f98u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)116 << 16));
    // 0x1e9f9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e9f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e9fa0: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x1E9FA0u;
    SET_GPR_U32(ctx, 31, 0x1E9FA8u);
    ctx->pc = 0x1E9FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9FA0u;
    // 0x1e9fa4: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x1E9FA0u, 0x1E9FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9FA8u;
label_1e9fa8:
    // 0x1e9fa8: 0x26107470  addiu       $s0, $s0, 0x7470
    ctx->pc = 0x1e9fa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29808));
    // 0x1e9fac: 0x3c060074  lui         $a2, 0x74
    ctx->pc = 0x1e9facu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)116 << 16));
    // 0x1e9fb0: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x1e9fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x1e9fb4: 0x8cc37a78  lw          $v1, 0x7A78($a2)
    ctx->pc = 0x1e9fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A78u));
    // 0x1e9fb8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1e9fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1e9fbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e9fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9fc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9fc4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1e9fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e9fc8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e9fc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9fcc: 0xacc37a78  sw          $v1, 0x7A78($a2)
    ctx->pc = 0x1e9fccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 31352), GPR_U32(ctx, 3));
    // 0x1e9fd0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e9fd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9fd4: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1e9fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e9fd8: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x1e9fd8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
    // 0x1e9fdc: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x1E9FDCu;
    SET_GPR_U32(ctx, 31, 0x1E9FE4u);
    ctx->pc = 0x1E9FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9FDCu;
    // 0x1e9fe0: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x1E9FDCu, 0x1E9FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9FE4u;
label_1e9fe4:
    // 0x1e9fe4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E9FE4u;
    {
        const bool branch_taken_0x1e9fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9FE4u;
        // 0x1e9fe8: 0x9202001c  lbu         $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9fe4) {
            ctx->pc = 0x1EA000u;
            goto label_1ea000;
        }
    }
    ctx->pc = 0x1E9FECu;
    // 0x1e9fec: 0x0  nop
    ctx->pc = 0x1e9fecu;
    // NOP
label_1e9ff0:
    // 0x1e9ff0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e9ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e9ff4: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x1E9FF4u;
    SET_GPR_U32(ctx, 31, 0x1E9FFCu);
    ctx->pc = 0x1E9FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9FF4u;
    // 0x1e9ff8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x1E9FF4u, 0x1E9FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9FFCu;
label_1e9ffc:
    // 0x1e9ffc: 0x9202001c  lbu         $v0, 0x1C($s0)
    ctx->pc = 0x1e9ffcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
label_1ea000:
    // 0x1ea000: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x1ea000u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x1ea004: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ea004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ea008: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1EA008u;
    {
        const bool branch_taken_0x1ea008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA008u;
        // 0x1ea00c: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea008) {
            ctx->pc = 0x1E9FF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9ff0;
        }
    }
    ctx->pc = 0x1EA010u;
    // 0x1ea010: 0xc07a5ec  jal         func_1E97B0
    ctx->pc = 0x1EA010u;
    SET_GPR_U32(ctx, 31, 0x1EA018u);
    ctx->pc = 0x1EA014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA010u;
    // 0x1ea014: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E97B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E97B0u, 0x1EA010u, 0x1EA018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA018u;
label_1ea018:
    // 0x1ea018: 0x8e627a80  lw          $v0, 0x7A80($s3)
    ctx->pc = 0x1ea018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 31360)));
    // 0x1ea01c: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1ea01cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1ea020: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x1ea020u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
    // 0x1ea024: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x1ea024u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x1ea028: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ea028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ea02c: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x1ea02cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x1ea030: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1ea030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1ea034: 0x3c070020  lui         $a3, 0x20
    ctx->pc = 0x1ea034u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32 << 16));
    // 0x1ea038: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1ea038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1ea03c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1ea03cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1ea040: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1ea040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1ea044: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x1ea044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x1ea048: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1ea048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1ea04c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1ea04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1ea050: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ea050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ea054: 0xae627a80  sw          $v0, 0x7A80($s3)
    ctx->pc = 0x1ea054u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 31360), GPR_U32(ctx, 2));
    // 0x1ea058: 0x9e230054  lwu         $v1, 0x54($s1)
    ctx->pc = 0x1ea058u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1ea05c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1ea05cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1ea060: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1EA060u;
    {
        const bool branch_taken_0x1ea060 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA060u;
        // 0x1ea064: 0x8e627a80  lw          $v0, 0x7A80($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 31360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea060) {
            ctx->pc = 0x1EA090u;
            goto label_1ea090;
        }
    }
    ctx->pc = 0x1EA068u;
label_1ea068:
    // 0x1ea068: 0xc07a86a  jal         func_1EA1A8
    ctx->pc = 0x1EA068u;
    SET_GPR_U32(ctx, 31, 0x1EA070u);
    ctx->pc = 0x1EA06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA068u;
    // 0x1ea06c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA1A8u, 0x1EA068u, 0x1EA070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA070u;
label_1ea070:
    // 0x1ea070: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x1ea070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x1ea074: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ea074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ea078: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x1EA078u;
    SET_GPR_U32(ctx, 31, 0x1EA080u);
    ctx->pc = 0x1EA07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA078u;
    // 0x1ea07c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x1EA078u, 0x1EA080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA080u;
label_1ea080:
    // 0x1ea080: 0x9e220054  lwu         $v0, 0x54($s1)
    ctx->pc = 0x1ea080u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1ea084: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ea084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ea088: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1EA088u;
    {
        const bool branch_taken_0x1ea088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA088u;
        // 0x1ea08c: 0x8e627a80  lw          $v0, 0x7A80($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 31360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea088) {
            ctx->pc = 0x1EA068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ea068;
        }
    }
    ctx->pc = 0x1EA090u;
label_1ea090:
    // 0x1ea090: 0x3c03fbff  lui         $v1, 0xFBFF
    ctx->pc = 0x1ea090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64511 << 16));
    // 0x1ea094: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1ea094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1ea098: 0x3c04fdff  lui         $a0, 0xFDFF
    ctx->pc = 0x1ea098u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65023 << 16));
    // 0x1ea09c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ea09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1ea0a0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1ea0a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1ea0a4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1ea0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1ea0a8: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1ea0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1ea0ac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1ea0acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1ea0b0: 0x3c047fff  lui         $a0, 0x7FFF
    ctx->pc = 0x1ea0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32767 << 16));
    // 0x1ea0b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ea0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1ea0b8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1ea0b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1ea0bc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1ea0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1ea0c0: 0x3c03ffdf  lui         $v1, 0xFFDF
    ctx->pc = 0x1ea0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65503 << 16));
    // 0x1ea0c4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1ea0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1ea0c8: 0x3c04dfff  lui         $a0, 0xDFFF
    ctx->pc = 0x1ea0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57343 << 16));
    // 0x1ea0cc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ea0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1ea0d0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1ea0d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1ea0d4: 0x3c05efff  lui         $a1, 0xEFFF
    ctx->pc = 0x1ea0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61439 << 16));
    // 0x1ea0d8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1ea0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1ea0dc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1ea0dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1ea0e0: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x1ea0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x1ea0e4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1ea0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1ea0e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1ea0e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1ea0ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ea0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1ea0f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ea0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea0f4: 0xae627a80  sw          $v0, 0x7A80($s3)
    ctx->pc = 0x1ea0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 31360), GPR_U32(ctx, 2));
    // 0x1ea0f8: 0xc07a790  jal         func_1E9E40
    ctx->pc = 0x1EA0F8u;
    SET_GPR_U32(ctx, 31, 0x1EA100u);
    ctx->pc = 0x1EA0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA0F8u;
    // 0x1ea0fc: 0x26907470  addiu       $s0, $s4, 0x7470 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 29808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9E40u, 0x1EA0F8u, 0x1EA100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA100u;
label_1ea100:
    // 0x1ea100: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ea100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea104: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ea104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea108: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1ea108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ea10c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ea10cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea110: 0x3c08ff00  lui         $t0, 0xFF00
    ctx->pc = 0x1ea110u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
    // 0x1ea114: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ea114u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea118: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x1EA118u;
    SET_GPR_U32(ctx, 31, 0x1EA120u);
    ctx->pc = 0x1EA11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA118u;
    // 0x1ea11c: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x1EA118u, 0x1EA120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA120u;
label_1ea120:
    // 0x1ea120: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1EA120u;
    {
        const bool branch_taken_0x1ea120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA120u;
        // 0x1ea124: 0x9202001c  lbu         $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea120) {
            ctx->pc = 0x1EA138u;
            goto label_1ea138;
        }
    }
    ctx->pc = 0x1EA128u;
label_1ea128:
    // 0x1ea128: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ea128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ea12c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x1EA12Cu;
    SET_GPR_U32(ctx, 31, 0x1EA134u);
    ctx->pc = 0x1EA130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA12Cu;
    // 0x1ea130: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x1EA12Cu, 0x1EA134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA134u;
label_1ea134:
    // 0x1ea134: 0x9202001c  lbu         $v0, 0x1C($s0)
    ctx->pc = 0x1ea134u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
label_1ea138:
    // 0x1ea138: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x1ea138u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x1ea13c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ea13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ea140: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1EA140u;
    {
        const bool branch_taken_0x1ea140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA140u;
        // 0x1ea144: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea140) {
            ctx->pc = 0x1EA128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ea128;
        }
    }
    ctx->pc = 0x1EA148u;
    // 0x1ea148: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x1ea148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x1ea14c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ea14cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ea150: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1ea150u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1ea154: 0xc0b453e  jal         func_2D14F8
    ctx->pc = 0x1EA154u;
    SET_GPR_U32(ctx, 31, 0x1EA15Cu);
    ctx->pc = 0x1EA158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA154u;
    // 0x1ea158: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D14F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D14F8u, 0x1EA154u, 0x1EA15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA15Cu;
label_1ea15c:
    // 0x1ea15c: 0xc0c1db8  jal         func_3076E0
    ctx->pc = 0x1EA15Cu;
    SET_GPR_U32(ctx, 31, 0x1EA164u);
    ctx->pc = 0x1EA160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA15Cu;
    // 0x1ea160: 0x26847470  addiu       $a0, $s4, 0x7470 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 29808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3076E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3076E0u, 0x1EA15Cu, 0x1EA164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA164u;
label_1ea164:
    // 0x1ea164: 0x962501b0  lhu         $a1, 0x1B0($s1)
    ctx->pc = 0x1ea164u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x1ea168: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1ea168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1ea16c: 0xc0b0a54  jal         func_2C2950
    ctx->pc = 0x1EA16Cu;
    SET_GPR_U32(ctx, 31, 0x1EA174u);
    ctx->pc = 0x1EA170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA16Cu;
    // 0x1ea170: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x1EA16Cu, 0x1EA174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA174u;
label_1ea174:
    // 0x1ea174: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x1EA174u;
    SET_GPR_U32(ctx, 31, 0x1EA17Cu);
    ctx->pc = 0x1EA178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA174u;
    // 0x1ea178: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x1EA174u, 0x1EA17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA17Cu;
label_1ea17c:
    // 0x1ea17c: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x1ea17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x1ea180: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x1EA180u;
    SET_GPR_U32(ctx, 31, 0x1EA188u);
    ctx->pc = 0x1EA184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA180u;
    // 0x1ea184: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x1EA180u, 0x1EA188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA188u;
label_1ea188:
    // 0x1ea188: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1ea188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ea18c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1ea18cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ea190: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1ea190u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ea194: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1ea194u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ea198: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1ea198u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ea19c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ea19cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ea1a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA1A0u;
        // 0x1ea1a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA1A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA1A8u;
}
