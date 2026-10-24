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

// Function: func_00346ED0
// Address: 0x346ed0 - 0x346fa0
void func_00346ED0_0x346ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00346ED0_0x346ed0");
#endif

    switch (ctx->pc) {
        case 0x346f24u: goto label_346f24;
        case 0x346f40u: goto label_346f40;
        case 0x346f5cu: goto label_346f5c;
        case 0x346f70u: goto label_346f70;
        case 0x346f84u: goto label_346f84;
        default: break;
    }

    ctx->pc = 0x346ed0u;

    // 0x346ed0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x346ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x346ed4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x346ed4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346ed8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x346ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x346edc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x346edcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346ee0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x346ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x346ee4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x346ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x346ee8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x346ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x346eec: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x346eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x346ef0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x346ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x346ef4: 0x8d110010  lw          $s1, 0x10($t0)
    ctx->pc = 0x346ef4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x346ef8: 0x8d09000c  lw          $t1, 0xC($t0)
    ctx->pc = 0x346ef8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x346efc: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x346efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x346f00: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x346f00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346f04: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x346f04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346f08: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x346f08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346f0c: 0xae490044  sw          $t1, 0x44($s2)
    ctx->pc = 0x346f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 9));
    // 0x346f10: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x346F10u;
    {
        const bool branch_taken_0x346f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x346F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346F10u;
        // 0x346f14: 0xae510048  sw          $s1, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346f10) {
            ctx->pc = 0x346F30u;
            goto label_346f30;
        }
    }
    ctx->pc = 0x346F18u;
    // 0x346f18: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x346f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x346f1c: 0xc0d1bec  jal         func_346FB0
    ctx->pc = 0x346F1Cu;
    SET_GPR_U32(ctx, 31, 0x346F24u);
    ctx->pc = 0x346F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346F1Cu;
    // 0x346f20: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346FB0u, 0x346F1Cu, 0x346F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346F24u;
label_346f24:
    // 0x346f24: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x346F24u;
    {
        const bool branch_taken_0x346f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346F24u;
        // 0x346f28: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346f24) {
            ctx->pc = 0x346F88u;
            goto label_346f88;
        }
    }
    ctx->pc = 0x346F2Cu;
    // 0x346f2c: 0x0  nop
    ctx->pc = 0x346f2cu;
    // NOP
label_346f30:
    // 0x346f30: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x346f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x346f34: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x346f34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346f38: 0xc0d1386  jal         func_344E18
    ctx->pc = 0x346F38u;
    SET_GPR_U32(ctx, 31, 0x346F40u);
    ctx->pc = 0x346F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346F38u;
    // 0x346f3c: 0x1187c2  srl         $s0, $s1, 31 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344E18u, 0x346F38u, 0x346F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346F40u;
label_346f40:
    // 0x346f40: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x346f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x346f44: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x346f44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346f48: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x346f48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346f4c: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x346f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x346f50: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x346f50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x346f54: 0xc0d1bec  jal         func_346FB0
    ctx->pc = 0x346F54u;
    SET_GPR_U32(ctx, 31, 0x346F5Cu);
    ctx->pc = 0x346F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346F54u;
    // 0x346f58: 0x108043  sra         $s0, $s0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346FB0u, 0x346F54u, 0x346F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346F5Cu;
label_346f5c:
    // 0x346f5c: 0x26440014  addiu       $a0, $s2, 0x14
    ctx->pc = 0x346f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x346f60: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x346f60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x346f64: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x346f64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346f68: 0xc0d1bec  jal         func_346FB0
    ctx->pc = 0x346F68u;
    SET_GPR_U32(ctx, 31, 0x346F70u);
    ctx->pc = 0x346F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346F68u;
    // 0x346f6c: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346FB0u, 0x346F68u, 0x346F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346F70u;
label_346f70:
    // 0x346f70: 0x26440024  addiu       $a0, $s2, 0x24
    ctx->pc = 0x346f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x346f74: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x346f74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x346f78: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x346f78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346f7c: 0xc0d1bec  jal         func_346FB0
    ctx->pc = 0x346F7Cu;
    SET_GPR_U32(ctx, 31, 0x346F84u);
    ctx->pc = 0x346F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346F7Cu;
    // 0x346f80: 0x8fa60014  lw          $a2, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346FB0u, 0x346F7Cu, 0x346F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346F84u;
label_346f84:
    // 0x346f84: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x346f84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_346f88:
    // 0x346f88: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x346f88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x346f8c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x346f8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x346f90: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x346f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x346f94: 0x3e00008  jr          $ra
    ctx->pc = 0x346F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346F94u;
        // 0x346f98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x346F9Cu;
    // 0x346f9c: 0x0  nop
    ctx->pc = 0x346f9cu;
    // NOP
    ctx->pc = 0x346fa0u;
}
