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

// Function: ForwardListEntries_2C5470
// Address: 0x2c5470 - 0x2c54e8
void ForwardListEntries_2C5470_0x2c5470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardListEntries_2C5470_0x2c5470");
#endif

    switch (ctx->pc) {
        case 0x2c54b8u: goto label_2c54b8;
        case 0x2c54c0u: goto label_2c54c0;
        default: break;
    }

    ctx->pc = 0x2c5470u;

    // 0x2c5470: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2c5470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2c5474: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c5474u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c5478: 0x8c437a78  lw          $v1, 0x7A78($v0)
    ctx->pc = 0x2c5478u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A78u));
    // 0x2c547c: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x2c547cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x2c5480: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c5480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c5484: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2c5484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2c5488: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c5488u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c548c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2c548cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2c5490: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C5490u;
    {
        const bool branch_taken_0x2c5490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5490u;
        // 0x2c5494: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5490) {
            ctx->pc = 0x2C54D4u;
            goto label_2c54d4;
        }
    }
    ctx->pc = 0x2C5498u;
    // 0x2c5498: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2c5498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c549c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2c549cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2c54a0: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x2c54a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2c54a4: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2c54a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c54a8: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2C54A8u;
    {
        const bool branch_taken_0x2c54a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c54a8) {
            ctx->pc = 0x2C54ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C54A8u;
            // 0x2c54ac: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C54D8u;
            goto label_2c54d8;
        }
    }
    ctx->pc = 0x2C54B0u;
    // 0x2c54b0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2c54b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c54b4: 0x0  nop
    ctx->pc = 0x2c54b4u;
    // NOP
label_2c54b8:
    // 0x2c54b8: 0xc0c6548  jal         func_319520
    ctx->pc = 0x2C54B8u;
    SET_GPR_U32(ctx, 31, 0x2C54C0u);
    ctx->pc = 0x2C54BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C54B8u;
    // 0x2c54bc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319520u, 0x2C54B8u, 0x2C54C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C54C0u;
label_2c54c0:
    // 0x2c54c0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2c54c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c54c4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2c54c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2c54c8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2c54c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c54cc: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C54CCu;
    {
        const bool branch_taken_0x2c54cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c54cc) {
            ctx->pc = 0x2C54D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C54CCu;
            // 0x2c54d0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C54B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c54b8;
        }
    }
    ctx->pc = 0x2C54D4u;
label_2c54d4:
    // 0x2c54d4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2c54d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c54d8:
    // 0x2c54d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c54d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c54dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c54dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c54e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C54E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C54E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C54E0u;
        // 0x2c54e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C54E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C54E8u;
}
