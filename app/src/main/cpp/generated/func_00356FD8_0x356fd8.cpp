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

// Function: func_00356FD8
// Address: 0x356fd8 - 0x357068
void func_00356FD8_0x356fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00356FD8_0x356fd8");
#endif

    switch (ctx->pc) {
        case 0x357050u: goto label_357050;
        default: break;
    }

    ctx->pc = 0x356fd8u;

    // 0x356fd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x356fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x356fdc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x356fdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356fe0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x356fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356fe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x356fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x356fe8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x356fe8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356fec: 0x10c2000c  beq         $a2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x356FECu;
    {
        const bool branch_taken_0x356fec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x356FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356FECu;
        // 0x356ff0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356fec) {
            ctx->pc = 0x357020u;
            goto label_357020;
        }
    }
    ctx->pc = 0x356FF4u;
    // 0x356ff4: 0x50c00010  beql        $a2, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x356FF4u;
    {
        const bool branch_taken_0x356ff4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x356ff4) {
            ctx->pc = 0x356FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x356FF4u;
            // 0x356ff8: 0x8c620054  lw          $v0, 0x54($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x357038u;
            goto label_357038;
        }
    }
    ctx->pc = 0x356FFCu;
    // 0x356ffc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x356ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x357000: 0x14c20015  bne         $a2, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x357000u;
    {
        const bool branch_taken_0x357000 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x357004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357000u;
        // 0x357004: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357000) {
            ctx->pc = 0x357058u;
            goto label_357058;
        }
    }
    ctx->pc = 0x357008u;
    // 0x357008: 0x8c630048  lw          $v1, 0x48($v1)
    ctx->pc = 0x357008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x35700c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x35700cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x357010: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x357010u;
    {
        const bool branch_taken_0x357010 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x357014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357010u;
        // 0x357014: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357010) {
            ctx->pc = 0x35705Cu;
            goto label_35705c;
        }
    }
    ctx->pc = 0x357018u;
    // 0x357018: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x357018u;
    {
        const bool branch_taken_0x357018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357018) {
            ctx->pc = 0x357048u;
            goto label_357048;
        }
    }
    ctx->pc = 0x357020u;
label_357020:
    // 0x357020: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x357020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x357024: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x357024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x357028: 0x1446000a  bne         $v0, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x357028u;
    {
        const bool branch_taken_0x357028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x35702Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357028u;
        // 0x35702c: 0xac620054  sw          $v0, 0x54($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357028) {
            ctx->pc = 0x357054u;
            goto label_357054;
        }
    }
    ctx->pc = 0x357030u;
    // 0x357030: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x357030u;
    {
        const bool branch_taken_0x357030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357030) {
            ctx->pc = 0x357048u;
            goto label_357048;
        }
    }
    ctx->pc = 0x357038u;
label_357038:
    // 0x357038: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x357038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x35703c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x35703Cu;
    {
        const bool branch_taken_0x35703c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x357040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35703Cu;
        // 0x357040: 0xac620054  sw          $v0, 0x54($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35703c) {
            ctx->pc = 0x357054u;
            goto label_357054;
        }
    }
    ctx->pc = 0x357044u;
    // 0x357044: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x357044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_357048:
    // 0x357048: 0xc0d5c1a  jal         func_357068
    ctx->pc = 0x357048u;
    SET_GPR_U32(ctx, 31, 0x357050u);
    ctx->pc = 0x357068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357068u, 0x357048u, 0x357050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357050u;
label_357050:
    // 0x357050: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x357050u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_357054:
    // 0x357054: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x357054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_357058:
    // 0x357058: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x357058u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_35705c:
    // 0x35705c: 0x3e00008  jr          $ra
    ctx->pc = 0x35705Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35705Cu;
        // 0x357060: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35705Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357064u;
    // 0x357064: 0x0  nop
    ctx->pc = 0x357064u;
    // NOP
    ctx->pc = 0x357068u;
}
