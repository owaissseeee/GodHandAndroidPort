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

// Function: cEvent_releaseWork
// Address: 0x297ad0 - 0x297b20
void cEvent_releaseWork_0x297ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEvent_releaseWork_0x297ad0");
#endif

    switch (ctx->pc) {
        case 0x297af8u: goto label_297af8;
        case 0x297b00u: goto label_297b00;
        case 0x297b0cu: goto label_297b0c;
        default: break;
    }

    ctx->pc = 0x297ad0u;

    // 0x297ad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x297ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x297ad4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x297ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x297ad8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x297ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x297adc: 0x90820009  lbu         $v0, 0x9($a0)
    ctx->pc = 0x297adcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x297ae0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x297ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x297ae4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x297AE4u;
    {
        const bool branch_taken_0x297ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297AE4u;
        // 0x297ae8: 0x3c100000  lui         $s0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x297AE8u) & 0xFFFFu)) << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297ae4) {
            ctx->pc = 0x297B0Cu;
            goto label_297b0c;
        }
    }
    ctx->pc = 0x297AECu;
    // 0x297aec: 0x26100000  addiu       $s0, $s0, 0x0
    ctx->pc = 0x297aecu;
    /* runtime-relocated */ SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x297AECu) & 0xFFFFu))));
    // 0x297af0: 0xc000000  jal         func_000000
    ctx->pc = 0x297AF0u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x297AF0u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x297AF8u);
        ctx->pc = 0x297AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297AF0u;
        // 0x297af4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297AF0u, 0x297AF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x297AF8u;
label_297af8:
    // 0x297af8: 0xc000000  jal         func_000000
    ctx->pc = 0x297AF8u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x297AF8u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x297B00u);
        ctx->pc = 0x297AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297AF8u;
        // 0x297afc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297AF8u, 0x297B00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x297B00u;
label_297b00:
    // 0x297b00: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x297b00u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x297B00u) & 0xFFFFu)) << 16));
    // 0x297b04: 0xc000000  jal         func_000000
    ctx->pc = 0x297B04u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x297B04u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x297B0Cu);
        ctx->pc = 0x297B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297B04u;
        // 0x297b08: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x297B08u) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297B04u, 0x297B0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x297B0Cu;
label_297b0c:
    // 0x297b0c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x297b0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297b10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x297b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297b14: 0x3e00008  jr          $ra
    ctx->pc = 0x297B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297B14u;
        // 0x297b18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297B1Cu;
    // 0x297b1c: 0x0  nop
    ctx->pc = 0x297b1cu;
    // NOP
    ctx->pc = 0x297b20u;
}
