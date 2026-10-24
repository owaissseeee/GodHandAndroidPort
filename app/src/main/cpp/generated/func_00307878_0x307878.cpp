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

// Function: func_00307878
// Address: 0x307878 - 0x3078e0
void func_00307878_0x307878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00307878_0x307878");
#endif

    ctx->pc = 0x307878u;

    // 0x307878: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x307878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30787c: 0x7fbe0000  sq          $fp, 0x0($sp)
    ctx->pc = 0x30787cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 30));
    // 0x307880: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x307880u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307884: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x307884u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307888: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x307888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30788c: 0x41142  srl         $v0, $a0, 5
    ctx->pc = 0x30788cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x307890: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x307890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307894: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x307894u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x307898: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x307898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x30789c: 0x3085001f  andi        $a1, $a0, 0x1F
    ctx->pc = 0x30789cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x3078a0: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x3078a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x3078a4: 0xa62806  srlv        $a1, $a2, $a1
    ctx->pc = 0x3078a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
    // 0x3078a8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x3078a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3078ac: 0xa61024  and         $v0, $a1, $a2
    ctx->pc = 0x3078acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x3078b0: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x3078b0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3078b4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3078b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3078b8: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x3078b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3078bc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3078bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3078c0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x3078C0u;
    {
        const bool branch_taken_0x3078c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3078c0) {
            ctx->pc = 0x3078C8u;
            goto label_3078c8;
        }
    }
    ctx->pc = 0x3078C8u;
label_3078c8:
    // 0x3078c8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3078c8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3078cc: 0x7bbe0000  lq          $fp, 0x0($sp)
    ctx->pc = 0x3078ccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3078d0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3078d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3078d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3078D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3078D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3078DCu;
    // 0x3078dc: 0x0  nop
    ctx->pc = 0x3078dcu;
    // NOP
    ctx->pc = 0x3078e0u;
}
