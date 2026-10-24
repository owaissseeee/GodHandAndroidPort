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

// Function: func_0031F378
// Address: 0x31f378 - 0x31f3c8
void func_0031F378_0x31f378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031F378_0x31f378");
#endif

    switch (ctx->pc) {
        case 0x31f39cu: goto label_31f39c;
        case 0x31f3b4u: goto label_31f3b4;
        default: break;
    }

    ctx->pc = 0x31f378u;

    // 0x31f378: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31f378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31f37c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x31f37cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x31f380: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31f380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31f384: 0x8c626668  lw          $v0, 0x6668($v1)
    ctx->pc = 0x31f384u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786668u));
    // 0x31f388: 0x24706668  addiu       $s0, $v1, 0x6668
    ctx->pc = 0x31f388u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 26216));
    // 0x31f38c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31F38Cu;
    {
        const bool branch_taken_0x31f38c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F38Cu;
        // 0x31f390: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f38c) {
            ctx->pc = 0x31F3B4u;
            goto label_31f3b4;
        }
    }
    ctx->pc = 0x31F394u;
    // 0x31f394: 0xc0c863e  jal         func_3218F8
    ctx->pc = 0x31F394u;
    SET_GPR_U32(ctx, 31, 0x31F39Cu);
    ctx->pc = 0x3218F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3218F8u, 0x31F394u, 0x31F39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F39Cu;
label_31f39c:
    // 0x31f39c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x31f39cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x31f3a0: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x31f3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x31f3a4: 0x24a51090  addiu       $a1, $a1, 0x1090
    ctx->pc = 0x31f3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4240));
    // 0x31f3a8: 0x24c60da8  addiu       $a2, $a2, 0xDA8
    ctx->pc = 0x31f3a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3496));
    // 0x31f3ac: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x31F3ACu;
    SET_GPR_U32(ctx, 31, 0x31F3B4u);
    ctx->pc = 0x31F3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F3ACu;
    // 0x31f3b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x31F3ACu, 0x31F3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F3B4u;
label_31f3b4:
    // 0x31f3b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x31f3b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f3b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31f3b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31f3bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31f3bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31f3c0: 0x3e00008  jr          $ra
    ctx->pc = 0x31F3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F3C0u;
        // 0x31f3c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F3C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31F3C8u;
}
