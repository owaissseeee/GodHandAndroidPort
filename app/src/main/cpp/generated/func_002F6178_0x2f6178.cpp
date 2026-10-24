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

// Function: func_002F6178
// Address: 0x2f6178 - 0x2f61c8
void func_002F6178_0x2f6178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F6178_0x2f6178");
#endif

    switch (ctx->pc) {
        case 0x2f619cu: goto label_2f619c;
        case 0x2f61b4u: goto label_2f61b4;
        default: break;
    }

    ctx->pc = 0x2f6178u;

    // 0x2f6178: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f6178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f617c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x2f617cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x2f6180: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f6180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2f6184: 0x8c626528  lw          $v0, 0x6528($v1)
    ctx->pc = 0x2f6184u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786528u));
    // 0x2f6188: 0x24706528  addiu       $s0, $v1, 0x6528
    ctx->pc = 0x2f6188u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25896));
    // 0x2f618c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F618Cu;
    {
        const bool branch_taken_0x2f618c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F618Cu;
        // 0x2f6190: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f618c) {
            ctx->pc = 0x2F61B4u;
            goto label_2f61b4;
        }
    }
    ctx->pc = 0x2F6194u;
    // 0x2f6194: 0xc0bbe98  jal         func_2EFA60
    ctx->pc = 0x2F6194u;
    SET_GPR_U32(ctx, 31, 0x2F619Cu);
    ctx->pc = 0x2EFA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFA60u, 0x2F6194u, 0x2F619Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F619Cu;
label_2f619c:
    // 0x2f619c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2f619cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2f61a0: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x2f61a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x2f61a4: 0x24a5f4e0  addiu       $a1, $a1, -0xB20
    ctx->pc = 0x2f61a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964448));
    // 0x2f61a8: 0x24c663f8  addiu       $a2, $a2, 0x63F8
    ctx->pc = 0x2f61a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25592));
    // 0x2f61ac: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x2F61ACu;
    SET_GPR_U32(ctx, 31, 0x2F61B4u);
    ctx->pc = 0x2F61B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F61ACu;
    // 0x2f61b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x2F61ACu, 0x2F61B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F61B4u;
label_2f61b4:
    // 0x2f61b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f61b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f61b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f61b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f61bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f61bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f61c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F61C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F61C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F61C0u;
        // 0x2f61c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F61C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F61C8u;
}
