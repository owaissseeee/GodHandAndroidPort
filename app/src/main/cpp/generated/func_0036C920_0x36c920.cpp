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

// Function: func_0036C920
// Address: 0x36c920 - 0x36c990
void func_0036C920_0x36c920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036C920_0x36c920");
#endif

    switch (ctx->pc) {
        case 0x36c978u: goto label_36c978;
        default: break;
    }

    ctx->pc = 0x36c920u;

    // 0x36c920: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x36c920u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c924: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x36c924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c928: 0x820018  mult        $zero, $a0, $v0
    ctx->pc = 0x36c928u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x36c92c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36c92cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36c930: 0x822026  xor         $a0, $a0, $v0
    ctx->pc = 0x36c930u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x36c934: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36c934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36c938: 0x28840000  slti        $a0, $a0, 0x0
    ctx->pc = 0x36c938u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x36c93c: 0x3812  mflo        $a3
    ctx->pc = 0x36c93cu;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x36c940: 0x1810  mfhi        $v1
    ctx->pc = 0x36c940u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x36c944: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x36c944u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x36c948: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x36c948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x36c94c: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x36c94cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x36c950: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x36C950u;
    {
        const bool branch_taken_0x36c950 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x36C954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C950u;
        // 0x36c954: 0x671825  or          $v1, $v1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c950) {
            ctx->pc = 0x36C970u;
            goto label_36c970;
        }
    }
    ctx->pc = 0x36C958u;
    // 0x36c958: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x36c958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x36c95c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x36c95cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x36c960: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x36c960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x36c964: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x36C964u;
    {
        const bool branch_taken_0x36c964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C964u;
        // 0x36c968: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c964) {
            ctx->pc = 0x36C980u;
            goto label_36c980;
        }
    }
    ctx->pc = 0x36C96Cu;
    // 0x36c96c: 0x0  nop
    ctx->pc = 0x36c96cu;
    // NOP
label_36c970:
    // 0x36c970: 0xc0edff8  jal         func_3B7FE0
    ctx->pc = 0x36C970u;
    SET_GPR_U32(ctx, 31, 0x36C978u);
    ctx->pc = 0x36C974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C970u;
    // 0x36c974: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7FE0u, 0x36C970u, 0x36C978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C978u;
label_36c978:
    // 0x36c978: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x36c978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x36c97c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x36c97cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_36c980:
    // 0x36c980: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36c980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c984: 0x3e00008  jr          $ra
    ctx->pc = 0x36C984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C984u;
        // 0x36c988: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C98Cu;
    // 0x36c98c: 0x0  nop
    ctx->pc = 0x36c98cu;
    // NOP
    ctx->pc = 0x36c990u;
}
