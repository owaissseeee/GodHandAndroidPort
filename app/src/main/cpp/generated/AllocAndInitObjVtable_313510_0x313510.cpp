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

// Function: AllocAndInitObjVtable_313510
// Address: 0x313510 - 0x313580
void AllocAndInitObjVtable_313510_0x313510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocAndInitObjVtable_313510_0x313510");
#endif

    switch (ctx->pc) {
        case 0x313544u: goto label_313544;
        case 0x31355cu: goto label_31355c;
        case 0x313564u: goto label_313564;
        default: break;
    }

    ctx->pc = 0x313510u;

    // 0x313510: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x313510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x313514: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x313514u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x313518: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x313518u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31351c: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x31351cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x313520: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x313520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x313524: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x313524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x313528: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x313528u;
    {
        const bool branch_taken_0x313528 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31352Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313528u;
        // 0x31352c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313528) {
            ctx->pc = 0x31356Cu;
            goto label_31356c;
        }
    }
    ctx->pc = 0x313530u;
    // 0x313530: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x313530u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x313534: 0x24041570  addiu       $a0, $zero, 0x1570
    ctx->pc = 0x313534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5488));
    // 0x313538: 0x24c64220  addiu       $a2, $a2, 0x4220
    ctx->pc = 0x313538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16928));
    // 0x31353c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31353Cu;
    SET_GPR_U32(ctx, 31, 0x313544u);
    ctx->pc = 0x313540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31353Cu;
    // 0x313540: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31353Cu, 0x313544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313544u;
label_313544:
    // 0x313544: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x313544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313548: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x313548u;
    {
        const bool branch_taken_0x313548 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31354Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313548u;
        // 0x31354c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313548) {
            ctx->pc = 0x31356Cu;
            goto label_31356c;
        }
    }
    ctx->pc = 0x313550u;
    // 0x313550: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x313550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313554: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x313554u;
    SET_GPR_U32(ctx, 31, 0x31355Cu);
    ctx->pc = 0x313558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313554u;
    // 0x313558: 0x24061570  addiu       $a2, $zero, 0x1570 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x313554u, 0x31355Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31355Cu;
label_31355c:
    // 0x31355c: 0xc09dcaa  jal         func_2772A8
    ctx->pc = 0x31355Cu;
    SET_GPR_U32(ctx, 31, 0x313564u);
    ctx->pc = 0x313560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31355Cu;
    // 0x313560: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2772A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2772A8u, 0x31355Cu, 0x313564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313564u;
label_313564:
    // 0x313564: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x313564u;
    {
        const bool branch_taken_0x313564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313564u;
        // 0x313568: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313564) {
            ctx->pc = 0x313574u;
            goto label_313574;
        }
    }
    ctx->pc = 0x31356Cu;
label_31356c:
    // 0x31356c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31356cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313570: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x313570u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_313574:
    // 0x313574: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x313574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x313578: 0x3e00008  jr          $ra
    ctx->pc = 0x313578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31357Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313578u;
        // 0x31357c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313580u;
}
