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

// Function: func_0034B030
// Address: 0x34b030 - 0x34b0f0
void func_0034B030_0x34b030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034B030_0x34b030");
#endif

    switch (ctx->pc) {
        case 0x34b06cu: goto label_34b06c;
        case 0x34b094u: goto label_34b094;
        default: break;
    }

    ctx->pc = 0x34b030u;

    // 0x34b030: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34b030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x34b034: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x34b034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x34b038: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34b038u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b03c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x34b03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x34b040: 0x26131020  addiu       $s3, $s0, 0x1020
    ctx->pc = 0x34b040u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4128));
    // 0x34b044: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x34b044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x34b048: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x34b048u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b04c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x34b04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x34b050: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x34b050u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b054: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x34b054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x34b058: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x34b058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x34b05c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x34b05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x34b060: 0x8e112004  lw          $s1, 0x2004($s0)
    ctx->pc = 0x34b060u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8196)));
    // 0x34b064: 0xc0d6b86  jal         func_35AE18
    ctx->pc = 0x34B064u;
    SET_GPR_U32(ctx, 31, 0x34B06Cu);
    ctx->pc = 0x34B068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B064u;
    // 0x34b068: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AE18u, 0x34B064u, 0x34B06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B06Cu;
label_34b06c:
    // 0x34b06c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x34B06Cu;
    {
        const bool branch_taken_0x34b06c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B06Cu;
        // 0x34b070: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b06c) {
            ctx->pc = 0x34B0C8u;
            goto label_34b0c8;
        }
    }
    ctx->pc = 0x34B074u;
    // 0x34b074: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x34b074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x34b078: 0x5443000f  bnel        $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x34B078u;
    {
        const bool branch_taken_0x34b078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x34b078) {
            ctx->pc = 0x34B07Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34B078u;
            // 0x34b07c: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34B0B8u;
            goto label_34b0b8;
        }
    }
    ctx->pc = 0x34B080u;
    // 0x34b080: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x34b080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b084: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x34b084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b088: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x34b088u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b08c: 0xc0d2c3c  jal         func_34B0F0
    ctx->pc = 0x34B08Cu;
    SET_GPR_U32(ctx, 31, 0x34B094u);
    ctx->pc = 0x34B090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B08Cu;
    // 0x34b090: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B0F0u, 0x34B08Cu, 0x34B094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B094u;
label_34b094:
    // 0x34b094: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x34b094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x34b098: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x34b098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34b09c: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x34b09cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x34b0a0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x34B0A0u;
    {
        const bool branch_taken_0x34b0a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b0a0) {
            ctx->pc = 0x34B0A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34B0A0u;
            // 0x34b0a4: 0xae840000  sw          $a0, 0x0($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34B0BCu;
            goto label_34b0bc;
        }
    }
    ctx->pc = 0x34B0A8u;
    // 0x34b0a8: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x34b0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x34b0ac: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x34b0acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b0b0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x34b0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x34b0b4: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x34b0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_34b0b8:
    // 0x34b0b8: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x34b0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
label_34b0bc:
    // 0x34b0bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34b0bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b0c0: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x34b0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x34b0c4: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x34b0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_34b0c8:
    // 0x34b0c8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x34b0c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34b0cc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x34b0ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34b0d0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x34b0d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34b0d4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x34b0d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b0d8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x34b0d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34b0dc: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x34b0dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34b0e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x34b0e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34b0e4: 0x3e00008  jr          $ra
    ctx->pc = 0x34B0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B0E4u;
        // 0x34b0e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B0E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B0ECu;
    // 0x34b0ec: 0x0  nop
    ctx->pc = 0x34b0ecu;
    // NOP
    ctx->pc = 0x34b0f0u;
}
