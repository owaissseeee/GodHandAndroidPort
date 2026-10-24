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

// Function: BuildLinkedEntry_376510
// Address: 0x376510 - 0x376588
void BuildLinkedEntry_376510_0x376510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BuildLinkedEntry_376510_0x376510");
#endif

    switch (ctx->pc) {
        case 0x37654cu: goto label_37654c;
        case 0x376570u: goto label_376570;
        default: break;
    }

    ctx->pc = 0x376510u;

    // 0x376510: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x376510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x376514: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x376514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x376518: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x376518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37651c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x37651cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376520: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x376520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x376524: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x376524u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x376528: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x376528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x37652c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37652Cu;
    {
        const bool branch_taken_0x37652c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x376530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37652Cu;
        // 0x376530: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37652c) {
            ctx->pc = 0x376540u;
            goto label_376540;
        }
    }
    ctx->pc = 0x376534u;
    // 0x376534: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x376534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x376538: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x376538u;
    {
        const bool branch_taken_0x376538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376538u;
        // 0x37653c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376538) {
            ctx->pc = 0x376574u;
            goto label_376574;
        }
    }
    ctx->pc = 0x376540u;
label_376540:
    // 0x376540: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x376540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376544: 0xc0ddffe  jal         func_377FF8
    ctx->pc = 0x376544u;
    SET_GPR_U32(ctx, 31, 0x37654Cu);
    ctx->pc = 0x376548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376544u;
    // 0x376548: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377FF8u, 0x376544u, 0x37654Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37654Cu;
label_37654c:
    // 0x37654c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x37654cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x376550: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x376550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376554: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x376554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376558: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x376558u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x37655c: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x37655cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x376560: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x376560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x376564: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x376564u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x376568: 0xc0dda2c  jal         func_3768B0
    ctx->pc = 0x376568u;
    SET_GPR_U32(ctx, 31, 0x376570u);
    ctx->pc = 0x37656Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376568u;
    // 0x37656c: 0xa602000a  sh          $v0, 0xA($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3768B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3768B0u, 0x376568u, 0x376570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376570u;
label_376570:
    // 0x376570: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x376570u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_376574:
    // 0x376574: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x376574u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x376578: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x376578u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37657c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37657cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x376580: 0x3e00008  jr          $ra
    ctx->pc = 0x376580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376580u;
        // 0x376584: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376588u;
}
