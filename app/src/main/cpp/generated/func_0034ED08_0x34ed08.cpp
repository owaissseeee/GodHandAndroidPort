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

// Function: func_0034ED08
// Address: 0x34ed08 - 0x34eee0
void func_0034ED08_0x34ed08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034ED08_0x34ed08");
#endif

    switch (ctx->pc) {
        case 0x34ed50u: goto label_34ed50;
        case 0x34ed80u: goto label_34ed80;
        case 0x34ed9cu: goto label_34ed9c;
        case 0x34edb0u: goto label_34edb0;
        case 0x34ee58u: goto label_34ee58;
        case 0x34ee7cu: goto label_34ee7c;
        case 0x34ee94u: goto label_34ee94;
        case 0x34eeacu: goto label_34eeac;
        default: break;
    }

    ctx->pc = 0x34ed08u;

    // 0x34ed08: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34ed08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x34ed0c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x34ed0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x34ed10: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x34ed10u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ed14: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x34ed14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x34ed18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34ed18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34ed1c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x34ed1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x34ed20: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x34ed20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ed24: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x34ed24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x34ed28: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x34ed28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ed2c: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x34ed2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x34ed30: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x34ed30u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ed34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34ed34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34ed38: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x34ed38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x34ed3c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x34ed3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x34ed40: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x34ed40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x34ed44: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x34ed44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x34ed48: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x34ED48u;
    SET_GPR_U32(ctx, 31, 0x34ED50u);
    ctx->pc = 0x34ED4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34ED48u;
    // 0x34ed4c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x34ED48u, 0x34ED50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34ED50u;
label_34ed50:
    // 0x34ed50: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34ED50u;
    {
        const bool branch_taken_0x34ed50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34ED54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ED50u;
        // 0x34ed54: 0x26371f74  addiu       $s7, $s1, 0x1F74 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 8052));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ed50) {
            ctx->pc = 0x34ED60u;
            goto label_34ed60;
        }
    }
    ctx->pc = 0x34ED58u;
    // 0x34ed58: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x34ED58u;
    {
        const bool branch_taken_0x34ed58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34ED5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ED58u;
        // 0x34ed5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ed58) {
            ctx->pc = 0x34EEB0u;
            goto label_34eeb0;
        }
    }
    ctx->pc = 0x34ED60u;
label_34ed60:
    // 0x34ed60: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x34ed60u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34ed64: 0x8ef00008  lw          $s0, 0x8($s7)
    ctx->pc = 0x34ed64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x34ed68: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x34ed68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x34ed6c: 0x54550006  bnel        $v0, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x34ED6Cu;
    {
        const bool branch_taken_0x34ed6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x34ed6c) {
            ctx->pc = 0x34ED70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34ED6Cu;
            // 0x34ed70: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34ED88u;
            goto label_34ed88;
        }
    }
    ctx->pc = 0x34ED74u;
    // 0x34ed74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34ed74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ed78: 0xc0d3bb8  jal         func_34EEE0
    ctx->pc = 0x34ED78u;
    SET_GPR_U32(ctx, 31, 0x34ED80u);
    ctx->pc = 0x34ED7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34ED78u;
    // 0x34ed7c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34EEE0u, 0x34ED78u, 0x34ED80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34ED80u;
label_34ed80:
    // 0x34ed80: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x34ed80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x34ed84: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x34ed84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_34ed88:
    // 0x34ed88: 0x50550001  beql        $v0, $s5, . + 4 + (0x1 << 2)
    ctx->pc = 0x34ED88u;
    {
        const bool branch_taken_0x34ed88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x34ed88) {
            ctx->pc = 0x34ED8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34ED88u;
            // 0x34ed8c: 0xae16002c  sw          $s6, 0x2C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34ED90u;
            goto label_34ed90;
        }
    }
    ctx->pc = 0x34ED90u;
label_34ed90:
    // 0x34ed90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34ed90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ed94: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x34ED94u;
    SET_GPR_U32(ctx, 31, 0x34ED9Cu);
    ctx->pc = 0x34ED98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34ED94u;
    // 0x34ed98: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x34ED94u, 0x34ED9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34ED9Cu;
label_34ed9c:
    // 0x34ed9c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x34ed9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34eda0: 0x12550025  beq         $s2, $s5, . + 4 + (0x25 << 2)
    ctx->pc = 0x34EDA0u;
    {
        const bool branch_taken_0x34eda0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 21));
        ctx->pc = 0x34EDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EDA0u;
        // 0x34eda4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34eda0) {
            ctx->pc = 0x34EE38u;
            goto label_34ee38;
        }
    }
    ctx->pc = 0x34EDA8u;
    // 0x34eda8: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x34EDA8u;
    SET_GPR_U32(ctx, 31, 0x34EDB0u);
    ctx->pc = 0x34EDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34EDA8u;
    // 0x34edac: 0x24050037  addiu       $a1, $zero, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x34EDA8u, 0x34EDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EDB0u;
