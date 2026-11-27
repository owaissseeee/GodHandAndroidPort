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

// Function: func_00346E20
// Address: 0x346e20 - 0x346e70
void func_00346E20_0x346e20(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00346E20_0x346e20");
#endif


    // 0x346e20: 0x24a60007  addiu       $a2, $a1, 0x7
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x346e24: 0x28a20000  slti        $v0, $a1, 0x0
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x346e28: 0xa0182d  daddu       $v1, $a1, $zero
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346e2c: 0x24070001  addiu       $a3, $zero, 0x1
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x346e30: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x346e30u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x346e34: 0x24020011  addiu       $v0, $zero, 0x11
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x346e38: 0x330c3  sra         $a2, $v1, 3
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 3));
    // 0x346e3c: 0x630c0  sll         $a2, $a2, 3
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x346e40: 0xa63023  subu        $a2, $a1, $a2
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x346e44: 0x61880  sll         $v1, $a2, 2
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x346e48: 0x661821  addu        $v1, $v1, $a2
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x346e4c: 0x31880  sll         $v1, $v1, 2
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x346e50: 0x642821  addu        $a1, $v1, $a0
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x346e54: 0x8ca400c0  lw          $a0, 0xC0($a1)
    ctx->pc = 0x346e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x346e58: 0x14870002  bne         $a0, $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x346E58u;
    {
        const bool branch_taken_0x346e58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        ctx->pc = 0x346E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346E58u;
        // 0x346e5c: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346e58) {
            ctx->pc = 0x346E64u;
            goto label_346e64;
        }
    }
    // 0x346e60: 0x8c6200d0  lw          $v0, 0xD0($v1)
    ctx->pc = 0x346e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
label_346e64:
    // 0x346e64: 0x3e00008  jr          $ra
    ctx->pc = 0x346E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x346e6c: 0x0  nop
    // NOP
    ctx->pc = 0x346e70u;
}