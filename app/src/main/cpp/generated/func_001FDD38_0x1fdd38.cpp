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

// Function: func_001FDD38
// Address: 0x1fdd38 - 0x1fde00
void func_001FDD38_0x1fdd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001FDD38_0x1fdd38");
#endif

    switch (ctx->pc) {
        case 0x1fdd68u: goto label_1fdd68;
        case 0x1fdd78u: goto label_1fdd78;
        case 0x1fdd88u: goto label_1fdd88;
        case 0x1fdda0u: goto label_1fdda0;
        case 0x1fdda8u: goto label_1fdda8;
        default: break;
    }

    ctx->pc = 0x1fdd38u;

    // 0x1fdd38: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1fdd38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1fdd3c: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x1fdd3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1fdd40: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1fdd40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1fdd44: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1fdd44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1fdd48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fdd48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdd4c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1fdd4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdd50: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1fdd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1fdd54: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1fdd54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1fdd58: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fdd58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdd5c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1fdd5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1fdd60: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x1FDD60u;
    SET_GPR_U32(ctx, 31, 0x1FDD68u);
    ctx->pc = 0x1FDD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDD60u;
    // 0x1fdd64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x1FDD60u, 0x1FDD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDD68u;
label_1fdd68:
    // 0x1fdd68: 0x8e11003c  lw          $s1, 0x3C($s0)
    ctx->pc = 0x1fdd68u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1fdd6c: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1FDD6Cu;
    {
        const bool branch_taken_0x1fdd6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDD6Cu;
        // 0x1fdd70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdd6c) {
            ctx->pc = 0x1FDDE4u;
            goto label_1fdde4;
        }
    }
    ctx->pc = 0x1FDD74u;
    // 0x1fdd74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fdd74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fdd78:
    // 0x1fdd78: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1fdd78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdd7c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1fdd7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1fdd80: 0xc07f204  jal         func_1FC810
    ctx->pc = 0x1FDD80u;
    SET_GPR_U32(ctx, 31, 0x1FDD88u);
    ctx->pc = 0x1FDD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDD80u;
    // 0x1fdd84: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC810u, 0x1FDD80u, 0x1FDD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDD88u;
label_1fdd88:
    // 0x1fdd88: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1fdd88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fdd8c: 0x50800012  beql        $a0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1FDD8Cu;
    {
        const bool branch_taken_0x1fdd8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdd8c) {
            ctx->pc = 0x1FDD90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDD8Cu;
            // 0x1fdd90: 0x8e310024  lw          $s1, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDDD8u;
            goto label_1fddd8;
        }
    }
    ctx->pc = 0x1FDD94u;
    // 0x1fdd94: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x1fdd94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdd98: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x1fdd98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x1fdd9c: 0x0  nop
    ctx->pc = 0x1fdd9cu;
    // NOP
label_1fdda0:
    // 0x1fdda0: 0xc0aec4e  jal         func_2BB138
    ctx->pc = 0x1FDDA0u;
    SET_GPR_U32(ctx, 31, 0x1FDDA8u);
    ctx->pc = 0x1FDDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDDA0u;
    // 0x1fdda4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB138u, 0x1FDDA0u, 0x1FDDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDDA8u;
label_1fdda8:
    // 0x1fdda8: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x1fdda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1fddac: 0x14730003  bne         $v1, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FDDACu;
    {
        const bool branch_taken_0x1fddac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x1FDDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDDACu;
        // 0x1fddb0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fddac) {
            ctx->pc = 0x1FDDBCu;
            goto label_1fddbc;
        }
    }
    ctx->pc = 0x1FDDB4u;
    // 0x1fddb4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1FDDB4u;
    {
        const bool branch_taken_0x1fddb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDDB4u;
        // 0x1fddb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fddb4) {
            ctx->pc = 0x1FDDE4u;
            goto label_1fdde4;
        }
    }
    ctx->pc = 0x1FDDBCu;
label_1fddbc:
    // 0x1fddbc: 0x2a420014  slti        $v0, $s2, 0x14
    ctx->pc = 0x1fddbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x1fddc0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FDDC0u;
    {
        const bool branch_taken_0x1fddc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDDC0u;
        // 0x1fddc4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fddc0) {
            ctx->pc = 0x1FDDD4u;
            goto label_1fddd4;
        }
    }
    ctx->pc = 0x1FDDC8u;
    // 0x1fddc8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1fddc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fddcc: 0x5480fff4  bnel        $a0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x1FDDCCu;
    {
        const bool branch_taken_0x1fddcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fddcc) {
            ctx->pc = 0x1FDDD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDDCCu;
            // 0x1fddd0: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDDA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fdda0;
        }
    }
    ctx->pc = 0x1FDDD4u;
label_1fddd4:
    // 0x1fddd4: 0x8e310024  lw          $s1, 0x24($s1)
    ctx->pc = 0x1fddd4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1fddd8:
    // 0x1fddd8: 0x5620ffe7  bnel        $s1, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1FDDD8u;
    {
        const bool branch_taken_0x1fddd8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fddd8) {
            ctx->pc = 0x1FDDDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FDDD8u;
            // 0x1fdddc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FDD78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fdd78;
        }
    }
    ctx->pc = 0x1FDDE0u;
    // 0x1fdde0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fdde0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fdde4:
    // 0x1fdde4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1fdde4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fdde8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1fdde8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fddec: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1fddecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fddf0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1fddf0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fddf4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1fddf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fddf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FDDF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDDF8u;
        // 0x1fddfc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDDF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FDE00u;
}
