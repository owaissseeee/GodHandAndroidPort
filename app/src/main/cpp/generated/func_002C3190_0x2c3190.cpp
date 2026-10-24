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

// Function: func_002C3190
// Address: 0x2c3190 - 0x2c31d0
void func_002C3190_0x2c3190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C3190_0x2c3190");
#endif

    ctx->pc = 0x2c3190u;

    // 0x2c3190: 0x8c820068  lw          $v0, 0x68($a0)
    ctx->pc = 0x2c3190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x2c3194: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2c3194u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2c3198: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C3198u;
    {
        const bool branch_taken_0x2c3198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C319Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3198u;
        // 0x2c319c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3198) {
            ctx->pc = 0x2C31C4u;
            goto label_2c31c4;
        }
    }
    ctx->pc = 0x2C31A0u;
    // 0x2c31a0: 0x51942  srl         $v1, $a1, 5
    ctx->pc = 0x2c31a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
    // 0x2c31a4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2c31a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2c31a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c31a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c31ac: 0x30a5001f  andi        $a1, $a1, 0x1F
    ctx->pc = 0x2c31acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x2c31b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c31b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c31b4: 0xa42006  srlv        $a0, $a0, $a1
    ctx->pc = 0x2c31b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x2c31b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c31b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c31bc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2c31bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2c31c0: 0x2300b  movn        $a2, $zero, $v0
    ctx->pc = 0x2c31c0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
label_2c31c4:
    // 0x2c31c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C31C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C31C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C31C4u;
        // 0x2c31c8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C31C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C31CCu;
    // 0x2c31cc: 0x0  nop
    ctx->pc = 0x2c31ccu;
    // NOP
    ctx->pc = 0x2c31d0u;
}
