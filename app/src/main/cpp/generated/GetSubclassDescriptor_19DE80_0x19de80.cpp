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

// Function: GetSubclassDescriptor_19DE80
// Address: 0x19de80 - 0x19ded0
void GetSubclassDescriptor_19DE80_0x19de80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSubclassDescriptor_19DE80_0x19de80");
#endif

    if (__builtin_expect(ctx->pc != 0x19de80u, 0)) {
        switch (ctx->pc) {
            case 0x19dea4u: goto label_19dea4;
            case 0x19debcu: goto label_19debc;
            default: break;
        }
    }


    // 0x19de80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19de84: 0x3c030078  lui         $v1, 0x78
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x19de88: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19de88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19de8c: 0x8c625e38  lw          $v0, 0x5E38($v1)
    ctx->pc = 0x19de8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785E38u));
    // 0x19de90: 0x24705e38  addiu       $s0, $v1, 0x5E38
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24120));
    // 0x19de94: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19DE94u;
    {
        const bool branch_taken_0x19de94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DE94u;
        // 0x19de98: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19de94) {
            ctx->pc = 0x19DEBCu;
            goto label_19debc;
        }
    }
    // 0x19de9c: 0xc070efa  jal         func_1C3BE8
    ctx->pc = 0x19DE9Cu;
    SET_GPR_U32(ctx, 31, 0x19DEA4u);
    if (!runtime->callDirectStatic(rdram, ctx, &GetOrInitGlobal785798_1C3BE8_0x1c3be8, 0x1c3be8u, 0x19dea4u)) {
        return;
    }
    ctx->pc = 0x19DEA4u;
label_19dea4:
    // 0x19dea4: 0x3c050042  lui         $a1, 0x42
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x19dea8: 0x3c060078  lui         $a2, 0x78
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x19deac: 0x24a56168  addiu       $a1, $a1, 0x6168
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24936));
    // 0x19deb0: 0x24c65798  addiu       $a2, $a2, 0x5798
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22424));
    // 0x19deb4: 0xc0c7baa  jal         func_31EEA8
    SET_GPR_U32(ctx, 31, 0x19DEBCu);
    ctx->pc = 0x19DEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DEB4u;
    // 0x19deb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SetField_0_4_8_31EEA8_0x31eea8, 0x31eea8u, 0x19debcu)) {
        return;
    }
    ctx->pc = 0x19DEBCu;
label_19debc:
    // 0x19debc: 0x200102d  daddu       $v0, $s0, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dec0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19dec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19dec4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19dec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19dec8: 0x3e00008  jr          $ra
    ctx->pc = 0x19DEC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DEC8u;
        // 0x19decc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DEC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DED0u;
}