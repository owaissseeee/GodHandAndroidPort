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

// Function: func_002740D8
// Address: 0x2740d8 - 0x274140
void func_002740D8_0x2740d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002740D8_0x2740d8");
#endif

    ctx->pc = 0x2740d8u;

    // 0x2740d8: 0x8c8206ec  lw          $v0, 0x6EC($a0)
    ctx->pc = 0x2740d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1772)));
    // 0x2740dc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2740DCu;
    {
        const bool branch_taken_0x2740dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2740dc) {
            ctx->pc = 0x274108u;
            goto label_274108;
        }
    }
    ctx->pc = 0x2740E4u;
    // 0x2740e4: 0x8c8206f0  lw          $v0, 0x6F0($a0)
    ctx->pc = 0x2740e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1776)));
    // 0x2740e8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2740E8u;
    {
        const bool branch_taken_0x2740e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2740e8) {
            ctx->pc = 0x274108u;
            goto label_274108;
        }
    }
    ctx->pc = 0x2740F0u;
    // 0x2740f0: 0x8c820700  lw          $v0, 0x700($a0)
    ctx->pc = 0x2740f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1792)));
    // 0x2740f4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2740F4u;
    {
        const bool branch_taken_0x2740f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2740f4) {
            ctx->pc = 0x274108u;
            goto label_274108;
        }
    }
    ctx->pc = 0x2740FCu;
    // 0x2740fc: 0x8c820704  lw          $v0, 0x704($a0)
    ctx->pc = 0x2740fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1796)));
    // 0x274100: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x274100u;
    {
        const bool branch_taken_0x274100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x274100) {
            ctx->pc = 0x274104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274100u;
            // 0x274104: 0x8c820564  lw          $v0, 0x564($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274110u;
            goto label_274110;
        }
    }
    ctx->pc = 0x274108u;
label_274108:
    // 0x274108: 0x3e00008  jr          $ra
    ctx->pc = 0x274108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27410Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274108u;
        // 0x27410c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274110u;
label_274110:
    // 0x274110: 0x2444fdf7  addiu       $a0, $v0, -0x209
    ctx->pc = 0x274110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966775));
    // 0x274114: 0x2c830076  sltiu       $v1, $a0, 0x76
    ctx->pc = 0x274114u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)118) ? 1 : 0);
    // 0x274118: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x274118u;
    {
        const bool branch_taken_0x274118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27411Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274118u;
        // 0x27411c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274118) {
            ctx->pc = 0x274138u;
            goto label_274138;
        }
    }
    ctx->pc = 0x274120u;
    // 0x274120: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x274120u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x274124: 0x24426f50  addiu       $v0, $v0, 0x6F50
    ctx->pc = 0x274124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28496));
    // 0x274128: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x274128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27412c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x27412cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x274130: 0x800008  jr          $a0
    ctx->pc = 0x274130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x274108u: goto label_274108;
            case 0x274138u: goto label_274138;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274130u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x274138u;
label_274138:
    // 0x274138: 0x3e00008  jr          $ra
    ctx->pc = 0x274138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27413Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274138u;
        // 0x27413c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274140u;
}
