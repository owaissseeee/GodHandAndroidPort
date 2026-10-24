#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: __frame_state_for
// Address: 0x7ccf90 - 0x7cd168
void ps2___frame_state_for_0x7ccf90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___frame_state_for_0x7ccf90");
#endif

    switch (ctx->pc) {
        case 0x7ccfc4u: goto label_7ccfc4;
        case 0x7ccfd8u: goto label_7ccfd8;
        case 0x7ccffcu: goto label_7ccffc;
        case 0x7cd038u: goto label_7cd038;
        case 0x7cd048u: goto label_7cd048;
        case 0x7cd088u: goto label_7cd088;
        case 0x7cd0c0u: goto label_7cd0c0;
        case 0x7cd0d0u: goto label_7cd0d0;
        case 0x7cd0f4u: goto label_7cd0f4;
        default: break;
    }

    ctx->pc = 0x7ccf90u;

    // 0x7ccf90: 0x27bdfc40  addiu       $sp, $sp, -0x3C0
    ctx->pc = 0x7ccf90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966336));
    // 0x7ccf94: 0xffb60390  sd          $s6, 0x390($sp)
    ctx->pc = 0x7ccf94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 912), GPR_U64(ctx, 22));
    // 0x7ccf98: 0xffb703a0  sd          $s7, 0x3A0($sp)
    ctx->pc = 0x7ccf98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 928), GPR_U64(ctx, 23));
    // 0x7ccf9c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x7ccf9cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ccfa0: 0xffb20350  sd          $s2, 0x350($sp)
    ctx->pc = 0x7ccfa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 848), GPR_U64(ctx, 18));
    // 0x7ccfa4: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x7ccfa4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ccfa8: 0xffbf03b0  sd          $ra, 0x3B0($sp)
    ctx->pc = 0x7ccfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 944), GPR_U64(ctx, 31));
    // 0x7ccfac: 0xffb50380  sd          $s5, 0x380($sp)
    ctx->pc = 0x7ccfacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 896), GPR_U64(ctx, 21));
    // 0x7ccfb0: 0xffb40370  sd          $s4, 0x370($sp)
    ctx->pc = 0x7ccfb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 880), GPR_U64(ctx, 20));
    // 0x7ccfb4: 0xffb30360  sd          $s3, 0x360($sp)
    ctx->pc = 0x7ccfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 864), GPR_U64(ctx, 19));
    // 0x7ccfb8: 0xffb10340  sd          $s1, 0x340($sp)
    ctx->pc = 0x7ccfb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 832), GPR_U64(ctx, 17));
    // 0x7ccfbc: 0xc1f3230  jal         func_7CC8C0
    ctx->pc = 0x7CCFBCu;
    SET_GPR_U32(ctx, 31, 0x7CCFC4u);
    ctx->pc = 0x7CCFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CCFBCu;
    // 0x7ccfc0: 0xffb00330  sd          $s0, 0x330($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 816), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CC8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CC8C0u, 0x7CCFBCu, 0x7CCFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CCFC4u;
label_7ccfc4:
    // 0x7ccfc4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x7ccfc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ccfc8: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x7CCFC8u;
    {
        const bool branch_taken_0x7ccfc8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CCFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CCFC8u;
        // 0x7ccfcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ccfc8) {
            ctx->pc = 0x7CCFE4u;
            goto label_7ccfe4;
        }
    }
    ctx->pc = 0x7CCFD0u;
    // 0x7ccfd0: 0xc1f326a  jal         func_7CC9A8
    ctx->pc = 0x7CCFD0u;
    SET_GPR_U32(ctx, 31, 0x7CCFD8u);
    ctx->pc = 0x7CCFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CCFD0u;
    // 0x7ccfd4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CC9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CC9A8u, 0x7CCFD0u, 0x7CCFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CCFD8u;
label_7ccfd8:
    // 0x7ccfd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7ccfd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ccfdc: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CCFDCu;
    {
        const bool branch_taken_0x7ccfdc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CCFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CCFDCu;
        // 0x7ccfe0: 0x27b40020  addiu       $s4, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ccfdc) {
            ctx->pc = 0x7CCFECu;
            goto label_7ccfec;
        }
    }
    ctx->pc = 0x7CCFE4u;
label_7ccfe4:
    // 0x7ccfe4: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x7CCFE4u;
    {
        const bool branch_taken_0x7ccfe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CCFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CCFE4u;
        // 0x7ccfe8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ccfe4) {
            ctx->pc = 0x7CD13Cu;
            goto label_7cd13c;
        }
    }
    ctx->pc = 0x7CCFECu;
label_7ccfec:
    // 0x7ccfec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7ccfecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ccff0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x7ccff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ccff4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x7CCFF4u;
    SET_GPR_U32(ctx, 31, 0x7CCFFCu);
    ctx->pc = 0x7CCFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CCFF4u;
    // 0x7ccff8: 0x240602f8  addiu       $a2, $zero, 0x2F8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x7CCFF4u, 0x7CCFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CCFFCu;
