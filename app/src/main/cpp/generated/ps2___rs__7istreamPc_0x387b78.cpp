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

// Function: __rs__7istreamPc
// Address: 0x387b78 - 0x387cd8
void ps2___rs__7istreamPc_0x387b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___rs__7istreamPc_0x387b78");
#endif

    switch (ctx->pc) {
        case 0x387be8u: goto label_387be8;
        case 0x387c0cu: goto label_387c0c;
        case 0x387c30u: goto label_387c30;
        case 0x387c58u: goto label_387c58;
        case 0x387c70u: goto label_387c70;
        default: break;
    }

    ctx->pc = 0x387b78u;

    // 0x387b78: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x387b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x387b7c: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x387b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x387b80: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x387b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x387b84: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x387b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x387b88: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x387b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x387b8c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x387b8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387b90: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x387b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x387b94: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x387b94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387b98: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x387b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x387b9c: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x387b9cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387ba0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x387ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x387ba4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x387ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x387ba8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x387ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x387bac: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x387bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x387bb0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x387bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x387bb4: 0x9064001a  lbu         $a0, 0x1A($v1)
    ctx->pc = 0x387bb4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x387bb8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x387bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x387bbc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x387BBCu;
    {
        const bool branch_taken_0x387bbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x387BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387BBCu;
        // 0x387bc0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387bbc) {
            ctx->pc = 0x387BD4u;
            goto label_387bd4;
        }
    }
    ctx->pc = 0x387BC4u;
    // 0x387bc4: 0x34820002  ori         $v0, $a0, 0x2
    ctx->pc = 0x387bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x387bc8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x387bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387bcc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x387BCCu;
    {
        const bool branch_taken_0x387bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387BCCu;
        // 0x387bd0: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387bcc) {
            ctx->pc = 0x387C10u;
            goto label_387c10;
        }
    }
    ctx->pc = 0x387BD4u;
label_387bd4:
    // 0x387bd4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x387bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x387bd8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x387BD8u;
    {
        const bool branch_taken_0x387bd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x387bd8) {
            ctx->pc = 0x387BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x387BD8u;
            // 0x387bdc: 0xdc620010  ld          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x387BF0u;
            goto label_387bf0;
        }
    }
    ctx->pc = 0x387BE0u;
    // 0x387be0: 0xc0e249a  jal         func_389268
    ctx->pc = 0x387BE0u;
    SET_GPR_U32(ctx, 31, 0x387BE8u);
    ctx->pc = 0x389268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389268u, 0x387BE0u, 0x387BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387BE8u;
label_387be8:
    // 0x387be8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x387be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x387bec: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x387becu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_387bf0:
    // 0x387bf0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x387bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x387bf4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x387bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x387bf8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x387bf8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x387bfc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x387BFCu;
    {
        const bool branch_taken_0x387bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x387C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387BFCu;
        // 0x387c00: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387bfc) {
            ctx->pc = 0x387C10u;
            goto label_387c10;
        }
    }
    ctx->pc = 0x387C04u;
    // 0x387c04: 0xc0e24e6  jal         func_389398
    ctx->pc = 0x387C04u;
    SET_GPR_U32(ctx, 31, 0x387C0Cu);
    ctx->pc = 0x387C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387C04u;
    // 0x387c08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389398u, 0x387C04u, 0x387C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387C0Cu;
label_387c0c:
    // 0x387c0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x387c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_387c10:
    // 0x387c10: 0x10800024  beqz        $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x387C10u;
    {
        const bool branch_taken_0x387c10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x387C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387C10u;
        // 0x387c14: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387c10) {
            ctx->pc = 0x387CA4u;
            goto label_387ca4;
        }
    }
    ctx->pc = 0x387C18u;
    // 0x387c18: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x387c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x387c1c: 0x2456f039  addiu       $s6, $v0, -0xFC7
    ctx->pc = 0x387c1cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963257));
    // 0x387c20: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x387c20u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x387c24: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x387c24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x387c28: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x387C28u;
    {
        const bool branch_taken_0x387c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387C28u;
        // 0x387c2c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387c28) {
            ctx->pc = 0x387C68u;
            goto label_387c68;
        }
    }
    ctx->pc = 0x387C30u;
