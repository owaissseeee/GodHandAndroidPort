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

// Function: find_fde
// Address: 0x321f48 - 0x322030
void find_fde_0x321f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("find_fde_0x321f48");
#endif

    switch (ctx->pc) {
        case 0x321f68u: goto label_321f68;
        case 0x321f84u: goto label_321f84;
        case 0x321fb4u: goto label_321fb4;
        case 0x321fd0u: goto label_321fd0;
        default: break;
    }

    ctx->pc = 0x321f48u;

    // 0x321f48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x321f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x321f4c: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x321f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x321f50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x321f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x321f54: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x321f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x321f58: 0x8c505c18  lw          $s0, 0x5C18($v0)
    ctx->pc = 0x321f58u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x755C18u));
    // 0x321f5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x321f5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321f60: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x321f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x321f64: 0x0  nop
    ctx->pc = 0x321f64u;
    // NOP
label_321f68:
    // 0x321f68: 0x1200002b  beqz        $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x321F68u;
    {
        const bool branch_taken_0x321f68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x321F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321F68u;
        // 0x321f6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321f68) {
            ctx->pc = 0x322018u;
            goto label_322018;
        }
    }
    ctx->pc = 0x321F70u;
    // 0x321f70: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x321f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x321f74: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x321F74u;
    {
        const bool branch_taken_0x321f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x321F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321F74u;
        // 0x321f78: 0x222102b  sltu        $v0, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x321f74) {
            ctx->pc = 0x321F8Cu;
            goto label_321f8c;
        }
    }
    ctx->pc = 0x321F7Cu;
    // 0x321f7c: 0xc0c8782  jal         func_321E08
    ctx->pc = 0x321F7Cu;
    SET_GPR_U32(ctx, 31, 0x321F84u);
    ctx->pc = 0x321F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321F7Cu;
    // 0x321f80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321E08u, 0x321F7Cu, 0x321F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321F84u;
label_321f84:
    // 0x321f84: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x321f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x321f88: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x321f88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_321f8c:
    // 0x321f8c: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x321F8Cu;
    {
        const bool branch_taken_0x321f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x321f8c) {
            ctx->pc = 0x321F90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321F8Cu;
            // 0x321f90: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_321f68;
        }
    }
    ctx->pc = 0x321F94u;
    // 0x321f94: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x321f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x321f98: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x321f98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x321f9c: 0x5040fff2  beql        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x321F9Cu;
    {
        const bool branch_taken_0x321f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x321f9c) {
            ctx->pc = 0x321FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321F9Cu;
            // 0x321fa0: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_321f68;
        }
    }
    ctx->pc = 0x321FA4u;
    // 0x321fa4: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x321FA4u;
    {
        const bool branch_taken_0x321fa4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x321fa4) {
            ctx->pc = 0x321FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321FA4u;
            // 0x321fa8: 0x8e070010  lw          $a3, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321FBCu;
            goto label_321fbc;
        }
    }
    ctx->pc = 0x321FACu;
    // 0x321fac: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x321FACu;
    {
        const bool branch_taken_0x321fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321FACu;
        // 0x321fb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321fac) {
            ctx->pc = 0x322018u;
            goto label_322018;
        }
    }
    ctx->pc = 0x321FB4u;
label_321fb4:
    // 0x321fb4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x321FB4u;
    {
        const bool branch_taken_0x321fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321FB4u;
        // 0x321fb8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321fb4) {
            ctx->pc = 0x322018u;
            goto label_322018;
        }
    }
    ctx->pc = 0x321FBCu;
label_321fbc:
    // 0x321fbc: 0x10e00015  beqz        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x321FBCu;
    {
        const bool branch_taken_0x321fbc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x321FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321FBCu;
        // 0x321fc0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321fbc) {
            ctx->pc = 0x322014u;
            goto label_322014;
        }
    }
    ctx->pc = 0x321FC4u;
    // 0x321fc4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x321fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x321fc8: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x321fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x321fcc: 0x0  nop
    ctx->pc = 0x321fccu;
    // NOP
label_321fd0:
    // 0x321fd0: 0x23042  srl         $a2, $v0, 1
    ctx->pc = 0x321fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x321fd4: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x321fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x321fd8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x321fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x321fdc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x321fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x321fe0: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x321fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x321fe4: 0x225102b  sltu        $v0, $s1, $a1
    ctx->pc = 0x321fe4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x321fe8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x321FE8u;
    {
        const bool branch_taken_0x321fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x321fe8) {
            ctx->pc = 0x321FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321FE8u;
            // 0x321fec: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321FF8u;
            goto label_321ff8;
        }
    }
    ctx->pc = 0x321FF0u;
    // 0x321ff0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x321FF0u;
    {
        const bool branch_taken_0x321ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321FF0u;
        // 0x321ff4: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321ff0) {
            ctx->pc = 0x322008u;
            goto label_322008;
        }
    }
    ctx->pc = 0x321FF8u;
label_321ff8:
    // 0x321ff8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x321ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x321ffc: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x321ffcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x322000: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x322000u;
    {
        const bool branch_taken_0x322000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x322004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322000u;
        // 0x322004: 0x24c80001  addiu       $t0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322000) {
            ctx->pc = 0x321FB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_321fb4;
        }
    }
    ctx->pc = 0x322008u;
label_322008:
    // 0x322008: 0x107102b  sltu        $v0, $t0, $a3
    ctx->pc = 0x322008u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x32200c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x32200Cu;
    {
        const bool branch_taken_0x32200c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x322010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32200Cu;
        // 0x322010: 0x1071021  addu        $v0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32200c) {
            ctx->pc = 0x321FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_321fd0;
        }
    }
    ctx->pc = 0x322014u;
label_322014:
    // 0x322014: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x322014u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_322018:
    // 0x322018: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x322018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32201c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x32201cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x322020: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x322020u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322024: 0x3e00008  jr          $ra
    ctx->pc = 0x322024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322024u;
        // 0x322028: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32202Cu;
    // 0x32202c: 0x0  nop
    ctx->pc = 0x32202cu;
    // NOP
    ctx->pc = 0x322030u;
}