label_7ccffc:
    // 0x7ccffc: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x7ccffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x7cd000: 0x97a40010  lhu         $a0, 0x10($sp)
    ctx->pc = 0x7cd000u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7cd004: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x7cd004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x7cd008: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x7cd008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x7cd00c: 0xa7a402ba  sh          $a0, 0x2BA($sp)
    ctx->pc = 0x7cd00cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 698), (uint16_t)GPR_U32(ctx, 4));
    // 0x7cd010: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x7cd010u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x7cd014: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x7cd014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7cd018: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x7cd018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x7cd01c: 0x24710004  addiu       $s1, $v1, 0x4
    ctx->pc = 0x7cd01cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x7cd020: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x7cd020u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x7cd024: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x7CD024u;
    {
        const bool branch_taken_0x7cd024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CD028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD024u;
        // 0x7cd028: 0xafa50024  sw          $a1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd024) {
            ctx->pc = 0x7CD060u;
            goto label_7cd060;
        }
    }
    ctx->pc = 0x7CD02Cu;
    // 0x7cd02c: 0x26530010  addiu       $s3, $s2, 0x10
    ctx->pc = 0x7cd02cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x7cd030: 0x27b50300  addiu       $s5, $sp, 0x300
    ctx->pc = 0x7cd030u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x7cd034: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7cd034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7cd038:
    // 0x7cd038: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x7cd038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cd03c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x7cd03cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cd040: 0xc1f32ac  jal         func_7CCAB0
    ctx->pc = 0x7CD040u;
    SET_GPR_U32(ctx, 31, 0x7CD048u);
    ctx->pc = 0x7CD044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CD040u;
    // 0x7cd044: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CCAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CCAB0u, 0x7CD040u, 0x7CD048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CD048u;
label_7cd048:
    // 0x7cd048: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7cd048u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cd04c: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x7cd04cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x7cd050: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x7CD050u;
    {
        const bool branch_taken_0x7cd050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CD054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD050u;
        // 0x7cd054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd050) {
            ctx->pc = 0x7CD038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7cd038;
        }
    }
    ctx->pc = 0x7CD058u;
    // 0x7cd058: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7CD058u;
    {
        const bool branch_taken_0x7cd058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CD05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD058u;
        // 0x7cd05c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd058) {
            ctx->pc = 0x7CD06Cu;
            goto label_7cd06c;
        }
    }
    ctx->pc = 0x7CD060u;
label_7cd060:
    // 0x7cd060: 0x26530010  addiu       $s3, $s2, 0x10
    ctx->pc = 0x7cd060u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x7cd064: 0x27b50300  addiu       $s5, $sp, 0x300
    ctx->pc = 0x7cd064u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x7cd068: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x7cd068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_7cd06c:
    // 0x7cd06c: 0x2403007a  addiu       $v1, $zero, 0x7A
    ctx->pc = 0x7cd06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x7cd070: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x7cd070u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x7cd074: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x7CD074u;
    {
        const bool branch_taken_0x7cd074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x7CD078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD074u;
        // 0x7cd078: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd074) {
            ctx->pc = 0x7CD090u;
            goto label_7cd090;
        }
    }
    ctx->pc = 0x7CD07Cu;
    // 0x7cd07c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7cd07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cd080: 0xc1f30ac  jal         func_7CC2B0
    ctx->pc = 0x7CD080u;
    SET_GPR_U32(ctx, 31, 0x7CD088u);
    ctx->pc = 0x7CD084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CD080u;
    // 0x7cd084: 0x27a50320  addiu       $a1, $sp, 0x320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CC2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CC2B0u, 0x7CD080u, 0x7CD088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CD088u;
label_7cd088:
    // 0x7cd088: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x7cd088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x7cd08c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x7cd08cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_7cd090:
    // 0x7cd090: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x7cd090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x7cd094: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x7cd094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x7cd098: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x7cd098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x7cd09c: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x7cd09cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x7cd0a0: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x7cd0a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x7cd0a4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x7CD0A4u;
    {
        const bool branch_taken_0x7cd0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CD0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD0A4u;
        // 0x7cd0a8: 0xafa50324  sw          $a1, 0x324($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 804), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd0a4) {
            ctx->pc = 0x7CD0ECu;
            goto label_7cd0ec;
        }
    }
    ctx->pc = 0x7CD0ACu;
    // 0x7cd0ac: 0x2c5102b  sltu        $v0, $s6, $a1
    ctx->pc = 0x7cd0acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x7cd0b0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x7CD0B0u;
    {
        const bool branch_taken_0x7cd0b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CD0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD0B0u;
        // 0x7cd0b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd0b0) {
            ctx->pc = 0x7CD0F0u;
            goto label_7cd0f0;
        }
    }
    ctx->pc = 0x7CD0B8u;
    // 0x7cd0b8: 0x27b20324  addiu       $s2, $sp, 0x324
    ctx->pc = 0x7cd0b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 804));
    // 0x7cd0bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7cd0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7cd0c0:
    // 0x7cd0c0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x7cd0c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cd0c4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x7cd0c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cd0c8: 0xc1f32ac  jal         func_7CCAB0
    ctx->pc = 0x7CD0C8u;
    SET_GPR_U32(ctx, 31, 0x7CD0D0u);
    ctx->pc = 0x7CD0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CD0C8u;
    // 0x7cd0cc: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CCAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CCAB0u, 0x7CD0C8u, 0x7CD0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CD0D0u;
