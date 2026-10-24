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

// Function: adxsjd_get_wr
// Address: 0x326b98 - 0x326cb8
void adxsjd_get_wr_0x326b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("adxsjd_get_wr_0x326b98");
#endif

    switch (ctx->pc) {
        case 0x326b98u: goto label_326b98;
        case 0x326b9cu: goto label_326b9c;
        case 0x326ba0u: goto label_326ba0;
        case 0x326ba4u: goto label_326ba4;
        case 0x326ba8u: goto label_326ba8;
        case 0x326bacu: goto label_326bac;
        case 0x326bb0u: goto label_326bb0;
        case 0x326bb4u: goto label_326bb4;
        case 0x326bb8u: goto label_326bb8;
        case 0x326bbcu: goto label_326bbc;
        case 0x326bc0u: goto label_326bc0;
        case 0x326bc4u: goto label_326bc4;
        case 0x326bc8u: goto label_326bc8;
        case 0x326bccu: goto label_326bcc;
        case 0x326bd0u: goto label_326bd0;
        case 0x326bd4u: goto label_326bd4;
        case 0x326bd8u: goto label_326bd8;
        case 0x326bdcu: goto label_326bdc;
        case 0x326be0u: goto label_326be0;
        case 0x326be4u: goto label_326be4;
        case 0x326be8u: goto label_326be8;
        case 0x326becu: goto label_326bec;
        case 0x326bf0u: goto label_326bf0;
        case 0x326bf4u: goto label_326bf4;
        case 0x326bf8u: goto label_326bf8;
        case 0x326bfcu: goto label_326bfc;
        case 0x326c00u: goto label_326c00;
        case 0x326c04u: goto label_326c04;
        case 0x326c08u: goto label_326c08;
        case 0x326c0cu: goto label_326c0c;
        case 0x326c10u: goto label_326c10;
        case 0x326c14u: goto label_326c14;
        case 0x326c18u: goto label_326c18;
        case 0x326c1cu: goto label_326c1c;
        case 0x326c20u: goto label_326c20;
        case 0x326c24u: goto label_326c24;
        case 0x326c28u: goto label_326c28;
        case 0x326c2cu: goto label_326c2c;
        case 0x326c30u: goto label_326c30;
        case 0x326c34u: goto label_326c34;
        case 0x326c38u: goto label_326c38;
        case 0x326c3cu: goto label_326c3c;
        case 0x326c40u: goto label_326c40;
        case 0x326c44u: goto label_326c44;
        case 0x326c48u: goto label_326c48;
        case 0x326c4cu: goto label_326c4c;
        case 0x326c50u: goto label_326c50;
        case 0x326c54u: goto label_326c54;
        case 0x326c58u: goto label_326c58;
        case 0x326c5cu: goto label_326c5c;
        case 0x326c60u: goto label_326c60;
        case 0x326c64u: goto label_326c64;
        case 0x326c68u: goto label_326c68;
        case 0x326c6cu: goto label_326c6c;
        case 0x326c70u: goto label_326c70;
        case 0x326c74u: goto label_326c74;
        case 0x326c78u: goto label_326c78;
        case 0x326c7cu: goto label_326c7c;
        case 0x326c80u: goto label_326c80;
        case 0x326c84u: goto label_326c84;
        case 0x326c88u: goto label_326c88;
        case 0x326c8cu: goto label_326c8c;
        case 0x326c90u: goto label_326c90;
        case 0x326c94u: goto label_326c94;
        case 0x326c98u: goto label_326c98;
        case 0x326c9cu: goto label_326c9c;
        case 0x326ca0u: goto label_326ca0;
        case 0x326ca4u: goto label_326ca4;
        case 0x326ca8u: goto label_326ca8;
        case 0x326cacu: goto label_326cac;
        case 0x326cb0u: goto label_326cb0;
        case 0x326cb4u: goto label_326cb4;
        default: break;
    }

    ctx->pc = 0x326b98u;