label_34edb0:
    // 0x34edb0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x34EDB0u;
    {
        const bool branch_taken_0x34edb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34edb0) {
            ctx->pc = 0x34EDB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34EDB0u;
            // 0x34edb4: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34EDD0u;
            goto label_34edd0;
        }
    }
    ctx->pc = 0x34EDB8u;
    // 0x34edb8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x34edb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x34edbc: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x34edbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x34edc0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34EDC0u;
    {
        const bool branch_taken_0x34edc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34EDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EDC0u;
        // 0x34edc4: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34edc0) {
            ctx->pc = 0x34EDD8u;
            goto label_34edd8;
        }
    }
    ctx->pc = 0x34EDC8u;
    // 0x34edc8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x34EDC8u;
    {
        const bool branch_taken_0x34edc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EDC8u;
        // 0x34edcc: 0xae160024  sw          $s6, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34edc8) {
            ctx->pc = 0x34EE40u;
            goto label_34ee40;
        }
    }
    ctx->pc = 0x34EDD0u;
label_34edd0:
    // 0x34edd0: 0x16c2001a  bne         $s6, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x34EDD0u;
    {
        const bool branch_taken_0x34edd0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x34EDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EDD0u;
        // 0x34edd4: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34edd0) {
            ctx->pc = 0x34EE3Cu;
            goto label_34ee3c;
        }
    }
    ctx->pc = 0x34EDD8u;
label_34edd8:
    // 0x34edd8: 0x10920018  beq         $a0, $s2, . + 4 + (0x18 << 2)
    ctx->pc = 0x34EDD8u;
    {
        const bool branch_taken_0x34edd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        ctx->pc = 0x34EDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EDD8u;
        // 0x34eddc: 0x2a620004  slti        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34edd8) {
            ctx->pc = 0x34EE3Cu;
            goto label_34ee3c;
        }
    }
    ctx->pc = 0x34EDE0u;
    // 0x34ede0: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x34EDE0u;
    {
        const bool branch_taken_0x34ede0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34ede0) {
            ctx->pc = 0x34EDE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34EDE0u;
            // 0x34ede4: 0xae160024  sw          $s6, 0x24($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34EE40u;
            goto label_34ee40;
        }
    }
    ctx->pc = 0x34EDE8u;
    // 0x34ede8: 0x82820000  lb          $v0, 0x0($s4)
    ctx->pc = 0x34ede8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x34edec: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x34EDECu;
    {
        const bool branch_taken_0x34edec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34edec) {
            ctx->pc = 0x34EDF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34EDECu;
            // 0x34edf0: 0xae160024  sw          $s6, 0x24($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34EE40u;
            goto label_34ee40;
        }
    }
    ctx->pc = 0x34EDF4u;
    // 0x34edf4: 0x82820001  lb          $v0, 0x1($s4)
    ctx->pc = 0x34edf4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x34edf8: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x34EDF8u;
    {
        const bool branch_taken_0x34edf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34edf8) {
            ctx->pc = 0x34EDFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34EDF8u;
            // 0x34edfc: 0xae160024  sw          $s6, 0x24($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34EE40u;
            goto label_34ee40;
        }
    }
    ctx->pc = 0x34EE00u;
    // 0x34ee00: 0x92830002  lbu         $v1, 0x2($s4)
    ctx->pc = 0x34ee00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x34ee04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34ee04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34ee08: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x34EE08u;
    {
        const bool branch_taken_0x34ee08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x34ee08) {
            ctx->pc = 0x34EE0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34EE08u;
            // 0x34ee0c: 0xae160024  sw          $s6, 0x24($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34EE40u;
            goto label_34ee40;
        }
    }
    ctx->pc = 0x34EE10u;
    // 0x34ee10: 0x92830003  lbu         $v1, 0x3($s4)
    ctx->pc = 0x34ee10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
    // 0x34ee14: 0x240200b3  addiu       $v0, $zero, 0xB3
    ctx->pc = 0x34ee14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
    // 0x34ee18: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34EE18u;
    {
        const bool branch_taken_0x34ee18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x34EE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EE18u;
        // 0x34ee1c: 0x240200b8  addiu       $v0, $zero, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ee18) {
            ctx->pc = 0x34EE28u;
            goto label_34ee28;
        }
    }
    ctx->pc = 0x34EE20u;
    // 0x34ee20: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x34EE20u;
    {
        const bool branch_taken_0x34ee20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x34ee20) {
            ctx->pc = 0x34EE24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34EE20u;
            // 0x34ee24: 0xae160024  sw          $s6, 0x24($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34EE40u;
            goto label_34ee40;
        }
    }
    ctx->pc = 0x34EE28u;
