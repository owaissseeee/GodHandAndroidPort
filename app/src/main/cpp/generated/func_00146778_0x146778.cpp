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

// Function: func_00146778
// Address: 0x146778 - 0x1467e8
void func_00146778_0x146778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00146778_0x146778");
#endif

    switch (ctx->pc) {
        case 0x14679cu: goto label_14679c;
        case 0x1467b4u: goto label_1467b4;
        default: break;
    }

    ctx->pc = 0x146778u;

    // 0x146778: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x146778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14677c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x14677cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x146780: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x146780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x146784: 0x8c625698  lw          $v0, 0x5698($v1)
    ctx->pc = 0x146784u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785698u));
    // 0x146788: 0x24705698  addiu       $s0, $v1, 0x5698
    ctx->pc = 0x146788u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22168));
    // 0x14678c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14678Cu;
    {
        const bool branch_taken_0x14678c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14678Cu;
        // 0x146790: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14678c) {
            ctx->pc = 0x1467B4u;
            goto label_1467b4;
        }
    }
    ctx->pc = 0x146794u;
    // 0x146794: 0xc04f1d6  jal         func_13C758
    ctx->pc = 0x146794u;
    SET_GPR_U32(ctx, 31, 0x14679Cu);
    ctx->pc = 0x13C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C758u, 0x146794u, 0x14679Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14679Cu;
label_14679c:
    // 0x14679c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x14679cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x1467a0: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x1467a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x1467a4: 0x24a5e830  addiu       $a1, $a1, -0x17D0
    ctx->pc = 0x1467a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961200));
    // 0x1467a8: 0x24c60d28  addiu       $a2, $a2, 0xD28
    ctx->pc = 0x1467a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3368));
    // 0x1467ac: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1467ACu;
    SET_GPR_U32(ctx, 31, 0x1467B4u);
    ctx->pc = 0x1467B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1467ACu;
    // 0x1467b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1467ACu, 0x1467B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1467B4u;
label_1467b4:
    // 0x1467b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1467b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1467b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1467b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1467bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1467bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1467c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1467C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1467C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1467C0u;
        // 0x1467c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1467C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1467C8u;
    // 0x1467c8: 0xac820090  sw          $v0, 0x90($a0)
    ctx->pc = 0x1467c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 2));
    // 0x1467cc: 0x0  nop
    ctx->pc = 0x1467ccu;
    // NOP
    // 0x1467d0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1467d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1467d4: 0x0  nop
    ctx->pc = 0x1467d4u;
    // NOP
    // 0x1467d8: 0xac820090  sw          $v0, 0x90($a0)
    ctx->pc = 0x1467d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 2));
    // 0x1467dc: 0x0  nop
    ctx->pc = 0x1467dcu;
    // NOP
    // 0x1467e0: 0xac820090  sw          $v0, 0x90($a0)
    ctx->pc = 0x1467e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 2));
    // 0x1467e4: 0x0  nop
    ctx->pc = 0x1467e4u;
    // NOP
    ctx->pc = 0x1467e8u;
}