label_326b98:
    // 0x326b98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x326b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_326b9c:
    // 0x326b9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x326b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_326ba0:
    // 0x326ba0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x326ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_326ba4:
    // 0x326ba4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x326ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_326ba8:
    // 0x326ba8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x326ba8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_326bac:
    // 0x326bac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x326bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_326bb0:
    // 0x326bb0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x326bb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_326bb4:
    // 0x326bb4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x326bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_326bb8:
    // 0x326bb8: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x326bb8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_326bbc:
    // 0x326bbc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x326bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_326bc0:
    // 0x326bc0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x326bc0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_326bc4:
    // 0x326bc4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x326bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_326bc8:
    // 0x326bc8: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x326bc8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_326bcc:
    // 0x326bcc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x326bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_326bd0:
    // 0x326bd0: 0x2651001c  addiu       $s1, $s2, 0x1C
    ctx->pc = 0x326bd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
label_326bd4:
    // 0x326bd4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x326bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_326bd8:
    // 0x326bd8: 0x2650000c  addiu       $s0, $s2, 0xC
    ctx->pc = 0x326bd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_326bdc:
    // 0x326bdc: 0x10000008  b           . + 4 + (0x8 << 2)
label_326be0:
    if (ctx->pc == 0x326BE0u) {
        ctx->pc = 0x326BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326BDCu;
        // 0x326be0: 0x8e54000c  lw          $s4, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326BE4u;
        goto label_326be4;
    }
    ctx->pc = 0x326BDCu;
    {
        const bool branch_taken_0x326bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326BDCu;
        // 0x326be0: 0x8e54000c  lw          $s4, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326bdc) {
            ctx->pc = 0x326C00u;
            goto label_326c00;
        }
    }
    ctx->pc = 0x326BE4u;
label_326be4:
    // 0x326be4: 0x0  nop
    ctx->pc = 0x326be4u;
    // NOP
label_326be8:
    // 0x326be8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x326be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_326bec:
    // 0x326bec: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x326becu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_326bf0:
    // 0x326bf0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x326bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_326bf4:
    // 0x326bf4: 0x8c680018  lw          $t0, 0x18($v1)
    ctx->pc = 0x326bf4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_326bf8:
    // 0x326bf8: 0x100f809  jalr        $t0
label_326bfc:
    if (ctx->pc == 0x326BFCu) {
        ctx->pc = 0x326BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326BF8u;
        // 0x326bfc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326C00u;
        goto label_326c00;
    }
    ctx->pc = 0x326BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x326C00u);
        ctx->pc = 0x326BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326BF8u;
        // 0x326bfc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326BF8u, 0x326C00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x326C00u;
label_326c00:
    // 0x326c00: 0xc0cf3a6  jal         func_33CE98
label_326c04:
    if (ctx->pc == 0x326C04u) {
        ctx->pc = 0x326C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326C00u;
        // 0x326c04: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326C08u;
        goto label_326c08;
    }
    ctx->pc = 0x326C00u;
    SET_GPR_U32(ctx, 31, 0x326C08u);
    ctx->pc = 0x326C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326C00u;
    // 0x326c04: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CE98u, 0x326C00u, 0x326C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326C08u;
label_326c08:
    // 0x326c08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x326c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_326c0c:
    // 0x326c0c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x326c0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_326c10:
    // 0x326c10: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x326c10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_326c14:
    // 0x326c14: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x326c14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_326c18:
    // 0x326c18: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x326c18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_326c1c:
    // 0x326c1c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_326c20:
    if (ctx->pc == 0x326C20u) {
        ctx->pc = 0x326C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326C1Cu;
        // 0x326c20: 0x24064000  addiu       $a2, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326C24u;
        goto label_326c24;
    }
    ctx->pc = 0x326C1Cu;
    {
        const bool branch_taken_0x326c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x326C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326C1Cu;
        // 0x326c20: 0x24064000  addiu       $a2, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326c1c) {
            ctx->pc = 0x326BE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_326be8;
        }
    }
    ctx->pc = 0x326C24u;
label_326c24:
    // 0x326c24: 0xc0ce7fe  jal         func_339FF8
