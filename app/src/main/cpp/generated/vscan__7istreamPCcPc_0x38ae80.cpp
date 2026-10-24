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

// Function: vscan__7istreamPCcPc
// Address: 0x38ae80 - 0x38af30
void vscan__7istreamPCcPc_0x38ae80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("vscan__7istreamPCcPc_0x38ae80");
#endif

    switch (ctx->pc) {
        case 0x38aed0u: goto label_38aed0;
        case 0x38aef4u: goto label_38aef4;
        case 0x38af10u: goto label_38af10;
        default: break;
    }

    ctx->pc = 0x38ae80u;

    // 0x38ae80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x38ae80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x38ae84: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x38ae84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x38ae88: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x38ae88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x38ae8c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x38ae8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ae90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38ae90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38ae94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x38ae94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x38ae98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38ae98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ae9c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x38ae9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38aea0: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x38aea0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x38aea4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38AEA4u;
    {
        const bool branch_taken_0x38aea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AEA4u;
        // 0x38aea8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38aea4) {
            ctx->pc = 0x38AEBCu;
            goto label_38aebc;
        }
    }
    ctx->pc = 0x38AEACu;
    // 0x38aeac: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x38aeacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x38aeb0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x38aeb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38aeb4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x38AEB4u;
    {
        const bool branch_taken_0x38aeb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AEB4u;
        // 0x38aeb8: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38aeb4) {
            ctx->pc = 0x38AEF8u;
            goto label_38aef8;
        }
    }
    ctx->pc = 0x38AEBCu;
label_38aebc:
    // 0x38aebc: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x38aebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x38aec0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x38AEC0u;
    {
        const bool branch_taken_0x38aec0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38aec0) {
            ctx->pc = 0x38AEC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38AEC0u;
            // 0x38aec4: 0xdc620010  ld          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38AED8u;
            goto label_38aed8;
        }
    }
    ctx->pc = 0x38AEC8u;
    // 0x38aec8: 0xc0e249a  jal         func_389268
    ctx->pc = 0x38AEC8u;
    SET_GPR_U32(ctx, 31, 0x38AED0u);
    ctx->pc = 0x389268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389268u, 0x38AEC8u, 0x38AED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AED0u;
label_38aed0:
    // 0x38aed0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x38aed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38aed4: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x38aed4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_38aed8:
    // 0x38aed8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x38aed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x38aedc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x38aedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x38aee0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x38aee0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x38aee4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38AEE4u;
    {
        const bool branch_taken_0x38aee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AEE4u;
        // 0x38aee8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38aee4) {
            ctx->pc = 0x38AEF8u;
            goto label_38aef8;
        }
    }
    ctx->pc = 0x38AEECu;
    // 0x38aeec: 0xc0e24e6  jal         func_389398
    ctx->pc = 0x38AEECu;
    SET_GPR_U32(ctx, 31, 0x38AEF4u);
    ctx->pc = 0x38AEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AEECu;
    // 0x38aef0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389398u, 0x38AEECu, 0x38AEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AEF4u;
label_38aef4:
    // 0x38aef4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x38aef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38aef8:
    // 0x38aef8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38AEF8u;
    {
        const bool branch_taken_0x38aef8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AEF8u;
        // 0x38aefc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38aef8) {
            ctx->pc = 0x38AF10u;
            goto label_38af10;
        }
    }
    ctx->pc = 0x38AF00u;
    // 0x38af00: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x38af00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38af04: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x38af04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38af08: 0xc0e2bcc  jal         func_38AF30
    ctx->pc = 0x38AF08u;
    SET_GPR_U32(ctx, 31, 0x38AF10u);
    ctx->pc = 0x38AF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AF08u;
    // 0x38af0c: 0x8ce40000  lw          $a0, 0x0($a3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38AF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38AF30u, 0x38AF08u, 0x38AF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AF10u;
label_38af10:
    // 0x38af10: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38af10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38af14: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x38af14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38af18: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x38af18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38af1c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38af1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38af20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38af20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38af24: 0x3e00008  jr          $ra
    ctx->pc = 0x38AF24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38AF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AF24u;
        // 0x38af28: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38AF24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38AF2Cu;
    // 0x38af2c: 0x0  nop
    ctx->pc = 0x38af2cu;
    // NOP
    ctx->pc = 0x38af30u;
}
