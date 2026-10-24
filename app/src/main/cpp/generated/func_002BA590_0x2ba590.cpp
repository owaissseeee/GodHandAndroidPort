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

// Function: func_002BA590
// Address: 0x2ba590 - 0x2ba5e0
void func_002BA590_0x2ba590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BA590_0x2ba590");
#endif

    switch (ctx->pc) {
        case 0x2ba5b4u: goto label_2ba5b4;
        case 0x2ba5ccu: goto label_2ba5cc;
        default: break;
    }

    ctx->pc = 0x2ba590u;

    // 0x2ba590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ba590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ba594: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x2ba594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x2ba598: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ba598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ba59c: 0x8c626318  lw          $v0, 0x6318($v1)
    ctx->pc = 0x2ba59cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786318u));
    // 0x2ba5a0: 0x24706318  addiu       $s0, $v1, 0x6318
    ctx->pc = 0x2ba5a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25368));
    // 0x2ba5a4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BA5A4u;
    {
        const bool branch_taken_0x2ba5a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BA5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA5A4u;
        // 0x2ba5a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba5a4) {
            ctx->pc = 0x2BA5CCu;
            goto label_2ba5cc;
        }
    }
    ctx->pc = 0x2BA5ACu;
    // 0x2ba5ac: 0xc0aebe8  jal         func_2BAFA0
    ctx->pc = 0x2BA5ACu;
    SET_GPR_U32(ctx, 31, 0x2BA5B4u);
    ctx->pc = 0x2BAFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAFA0u, 0x2BA5ACu, 0x2BA5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA5B4u;
label_2ba5b4:
    // 0x2ba5b4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2ba5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2ba5b8: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x2ba5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x2ba5bc: 0x24a5bdd8  addiu       $a1, $a1, -0x4228
    ctx->pc = 0x2ba5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950360));
    // 0x2ba5c0: 0x24c60d68  addiu       $a2, $a2, 0xD68
    ctx->pc = 0x2ba5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3432));
    // 0x2ba5c4: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x2BA5C4u;
    SET_GPR_U32(ctx, 31, 0x2BA5CCu);
    ctx->pc = 0x2BA5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA5C4u;
    // 0x2ba5c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x2BA5C4u, 0x2BA5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA5CCu;
label_2ba5cc:
    // 0x2ba5cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ba5ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba5d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ba5d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ba5d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ba5d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ba5d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA5D8u;
        // 0x2ba5dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA5D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA5E0u;
}
