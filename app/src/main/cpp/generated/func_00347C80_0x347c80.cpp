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

// Function: func_00347C80
// Address: 0x347c80 - 0x347d08
void func_00347C80_0x347c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00347C80_0x347c80");
#endif

    switch (ctx->pc) {
        case 0x347cacu: goto label_347cac;
        default: break;
    }

    ctx->pc = 0x347c80u;

    // 0x347c80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x347c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x347c84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x347c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x347c88: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x347c88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347c8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x347c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x347c90: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x347c90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347c94: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x347c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x347c98: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x347c98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347c9c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x347c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x347ca0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x347ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x347ca4: 0xc0d1a0a  jal         func_346828
    ctx->pc = 0x347CA4u;
    SET_GPR_U32(ctx, 31, 0x347CACu);
    ctx->pc = 0x347CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347CA4u;
    // 0x347ca8: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346828u, 0x347CA4u, 0x347CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347CACu;
label_347cac:
    // 0x347cac: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x347cacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x347cb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x347cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x347cb4: 0x248490d8  addiu       $a0, $a0, -0x6F28
    ctx->pc = 0x347cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938840));
    // 0x347cb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x347cb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347cbc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x347cbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347cc0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x347cc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347cc4: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x347CC4u;
    {
        const bool branch_taken_0x347cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x347CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347CC4u;
        // 0x347cc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347cc4) {
            ctx->pc = 0x347CE8u;
            goto label_347ce8;
        }
    }
    ctx->pc = 0x347CCCu;
    // 0x347ccc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x347cccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347cd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x347cd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x347cd4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x347cd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x347cd8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x347cd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x347cdc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x347cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x347ce0: 0x80d22f8  j           func_348BE0
    ctx->pc = 0x347CE0u;
    ctx->pc = 0x347CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347CE0u;
    // 0x347ce4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x347CE0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x347CE8u;
label_347ce8:
    // 0x347ce8: 0x8e640048  lw          $a0, 0x48($s3)
    ctx->pc = 0x347ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x347cec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x347cecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347cf0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x347cf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x347cf4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x347cf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x347cf8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x347cf8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x347cfc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x347cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x347d00: 0x80cd58e  j           func_335638
    ctx->pc = 0x347D00u;
    ctx->pc = 0x347D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347D00u;
    // 0x347d04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335638u, 0x347D00u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x347D08u;
}
