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

// Function: cSeData_SelectHeap
// Address: 0x2cfd50 - 0x2cfe28
void cSeData_SelectHeap_0x2cfd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSeData_SelectHeap_0x2cfd50");
#endif

    ctx->pc = 0x2cfd50u;

    // 0x2cfd50: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2cfd50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfd54: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x2cfd54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x2cfd58: 0x2c620014  sltiu       $v0, $v1, 0x14
    ctx->pc = 0x2cfd58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x2cfd5c: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2CFD5Cu;
    {
        const bool branch_taken_0x2cfd5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFD5Cu;
        // 0x2cfd60: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfd5c) {
            ctx->pc = 0x2CFE0Cu;
            goto label_2cfe0c;
        }
    }
    ctx->pc = 0x2CFD64u;
    // 0x2cfd64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cfd64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cfd68: 0x2442cfc0  addiu       $v0, $v0, -0x3040
    ctx->pc = 0x2cfd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954944));
    // 0x2cfd6c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2cfd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cfd70: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2cfd70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cfd74: 0x800008  jr          $a0
    ctx->pc = 0x2CFD74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CFD7Cu: goto label_2cfd7c;
            case 0x2CFD90u: goto label_2cfd90;
            case 0x2CFDA4u: goto label_2cfda4;
            case 0x2CFE0Cu: goto label_2cfe0c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFD74u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2CFD7Cu;
label_2cfd7c:
    // 0x2cfd7c: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x2cfd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x2cfd80: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2cfd80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2cfd84: 0x24634210  addiu       $v1, $v1, 0x4210
    ctx->pc = 0x2cfd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16912));
    // 0x2cfd88: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2CFD88u;
    {
        const bool branch_taken_0x2cfd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFD88u;
        // 0x2cfd8c: 0x24422f80  addiu       $v0, $v0, 0x2F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfd88) {
            ctx->pc = 0x2CFE1Cu;
            goto label_2cfe1c;
        }
    }
    ctx->pc = 0x2CFD90u;
label_2cfd90:
    // 0x2cfd90: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x2cfd90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x2cfd94: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2cfd94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2cfd98: 0x24634210  addiu       $v1, $v1, 0x4210
    ctx->pc = 0x2cfd98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16912));
    // 0x2cfd9c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2CFD9Cu;
    {
        const bool branch_taken_0x2cfd9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFD9Cu;
        // 0x2cfda0: 0x24422f80  addiu       $v0, $v0, 0x2F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfd9c) {
            ctx->pc = 0x2CFE1Cu;
            goto label_2cfe1c;
        }
    }
    ctx->pc = 0x2CFDA4u;
label_2cfda4:
    // 0x2cfda4: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2cfda4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2cfda8: 0x24030504  addiu       $v1, $zero, 0x504
    ctx->pc = 0x2cfda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1284));
    // 0x2cfdac: 0x94447a50  lhu         $a0, 0x7A50($v0)
    ctx->pc = 0x2cfdacu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x747A50u));
    // 0x2cfdb0: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2CFDB0u;
    {
        const bool branch_taken_0x2cfdb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CFDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFDB0u;
        // 0x2cfdb4: 0x3c020075  lui         $v0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfdb0) {
            ctx->pc = 0x2CFDECu;
            goto label_2cfdec;
        }
    }
    ctx->pc = 0x2CFDB8u;
    // 0x2cfdb8: 0x24020506  addiu       $v0, $zero, 0x506
    ctx->pc = 0x2cfdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1286));
    // 0x2cfdbc: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2CFDBCu;
    {
        const bool branch_taken_0x2cfdbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CFDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFDBCu;
        // 0x2cfdc0: 0x3c020075  lui         $v0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfdbc) {
            ctx->pc = 0x2CFDECu;
            goto label_2cfdec;
        }
    }
    ctx->pc = 0x2CFDC4u;
    // 0x2cfdc4: 0x24020801  addiu       $v0, $zero, 0x801
    ctx->pc = 0x2cfdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
    // 0x2cfdc8: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CFDC8u;
    {
        const bool branch_taken_0x2cfdc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CFDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFDC8u;
        // 0x2cfdcc: 0x3c020075  lui         $v0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfdc8) {
            ctx->pc = 0x2CFDECu;
            goto label_2cfdec;
        }
    }
    ctx->pc = 0x2CFDD0u;
    // 0x2cfdd0: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x2cfdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x2cfdd4: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CFDD4u;
    {
        const bool branch_taken_0x2cfdd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CFDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFDD4u;
        // 0x2cfdd8: 0x3c020075  lui         $v0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfdd4) {
            ctx->pc = 0x2CFDECu;
            goto label_2cfdec;
        }
    }
    ctx->pc = 0x2CFDDCu;
    // 0x2cfddc: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x2cfddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x2cfde0: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CFDE0u;
    {
        const bool branch_taken_0x2cfde0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CFDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFDE0u;
        // 0x2cfde4: 0x3c020075  lui         $v0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfde0) {
            ctx->pc = 0x2CFDF4u;
            goto label_2cfdf4;
        }
    }
    ctx->pc = 0x2CFDE8u;
    // 0x2cfde8: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x2cfde8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
label_2cfdec:
    // 0x2cfdec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2CFDECu;
    {
        const bool branch_taken_0x2cfdec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFDECu;
        // 0x2cfdf0: 0x24424220  addiu       $v0, $v0, 0x4220 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfdec) {
            ctx->pc = 0x2CFDF8u;
            goto label_2cfdf8;
        }
    }
    ctx->pc = 0x2CFDF4u;
label_2cfdf4:
    // 0x2cfdf4: 0x24424210  addiu       $v0, $v0, 0x4210
    ctx->pc = 0x2cfdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16912));
label_2cfdf8:
    // 0x2cfdf8: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x2cfdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x2cfdfc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2cfdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2cfe00: 0x244236a0  addiu       $v0, $v0, 0x36A0
    ctx->pc = 0x2cfe00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13984));
    // 0x2cfe04: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFE04u;
        // 0x2cfe08: 0xaca2000c  sw          $v0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFE04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFE0Cu;
label_2cfe0c:
    // 0x2cfe0c: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x2cfe0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x2cfe10: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2cfe10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2cfe14: 0x24634210  addiu       $v1, $v1, 0x4210
    ctx->pc = 0x2cfe14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16912));
    // 0x2cfe18: 0x24423310  addiu       $v0, $v0, 0x3310
    ctx->pc = 0x2cfe18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13072));
label_2cfe1c:
    // 0x2cfe1c: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x2cfe1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x2cfe20: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFE20u;
        // 0x2cfe24: 0xaca30008  sw          $v1, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFE20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFE28u;
}
