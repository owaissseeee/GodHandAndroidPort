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

// Function: _motionVectors
// Address: 0x39df50 - 0x39e0f0
void _motionVectors_0x39df50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_motionVectors_0x39df50");
#endif

    switch (ctx->pc) {
        case 0x39dfc0u: goto label_39dfc0;
        case 0x39dfe4u: goto label_39dfe4;
        case 0x39e01cu: goto label_39e01c;
        case 0x39e028u: goto label_39e028;
        case 0x39e0acu: goto label_39e0ac;
        default: break;
    }

    ctx->pc = 0x39df50u;

    // 0x39df50: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x39df50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x39df54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39df54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39df58: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x39df58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x39df5c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x39df5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x39df60: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x39df60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x39df64: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x39df64u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39df68: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x39df68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x39df6c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x39df6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x39df70: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x39df70u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39df74: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x39df74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x39df78: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x39df78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39df7c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x39df7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x39df80: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x39df80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x39df84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x39df84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39df88: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x39df88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x39df8c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x39df8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39df90: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x39df90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x39df94: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x39df94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x39df98: 0x8fb600b0  lw          $s6, 0xB0($sp)
    ctx->pc = 0x39df98u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x39df9c: 0x8fb300b8  lw          $s3, 0xB8($sp)
    ctx->pc = 0x39df9cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x39dfa0: 0x1522000d  bne         $t1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x39DFA0u;
    {
        const bool branch_taken_0x39dfa0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x39DFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DFA0u;
        // 0x39dfa4: 0x8fbe00c0  lw          $fp, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dfa0) {
            ctx->pc = 0x39DFD8u;
            goto label_39dfd8;
        }
    }
    ctx->pc = 0x39DFA8u;
    // 0x39dfa8: 0x55400036  bnel        $t2, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x39DFA8u;
    {
        const bool branch_taken_0x39dfa8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x39dfa8) {
            ctx->pc = 0x39DFACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39DFA8u;
            // 0x39dfac: 0x1080c0  sll         $s0, $s0, 3 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39E084u;
            goto label_39e084;
        }
    }
    ctx->pc = 0x39DFB0u;
    // 0x39dfb0: 0x56600034  bnel        $s3, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x39DFB0u;
    {
        const bool branch_taken_0x39dfb0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x39dfb0) {
            ctx->pc = 0x39DFB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39DFB0u;
            // 0x39dfb4: 0x1080c0  sll         $s0, $s0, 3 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39E084u;
            goto label_39e084;
        }
    }
    ctx->pc = 0x39DFB8u;
    // 0x39dfb8: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x39DFB8u;
    SET_GPR_U32(ctx, 31, 0x39DFC0u);
    ctx->pc = 0x39DFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DFB8u;
    // 0x39dfbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x39DFB8u, 0x39DFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DFC0u;
label_39dfc0:
    // 0x39dfc0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x39dfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39dfc4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x39dfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x39dfc8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x39dfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x39dfcc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x39dfccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x39dfd0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x39DFD0u;
    {
        const bool branch_taken_0x39dfd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DFD0u;
        // 0x39dfd4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39dfd0) {
            ctx->pc = 0x39E080u;
            goto label_39e080;
        }
    }
    ctx->pc = 0x39DFD8u;
label_39dfd8:
    // 0x39dfd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39dfd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39dfdc: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x39DFDCu;
    SET_GPR_U32(ctx, 31, 0x39DFE4u);
    ctx->pc = 0x39DFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DFDCu;
    // 0x39dfe0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x39DFDCu, 0x39DFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DFE4u;
label_39dfe4:
    // 0x39dfe4: 0x1088c0  sll         $s1, $s0, 3
    ctx->pc = 0x39dfe4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x39dfe8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x39dfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39dfec: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x39dfecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x39dff0: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x39dff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x39dff4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39dff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39dff8: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x39dff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x39dffc: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x39dffcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e000: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x39e000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x39e004: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x39e004u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e008: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x39e008u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e00c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x39e00cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e010: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x39e010u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e014: 0xc0e76ca  jal         func_39DB28
    ctx->pc = 0x39E014u;
    SET_GPR_U32(ctx, 31, 0x39E01Cu);
    ctx->pc = 0x39E018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E014u;
    // 0x39e018: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39DB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39DB28u, 0x39E014u, 0x39E01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E01Cu;
label_39e01c:
    // 0x39e01c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39e01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e020: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x39E020u;
    SET_GPR_U32(ctx, 31, 0x39E028u);
    ctx->pc = 0x39E024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E020u;
    // 0x39e024: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x39E020u, 0x39E028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E028u;
label_39e028:
    // 0x39e028: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x39e028u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x39e02c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x39e02cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x39e030: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x39e030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x39e034: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39e034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e038: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x39e038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e03c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x39e03cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e040: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x39e040u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e044: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x39e044u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e048: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x39e048u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e04c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x39e04cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x39e050: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x39e050u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x39e054: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x39e054u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e058: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x39e058u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x39e05c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x39e05cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x39e060: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x39e060u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x39e064: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x39e064u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x39e068: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x39e068u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x39e06c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x39e06cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39e070: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x39e070u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39e074: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x39e074u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39e078: 0x80e76ca  j           func_39DB28
    ctx->pc = 0x39E078u;
    ctx->pc = 0x39E07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E078u;
    // 0x39e07c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39DB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39DB28u, 0x39E078u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x39E080u;
label_39e080:
    // 0x39e080: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x39e080u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_39e084:
    // 0x39e084: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39e084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e088: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x39e088u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x39e08c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x39e08cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e090: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x39e090u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e094: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x39e094u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e098: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x39e098u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e09c: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x39e09cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e0a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x39e0a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e0a4: 0xc0e76ca  jal         func_39DB28
    ctx->pc = 0x39E0A4u;
    SET_GPR_U32(ctx, 31, 0x39E0ACu);
    ctx->pc = 0x39E0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E0A4u;
    // 0x39e0a8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39DB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39DB28u, 0x39E0A4u, 0x39E0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E0ACu;
label_39e0ac:
    // 0x39e0ac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x39e0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x39e0b0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x39e0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x39e0b4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x39e0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x39e0b8: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x39e0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x39e0bc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x39e0bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x39e0c0: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x39e0c0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x39e0c4: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x39e0c4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x39e0c8: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x39e0c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x39e0cc: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x39e0ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x39e0d0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x39e0d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x39e0d4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x39e0d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x39e0d8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x39e0d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39e0dc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x39e0dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39e0e0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x39e0e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39e0e4: 0x3e00008  jr          $ra
    ctx->pc = 0x39E0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39E0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E0E4u;
        // 0x39e0e8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E0E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39E0ECu;
    // 0x39e0ec: 0x0  nop
    ctx->pc = 0x39e0ecu;
    // NOP
    ctx->pc = 0x39e0f0u;
}