label_7cd0d0:
    // 0x7cd0d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7cd0d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cd0d4: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x7cd0d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x7cd0d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7CD0D8u;
    {
        const bool branch_taken_0x7cd0d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CD0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD0D8u;
        // 0x7cd0dc: 0x8fa20324  lw          $v0, 0x324($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 804)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd0d8) {
            ctx->pc = 0x7CD0ECu;
            goto label_7cd0ec;
        }
    }
    ctx->pc = 0x7CD0E0u;
    // 0x7cd0e0: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x7cd0e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x7cd0e4: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x7CD0E4u;
    {
        const bool branch_taken_0x7cd0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CD0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD0E4u;
        // 0x7cd0e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd0e4) {
            ctx->pc = 0x7CD0C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7cd0c0;
        }
    }
    ctx->pc = 0x7CD0ECu;
label_7cd0ec:
    // 0x7cd0ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x7cd0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_7cd0f0:
    // 0x7cd0f0: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x7cd0f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_7cd0f4:
    // 0x7cd0f4: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x7cd0f4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x7cd0f8: 0xdc850008  ld          $a1, 0x8($a0)
    ctx->pc = 0x7cd0f8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x7cd0fc: 0xdc860010  ld          $a2, 0x10($a0)
    ctx->pc = 0x7cd0fcu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x7cd100: 0xdc870018  ld          $a3, 0x18($a0)
    ctx->pc = 0x7cd100u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x7cd104: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x7cd104u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x7cd108: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x7cd108u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
    // 0x7cd10c: 0xfc460010  sd          $a2, 0x10($v0)
    ctx->pc = 0x7cd10cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 6));
    // 0x7cd110: 0xfc470018  sd          $a3, 0x18($v0)
    ctx->pc = 0x7cd110u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 7));
    // 0x7cd114: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x7cd114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x7cd118: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x7cd118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x7cd11c: 0x0  nop
    ctx->pc = 0x7cd11cu;
    // NOP
    // 0x7cd120: 0x1495fff4  bne         $a0, $s5, . + 4 + (-0xC << 2)
    ctx->pc = 0x7CD120u;
    {
        const bool branch_taken_0x7cd120 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 21));
        if (branch_taken_0x7cd120) {
            ctx->pc = 0x7CD0F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7cd0f4;
        }
    }
    ctx->pc = 0x7CD128u;
    // 0x7cd128: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x7cd128u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x7cd12c: 0xdc850008  ld          $a1, 0x8($a0)
    ctx->pc = 0x7cd12cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x7cd130: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x7cd130u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x7cd134: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x7cd134u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
    // 0x7cd138: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x7cd138u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_7cd13c:
    // 0x7cd13c: 0xdfbf03b0  ld          $ra, 0x3B0($sp)
    ctx->pc = 0x7cd13cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 944)));
    // 0x7cd140: 0xdfb703a0  ld          $s7, 0x3A0($sp)
    ctx->pc = 0x7cd140u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 928)));
    // 0x7cd144: 0xdfb60390  ld          $s6, 0x390($sp)
    ctx->pc = 0x7cd144u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 912)));
    // 0x7cd148: 0xdfb50380  ld          $s5, 0x380($sp)
    ctx->pc = 0x7cd148u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x7cd14c: 0xdfb40370  ld          $s4, 0x370($sp)
    ctx->pc = 0x7cd14cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x7cd150: 0xdfb30360  ld          $s3, 0x360($sp)
    ctx->pc = 0x7cd150u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x7cd154: 0xdfb20350  ld          $s2, 0x350($sp)
    ctx->pc = 0x7cd154u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x7cd158: 0xdfb10340  ld          $s1, 0x340($sp)
    ctx->pc = 0x7cd158u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x7cd15c: 0xdfb00330  ld          $s0, 0x330($sp)
    ctx->pc = 0x7cd15cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x7cd160: 0x3e00008  jr          $ra
    ctx->pc = 0x7CD160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CD164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD160u;
        // 0x7cd164: 0x27bd03c0  addiu       $sp, $sp, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CD160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CD168u;
}
} // namespace gh_mcport
