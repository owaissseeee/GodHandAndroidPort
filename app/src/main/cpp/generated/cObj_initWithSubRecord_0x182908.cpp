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

// Function: cObj_initWithSubRecord
// Address: 0x182908 - 0x182958
void cObj_initWithSubRecord_0x182908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cObj_initWithSubRecord_0x182908");
#endif

    switch (ctx->pc) {
        case 0x182938u: goto label_182938;
        case 0x182944u: goto label_182944;
        default: break;
    }

    ctx->pc = 0x182908u;

    // 0x182908: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x182908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18290c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x18290cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x182910: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x182910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x182914: 0x24422a80  addiu       $v0, $v0, 0x2A80
    ctx->pc = 0x182914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10880));
    // 0x182918: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x182918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18291c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18291cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182920: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x182920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x182924: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x182924u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182928: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x182928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x18292c: 0x26040b10  addiu       $a0, $s0, 0xB10
    ctx->pc = 0x18292cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2832));
    // 0x182930: 0xc0ab4a2  jal         func_2AD288
    ctx->pc = 0x182930u;
    SET_GPR_U32(ctx, 31, 0x182938u);
    ctx->pc = 0x182934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182930u;
    // 0x182934: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD288u, 0x182930u, 0x182938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182938u;
label_182938:
    // 0x182938: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18293c: 0xc06dbce  jal         func_1B6F38
    ctx->pc = 0x18293Cu;
    SET_GPR_U32(ctx, 31, 0x182944u);
    ctx->pc = 0x182940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18293Cu;
    // 0x182940: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F38u, 0x18293Cu, 0x182944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182944u;
label_182944:
    // 0x182944: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x182944u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182948: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x182948u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18294c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18294cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182950: 0x3e00008  jr          $ra
    ctx->pc = 0x182950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182950u;
        // 0x182954: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182958u;
}
