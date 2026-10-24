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

// Function: func_0033FCD0
// Address: 0x33fcd0 - 0x33fd70
void func_0033FCD0_0x33fcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033FCD0_0x33fcd0");
#endif

    switch (ctx->pc) {
        case 0x33fd00u: goto label_33fd00;
        case 0x33fd20u: goto label_33fd20;
        case 0x33fd30u: goto label_33fd30;
        default: break;
    }

    ctx->pc = 0x33fcd0u;

    // 0x33fcd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33fcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33fcd4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33fcd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x33fcd8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x33fcd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fcdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33fcdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33fce0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33fce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33fce4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x33fce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x33fce8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33fce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x33fcec: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x33fcecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x33fcf0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33FCF0u;
    {
        const bool branch_taken_0x33fcf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33FCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FCF0u;
        // 0x33fcf4: 0x3c130076  lui         $s3, 0x76 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)118 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fcf0) {
            ctx->pc = 0x33FD08u;
            goto label_33fd08;
        }
    }
    ctx->pc = 0x33FCF8u;
    // 0x33fcf8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x33FCF8u;
    {
        const bool branch_taken_0x33fcf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FCF8u;
        // 0x33fcfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fcf8) {
            ctx->pc = 0x33FD4Cu;
            goto label_33fd4c;
        }
    }
    ctx->pc = 0x33FD00u;
label_33fd00:
    // 0x33fd00: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x33FD00u;
    {
        const bool branch_taken_0x33fd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FD00u;
        // 0x33fd04: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fd00) {
            ctx->pc = 0x33FD4Cu;
            goto label_33fd4c;
        }
    }
    ctx->pc = 0x33FD08u;
label_33fd08:
    // 0x33fd08: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x33fd08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
    // 0x33fd0c: 0x8e638900  lw          $v1, -0x7700($s3)
    ctx->pc = 0x33fd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936832)));
    // 0x33fd10: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x33fd10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fd14: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x33FD14u;
    {
        const bool branch_taken_0x33fd14 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x33FD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FD14u;
        // 0x33fd18: 0x8c5088fc  lw          $s0, -0x7704($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936828)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fd14) {
            ctx->pc = 0x33FD48u;
            goto label_33fd48;
        }
    }
    ctx->pc = 0x33FD1Cu;
    // 0x33fd1c: 0x0  nop
    ctx->pc = 0x33fd1cu;
    // NOP
label_33fd20:
    // 0x33fd20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33fd20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fd24: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x33fd24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fd28: 0xc0e96f6  jal         func_3A5BD8
    ctx->pc = 0x33FD28u;
    SET_GPR_U32(ctx, 31, 0x33FD30u);
    ctx->pc = 0x33FD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FD28u;
    // 0x33fd2c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5BD8u, 0x33FD28u, 0x33FD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FD30u;
label_33fd30:
    // 0x33fd30: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x33FD30u;
    {
        const bool branch_taken_0x33fd30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FD30u;
        // 0x33fd34: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fd30) {
            ctx->pc = 0x33FD00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33fd00;
        }
    }
    ctx->pc = 0x33FD38u;
    // 0x33fd38: 0x8e628900  lw          $v0, -0x7700($s3)
    ctx->pc = 0x33fd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936832)));
    // 0x33fd3c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x33fd3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x33fd40: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x33FD40u;
    {
        const bool branch_taken_0x33fd40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33FD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FD40u;
        // 0x33fd44: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fd40) {
            ctx->pc = 0x33FD20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33fd20;
        }
    }
    ctx->pc = 0x33FD48u;
label_33fd48:
    // 0x33fd48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33fd48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33fd4c:
    // 0x33fd4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33fd4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33fd50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33fd50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33fd54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33fd54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33fd58: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x33fd58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33fd5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33fd5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33fd60: 0x3e00008  jr          $ra
    ctx->pc = 0x33FD60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33FD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FD60u;
        // 0x33fd64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33FD60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33FD68u;
    // 0x33fd68: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x33fd68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x33fd6c: 0x0  nop
    ctx->pc = 0x33fd6cu;
    // NOP
    ctx->pc = 0x33fd70u;
}
