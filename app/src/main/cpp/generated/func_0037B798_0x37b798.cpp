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

// Function: func_0037B798
// Address: 0x37b798 - 0x37b808
void func_0037B798_0x37b798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037B798_0x37b798");
#endif

    ctx->pc = 0x37b798u;

    // 0x37b798: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x37b798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x37b79c: 0x90830028  lbu         $v1, 0x28($a0)
    ctx->pc = 0x37b79cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x37b7a0: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x37b7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x37b7a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37B7A4u;
    {
        const bool branch_taken_0x37b7a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B7A4u;
        // 0x37b7a8: 0x80850028  lb          $a1, 0x28($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b7a4) {
            ctx->pc = 0x37B7B4u;
            goto label_37b7b4;
        }
    }
    ctx->pc = 0x37B7ACu;
    // 0x37b7ac: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x37b7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x37b7b0: 0xa0820028  sb          $v0, 0x28($a0)
    ctx->pc = 0x37b7b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 40), (uint8_t)GPR_U32(ctx, 2));
label_37b7b4:
    // 0x37b7b4: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x37b7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x37b7b8: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x37b7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x37b7bc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x37B7BCu;
    {
        const bool branch_taken_0x37b7bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b7bc) {
            ctx->pc = 0x37B7C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37B7BCu;
            // 0x37b7c0: 0x80820028  lb          $v0, 0x28($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37B7D4u;
            goto label_37b7d4;
        }
    }
    ctx->pc = 0x37B7C4u;
    // 0x37b7c4: 0x90820028  lbu         $v0, 0x28($a0)
    ctx->pc = 0x37b7c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x37b7c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x37b7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37b7cc: 0xa0820028  sb          $v0, 0x28($a0)
    ctx->pc = 0x37b7ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 40), (uint8_t)GPR_U32(ctx, 2));
    // 0x37b7d0: 0x80820028  lb          $v0, 0x28($a0)
    ctx->pc = 0x37b7d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
label_37b7d4:
    // 0x37b7d4: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37B7D4u;
    {
        const bool branch_taken_0x37b7d4 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x37b7d4) {
            ctx->pc = 0x37B7D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37B7D4u;
            // 0x37b7d8: 0x80820028  lb          $v0, 0x28($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37B7E8u;
            goto label_37b7e8;
        }
    }
    ctx->pc = 0x37B7DCu;
    // 0x37b7dc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x37b7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x37b7e0: 0xa0820028  sb          $v0, 0x28($a0)
    ctx->pc = 0x37b7e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 40), (uint8_t)GPR_U32(ctx, 2));
    // 0x37b7e4: 0x80820028  lb          $v0, 0x28($a0)
    ctx->pc = 0x37b7e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
label_37b7e8:
    // 0x37b7e8: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x37b7e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x37b7ec: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x37B7ECu;
    {
        const bool branch_taken_0x37b7ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b7ec) {
            ctx->pc = 0x37B7F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37B7ECu;
            // 0x37b7f0: 0xa0800028  sb          $zero, 0x28($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 40), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37B7F4u;
            goto label_37b7f4;
        }
    }
    ctx->pc = 0x37B7F4u;
label_37b7f4:
    // 0x37b7f4: 0x80820028  lb          $v0, 0x28($a0)
    ctx->pc = 0x37b7f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x37b7f8: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x37b7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x37b7fc: 0x3e00008  jr          $ra
    ctx->pc = 0x37B7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B7FCu;
        // 0x37b800: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B7FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B804u;
    // 0x37b804: 0x0  nop
    ctx->pc = 0x37b804u;
    // NOP
    ctx->pc = 0x37b808u;
}
