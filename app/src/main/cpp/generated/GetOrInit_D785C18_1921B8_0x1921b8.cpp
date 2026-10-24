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

// Function: GetOrInit_D785C18_1921B8
// Address: 0x1921b8 - 0x192210
void GetOrInit_D785C18_1921B8_0x1921b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetOrInit_D785C18_1921B8_0x1921b8");
#endif

    switch (ctx->pc) {
        case 0x1921dcu: goto label_1921dc;
        case 0x1921f4u: goto label_1921f4;
        default: break;
    }

    ctx->pc = 0x1921b8u;

    // 0x1921b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1921b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1921bc: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1921bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1921c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1921c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1921c4: 0x8c625c18  lw          $v0, 0x5C18($v1)
    ctx->pc = 0x1921c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785C18u));
    // 0x1921c8: 0x24705c18  addiu       $s0, $v1, 0x5C18
    ctx->pc = 0x1921c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23576));
    // 0x1921cc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1921CCu;
    {
        const bool branch_taken_0x1921cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1921D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1921CCu;
        // 0x1921d0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1921cc) {
            ctx->pc = 0x1921F4u;
            goto label_1921f4;
        }
    }
    ctx->pc = 0x1921D4u;
    // 0x1921d4: 0xc06f54a  jal         func_1BD528
    ctx->pc = 0x1921D4u;
    SET_GPR_U32(ctx, 31, 0x1921DCu);
    ctx->pc = 0x1BD528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD528u, 0x1921D4u, 0x1921DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1921DCu;
label_1921dc:
    // 0x1921dc: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x1921dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x1921e0: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1921e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1921e4: 0x24a542a0  addiu       $a1, $a1, 0x42A0
    ctx->pc = 0x1921e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17056));
    // 0x1921e8: 0x24c659b8  addiu       $a2, $a2, 0x59B8
    ctx->pc = 0x1921e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22968));
    // 0x1921ec: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1921ECu;
    SET_GPR_U32(ctx, 31, 0x1921F4u);
    ctx->pc = 0x1921F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1921ECu;
    // 0x1921f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1921ECu, 0x1921F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1921F4u;
label_1921f4:
    // 0x1921f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1921f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1921f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1921f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1921fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1921fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192200: 0x3e00008  jr          $ra
    ctx->pc = 0x192200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192200u;
        // 0x192204: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192208u;
    // 0x192208: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x192208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19220c: 0x0  nop
    ctx->pc = 0x19220cu;
    // NOP
    ctx->pc = 0x192210u;
}
