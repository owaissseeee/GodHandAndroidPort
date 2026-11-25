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

// Function: func_002BF8F8
// Address: 0x2bf8f8 - 0x2bf948
void func_002BF8F8_0x2bf8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BF8F8_0x2bf8f8");
#endif

    if (__builtin_expect(ctx->pc != 0x2bf8f8u, 0)) {
        switch (ctx->pc) {
            case 0x2bf938u: goto label_2bf938;
            default: break;
        }
    }


    // 0x2bf8f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bf8fc: 0x3c030074  lui         $v1, 0x74
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2bf900: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bf900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bf904: 0x24637a2c  addiu       $v1, $v1, 0x7A2C
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31276));
    // 0x2bf908: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2bf908u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A34u));
    // 0x2bf90c: 0x30420800  andi        $v0, $v0, 0x800
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x2bf910: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BF910u;
    {
        const bool branch_taken_0x2bf910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF910u;
        // 0x2bf914: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf910) {
            ctx->pc = 0x2BF93Cu;
            goto label_2bf93c;
        }
    }
    // 0x2bf918: 0x8c62fff8  lw          $v0, -0x8($v1)
    ctx->pc = 0x2bf918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
    // 0x2bf91c: 0x3c030800  lui         $v1, 0x800
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2bf920: 0x431024  and         $v0, $v0, $v1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2bf924: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BF924u;
    {
        const bool branch_taken_0x2bf924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF924u;
        // 0x2bf928: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf924) {
            ctx->pc = 0x2BF93Cu;
            goto label_2bf93c;
        }
    }
    // 0x2bf92c: 0x302d  daddu       $a2, $zero, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf930: 0xc0b016c  jal         func_2C05B0
    SET_GPR_U32(ctx, 31, 0x2BF938u);
    ctx->pc = 0x2BF934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF930u;
    // 0x2bf934: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cSaveManager_setCheckPoint_0x2c05b0, 0x2c05b0u, 0x2bf938u)) {
        return;
    }
    ctx->pc = 0x2BF938u;
label_2bf938:
    // 0x2bf938: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bf938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bf93c:
    // 0x2bf93c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF93Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF93Cu;
        // 0x2bf940: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF93Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x2bf944: 0x0  nop
    // NOP
    ctx->pc = 0x2bf948u;
}