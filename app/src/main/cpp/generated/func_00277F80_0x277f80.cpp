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

// Function: func_00277F80
// Address: 0x277f80 - 0x278000
void func_00277F80_0x277f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00277F80_0x277f80");
#endif

    switch (ctx->pc) {
        case 0x277f9cu: goto label_277f9c;
        case 0x277fb0u: goto label_277fb0;
        case 0x277fc8u: goto label_277fc8;
        case 0x277fecu: goto label_277fec;
        default: break;
    }

    ctx->pc = 0x277f80u;

    // 0x277f80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x277f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x277f84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x277f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277f88: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x277f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x277f8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x277f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x277f90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x277f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x277f94: 0xc05657a  jal         func_1595E8
    ctx->pc = 0x277F94u;
    SET_GPR_U32(ctx, 31, 0x277F9Cu);
    ctx->pc = 0x277F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277F94u;
    // 0x277f98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595E8u, 0x277F94u, 0x277F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277F9Cu;
label_277f9c:
    // 0x277f9c: 0x8e040304  lw          $a0, 0x304($s0)
    ctx->pc = 0x277f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x277fa0: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x277fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x277fa4: 0x24a57b90  addiu       $a1, $a1, 0x7B90
    ctx->pc = 0x277fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31632));
    // 0x277fa8: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x277FA8u;
    SET_GPR_U32(ctx, 31, 0x277FB0u);
    ctx->pc = 0x277FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277FA8u;
    // 0x277fac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x277FA8u, 0x277FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277FB0u;
label_277fb0:
    // 0x277fb0: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x277fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x277fb4: 0x8e040304  lw          $a0, 0x304($s0)
    ctx->pc = 0x277fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x277fb8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x277fb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277fbc: 0x24a57b98  addiu       $a1, $a1, 0x7B98
    ctx->pc = 0x277fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31640));
    // 0x277fc0: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x277FC0u;
    SET_GPR_U32(ctx, 31, 0x277FC8u);
    ctx->pc = 0x277FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277FC0u;
    // 0x277fc4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x277FC0u, 0x277FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277FC8u;
label_277fc8:
    // 0x277fc8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x277FC8u;
    {
        const bool branch_taken_0x277fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x277FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277FC8u;
        // 0x277fcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277fc8) {
            ctx->pc = 0x277FD8u;
            goto label_277fd8;
        }
    }
    ctx->pc = 0x277FD0u;
    // 0x277fd0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x277FD0u;
    {
        const bool branch_taken_0x277fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277FD0u;
        // 0x277fd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277fd0) {
            ctx->pc = 0x277FECu;
            goto label_277fec;
        }
    }
    ctx->pc = 0x277FD8u;
label_277fd8:
    // 0x277fd8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x277fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277fdc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x277fdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277fe0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x277fe0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277fe4: 0xc0525ce  jal         func_149738
    ctx->pc = 0x277FE4u;
    SET_GPR_U32(ctx, 31, 0x277FECu);
    ctx->pc = 0x277FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277FE4u;
    // 0x277fe8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149738u, 0x277FE4u, 0x277FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277FECu;
label_277fec:
    // 0x277fec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x277fecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x277ff0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x277ff0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277ff4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x277ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x277FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277FF8u;
        // 0x277ffc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278000u;
}
