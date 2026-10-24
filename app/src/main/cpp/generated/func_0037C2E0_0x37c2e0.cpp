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

// Function: func_0037C2E0
// Address: 0x37c2e0 - 0x37c330
void func_0037C2E0_0x37c2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037C2E0_0x37c2e0");
#endif

    switch (ctx->pc) {
        case 0x37c300u: goto label_37c300;
        case 0x37c31cu: goto label_37c31c;
        default: break;
    }

    ctx->pc = 0x37c2e0u;

    // 0x37c2e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37c2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37c2e4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x37c2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x37c2e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37c2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37c2ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x37c2ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c2f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37c2f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c2f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37c2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37c2f8: 0xc0df5d8  jal         func_37D760
    ctx->pc = 0x37C2F8u;
    SET_GPR_U32(ctx, 31, 0x37C300u);
    ctx->pc = 0x37C2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C2F8u;
    // 0x37c2fc: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D760u, 0x37C2F8u, 0x37C300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C300u;
label_37c300:
    // 0x37c300: 0xa6220046  sh          $v0, 0x46($s1)
    ctx->pc = 0x37c300u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 70), (uint16_t)GPR_U32(ctx, 2));
    // 0x37c304: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37c304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c308: 0x9602003c  lhu         $v0, 0x3C($s0)
    ctx->pc = 0x37c308u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x37c30c: 0xa6220048  sh          $v0, 0x48($s1)
    ctx->pc = 0x37c30cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 72), (uint16_t)GPR_U32(ctx, 2));
    // 0x37c310: 0x9603001e  lhu         $v1, 0x1E($s0)
    ctx->pc = 0x37c310u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x37c314: 0xc0df5ca  jal         func_37D728
    ctx->pc = 0x37C314u;
    SET_GPR_U32(ctx, 31, 0x37C31Cu);
    ctx->pc = 0x37C318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C314u;
    // 0x37c318: 0xa623002e  sh          $v1, 0x2E($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 46), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D728u, 0x37C314u, 0x37C31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C31Cu;
label_37c31c:
    // 0x37c31c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x37c31cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37c320: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37c320u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37c324: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37c324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37c328: 0x3e00008  jr          $ra
    ctx->pc = 0x37C328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C328u;
        // 0x37c32c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37C330u;
}
