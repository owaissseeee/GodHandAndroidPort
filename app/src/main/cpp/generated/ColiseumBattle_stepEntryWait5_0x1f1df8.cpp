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

// Function: ColiseumBattle_stepEntryWait5
// Address: 0x1f1df8 - 0x1f1ed8
void ColiseumBattle_stepEntryWait5_0x1f1df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ColiseumBattle_stepEntryWait5_0x1f1df8");
#endif

    switch (ctx->pc) {
        case 0x1f1e2cu: goto label_1f1e2c;
        case 0x1f1e4cu: goto label_1f1e4c;
        case 0x1f1e68u: goto label_1f1e68;
        case 0x1f1e84u: goto label_1f1e84;
        case 0x1f1ea0u: goto label_1f1ea0;
        case 0x1f1ebcu: goto label_1f1ebc;
        default: break;
    }

    ctx->pc = 0x1f1df8u;

    // 0x1f1df8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f1df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f1dfc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f1dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f1e00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f1e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f1e04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f1e04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1e08: 0x8e030b94  lw          $v1, 0xB94($s0)
    ctx->pc = 0x1f1e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2964)));
    // 0x1f1e0c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1E0Cu;
    {
        const bool branch_taken_0x1f1e0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1E0Cu;
        // 0x1f1e10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1e0c) {
            ctx->pc = 0x1F1E24u;
            goto label_1f1e24;
        }
    }
    ctx->pc = 0x1F1E14u;
    // 0x1f1e14: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F1E14u;
    {
        const bool branch_taken_0x1f1e14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f1e14) {
            ctx->pc = 0x1F1E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1E14u;
            // 0x1f1e18: 0x8e040c64  lw          $a0, 0xC64($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1E3Cu;
            goto label_1f1e3c;
        }
    }
    ctx->pc = 0x1F1E1Cu;
    // 0x1f1e1c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1F1E1Cu;
    {
        const bool branch_taken_0x1f1e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1E1Cu;
        // 0x1f1e20: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1e1c) {
            ctx->pc = 0x1F1EC8u;
            goto label_1f1ec8;
        }
    }
    ctx->pc = 0x1F1E24u;
label_1f1e24:
    // 0x1f1e24: 0xc07be5e  jal         func_1EF978
    ctx->pc = 0x1F1E24u;
    SET_GPR_U32(ctx, 31, 0x1F1E2Cu);
    ctx->pc = 0x1F1E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1E24u;
    // 0x1f1e28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF978u, 0x1F1E24u, 0x1F1E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1E2Cu;
label_1f1e2c:
    // 0x1f1e2c: 0x8e020b94  lw          $v0, 0xB94($s0)
    ctx->pc = 0x1f1e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2964)));
    // 0x1f1e30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f1e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f1e34: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1F1E34u;
    {
        const bool branch_taken_0x1f1e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1E34u;
        // 0x1f1e38: 0xae020b94  sw          $v0, 0xB94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2964), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1e34) {
            ctx->pc = 0x1F1EC4u;
            goto label_1f1ec4;
        }
    }
    ctx->pc = 0x1F1E3Cu;
label_1f1e3c:
    // 0x1f1e3c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F1E3Cu;
    {
        const bool branch_taken_0x1f1e3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1e3c) {
            ctx->pc = 0x1F1E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1E3Cu;
            // 0x1f1e40: 0x8e040c68  lw          $a0, 0xC68($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1E58u;
            goto label_1f1e58;
        }
    }
    ctx->pc = 0x1F1E44u;
    // 0x1f1e44: 0xc070924  jal         func_1C2490
    ctx->pc = 0x1F1E44u;
    SET_GPR_U32(ctx, 31, 0x1F1E4Cu);
    ctx->pc = 0x1C2490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2490u, 0x1F1E44u, 0x1F1E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1E4Cu;
label_1f1e4c:
    // 0x1f1e4c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F1E4Cu;
    {
        const bool branch_taken_0x1f1e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1e4c) {
            ctx->pc = 0x1F1E50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1E4Cu;
            // 0x1f1e50: 0xae000c64  sw          $zero, 0xC64($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 3172), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1E54u;
            goto label_1f1e54;
        }
    }
    ctx->pc = 0x1F1E54u;
label_1f1e54:
    // 0x1f1e54: 0x8e040c68  lw          $a0, 0xC68($s0)
    ctx->pc = 0x1f1e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3176)));
label_1f1e58:
    // 0x1f1e58: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F1E58u;
    {
        const bool branch_taken_0x1f1e58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1e58) {
            ctx->pc = 0x1F1E5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1E58u;
            // 0x1f1e5c: 0x8e040c6c  lw          $a0, 0xC6C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1E74u;
            goto label_1f1e74;
        }
    }
    ctx->pc = 0x1F1E60u;
    // 0x1f1e60: 0xc070924  jal         func_1C2490
    ctx->pc = 0x1F1E60u;
    SET_GPR_U32(ctx, 31, 0x1F1E68u);
    ctx->pc = 0x1C2490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2490u, 0x1F1E60u, 0x1F1E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1E68u;