label_387c30:
    // 0x387c30: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x387c30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x387c34: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x387c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x387c38: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x387C38u;
    {
        const bool branch_taken_0x387c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x387c38) {
            ctx->pc = 0x387C3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x387C38u;
            // 0x387c3c: 0x52e00  sll         $a1, $a1, 24 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x387C4Cu;
            goto label_387c4c;
        }
    }
    ctx->pc = 0x387C40u;
    // 0x387c40: 0x56740007  bnel        $s3, $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x387C40u;
    {
        const bool branch_taken_0x387c40 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 20));
        if (branch_taken_0x387c40) {
            ctx->pc = 0x387C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x387C40u;
            // 0x387c44: 0xa2250000  sb          $a1, 0x0($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x387C60u;
            goto label_387c60;
        }
    }
    ctx->pc = 0x387C48u;
    // 0x387c48: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x387c48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_387c4c:
    // 0x387c4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x387c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387c50: 0xc0e2d18  jal         func_38B460
    ctx->pc = 0x387C50u;
    SET_GPR_U32(ctx, 31, 0x387C58u);
    ctx->pc = 0x387C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387C50u;
    // 0x387c54: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B460u, 0x387C50u, 0x387C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387C58u;
label_387c58:
    // 0x387c58: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x387C58u;
    {
        const bool branch_taken_0x387c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x387c58) {
            ctx->pc = 0x387C8Cu;
            goto label_387c8c;
        }
    }
    ctx->pc = 0x387C60u;
label_387c60:
    // 0x387c60: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x387c60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x387c64: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x387c64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_387c68:
    // 0x387c68: 0xc0e3ab8  jal         func_38EAE0
    ctx->pc = 0x387C68u;
    SET_GPR_U32(ctx, 31, 0x387C70u);
    ctx->pc = 0x387C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387C68u;
    // 0x387c6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EAE0u, 0x387C68u, 0x387C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387C70u;
label_387c70:
    // 0x387c70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x387c70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387c74: 0x14b5ffee  bne         $a1, $s5, . + 4 + (-0x12 << 2)
    ctx->pc = 0x387C74u;
    {
        const bool branch_taken_0x387c74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 21));
        ctx->pc = 0x387C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387C74u;
        // 0x387c78: 0xb61821  addu        $v1, $a1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387c74) {
            ctx->pc = 0x387C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_387c30;
        }
    }
    ctx->pc = 0x387C7Cu;
    // 0x387c7c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x387c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x387c80: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x387c80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x387c84: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x387c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x387c88: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x387c88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
label_387c8c:
    // 0x387c8c: 0x56370006  bnel        $s1, $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x387C8Cu;
    {
        const bool branch_taken_0x387c8c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 23));
        if (branch_taken_0x387c8c) {
            ctx->pc = 0x387C90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x387C8Cu;
            // 0x387c90: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x387CA8u;
            goto label_387ca8;
        }
    }
    ctx->pc = 0x387C94u;
    // 0x387c94: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x387c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x387c98: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x387c98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x387c9c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x387c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x387ca0: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x387ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
label_387ca4:
    // 0x387ca4: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x387ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_387ca8:
    // 0x387ca8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x387ca8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387cac: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x387cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x387cb0: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x387cb0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x387cb4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x387cb4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x387cb8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x387cb8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x387cbc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x387cbcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x387cc0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x387cc0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x387cc4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x387cc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x387cc8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x387cc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x387ccc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x387cccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x387cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x387CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387CD0u;
        // 0x387cd4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x387CD8u;
}
