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

// Function: sceCdMmode
// Address: 0x399bd8 - 0x399cb0
void sceCdMmode_0x399bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceCdMmode_0x399bd8");
#endif

    switch (ctx->pc) {
        case 0x399c00u: goto label_399c00;
        case 0x399c1cu: goto label_399c1c;
        case 0x399c5cu: goto label_399c5c;
        case 0x399c70u: goto label_399c70;
        case 0x399c8cu: goto label_399c8c;
        default: break;
    }

    ctx->pc = 0x399bd8u;

    // 0x399bd8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x399bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x399bdc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x399bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x399be0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x399be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x399be4: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x399be4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x399be8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x399be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x399bec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x399becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399bf0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x399bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x399bf4: 0x26329c80  addiu       $s2, $s1, -0x6380
    ctx->pc = 0x399bf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941824));
    // 0x399bf8: 0xc0e63ac  jal         func_398EB0
    ctx->pc = 0x399BF8u;
    SET_GPR_U32(ctx, 31, 0x399C00u);
    ctx->pc = 0x399BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399BF8u;
    // 0x399bfc: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398EB0u, 0x399BF8u, 0x399C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399C00u;
label_399c00:
    // 0x399c00: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x399C00u;
    {
        const bool branch_taken_0x399c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x399c00) {
            ctx->pc = 0x399C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x399C00u;
            // 0x399c04: 0xae309c80  sw          $s0, -0x6380($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4294941824), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x399C10u;
            goto label_399c10;
        }
    }
    ctx->pc = 0x399C08u;
    // 0x399c08: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x399C08u;
    {
        const bool branch_taken_0x399c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399C08u;
        // 0x399c0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399c08) {
            ctx->pc = 0x399C90u;
            goto label_399c90;
        }
    }
    ctx->pc = 0x399C10u;
label_399c10:
    // 0x399c10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x399c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399c14: 0xc0eca14  jal         func_3B2850
    ctx->pc = 0x399C14u;
    SET_GPR_U32(ctx, 31, 0x399C1Cu);
    ctx->pc = 0x399C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399C14u;
    // 0x399c18: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2850u, 0x399C14u, 0x399C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399C1Cu;
label_399c1c:
    // 0x399c1c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x399c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x399c20: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x399c20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x399c24: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x399c24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x399c28: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x399c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x399c2c: 0x8c88a1ec  lw          $t0, -0x5E14($a0)
    ctx->pc = 0x399c2cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x3FA1ECu));
    // 0x399c30: 0x24509840  addiu       $s0, $v0, -0x67C0
    ctx->pc = 0x399c30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940736));
    // 0x399c34: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x399c34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x399c38: 0x8ccaa1f0  lw          $t2, -0x5E10($a2)
    ctx->pc = 0x399c38u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x3FA1F0u));
    // 0x399c3c: 0x8c65a1e8  lw          $a1, -0x5E18($v1)
    ctx->pc = 0x399c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FA1E8u));
    // 0x399c40: 0x2484a1c0  addiu       $a0, $a0, -0x5E40
    ctx->pc = 0x399c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943168));
    // 0x399c44: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x399c44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399c48: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x399c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x399c4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x399c4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399c50: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x399c50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399c54: 0xc0ecc4a  jal         func_3B3128
    ctx->pc = 0x399C54u;
    SET_GPR_U32(ctx, 31, 0x399C5Cu);
    ctx->pc = 0x399C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399C54u;
    // 0x399c58: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3128u, 0x399C54u, 0x399C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399C5Cu;
label_399c5c:
    // 0x399c5c: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x399C5Cu;
    {
        const bool branch_taken_0x399c5c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x399C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399C5Cu;
        // 0x399c60: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399c5c) {
            ctx->pc = 0x399C78u;
            goto label_399c78;
        }
    }
    ctx->pc = 0x399C64u;
    // 0x399c64: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x399c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x399c68: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x399C68u;
    SET_GPR_U32(ctx, 31, 0x399C70u);
    ctx->pc = 0x399C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399C68u;
    // 0x399c6c: 0x8c44866c  lw          $a0, -0x7994($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936172)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x399C68u, 0x399C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399C70u;
label_399c70:
    // 0x399c70: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x399C70u;
    {
        const bool branch_taken_0x399c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399C70u;
        // 0x399c74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399c70) {
            ctx->pc = 0x399C90u;
            goto label_399c90;
        }
    }
    ctx->pc = 0x399C78u;
label_399c78:
    // 0x399c78: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x399c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x399c7c: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x399c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x399c80: 0x8c64866c  lw          $a0, -0x7994($v1)
    ctx->pc = 0x399c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936172)));
    // 0x399c84: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x399C84u;
    SET_GPR_U32(ctx, 31, 0x399C8Cu);
    ctx->pc = 0x399C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399C84u;
    // 0x399c88: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x399C84u, 0x399C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399C8Cu;
label_399c8c:
    // 0x399c8c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x399c8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_399c90:
    // 0x399c90: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x399c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x399c94: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x399c94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x399c98: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x399c98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x399c9c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x399c9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x399ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x399CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399CA0u;
        // 0x399ca4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x399CA8u;
    // 0x399ca8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x399ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x399cac: 0x0  nop
    ctx->pc = 0x399cacu;
    // NOP
    ctx->pc = 0x399cb0u;
}
