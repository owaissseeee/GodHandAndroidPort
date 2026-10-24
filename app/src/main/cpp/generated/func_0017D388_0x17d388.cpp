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

// Function: func_0017D388
// Address: 0x17d388 - 0x17d3d8
void func_0017D388_0x17d388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017D388_0x17d388");
#endif

    switch (ctx->pc) {
        case 0x17d3acu: goto label_17d3ac;
        case 0x17d3c4u: goto label_17d3c4;
        default: break;
    }

    ctx->pc = 0x17d388u;

    // 0x17d388: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17d388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17d38c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x17d38cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x17d390: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17d390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17d394: 0x8c625998  lw          $v0, 0x5998($v1)
    ctx->pc = 0x17d394u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785998u));
    // 0x17d398: 0x24705998  addiu       $s0, $v1, 0x5998
    ctx->pc = 0x17d398u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22936));
    // 0x17d39c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17D39Cu;
    {
        const bool branch_taken_0x17d39c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D39Cu;
        // 0x17d3a0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d39c) {
            ctx->pc = 0x17D3C4u;
            goto label_17d3c4;
        }
    }
    ctx->pc = 0x17D3A4u;
    // 0x17d3a4: 0xc0723cc  jal         func_1C8F30
    ctx->pc = 0x17D3A4u;
    SET_GPR_U32(ctx, 31, 0x17D3ACu);
    ctx->pc = 0x1C8F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8F30u, 0x17D3A4u, 0x17D3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D3ACu;
label_17d3ac:
    // 0x17d3ac: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x17d3acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x17d3b0: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x17d3b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x17d3b4: 0x24a51e20  addiu       $a1, $a1, 0x1E20
    ctx->pc = 0x17d3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7712));
    // 0x17d3b8: 0x24c658b8  addiu       $a2, $a2, 0x58B8
    ctx->pc = 0x17d3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22712));
    // 0x17d3bc: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x17D3BCu;
    SET_GPR_U32(ctx, 31, 0x17D3C4u);
    ctx->pc = 0x17D3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D3BCu;
    // 0x17d3c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x17D3BCu, 0x17D3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D3C4u;
label_17d3c4:
    // 0x17d3c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17d3c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d3c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17d3c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d3cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17d3ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d3d0: 0x3e00008  jr          $ra
    ctx->pc = 0x17D3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D3D0u;
        // 0x17d3d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D3D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D3D8u;
}
