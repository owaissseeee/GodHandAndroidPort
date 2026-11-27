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

// Function: func_0037B620
// Address: 0x37b620 - 0x37b660
void func_0037B620_0x37b620(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037B620_0x37b620");
#endif

    if (__builtin_expect(ctx->pc != 0x37b620u, 0)) {
        switch (ctx->pc) {
            case 0x37b634u: goto label_37b634;
            case 0x37b63cu: goto label_37b63c;
            case 0x37b644u: goto label_37b644;
            case 0x37b64cu: goto label_37b64c;
            default: break;
        }
    }


    // 0x37b620: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37b624: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37b624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37b628: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37b628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37b62c: 0xc0ded98  jal         func_37B660
    SET_GPR_U32(ctx, 31, 0x37B634u);
    ctx->pc = 0x37B630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B62Cu;
    // 0x37b630: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_0037B660_0x37b660, 0x37b660u, 0x37b634u)) {
        return;
    }
label_37b634:
    // 0x37b634: 0xc0dec38  jal         func_37B0E0
    SET_GPR_U32(ctx, 31, 0x37B63Cu);
    ctx->pc = 0x37B638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B634u;
    // 0x37b638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_0037B0E0_0x37b0e0, 0x37b0e0u, 0x37b63cu)) {
        return;
    }
label_37b63c:
    // 0x37b63c: 0xc0dee46  jal         func_37B918
    SET_GPR_U32(ctx, 31, 0x37B644u);
    ctx->pc = 0x37B640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B63Cu;
    // 0x37b640: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_0037B918_0x37b918, 0x37b918u, 0x37b644u)) {
        return;
    }
label_37b644:
    // 0x37b644: 0xc0def24  jal         func_37BC90
    SET_GPR_U32(ctx, 31, 0x37B64Cu);
    ctx->pc = 0x37B648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B644u;
    // 0x37b648: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_0037BC90_0x37bc90, 0x37bc90u, 0x37b64cu)) {
        return;
    }
label_37b64c:
    // 0x37b64c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37b64cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37b650: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37b650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b654: 0x3e00008  jr          $ra
    ctx->pc = 0x37B654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B654u;
        // 0x37b658: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x37b65c: 0x0  nop
    // NOP
    ctx->pc = 0x37b660u;
}