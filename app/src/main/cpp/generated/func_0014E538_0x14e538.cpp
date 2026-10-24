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

// Function: func_0014E538
// Address: 0x14e538 - 0x14e598
void func_0014E538_0x14e538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0014E538_0x14e538");
#endif

    switch (ctx->pc) {
        case 0x14e55cu: goto label_14e55c;
        case 0x14e574u: goto label_14e574;
        default: break;
    }

    ctx->pc = 0x14e538u;

    // 0x14e538: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14e538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14e53c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x14e53cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x14e540: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14e540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14e544: 0x8c6256d8  lw          $v0, 0x56D8($v1)
    ctx->pc = 0x14e544u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7856D8u));
    // 0x14e548: 0x247056d8  addiu       $s0, $v1, 0x56D8
    ctx->pc = 0x14e548u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22232));
    // 0x14e54c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14E54Cu;
    {
        const bool branch_taken_0x14e54c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E54Cu;
        // 0x14e550: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e54c) {
            ctx->pc = 0x14E574u;
            goto label_14e574;
        }
    }
    ctx->pc = 0x14E554u;
    // 0x14e554: 0xc05418e  jal         func_150638
    ctx->pc = 0x14E554u;
    SET_GPR_U32(ctx, 31, 0x14E55Cu);
    ctx->pc = 0x150638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150638u, 0x14E554u, 0x14E55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E55Cu;
label_14e55c:
    // 0x14e55c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x14e55cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x14e560: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x14e560u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x14e564: 0x24a5ead8  addiu       $a1, $a1, -0x1528
    ctx->pc = 0x14e564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961880));
    // 0x14e568: 0x24c60d30  addiu       $a2, $a2, 0xD30
    ctx->pc = 0x14e568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3376));
    // 0x14e56c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x14E56Cu;
    SET_GPR_U32(ctx, 31, 0x14E574u);
    ctx->pc = 0x14E570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E56Cu;
    // 0x14e570: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x14E56Cu, 0x14E574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E574u;
label_14e574:
    // 0x14e574: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14e574u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e578: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14e578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e57c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14e57cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14e580: 0x3e00008  jr          $ra
    ctx->pc = 0x14E580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E580u;
        // 0x14e584: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E588u;
    // 0x14e588: 0xac8502c0  sw          $a1, 0x2C0($a0)
    ctx->pc = 0x14e588u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 704), GPR_U32(ctx, 5));
    // 0x14e58c: 0x0  nop
    ctx->pc = 0x14e58cu;
    // NOP
    // 0x14e590: 0xac820250  sw          $v0, 0x250($a0)
    ctx->pc = 0x14e590u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 2));
    // 0x14e594: 0x0  nop
    ctx->pc = 0x14e594u;
    // NOP
    ctx->pc = 0x14e598u;
}
