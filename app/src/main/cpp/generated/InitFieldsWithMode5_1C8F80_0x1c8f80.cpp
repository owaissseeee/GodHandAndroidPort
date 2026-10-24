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

// Function: InitFieldsWithMode5_1C8F80
// Address: 0x1c8f80 - 0x1c8fc8
void InitFieldsWithMode5_1C8F80_0x1c8f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitFieldsWithMode5_1C8F80_0x1c8f80");
#endif

    switch (ctx->pc) {
        case 0x1c8f94u: goto label_1c8f94;
        default: break;
    }

    ctx->pc = 0x1c8f80u;

    // 0x1c8f80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c8f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c8f84: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c8f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c8f88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c8f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c8f8c: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x1C8F8Cu;
    SET_GPR_U32(ctx, 31, 0x1C8F94u);
    ctx->pc = 0x1C8F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F8Cu;
    // 0x1c8f90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x1C8F8Cu, 0x1C8F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F94u;
label_1c8f94:
    // 0x1c8f94: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1c8f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1c8f98: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1c8f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c8f9c: 0x24639ec8  addiu       $v1, $v1, -0x6138
    ctx->pc = 0x1c8f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942408));
    // 0x1c8fa0: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1c8fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c8fa4: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x1c8fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x1c8fa8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c8fa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8fac: 0xae050600  sw          $a1, 0x600($s0)
    ctx->pc = 0x1c8facu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 5));
    // 0x1c8fb0: 0xae040604  sw          $a0, 0x604($s0)
    ctx->pc = 0x1c8fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1540), GPR_U32(ctx, 4));
    // 0x1c8fb4: 0xae000608  sw          $zero, 0x608($s0)
    ctx->pc = 0x1c8fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 0));
    // 0x1c8fb8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c8fb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8fbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c8fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8FC0u;
        // 0x1c8fc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8FC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8FC8u;
}
