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

// Function: func_00171B10
// Address: 0x171b10 - 0x171b48
void func_00171B10_0x171b10(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00171B10_0x171b10");
#endif

    if (__builtin_expect(ctx->pc != 0x171b10u, 0)) {
        switch (ctx->pc) {
            case 0x171b24u: goto label_171b24;
            default: break;
        }
    }


    // 0x171b10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x171b14: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x171b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x171b18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x171b1c: 0xc06f560  jal         func_1BD580
    SET_GPR_U32(ctx, 31, 0x171B24u);
    ctx->pc = 0x171B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171B1Cu;
    // 0x171b20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_001BD580_0x1bd580, 0x1bd580u, 0x171b24u)) {
        return;
    }
label_171b24:
    // 0x171b24: 0x3c030042  lui         $v1, 0x42
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x171b28: 0x200102d  daddu       $v0, $s0, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171b2c: 0x24630d68  addiu       $v1, $v1, 0xD68
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3432));
    // 0x171b30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171b34: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x171b34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x171b38: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x171b38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x171B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171B3Cu;
        // 0x171b40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x171b44: 0x0  nop
    // NOP
    ctx->pc = 0x171b48u;
}