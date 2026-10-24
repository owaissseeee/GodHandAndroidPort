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

// Function: func_002C1270
// Address: 0x2c1270 - 0x2c12c8
void func_002C1270_0x2c1270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C1270_0x2c1270");
#endif

    switch (ctx->pc) {
        case 0x2c1288u: goto label_2c1288;
        case 0x2c12a0u: goto label_2c12a0;
        default: break;
    }

    ctx->pc = 0x2c1270u;

    // 0x2c1270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c1270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c1274: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2c1274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2c1278: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c1278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c127c: 0x24900074  addiu       $s0, $a0, 0x74
    ctx->pc = 0x2c127cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 116));
    // 0x2c1280: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c1280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c1284: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c1284u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c1288:
    // 0x2c1288: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2c1288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c128c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c128cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2c1290: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C1290u;
    {
        const bool branch_taken_0x2c1290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1290u;
        // 0x2c1294: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1290) {
            ctx->pc = 0x2C12A4u;
            goto label_2c12a4;
        }
    }
    ctx->pc = 0x2C1298u;
    // 0x2c1298: 0xc0c3d68  jal         func_30F5A0
    ctx->pc = 0x2C1298u;
    SET_GPR_U32(ctx, 31, 0x2C12A0u);
    ctx->pc = 0x30F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5A0u, 0x2C1298u, 0x2C12A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C12A0u;
label_2c12a0:
    // 0x2c12a0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2c12a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2c12a4:
    // 0x2c12a4: 0x2e220008  sltiu       $v0, $s1, 0x8
    ctx->pc = 0x2c12a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2c12a8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2C12A8u;
    {
        const bool branch_taken_0x2c12a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C12ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C12A8u;
        // 0x2c12ac: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c12a8) {
            ctx->pc = 0x2C1288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c1288;
        }
    }
    ctx->pc = 0x2C12B0u;
    // 0x2c12b0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2c12b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c12b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c12b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c12b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c12b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c12bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C12BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C12C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C12BCu;
        // 0x2c12c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C12BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C12C4u;
    // 0x2c12c4: 0x0  nop
    ctx->pc = 0x2c12c4u;
    // NOP
    ctx->pc = 0x2c12c8u;
}
