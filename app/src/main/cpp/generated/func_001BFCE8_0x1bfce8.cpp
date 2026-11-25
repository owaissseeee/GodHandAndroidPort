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

// Function: func_001BFCE8
// Address: 0x1bfce8 - 0x1bfd28
void func_001BFCE8_0x1bfce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001BFCE8_0x1bfce8");
#endif

    if (__builtin_expect(ctx->pc != 0x1bfce8u, 0)) {
        switch (ctx->pc) {
            case 0x1bfd18u: goto label_1bfd18;
            default: break;
        }
    }


    // 0x1bfce8: 0x80382d  daddu       $a3, $a0, $zero
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfcec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bfcf0: 0x3c040060  lui         $a0, 0x60
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1bfcf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bfcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bfcf8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1bfcfc: 0x24050002  addiu       $a1, $zero, 0x2
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bfd00: 0x2406000a  addiu       $a2, $zero, 0xA
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1bfd04: 0x402d  daddu       $t0, $zero, $zero
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfd08: 0x482d  daddu       $t1, $zero, $zero
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfd0c: 0x502d  daddu       $t2, $zero, $zero
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfd10: 0xc0b2e92  jal         func_2CBA48
    SET_GPR_U32(ctx, 31, 0x1BFD18u);
    ctx->pc = 0x1BFD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFD10u;
    // 0x1bfd14: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cSnd_SeCall_2CBA48_0x2cba48, 0x2cba48u, 0x1bfd18u)) {
        return;
    }
    ctx->pc = 0x1BFD18u;
label_1bfd18:
    // 0x1bfd18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bfd18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bfd1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFD1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFD1Cu;
        // 0x1bfd20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFD1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x1bfd24: 0x0  nop
    // NOP
    ctx->pc = 0x1bfd28u;
}