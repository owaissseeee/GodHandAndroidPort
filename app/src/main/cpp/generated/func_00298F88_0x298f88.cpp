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

// Function: func_00298F88
// Address: 0x298f88 - 0x2990a0
void func_00298F88_0x298f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00298F88_0x298f88");
#endif

    switch (ctx->pc) {
        case 0x298fc8u: goto label_298fc8;
        case 0x298ff8u: goto label_298ff8;
        case 0x299030u: goto label_299030;
        case 0x299060u: goto label_299060;
        case 0x299088u: goto label_299088;
        default: break;
    }

    ctx->pc = 0x298f88u;

    // 0x298f88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x298f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x298f8c: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x298f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x298f90: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x298f90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x298f94: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x298f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x298f98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x298f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x298f9c: 0x2446ac28  addiu       $a2, $v0, -0x53D8
    ctx->pc = 0x298f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945832));
    // 0x298fa0: 0x8044ac28  lb          $a0, -0x53D8($v0)
    ctx->pc = 0x298fa0u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x44AC28u));
    // 0x298fa4: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x298fa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298fa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x298fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x298fac: 0x24684c58  addiu       $t0, $v1, 0x4C58
    ctx->pc = 0x298facu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x298fb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x298fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298fb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x298fb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298fb8: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x298FB8u;
    {
        const bool branch_taken_0x298fb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x298FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298FB8u;
        // 0x298fbc: 0x3c100045  lui         $s0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298fb8) {
            ctx->pc = 0x298FF0u;
            goto label_298ff0;
        }
    }
    ctx->pc = 0x298FC0u;
    // 0x298fc0: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x298fc0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x298fc4: 0x0  nop
    ctx->pc = 0x298fc4u;
    // NOP
label_298fc8:
    // 0x298fc8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x298fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x298fcc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x298fccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x298fd0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x298fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x298fd4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x298fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x298fd8: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x298fd8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x298fdc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x298FDCu;
    {
        const bool branch_taken_0x298fdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x298FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298FDCu;
        // 0x298fe0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298fdc) {
            ctx->pc = 0x298FF0u;
            goto label_298ff0;
        }
    }
    ctx->pc = 0x298FE4u;
    // 0x298fe4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x298fe4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x298fe8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x298FE8u;
    {
        const bool branch_taken_0x298fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x298fe8) {
            ctx->pc = 0x298FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298FE8u;
            // 0x298fec: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298FC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_298fc8;
        }
    }
    ctx->pc = 0x298FF0u;
label_298ff0:
    // 0x298ff0: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x298FF0u;
    SET_GPR_U32(ctx, 31, 0x298FF8u);
    ctx->pc = 0x298FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298FF0u;
    // 0x298ff4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x298FF0u, 0x298FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298FF8u;
label_298ff8:
    // 0x298ff8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x298ff8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298ffc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x298FFCu;
    {
        const bool branch_taken_0x298ffc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x299000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298FFCu;
        // 0x299000: 0x8202ac30  lb          $v0, -0x53D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294945840)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298ffc) {
            ctx->pc = 0x299014u;
            goto label_299014;
        }
    }
    ctx->pc = 0x299004u;
    // 0x299004: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x299004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x299008: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x299008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x29900c: 0xac620250  sw          $v0, 0x250($v1)
    ctx->pc = 0x29900cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
    // 0x299010: 0x8202ac30  lb          $v0, -0x53D0($s0)
    ctx->pc = 0x299010u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294945840)));
label_299014:
    // 0x299014: 0x26284c58  addiu       $t0, $s1, 0x4C58
    ctx->pc = 0x299014u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 19544));
    // 0x299018: 0x2603ac30  addiu       $v1, $s0, -0x53D0
    ctx->pc = 0x299018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945840));
    // 0x29901c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29901cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299020: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x299020u;
    {
        const bool branch_taken_0x299020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299020u;
        // 0x299024: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299020) {
            ctx->pc = 0x299058u;
            goto label_299058;
        }
    }
    ctx->pc = 0x299028u;
    // 0x299028: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x299028u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29902c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x29902cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_299030:
    // 0x299030: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x299030u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x299034: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x299034u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x299038: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x299038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x29903c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x29903cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x299040: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x299040u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x299044: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x299044u;
    {
        const bool branch_taken_0x299044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x299048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299044u;
        // 0x299048: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299044) {
            ctx->pc = 0x299058u;
            goto label_299058;
        }
    }
    ctx->pc = 0x29904Cu;
    // 0x29904c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x29904cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x299050: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x299050u;
    {
        const bool branch_taken_0x299050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x299050) {
            ctx->pc = 0x299054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x299050u;
            // 0x299054: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x299030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_299030;
        }
    }
    ctx->pc = 0x299058u;
label_299058:
    // 0x299058: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x299058u;
    SET_GPR_U32(ctx, 31, 0x299060u);
    ctx->pc = 0x29905Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299058u;
    // 0x29905c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x299058u, 0x299060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299060u;
label_299060:
    // 0x299060: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x299060u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299064: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x299064u;
    {
        const bool branch_taken_0x299064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x299068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299064u;
        // 0x299068: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299064) {
            ctx->pc = 0x299078u;
            goto label_299078;
        }
    }
    ctx->pc = 0x29906Cu;
    // 0x29906c: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x29906cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x299070: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x299070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x299074: 0xac620250  sw          $v0, 0x250($v1)
    ctx->pc = 0x299074u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
label_299078:
    // 0x299078: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x299078u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x29907c: 0x24846af0  addiu       $a0, $a0, 0x6AF0
    ctx->pc = 0x29907cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27376));
    // 0x299080: 0xc0a5ed8  jal         func_297B60
    ctx->pc = 0x299080u;
    SET_GPR_U32(ctx, 31, 0x299088u);
    ctx->pc = 0x299084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299080u;
    // 0x299084: 0x24a590a0  addiu       $a1, $a1, -0x6F60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B60u, 0x299080u, 0x299088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299088u;
label_299088:
    // 0x299088: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x299088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29908c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29908cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299090: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x299090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299094: 0x3e00008  jr          $ra
    ctx->pc = 0x299094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299094u;
        // 0x299098: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29909Cu;
    // 0x29909c: 0x0  nop
    ctx->pc = 0x29909cu;
    // NOP
    ctx->pc = 0x2990a0u;
}
