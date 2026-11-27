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

// Function: func_00348AC8
// Address: 0x348ac8 - 0x348b00
void func_00348AC8_0x348ac8(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00348AC8_0x348ac8");
#endif

    if (__builtin_expect(ctx->pc != 0x348ac8u, 0)) {
        switch (ctx->pc) {
            case 0x348aecu: goto label_348aec;
            default: break;
        }
    }


    // 0x348ac8: 0xa0182d  daddu       $v1, $a1, $zero
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348acc: 0x80102d  daddu       $v0, $a0, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348ad0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x348ad4: 0xc0382d  daddu       $a3, $a2, $zero
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348ad8: 0x24040005  addiu       $a0, $zero, 0x5
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x348adc: 0x40282d  daddu       $a1, $v0, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348ae0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x348ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x348ae4: 0xc0cee04  jal         func_33B810
    SET_GPR_U32(ctx, 31, 0x348AECu);
    ctx->pc = 0x348AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348AE4u;
    // 0x348ae8: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_0033B810_0x33b810, 0x33b810u, 0x348aecu)) {
        return;
    }
label_348aec:
    // 0x348aec: 0x3c030076  lui         $v1, 0x76
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)118 << 16));
    // 0x348af0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x348af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x348af4: 0xac620d8c  sw          $v0, 0xD8C($v1)
    ctx->pc = 0x348af4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x760D8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x760D8Cu, _value); } while (0);
    // 0x348af8: 0x3e00008  jr          $ra
    ctx->pc = 0x348AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348AF8u;
        // 0x348afc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348B00u;
}