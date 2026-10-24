#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r100_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r100
{
// Function: func_0079BFB0
// Address: 0x79bfb0 - 0x79c0b8
void func_0079BFB0_0x79bfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079BFB0_0x79bfb0");
#endif

    switch (ctx->pc) {
        case 0x79c008u: goto label_79c008;
        case 0x79c010u: goto label_79c010;
        case 0x79c030u: goto label_79c030;
        case 0x79c03cu: goto label_79c03c;
        case 0x79c05cu: goto label_79c05c;
        case 0x79c078u: goto label_79c078;
        case 0x79c088u: goto label_79c088;
        default: break;
    }

    ctx->pc = 0x79bfb0u;

    // 0x79bfb0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x79bfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x79bfb4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x79bfb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x79bfb8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x79bfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x79bfbc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x79bfbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bfc0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x79bfc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x79bfc4: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x79bfc4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x79bfc8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x79bfc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x79bfcc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x79bfccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79bfd0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x79bfd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x79bfd4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x79bfd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bfd8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x79bfd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x79bfdc: 0x3c14005d  lui         $s4, 0x5D
    ctx->pc = 0x79bfdcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)93 << 16));
    // 0x79bfe0: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x79bfe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x79bfe4: 0x3c15007a  lui         $s5, 0x7A
    ctx->pc = 0x79bfe4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)122 << 16));
    // 0x79bfe8: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x79bfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x79bfec: 0x3c16007a  lui         $s6, 0x7A
    ctx->pc = 0x79bfecu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)122 << 16));
    // 0x79bff0: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x79bff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x79bff4: 0x3c17007a  lui         $s7, 0x7A
    ctx->pc = 0x79bff4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)122 << 16));
    // 0x79bff8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79bff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79bffc: 0x3c1e007a  lui         $fp, 0x7A
    ctx->pc = 0x79bffcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)122 << 16));
    // 0x79c000: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x79c000u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79c004: 0x0  nop
    ctx->pc = 0x79c004u;
    // NOP
label_79c008:
    // 0x79c008: 0xc0b145a  jal         func_2C5168
    ctx->pc = 0x79C008u;
    SET_GPR_U32(ctx, 31, 0x79C010u);
    ctx->pc = 0x79C00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C008u;
    // 0x79c00c: 0x27c5c3a0  addiu       $a1, $fp, -0x3C60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294951840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5168u, 0x79C008u, 0x79C010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C010u;
label_79c010:
    // 0x79c010: 0x14520008  bne         $v0, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x79C010u;
    {
        const bool branch_taken_0x79c010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x79C014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C010u;
        // 0x79c014: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c010) {
            ctx->pc = 0x79C034u;
            goto label_79c034;
        }
    }
    ctx->pc = 0x79C018u;
    // 0x79c018: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79C018u;
    {
        const bool branch_taken_0x79c018 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C018u;
        // 0x79c01c: 0x26c5c3b0  addiu       $a1, $s6, -0x3C50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294951856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c018) {
            ctx->pc = 0x79C034u;
            goto label_79c034;
        }
    }
    ctx->pc = 0x79C020u;
    // 0x79c020: 0x2684ae50  addiu       $a0, $s4, -0x51B0
    ctx->pc = 0x79c020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294946384));
    // 0x79c024: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79c024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79c028: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x79C028u;
    SET_GPR_U32(ctx, 31, 0x79C030u);
    ctx->pc = 0x79C02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C028u;
    // 0x79c02c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x79C028u, 0x79C030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C030u;
label_79c030:
    // 0x79c030: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x79c030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_79c034:
    // 0x79c034: 0xc0b145a  jal         func_2C5168
    ctx->pc = 0x79C034u;
    SET_GPR_U32(ctx, 31, 0x79C03Cu);
    ctx->pc = 0x79C038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C034u;
    // 0x79c038: 0x26e5c3a8  addiu       $a1, $s7, -0x3C58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294951848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5168u, 0x79C034u, 0x79C03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C03Cu;
label_79c03c:
    // 0x79c03c: 0x14520007  bne         $v0, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x79C03Cu;
    {
        const bool branch_taken_0x79c03c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x79c03c) {
            ctx->pc = 0x79C05Cu;
            goto label_79c05c;
        }
    }
    ctx->pc = 0x79C044u;
    // 0x79c044: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x79C044u;
    {
        const bool branch_taken_0x79c044 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C044u;
        // 0x79c048: 0x2684ae50  addiu       $a0, $s4, -0x51B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294946384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c044) {
            ctx->pc = 0x79C05Cu;
            goto label_79c05c;
        }
    }
    ctx->pc = 0x79C04Cu;
    // 0x79c04c: 0x26a5c3c0  addiu       $a1, $s5, -0x3C40
    ctx->pc = 0x79c04cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294951872));
    // 0x79c050: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79c050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79c054: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x79C054u;
    SET_GPR_U32(ctx, 31, 0x79C05Cu);
    ctx->pc = 0x79C058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C054u;
    // 0x79c058: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x79C054u, 0x79C05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C05Cu;
label_79c05c:
    // 0x79c05c: 0x16120003  bne         $s0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x79C05Cu;
    {
        const bool branch_taken_0x79c05c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x79C060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C05Cu;
        // 0x79c060: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c05c) {
            ctx->pc = 0x79C06Cu;
            goto label_79c06c;
        }
    }
    ctx->pc = 0x79C064u;
    // 0x79c064: 0x12700006  beq         $s3, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79C064u;
    {
        const bool branch_taken_0x79c064 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 16));
        if (branch_taken_0x79c064) {
            ctx->pc = 0x79C080u;
            goto label_79c080;
        }
    }
    ctx->pc = 0x79C06Cu;
label_79c06c:
    // 0x79c06c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79c06cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79c070: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79C070u;
    SET_GPR_U32(ctx, 31, 0x79C078u);
    ctx->pc = 0x79C074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C070u;
    // 0x79c074: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79C070u, 0x79C078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C078u;
label_79c078:
    // 0x79c078: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x79C078u;
    {
        const bool branch_taken_0x79c078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C078u;
        // 0x79c07c: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c078) {
            ctx->pc = 0x79C008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c008;
        }
    }
    ctx->pc = 0x79C080u;
label_79c080:
    // 0x79c080: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79C080u;
    SET_GPR_U32(ctx, 31, 0x79C088u);
    ctx->pc = 0x79C084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C080u;
    // 0x79c084: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79C080u, 0x79C088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C088u;
label_79c088:
    // 0x79c088: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x79c088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79c08c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x79c08cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79c090: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x79c090u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79c094: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x79c094u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79c098: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x79c098u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79c09c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x79c09cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79c0a0: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x79c0a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79c0a4: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x79c0a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79c0a8: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x79c0a8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79c0ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79c0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79c0b0: 0x3e00008  jr          $ra
    ctx->pc = 0x79C0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C0B0u;
        // 0x79c0b4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C0B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C0B8u;
}
} // namespace gh_r100
