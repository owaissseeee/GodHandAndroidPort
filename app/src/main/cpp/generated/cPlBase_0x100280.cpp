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

// Function: cPlBase
// Address: 0x100280 - 0x1002c0
void cPlBase_0x100280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cPlBase_0x100280");
#endif

    switch (ctx->pc) {
        case 0x100294u: goto label_100294;
        default: break;
    }

    ctx->pc = 0x100280u;

    // 0x100280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x100280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x100284: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x100284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x100288: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x100288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10028c: 0xc0a9cce  jal         func_2A7338
    ctx->pc = 0x10028Cu;
    SET_GPR_U32(ctx, 31, 0x100294u);
    ctx->pc = 0x100290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10028Cu;
    // 0x100290: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7338u, 0x10028Cu, 0x100294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100294u;
label_100294:
    // 0x100294: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x100294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x100298: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x100298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    // 0x10029c: 0x2463b598  addiu       $v1, $v1, -0x4A68
    ctx->pc = 0x10029cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948248));
    // 0x1002a0: 0x2484b590  addiu       $a0, $a0, -0x4A70
    ctx->pc = 0x1002a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948240));
    // 0x1002a4: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x1002a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x1002a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1002a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1002ac: 0xae0404ac  sw          $a0, 0x4AC($s0)
    ctx->pc = 0x1002acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1196), GPR_U32(ctx, 4));
    // 0x1002b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1002b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1002b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1002b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1002b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1002B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1002BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1002B8u;
        // 0x1002bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1002B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1002C0u;
}