label_34ee28:
    // 0x34ee28: 0xae120034  sw          $s2, 0x34($s0)
    ctx->pc = 0x34ee28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 18));
    // 0x34ee2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x34EE2Cu;
    {
        const bool branch_taken_0x34ee2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EE2Cu;
        // 0x34ee30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ee2c) {
            ctx->pc = 0x34EE3Cu;
            goto label_34ee3c;
        }
    }
    ctx->pc = 0x34EE34u;
    // 0x34ee34: 0x0  nop
    ctx->pc = 0x34ee34u;
    // NOP
label_34ee38:
    // 0x34ee38: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x34ee38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_34ee3c:
    // 0x34ee3c: 0xae160024  sw          $s6, 0x24($s0)
    ctx->pc = 0x34ee3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 22));
label_34ee40:
    // 0x34ee40: 0x1496001b  bne         $a0, $s6, . + 4 + (0x1B << 2)
    ctx->pc = 0x34EE40u;
    {
        const bool branch_taken_0x34ee40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 22));
        ctx->pc = 0x34EE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EE40u;
        // 0x34ee44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ee40) {
            ctx->pc = 0x34EEB0u;
            goto label_34eeb0;
        }
    }
    ctx->pc = 0x34EE48u;
    // 0x34ee48: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x34ee48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ee4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34ee4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ee50: 0xc0d5a2e  jal         func_3568B8
    ctx->pc = 0x34EE50u;
    SET_GPR_U32(ctx, 31, 0x34EE58u);
    ctx->pc = 0x34EE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34EE50u;
    // 0x34ee54: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3568B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3568B8u, 0x34EE50u, 0x34EE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EE58u;
label_34ee58:
    // 0x34ee58: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x34ee58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ee5c: 0x1a600014  blez        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x34EE5Cu;
    {
        const bool branch_taken_0x34ee5c = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x34EE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EE5Cu;
        // 0x34ee60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ee5c) {
            ctx->pc = 0x34EEB0u;
            goto label_34eeb0;
        }
    }
    ctx->pc = 0x34EE64u;
    // 0x34ee64: 0x8ee50014  lw          $a1, 0x14($s7)
    ctx->pc = 0x34ee64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
    // 0x34ee68: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x34ee68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ee6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34ee6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ee70: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x34ee70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ee74: 0xc0d3c80  jal         func_34F200
    ctx->pc = 0x34EE74u;
    SET_GPR_U32(ctx, 31, 0x34EE7Cu);
    ctx->pc = 0x34EE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34EE74u;
    // 0x34ee78: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34F200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34F200u, 0x34EE74u, 0x34EE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EE7Cu;
label_34ee7c:
    // 0x34ee7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x34ee7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ee80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34ee80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34ee84: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34EE84u;
    {
        const bool branch_taken_0x34ee84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x34EE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EE84u;
        // 0x34ee88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ee84) {
            ctx->pc = 0x34EEA0u;
            goto label_34eea0;
        }
    }
    ctx->pc = 0x34EE8Cu;
    // 0x34ee8c: 0xc0d5a4a  jal         func_356928
    ctx->pc = 0x34EE8Cu;
    SET_GPR_U32(ctx, 31, 0x34EE94u);
    ctx->pc = 0x34EE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34EE8Cu;
    // 0x34ee90: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356928u, 0x34EE8Cu, 0x34EE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EE94u;
label_34ee94:
    // 0x34ee94: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x34EE94u;
    {
        const bool branch_taken_0x34ee94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EE94u;
        // 0x34ee98: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ee94) {
            ctx->pc = 0x34EEB0u;
            goto label_34eeb0;
        }
    }
    ctx->pc = 0x34EE9Cu;
    // 0x34ee9c: 0x0  nop
    ctx->pc = 0x34ee9cu;
    // NOP
label_34eea0:
    // 0x34eea0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x34eea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34eea4: 0xc0d5b1a  jal         func_356C68
    ctx->pc = 0x34EEA4u;
    SET_GPR_U32(ctx, 31, 0x34EEACu);
    ctx->pc = 0x34EEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34EEA4u;
    // 0x34eea8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356C68u, 0x34EEA4u, 0x34EEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EEACu;
label_34eeac:
    // 0x34eeac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x34eeacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34eeb0:
    // 0x34eeb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34eeb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34eeb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34eeb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34eeb8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34eeb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34eebc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x34eebcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34eec0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x34eec0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34eec4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x34eec4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34eec8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x34eec8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34eecc: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x34eeccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34eed0: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x34eed0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34eed4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x34eed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34eed8: 0x3e00008  jr          $ra
    ctx->pc = 0x34EED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34EEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EED8u;
        // 0x34eedc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34EED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34EEE0u;
}
