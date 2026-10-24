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

// Function: func_00145410
// Address: 0x145410 - 0x145460
void func_00145410_0x145410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00145410_0x145410");
#endif

    switch (ctx->pc) {
        case 0x14543cu: goto label_14543c;
        default: break;
    }

    ctx->pc = 0x145410u;

    // 0x145410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x145410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x145414: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x145414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x145418: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x145418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14541c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14541cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x145420: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x145420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145424: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x145424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x145428: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x145428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14542c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x14542Cu;
    {
        const bool branch_taken_0x14542c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14542c) {
            ctx->pc = 0x145430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14542Cu;
            // 0x145430: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145454u;
            goto label_145454;
        }
    }
    ctx->pc = 0x145434u;
    // 0x145434: 0xc051324  jal         func_144C90
    ctx->pc = 0x145434u;
    SET_GPR_U32(ctx, 31, 0x14543Cu);
    ctx->pc = 0x144C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144C90u, 0x145434u, 0x14543Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14543Cu;
label_14543c:
    // 0x14543c: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x14543cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x145440: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x145440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
    // 0x145444: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x145444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x145448: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x145448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14544c: 0xae030090  sw          $v1, 0x90($s0)
    ctx->pc = 0x14544cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
    // 0x145450: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x145450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_145454:
    // 0x145454: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x145454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145458: 0x3e00008  jr          $ra
    ctx->pc = 0x145458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14545Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145458u;
        // 0x14545c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145460u;
}
