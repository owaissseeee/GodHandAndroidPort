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

// Function: sync_with_stdio__3iosi
// Address: 0x38afb0 - 0x38b030
void sync_with_stdio__3iosi_0x38afb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sync_with_stdio__3iosi_0x38afb0");
#endif

    ctx->pc = 0x38afb0u;

    // 0x38afb0: 0x3c0a003f  lui         $t2, 0x3F
    ctx->pc = 0x38afb0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)63 << 16));
    // 0x38afb4: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x38afb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38afb8: 0x8d423d18  lw          $v0, 0x3D18($t2)
    ctx->pc = 0x38afb8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F3D18u));
    // 0x38afbc: 0x1122001a  beq         $t1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x38AFBCu;
    {
        const bool branch_taken_0x38afbc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x38AFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AFBCu;
        // 0x38afc0: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38afbc) {
            ctx->pc = 0x38B028u;
            goto label_38b028;
        }
    }
    ctx->pc = 0x38AFC4u;
    // 0x38afc4: 0x11200007  beqz        $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x38AFC4u;
    {
        const bool branch_taken_0x38afc4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AFC4u;
        // 0x38afc8: 0x3c03003f  lui         $v1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38afc4) {
            ctx->pc = 0x38AFE4u;
            goto label_38afe4;
        }
    }
    ctx->pc = 0x38AFCCu;
    // 0x38afcc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x38afccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x38afd0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x38afd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x38afd4: 0x24634fd8  addiu       $v1, $v1, 0x4FD8
    ctx->pc = 0x38afd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20440));
    // 0x38afd8: 0x24425098  addiu       $v0, $v0, 0x5098
    ctx->pc = 0x38afd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20632));
    // 0x38afdc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x38AFDCu;
    {
        const bool branch_taken_0x38afdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AFDCu;
        // 0x38afe0: 0x24845038  addiu       $a0, $a0, 0x5038 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38afdc) {
            ctx->pc = 0x38AFFCu;
            goto label_38affc;
        }
    }
    ctx->pc = 0x38AFE4u;
label_38afe4:
    // 0x38afe4: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x38afe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x38afe8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x38afe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x38afec: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x38afecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x38aff0: 0x24634ed0  addiu       $v1, $v1, 0x4ED0
    ctx->pc = 0x38aff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20176));
    // 0x38aff4: 0x24424f80  addiu       $v0, $v0, 0x4F80
    ctx->pc = 0x38aff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20352));
    // 0x38aff8: 0x24844f28  addiu       $a0, $a0, 0x4F28
    ctx->pc = 0x38aff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20264));
label_38affc:
    // 0x38affc: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x38affcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x38b000: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x38b000u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x38b004: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x38b004u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x38b008: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x38b008u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x38b00c: 0xacc33db0  sw          $v1, 0x3DB0($a2)
    ctx->pc = 0x38b00cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3F3DB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F3DB0u, _value); } while (0);
    // 0x38b010: 0xace43d28  sw          $a0, 0x3D28($a3)
    ctx->pc = 0x38b010u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3F3D28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F3D28u, _value); } while (0);
    // 0x38b014: 0xaca23df0  sw          $v0, 0x3DF0($a1)
    ctx->pc = 0x38b014u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F3DF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F3DF0u, _value); } while (0);
    // 0x38b018: 0xad023d68  sw          $v0, 0x3D68($t0)
    ctx->pc = 0x38b018u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F3D68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F3D68u, _value); } while (0);
    // 0x38b01c: 0x8d423d18  lw          $v0, 0x3D18($t2)
    ctx->pc = 0x38b01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 15640)));
    // 0x38b020: 0x3e00008  jr          $ra
    ctx->pc = 0x38B020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B020u;
        // 0x38b024: 0xad493d18  sw          $t1, 0x3D18($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 15640), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38B028u;
label_38b028:
    // 0x38b028: 0x3e00008  jr          $ra
    ctx->pc = 0x38B028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38B030u;
}
