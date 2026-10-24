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

// Function: func_0017F490
// Address: 0x17f490 - 0x17f4e0
void func_0017F490_0x17f490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017F490_0x17f490");
#endif

    switch (ctx->pc) {
        case 0x17f4b4u: goto label_17f4b4;
        case 0x17f4ccu: goto label_17f4cc;
        default: break;
    }

    ctx->pc = 0x17f490u;

    // 0x17f490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17f490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17f494: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x17f494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x17f498: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17f498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17f49c: 0x8c625a28  lw          $v0, 0x5A28($v1)
    ctx->pc = 0x17f49cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785A28u));
    // 0x17f4a0: 0x24705a28  addiu       $s0, $v1, 0x5A28
    ctx->pc = 0x17f4a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23080));
    // 0x17f4a4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17F4A4u;
    {
        const bool branch_taken_0x17f4a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F4A4u;
        // 0x17f4a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f4a4) {
            ctx->pc = 0x17F4CCu;
            goto label_17f4cc;
        }
    }
    ctx->pc = 0x17F4ACu;
    // 0x17f4ac: 0xc06f54a  jal         func_1BD528
    ctx->pc = 0x17F4ACu;
    SET_GPR_U32(ctx, 31, 0x17F4B4u);
    ctx->pc = 0x1BD528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD528u, 0x17F4ACu, 0x17F4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F4B4u;
label_17f4b4:
    // 0x17f4b4: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x17f4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x17f4b8: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x17f4b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x17f4bc: 0x24a52480  addiu       $a1, $a1, 0x2480
    ctx->pc = 0x17f4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9344));
    // 0x17f4c0: 0x24c659b8  addiu       $a2, $a2, 0x59B8
    ctx->pc = 0x17f4c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22968));
    // 0x17f4c4: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x17F4C4u;
    SET_GPR_U32(ctx, 31, 0x17F4CCu);
    ctx->pc = 0x17F4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F4C4u;
    // 0x17f4c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x17F4C4u, 0x17F4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F4CCu;
label_17f4cc:
    // 0x17f4cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17f4ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f4d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17f4d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f4d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17f4d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f4d8: 0x3e00008  jr          $ra
    ctx->pc = 0x17F4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F4D8u;
        // 0x17f4dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F4D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F4E0u;
}