label_1f1e68:
    // 0x1f1e68: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F1E68u;
    {
        const bool branch_taken_0x1f1e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1e68) {
            ctx->pc = 0x1F1E6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1E68u;
            // 0x1f1e6c: 0xae000c68  sw          $zero, 0xC68($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 3176), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1E70u;
            goto label_1f1e70;
        }
    }
    ctx->pc = 0x1F1E70u;
label_1f1e70:
    // 0x1f1e70: 0x8e040c6c  lw          $a0, 0xC6C($s0)
    ctx->pc = 0x1f1e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3180)));
label_1f1e74:
    // 0x1f1e74: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F1E74u;
    {
        const bool branch_taken_0x1f1e74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1e74) {
            ctx->pc = 0x1F1E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1E74u;
            // 0x1f1e78: 0x8e040c70  lw          $a0, 0xC70($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1E90u;
            goto label_1f1e90;
        }
    }
    ctx->pc = 0x1F1E7Cu;
    // 0x1f1e7c: 0xc070924  jal         func_1C2490
    ctx->pc = 0x1F1E7Cu;
    SET_GPR_U32(ctx, 31, 0x1F1E84u);
    ctx->pc = 0x1C2490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2490u, 0x1F1E7Cu, 0x1F1E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1E84u;
label_1f1e84:
    // 0x1f1e84: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F1E84u;
    {
        const bool branch_taken_0x1f1e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1e84) {
            ctx->pc = 0x1F1E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1E84u;
            // 0x1f1e88: 0xae000c6c  sw          $zero, 0xC6C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 3180), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1E8Cu;
            goto label_1f1e8c;
        }
    }
    ctx->pc = 0x1F1E8Cu;
label_1f1e8c:
    // 0x1f1e8c: 0x8e040c70  lw          $a0, 0xC70($s0)
    ctx->pc = 0x1f1e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3184)));
label_1f1e90:
    // 0x1f1e90: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F1E90u;
    {
        const bool branch_taken_0x1f1e90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1e90) {
            ctx->pc = 0x1F1E94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1E90u;
            // 0x1f1e94: 0x8e040c74  lw          $a0, 0xC74($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1EACu;
            goto label_1f1eac;
        }
    }
    ctx->pc = 0x1F1E98u;
    // 0x1f1e98: 0xc070924  jal         func_1C2490
    ctx->pc = 0x1F1E98u;
    SET_GPR_U32(ctx, 31, 0x1F1EA0u);
    ctx->pc = 0x1C2490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2490u, 0x1F1E98u, 0x1F1EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1EA0u;
label_1f1ea0:
    // 0x1f1ea0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F1EA0u;
    {
        const bool branch_taken_0x1f1ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1ea0) {
            ctx->pc = 0x1F1EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1EA0u;
            // 0x1f1ea4: 0xae000c70  sw          $zero, 0xC70($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 3184), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1EA8u;
            goto label_1f1ea8;
        }
    }
    ctx->pc = 0x1F1EA8u;
label_1f1ea8:
    // 0x1f1ea8: 0x8e040c74  lw          $a0, 0xC74($s0)
    ctx->pc = 0x1f1ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3188)));
label_1f1eac:
    // 0x1f1eac: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F1EACu;
    {
        const bool branch_taken_0x1f1eac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1eac) {
            ctx->pc = 0x1F1EB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1EACu;
            // 0x1f1eb0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1EC8u;
            goto label_1f1ec8;
        }
    }
    ctx->pc = 0x1F1EB4u;
    // 0x1f1eb4: 0xc070924  jal         func_1C2490
    ctx->pc = 0x1F1EB4u;
    SET_GPR_U32(ctx, 31, 0x1F1EBCu);
    ctx->pc = 0x1C2490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2490u, 0x1F1EB4u, 0x1F1EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1EBCu;
label_1f1ebc:
    // 0x1f1ebc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F1EBCu;
    {
        const bool branch_taken_0x1f1ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1ebc) {
            ctx->pc = 0x1F1EC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1EBCu;
            // 0x1f1ec0: 0xae000c74  sw          $zero, 0xC74($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 3188), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1EC4u;
            goto label_1f1ec4;
        }
    }
    ctx->pc = 0x1F1EC4u;
label_1f1ec4:
    // 0x1f1ec4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f1ec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f1ec8:
    // 0x1f1ec8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f1ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f1ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1ECCu;
        // 0x1f1ed0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1ED4u;
    // 0x1f1ed4: 0x0  nop
    ctx->pc = 0x1f1ed4u;
    // NOP
    ctx->pc = 0x1f1ed8u;
}
