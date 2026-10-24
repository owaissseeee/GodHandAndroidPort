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

// Function: func_001B6710
// Address: 0x1b6710 - 0x1b6758
void func_001B6710_0x1b6710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B6710_0x1b6710");
#endif

    switch (ctx->pc) {
        case 0x1b6724u: goto label_1b6724;
        default: break;
    }

    ctx->pc = 0x1b6710u;

    // 0x1b6710: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b6710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b6714: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b6714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b6718: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b6718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b671c: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x1B671Cu;
    SET_GPR_U32(ctx, 31, 0x1B6724u);
    ctx->pc = 0x1B6720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B671Cu;
    // 0x1b6720: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x1B671Cu, 0x1B6724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6724u;
label_1b6724:
    // 0x1b6724: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1b6724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1b6728: 0x24638928  addiu       $v1, $v1, -0x76D8
    ctx->pc = 0x1b6728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936872));
    // 0x1b672c: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x1b672cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x1b6730: 0xfa000600  sqc2        $vf0, 0x600($s0)
    ctx->pc = 0x1b6730u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1536), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b6734: 0xfa000610  sqc2        $vf0, 0x610($s0)
    ctx->pc = 0x1b6734u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1552), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b6738: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b6738u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b673c: 0xae000620  sw          $zero, 0x620($s0)
    ctx->pc = 0x1b673cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1568), GPR_U32(ctx, 0));
    // 0x1b6740: 0xae000624  sw          $zero, 0x624($s0)
    ctx->pc = 0x1b6740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1572), GPR_U32(ctx, 0));
    // 0x1b6744: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b6744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6748: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b6748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b674c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B674Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B674Cu;
        // 0x1b6750: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B674Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6754u;
    // 0x1b6754: 0x0  nop
    ctx->pc = 0x1b6754u;
    // NOP
    ctx->pc = 0x1b6758u;
}