label_326c28:
    if (ctx->pc == 0x326C28u) {
        ctx->pc = 0x326C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326C24u;
        // 0x326c28: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326C2Cu;
        goto label_326c2c;
    }
    ctx->pc = 0x326C24u;
    SET_GPR_U32(ctx, 31, 0x326C2Cu);
    ctx->pc = 0x326C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326C24u;
    // 0x326c28: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339FF8u, 0x326C24u, 0x326C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326C2Cu;
label_326c2c:
    // 0x326c2c: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x326c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_326c30:
    // 0x326c30: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x326c30u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_326c34:
    // 0x326c34: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x326c34u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_326c38:
    // 0x326c38: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x326c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_326c3c:
    // 0x326c3c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x326c3cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_326c40:
    // 0x326c40: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x326c40u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
label_326c44:
    // 0x326c44: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x326c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_326c48:
    // 0x326c48: 0x8e440038  lw          $a0, 0x38($s2)
    ctx->pc = 0x326c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_326c4c:
    // 0x326c4c: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x326c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_326c50:
    // 0x326c50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x326c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_326c54:
    // 0x326c54: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x326c54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_326c58:
    // 0x326c58: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x326c58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_326c5c:
    // 0x326c5c: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x326c5cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_326c60:
    // 0x326c60: 0xaee40000  sw          $a0, 0x0($s7)
    ctx->pc = 0x326c60u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 4));
label_326c64:
    // 0x326c64: 0x8e43003c  lw          $v1, 0x3C($s2)
    ctx->pc = 0x326c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_326c68:
    // 0x326c68: 0x4620005  bltzl       $v1, . + 4 + (0x5 << 2)
label_326c6c:
    if (ctx->pc == 0x326C6Cu) {
        ctx->pc = 0x326C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326C68u;
        // 0x326c6c: 0x3c021fff  lui         $v0, 0x1FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8191 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326C70u;
        goto label_326c70;
    }
    ctx->pc = 0x326C68u;
    {
        const bool branch_taken_0x326c68 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x326c68) {
            ctx->pc = 0x326C6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326C68u;
            // 0x326c6c: 0x3c021fff  lui         $v0, 0x1FFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8191 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326C80u;
            goto label_326c80;
        }
    }
    ctx->pc = 0x326C70u;
label_326c70:
    // 0x326c70: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x326c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_326c74:
    // 0x326c74: 0x10000003  b           . + 4 + (0x3 << 2)
label_326c78:
    if (ctx->pc == 0x326C78u) {
        ctx->pc = 0x326C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326C74u;
        // 0x326c78: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326C7Cu;
        goto label_326c7c;
    }
    ctx->pc = 0x326C74u;
    {
        const bool branch_taken_0x326c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326C74u;
        // 0x326c78: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326c74) {
            ctx->pc = 0x326C84u;
            goto label_326c84;
        }
    }
    ctx->pc = 0x326C7Cu;
label_326c7c:
    // 0x326c7c: 0x0  nop
    ctx->pc = 0x326c7cu;
    // NOP
label_326c80:
    // 0x326c80: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x326c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_326c84:
    // 0x326c84: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x326c84u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_326c88:
    // 0x326c88: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x326c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_326c8c:
    // 0x326c8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x326c8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_326c90:
    // 0x326c90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x326c90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_326c94:
    // 0x326c94: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x326c94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_326c98:
    // 0x326c98: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x326c98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_326c9c:
    // 0x326c9c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x326c9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_326ca0:
    // 0x326ca0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x326ca0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_326ca4:
    // 0x326ca4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x326ca4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_326ca8:
    // 0x326ca8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x326ca8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_326cac:
    // 0x326cac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x326cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_326cb0:
    // 0x326cb0: 0x80cf3a0  j           func_33CE80
label_326cb4:
    if (ctx->pc == 0x326CB4u) {
        ctx->pc = 0x326CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326CB0u;
        // 0x326cb4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326CB8u;
        goto label_fallthrough_0x326cb0;
    }
    ctx->pc = 0x326CB0u;
    ctx->pc = 0x326CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326CB0u;
    // 0x326cb4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CE80u, 0x326CB0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
label_fallthrough_0x326cb0:
    ctx->pc = 0x326CB8u;
}
