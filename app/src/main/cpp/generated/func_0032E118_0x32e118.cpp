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

// Function: func_0032E118
// Address: 0x32e118 - 0x32e150
void func_0032E118_0x32e118(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032E118_0x32e118");
#endif

    if (__builtin_expect(ctx->pc != 0x32e118u, 0)) {
        switch (ctx->pc) {
            case 0x32e12cu: goto label_32e12c;
            case 0x32e134u: goto label_32e134;
            case 0x32e13cu: goto label_32e13c;
            default: break;
        }
    }


    // 0x32e118: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32e11c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32e11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32e120: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32e120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32e124: 0xc0cff28  jal         func_33FCA0
    SET_GPR_U32(ctx, 31, 0x32E12Cu);
    ctx->pc = 0x32E128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E124u;
    // 0x32e128: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &Obj33F8_NoOp_FCA0_0x33fca0, 0x33fca0u, 0x32e12cu)) {
        return;
    }
label_32e12c:
    // 0x32e12c: 0xc0cb854  jal         func_32E150
    SET_GPR_U32(ctx, 31, 0x32E134u);
    ctx->pc = 0x32E130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E12Cu;
    // 0x32e130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_0032E150_0x32e150, 0x32e150u, 0x32e134u)) {
        return;
    }
label_32e134:
    // 0x32e134: 0xc0cff2a  jal         func_33FCA8
    SET_GPR_U32(ctx, 31, 0x32E13Cu);
    ctx->pc = 0x32E138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E134u;
    // 0x32e138: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &Obj33F8_NoOp_FCA8_0x33fca8, 0x33fca8u, 0x32e13cu)) {
        return;
    }
label_32e13c:
    // 0x32e13c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32e13cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32e140: 0x200102d  daddu       $v0, $s0, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e144: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32e144u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32e148: 0x3e00008  jr          $ra
    ctx->pc = 0x32E148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E148u;
        // 0x32e14c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E150u;
}