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

// Function: func_0034EB98
// Address: 0x34eb98 - 0x34ed08
void func_0034EB98_0x34eb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034EB98_0x34eb98");
#endif

    switch (ctx->pc) {
        case 0x34ebe0u: goto label_34ebe0;
        case 0x34ec1cu: goto label_34ec1c;
        case 0x34ec30u: goto label_34ec30;
        default: break;
    }

    ctx->pc = 0x34eb98u;

    // 0x34eb98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34eb98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x34eb9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34eb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34eba0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x34eba0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34eba4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x34eba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34eba8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x34eba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x34ebac: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x34ebacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x34ebb0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x34ebb0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ebb4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x34ebb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x34ebb8: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x34ebb8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ebbc: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x34ebbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x34ebc0: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x34ebc0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ebc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34ebc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34ebc8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x34ebc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x34ebcc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x34ebccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x34ebd0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x34ebd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x34ebd4: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x34ebd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x34ebd8: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x34EBD8u;
    SET_GPR_U32(ctx, 31, 0x34EBE0u);
    ctx->pc = 0x34EBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34EBD8u;
    // 0x34ebdc: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x34EBD8u, 0x34EBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EBE0u;
label_34ebe0:
    // 0x34ebe0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34EBE0u;
    {
        const bool branch_taken_0x34ebe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34EBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EBE0u;
        // 0x34ebe4: 0x26b61f74  addiu       $s6, $s5, 0x1F74 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 8052));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ebe0) {
            ctx->pc = 0x34EBF0u;
            goto label_34ebf0;
        }
    }
    ctx->pc = 0x34EBE8u;
    // 0x34ebe8: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x34EBE8u;
    {
        const bool branch_taken_0x34ebe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EBE8u;
        // 0x34ebec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ebe8) {
            ctx->pc = 0x34ECD8u;
            goto label_34ecd8;
        }
    }
    ctx->pc = 0x34EBF0u;
label_34ebf0:
    // 0x34ebf0: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x34ebf0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34ebf4: 0x8ed00008  lw          $s0, 0x8($s6)
    ctx->pc = 0x34ebf4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x34ebf8: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x34ebf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x34ebfc: 0x50520001  beql        $v0, $s2, . + 4 + (0x1 << 2)
    ctx->pc = 0x34EBFCu;
    {
        const bool branch_taken_0x34ebfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x34ebfc) {
            ctx->pc = 0x34EC00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34EBFCu;
            // 0x34ec00: 0xae110038  sw          $s1, 0x38($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34EC04u;
            goto label_34ec04;
        }
    }
    ctx->pc = 0x34EC04u;
label_34ec04:
    // 0x34ec04: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x34ec04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x34ec08: 0x50520001  beql        $v0, $s2, . + 4 + (0x1 << 2)
    ctx->pc = 0x34EC08u;
    {
        const bool branch_taken_0x34ec08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x34ec08) {
            ctx->pc = 0x34EC0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34EC08u;
            // 0x34ec0c: 0xae110030  sw          $s1, 0x30($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34EC10u;
            goto label_34ec10;
        }
    }
    ctx->pc = 0x34EC10u;
label_34ec10:
    // 0x34ec10: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x34ec10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ec14: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x34EC14u;
    SET_GPR_U32(ctx, 31, 0x34EC1Cu);
    ctx->pc = 0x34EC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34EC14u;
    // 0x34ec18: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x34EC14u, 0x34EC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EC1Cu;
label_34ec1c:
    // 0x34ec1c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x34ec1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ec20: 0x1292000e  beq         $s4, $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x34EC20u;
    {
        const bool branch_taken_0x34ec20 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 18));
        ctx->pc = 0x34EC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EC20u;
        // 0x34ec24: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ec20) {
            ctx->pc = 0x34EC5Cu;
            goto label_34ec5c;
        }
    }
    ctx->pc = 0x34EC28u;
    // 0x34ec28: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x34EC28u;
    SET_GPR_U32(ctx, 31, 0x34EC30u);
    ctx->pc = 0x34EC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34EC28u;
    // 0x34ec2c: 0x24050037  addiu       $a1, $zero, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x34EC28u, 0x34EC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EC30u;
