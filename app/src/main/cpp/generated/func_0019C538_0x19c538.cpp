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

// Function: func_0019C538
// Address: 0x19c538 - 0x19c588
void func_0019C538_0x19c538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019C538_0x19c538");
#endif

    switch (ctx->pc) {
        case 0x19c55cu: goto label_19c55c;
        case 0x19c574u: goto label_19c574;
        default: break;
    }

    ctx->pc = 0x19c538u;

    // 0x19c538: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19c538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19c53c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x19c53cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x19c540: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19c540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19c544: 0x8c625dd8  lw          $v0, 0x5DD8($v1)
    ctx->pc = 0x19c544u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785DD8u));
    // 0x19c548: 0x24705dd8  addiu       $s0, $v1, 0x5DD8
    ctx->pc = 0x19c548u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24024));
    // 0x19c54c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19C54Cu;
    {
        const bool branch_taken_0x19c54c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C54Cu;
        // 0x19c550: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c54c) {
            ctx->pc = 0x19C574u;
            goto label_19c574;
        }
    }
    ctx->pc = 0x19C554u;
    // 0x19c554: 0xc06f54a  jal         func_1BD528
    ctx->pc = 0x19C554u;
    SET_GPR_U32(ctx, 31, 0x19C55Cu);
    ctx->pc = 0x1BD528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD528u, 0x19C554u, 0x19C55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C55Cu;
label_19c55c:
    // 0x19c55c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x19c55cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x19c560: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x19c560u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x19c564: 0x24a55c40  addiu       $a1, $a1, 0x5C40
    ctx->pc = 0x19c564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23616));
    // 0x19c568: 0x24c659b8  addiu       $a2, $a2, 0x59B8
    ctx->pc = 0x19c568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22968));
    // 0x19c56c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x19C56Cu;
    SET_GPR_U32(ctx, 31, 0x19C574u);
    ctx->pc = 0x19C570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C56Cu;
    // 0x19c570: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x19C56Cu, 0x19C574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C574u;
label_19c574:
    // 0x19c574: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19c574u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c578: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c57c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19c57cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c580: 0x3e00008  jr          $ra
    ctx->pc = 0x19C580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C580u;
        // 0x19c584: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C588u;
}
