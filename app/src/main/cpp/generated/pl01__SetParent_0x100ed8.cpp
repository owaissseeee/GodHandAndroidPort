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

// Function: pl01__SetParent
// Address: 0x100ed8 - 0x100fb8
void pl01__SetParent_0x100ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pl01__SetParent_0x100ed8");
#endif

    switch (ctx->pc) {
        case 0x100f64u: goto label_100f64;
        default: break;
    }

    ctx->pc = 0x100ed8u;

    // 0x100ed8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x100ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x100edc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x100edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x100ee0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x100ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x100ee4: 0x10a0002f  beqz        $a1, . + 4 + (0x2F << 2)
    ctx->pc = 0x100EE4u;
    {
        const bool branch_taken_0x100ee4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x100EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100EE4u;
        // 0x100ee8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100ee4) {
            ctx->pc = 0x100FA4u;
            goto label_100fa4;
        }
    }
    ctx->pc = 0x100EECu;
    // 0x100eec: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x100eecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x100ef0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x100EF0u;
    {
        const bool branch_taken_0x100ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100EF0u;
        // 0x100ef4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100ef0) {
            ctx->pc = 0x100F04u;
            goto label_100f04;
        }
    }
    ctx->pc = 0x100EF8u;
    // 0x100ef8: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x100ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x100efc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x100EFCu;
    {
        const bool branch_taken_0x100efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100EFCu;
        // 0x100f00: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100efc) {
            ctx->pc = 0x100F08u;
            goto label_100f08;
        }
    }
    ctx->pc = 0x100F04u;
label_100f04:
    // 0x100f04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x100f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_100f08:
    // 0x100f08: 0x10800026  beqz        $a0, . + 4 + (0x26 << 2)
    ctx->pc = 0x100F08u;
    {
        const bool branch_taken_0x100f08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x100F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100F08u;
        // 0x100f0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100f08) {
            ctx->pc = 0x100FA4u;
            goto label_100fa4;
        }
    }
    ctx->pc = 0x100F10u;
    // 0x100f10: 0x90a302b4  lbu         $v1, 0x2B4($a1)
    ctx->pc = 0x100f10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 692)));
    // 0x100f14: 0x4c00002  bltz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x100F14u;
    {
        const bool branch_taken_0x100f14 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x100F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100F14u;
        // 0x100f18: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100f14) {
            ctx->pc = 0x100F20u;
            goto label_100f20;
        }
    }
    ctx->pc = 0x100F1Cu;
    // 0x100f1c: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x100f1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_100f20:
    // 0x100f20: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x100f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x100f24: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x100F24u;
    {
        const bool branch_taken_0x100f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100F24u;
        // 0x100f28: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100f24) {
            ctx->pc = 0x100F3Cu;
            goto label_100f3c;
        }
    }
    ctx->pc = 0x100F2Cu;
    // 0x100f2c: 0x8ca30278  lw          $v1, 0x278($a1)
    ctx->pc = 0x100f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 632)));
    // 0x100f30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x100f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x100f34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x100F34u;
    {
        const bool branch_taken_0x100f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100F34u;
        // 0x100f38: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100f34) {
            ctx->pc = 0x100F40u;
            goto label_100f40;
        }
    }
    ctx->pc = 0x100F3Cu;
label_100f3c:
    // 0x100f3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x100f3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_100f40:
    // 0x100f40: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x100F40u;
    {
        const bool branch_taken_0x100f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x100f40) {
            ctx->pc = 0x100F44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100F40u;
            // 0x100f44: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100FA8u;
            goto label_100fa8;
        }
    }
    ctx->pc = 0x100F48u;
    // 0x100f48: 0xac820148  sw          $v0, 0x148($a0)
    ctx->pc = 0x100f48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
    // 0x100f4c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x100f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x100f50: 0xae0620d4  sw          $a2, 0x20D4($s0)
    ctx->pc = 0x100f50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8404), GPR_U32(ctx, 6));
    // 0x100f54: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x100f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x100f58: 0xae0520a8  sw          $a1, 0x20A8($s0)
    ctx->pc = 0x100f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8360), GPR_U32(ctx, 5));
    // 0x100f5c: 0xc07f02a  jal         func_1FC0A8
    ctx->pc = 0x100F5Cu;
    SET_GPR_U32(ctx, 31, 0x100F64u);
    ctx->pc = 0x100F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100F5Cu;
    // 0x100f60: 0xae0520d0  sw          $a1, 0x20D0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8400), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC0A8u, 0x100F5Cu, 0x100F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100F64u;
label_100f64:
    // 0x100f64: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x100f64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100f68: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x100f68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x100f6c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x100F6Cu;
    {
        const bool branch_taken_0x100f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100F6Cu;
        // 0x100f70: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100f6c) {
            ctx->pc = 0x100F9Cu;
            goto label_100f9c;
        }
    }
    ctx->pc = 0x100F74u;
    // 0x100f74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x100f74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x100f78: 0x2442b680  addiu       $v0, $v0, -0x4980
    ctx->pc = 0x100f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948480));
    // 0x100f7c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x100f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x100f80: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x100f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x100f84: 0x800008  jr          $a0
    ctx->pc = 0x100F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x100F8Cu: goto label_100f8c;
            case 0x100F94u: goto label_100f94;
            case 0x100F9Cu: goto label_100f9c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100F84u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x100F8Cu;
label_100f8c:
    // 0x100f8c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x100F8Cu;
    {
        const bool branch_taken_0x100f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100F8Cu;
        // 0x100f90: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100f8c) {
            ctx->pc = 0x100FA0u;
            goto label_100fa0;
        }
    }
    ctx->pc = 0x100F94u;
label_100f94:
    // 0x100f94: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x100F94u;
    {
        const bool branch_taken_0x100f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100F94u;
        // 0x100f98: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100f94) {
            ctx->pc = 0x100FA0u;
            goto label_100fa0;
        }
    }
    ctx->pc = 0x100F9Cu;
label_100f9c:
    // 0x100f9c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x100f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_100fa0:
    // 0x100fa0: 0xae022088  sw          $v0, 0x2088($s0)
    ctx->pc = 0x100fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8328), GPR_U32(ctx, 2));
label_100fa4:
    // 0x100fa4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x100fa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_100fa8:
    // 0x100fa8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x100fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100fac: 0x3e00008  jr          $ra
    ctx->pc = 0x100FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100FACu;
        // 0x100fb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100FACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100FB4u;
    // 0x100fb4: 0x0  nop
    ctx->pc = 0x100fb4u;
    // NOP
    ctx->pc = 0x100fb8u;
}