label_34ec30:
    // 0x34ec30: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x34EC30u;
    {
        const bool branch_taken_0x34ec30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ec30) {
            ctx->pc = 0x34EC34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34EC30u;
            // 0x34ec34: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34EC50u;
            goto label_34ec50;
        }
    }
    ctx->pc = 0x34EC38u;
    // 0x34ec38: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x34ec38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x34ec3c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x34ec3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x34ec40: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x34EC40u;
    {
        const bool branch_taken_0x34ec40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34ec40) {
            ctx->pc = 0x34EC44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34EC40u;
            // 0x34ec44: 0xae140038  sw          $s4, 0x38($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34EC5Cu;
            goto label_34ec5c;
        }
    }
    ctx->pc = 0x34EC48u;
    // 0x34ec48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x34EC48u;
    {
        const bool branch_taken_0x34ec48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EC48u;
        // 0x34ec4c: 0x8e030038  lw          $v1, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ec48) {
            ctx->pc = 0x34EC60u;
            goto label_34ec60;
        }
    }
    ctx->pc = 0x34EC50u;
label_34ec50:
    // 0x34ec50: 0x56220003  bnel        $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34EC50u;
    {
        const bool branch_taken_0x34ec50 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x34ec50) {
            ctx->pc = 0x34EC54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34EC50u;
            // 0x34ec54: 0x8e030038  lw          $v1, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34EC60u;
            goto label_34ec60;
        }
    }
    ctx->pc = 0x34EC58u;
    // 0x34ec58: 0xae140038  sw          $s4, 0x38($s0)
    ctx->pc = 0x34ec58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 20));
label_34ec5c:
    // 0x34ec5c: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x34ec5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_34ec60:
    // 0x34ec60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34ec60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34ec64: 0x1471001c  bne         $v1, $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x34EC64u;
    {
        const bool branch_taken_0x34ec64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x34EC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EC64u;
        // 0x34ec68: 0xae110028  sw          $s1, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ec64) {
            ctx->pc = 0x34ECD8u;
            goto label_34ecd8;
        }
    }
    ctx->pc = 0x34EC6Cu;
    // 0x34ec6c: 0x662000a  bltzl       $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x34EC6Cu;
    {
        const bool branch_taken_0x34ec6c = (GPR_S64(ctx, 19) < 0);
        if (branch_taken_0x34ec6c) {
            ctx->pc = 0x34EC70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34EC6Cu;
            // 0x34ec70: 0x8ec50018  lw          $a1, 0x18($s6) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34EC98u;
            goto label_34ec98;
        }
    }
    ctx->pc = 0x34EC74u;
    // 0x34ec74: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x34ec74u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x34ec78: 0xde030018  ld          $v1, 0x18($s0)
    ctx->pc = 0x34ec78u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x34ec7c: 0x262202a  slt         $a0, $s3, $v0
    ctx->pc = 0x34ec7cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x34ec80: 0x263282a  slt         $a1, $s3, $v1
    ctx->pc = 0x34ec80u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x34ec84: 0x264100b  movn        $v0, $s3, $a0
    ctx->pc = 0x34ec84u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 19));
    // 0x34ec88: 0x265180b  movn        $v1, $s3, $a1
    ctx->pc = 0x34ec88u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 19));
    // 0x34ec8c: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x34ec8cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x34ec90: 0xfe030018  sd          $v1, 0x18($s0)
    ctx->pc = 0x34ec90u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 3));
    // 0x34ec94: 0x8ec50018  lw          $a1, 0x18($s6)
    ctx->pc = 0x34ec94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
label_34ec98:
    // 0x34ec98: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x34ec98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ec9c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x34ec9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34eca0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x34eca0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34eca4: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x34eca4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34eca8: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x34eca8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34ecac: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x34ecacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ecb0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x34ecb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34ecb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34ecb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34ecb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34ecb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34ecbc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34ecbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34ecc0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x34ecc0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34ecc4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x34ecc4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34ecc8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x34ecc8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34eccc: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x34ecccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34ecd0: 0x80d3c80  j           func_34F200
    ctx->pc = 0x34ECD0u;
    ctx->pc = 0x34ECD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34ECD0u;
    // 0x34ecd4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34F200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34F200u, 0x34ECD0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34ECD8u;
label_34ecd8:
    // 0x34ecd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34ecd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34ecdc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34ecdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34ece0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34ece0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34ece4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x34ece4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34ece8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x34ece8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34ecec: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x34ececu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34ecf0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x34ecf0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34ecf4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x34ecf4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34ecf8: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x34ecf8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34ecfc: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x34ecfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34ed00: 0x3e00008  jr          $ra
    ctx->pc = 0x34ED00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34ED04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ED00u;
        // 0x34ed04: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34ED00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34ED08u;
}
