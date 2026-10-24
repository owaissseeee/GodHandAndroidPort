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

// Function: func_001A8930
// Address: 0x1a8930 - 0x1a8980
void func_001A8930_0x1a8930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A8930_0x1a8930");
#endif

    switch (ctx->pc) {
        case 0x1a8960u: goto label_1a8960;
        case 0x1a896cu: goto label_1a896c;
        default: break;
    }

    ctx->pc = 0x1a8930u;

    // 0x1a8930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a8930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a8934: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1a8934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1a8938: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a8938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1a893c: 0x24427a58  addiu       $v0, $v0, 0x7A58
    ctx->pc = 0x1a893cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31320));
    // 0x1a8940: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a8940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a8944: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a8944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8948: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a8948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a894c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a894cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8950: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x1a8950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x1a8954: 0x26040e40  addiu       $a0, $s0, 0xE40
    ctx->pc = 0x1a8954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3648));
    // 0x1a8958: 0xc0ab4a2  jal         func_2AD288
    ctx->pc = 0x1A8958u;
    SET_GPR_U32(ctx, 31, 0x1A8960u);
    ctx->pc = 0x1A895Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8958u;
    // 0x1a895c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD288u, 0x1A8958u, 0x1A8960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8960u;
label_1a8960:
    // 0x1a8960: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a8960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8964: 0xc06dbce  jal         func_1B6F38
    ctx->pc = 0x1A8964u;
    SET_GPR_U32(ctx, 31, 0x1A896Cu);
    ctx->pc = 0x1A8968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8964u;
    // 0x1a8968: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F38u, 0x1A8964u, 0x1A896Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A896Cu;
label_1a896c:
    // 0x1a896c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a896cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a8970: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a8970u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8974: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a8974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8978: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A897Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8978u;
        // 0x1a897c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8980u;
}
