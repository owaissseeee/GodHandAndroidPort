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

// Function: sfply_ChkCondDfl
// Address: 0x3571f8 - 0x357240
void sfply_ChkCondDfl_0x3571f8(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sfply_ChkCondDfl_0x3571f8");
#endif


    // 0x3571f8: 0x3c020046  lui         $v0, 0x46
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3571fc: 0x3c035a5a  lui         $v1, 0x5A5A
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23130 << 16));
    // 0x357200: 0x8c4498e0  lw          $a0, -0x6720($v0)
    ctx->pc = 0x357200u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4598E0u));
    // 0x357204: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x357208: 0x34635a5a  ori         $v1, $v1, 0x5A5A
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)23130);
    // 0x35720c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x35720Cu;
    {
        const bool branch_taken_0x35720c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x357210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35720Cu;
        // 0x357210: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35720c) {
            ctx->pc = 0x357230u;
            goto label_357230;
        }
    }
    // 0x357214: 0x3c05ff00  lui         $a1, 0xFF00
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x357218: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x357218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35721c: 0x202d  daddu       $a0, $zero, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357220: 0x34a50201  ori         $a1, $a1, 0x201
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)513);
    // 0x357224: 0x80d375c  j           func_34DD70
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357224u;
    // 0x357228: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x357224u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    // 0x35722c: 0x0  nop
    // NOP
label_357230:
    // 0x357230: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x357230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357234: 0x3e00008  jr          $ra
    ctx->pc = 0x357234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357234u;
        // 0x357238: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x35723c: 0x0  nop
    // NOP
    ctx->pc = 0x357240u;
}