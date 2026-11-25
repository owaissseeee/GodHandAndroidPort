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

// Function: func_00180878
// Address: 0x180878 - 0x1808c8
void func_00180878_0x180878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00180878_0x180878");
#endif

    if (__builtin_expect(ctx->pc != 0x180878u, 0)) {
        switch (ctx->pc) {
            case 0x18089cu: goto label_18089c;
            case 0x1808b4u: goto label_1808b4;
            default: break;
        }
    }


    // 0x180878: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18087c: 0x3c030078  lui         $v1, 0x78
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x180880: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x180880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x180884: 0x8c625a48  lw          $v0, 0x5A48($v1)
    ctx->pc = 0x180884u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785A48u));
    // 0x180888: 0x24705a48  addiu       $s0, $v1, 0x5A48
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23112));
    // 0x18088c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18088Cu;
    {
        const bool branch_taken_0x18088c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x180890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18088Cu;
        // 0x180890: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18088c) {
            ctx->pc = 0x1808B4u;
            goto label_1808b4;
        }
    }
    // 0x180894: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x180894u;
    SET_GPR_U32(ctx, 31, 0x18089Cu);
    if (!runtime->callDirectStatic(rdram, ctx, &GetOrInitGlobal785878_1B8058_0x1b8058, 0x1b8058u, 0x18089cu)) {
        return;
    }
    ctx->pc = 0x18089Cu;
label_18089c:
    // 0x18089c: 0x3c050042  lui         $a1, 0x42
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x1808a0: 0x3c060078  lui         $a2, 0x78
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1808a4: 0x24a52610  addiu       $a1, $a1, 0x2610
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9744));
    // 0x1808a8: 0x24c65878  addiu       $a2, $a2, 0x5878
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x1808ac: 0xc0c7baa  jal         func_31EEA8
    SET_GPR_U32(ctx, 31, 0x1808B4u);
    ctx->pc = 0x1808B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1808ACu;
    // 0x1808b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SetField_0_4_8_31EEA8_0x31eea8, 0x31eea8u, 0x1808b4u)) {
        return;
    }
    ctx->pc = 0x1808B4u;
label_1808b4:
    // 0x1808b4: 0x200102d  daddu       $v0, $s0, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1808b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1808b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1808bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1808bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1808c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1808C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1808C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1808C0u;
        // 0x1808c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1808C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1808C8u;
}