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

// Function: func_002D4248
// Address: 0x2d4248 - 0x2d42b0
void func_002D4248_0x2d4248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D4248_0x2d4248");
#endif

    switch (ctx->pc) {
        case 0x2d4268u: goto label_2d4268;
        case 0x2d4294u: goto label_2d4294;
        default: break;
    }

    ctx->pc = 0x2d4248u;

    // 0x2d4248: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d4248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d424c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d424cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2d4250: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d4250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d4254: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d4254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4258: 0x26050058  addiu       $a1, $s0, 0x58
    ctx->pc = 0x2d4258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x2d425c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d425cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d4260: 0xc0d11ea  jal         func_3447A8
    ctx->pc = 0x2D4260u;
    SET_GPR_U32(ctx, 31, 0x2D4268u);
    ctx->pc = 0x2D4264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4260u;
    // 0x2d4264: 0x8e060008  lw          $a2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3447A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3447A8u, 0x2D4260u, 0x2D4268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4268u;
label_2d4268:
    // 0x2d4268: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d4268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d426c: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2D426Cu;
    {
        const bool branch_taken_0x2d426c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D4270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D426Cu;
        // 0x2d4270: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d426c) {
            ctx->pc = 0x2D42A0u;
            goto label_2d42a0;
        }
    }
    ctx->pc = 0x2D4274u;
    // 0x2d4274: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x2d4274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2d4278: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x2d4278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2d427c: 0x50450008  beql        $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D427Cu;
    {
        const bool branch_taken_0x2d427c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x2d427c) {
            ctx->pc = 0x2D4280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D427Cu;
            // 0x2d4280: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D42A0u;
            goto label_2d42a0;
        }
    }
    ctx->pc = 0x2D4284u;
    // 0x2d4284: 0x4a20005  bltzl       $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D4284u;
    {
        const bool branch_taken_0x2d4284 = (GPR_S64(ctx, 5) < 0);
        if (branch_taken_0x2d4284) {
            ctx->pc = 0x2D4288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D4284u;
            // 0x2d4288: 0xae02005c  sw          $v0, 0x5C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D429Cu;
            goto label_2d429c;
        }
    }
    ctx->pc = 0x2D428Cu;
    // 0x2d428c: 0xc0d13a2  jal         func_344E88
    ctx->pc = 0x2D428Cu;
    SET_GPR_U32(ctx, 31, 0x2D4294u);
    ctx->pc = 0x2D4290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D428Cu;
    // 0x2d4290: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344E88u, 0x2D428Cu, 0x2D4294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4294u;
label_2d4294:
    // 0x2d4294: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x2d4294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2d4298: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x2d4298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
label_2d429c:
    // 0x2d429c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d429cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d42a0:
    // 0x2d42a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d42a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d42a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d42a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d42a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D42A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D42ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D42A8u;
        // 0x2d42ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D42A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D42B0u;
}
