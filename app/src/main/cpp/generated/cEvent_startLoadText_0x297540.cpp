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

// Function: cEvent_startLoadText
// Address: 0x297540 - 0x2975d0
void cEvent_startLoadText_0x297540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEvent_startLoadText_0x297540");
#endif

    switch (ctx->pc) {
        case 0x297560u: goto label_297560;
        case 0x297570u: goto label_297570;
        case 0x2975a0u: goto label_2975a0;
        default: break;
    }

    ctx->pc = 0x297540u;

    // 0x297540: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x297540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x297544: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x297544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x297548: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x297548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x29754c: 0x3c100045  lui         $s0, 0x45
    ctx->pc = 0x29754cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)69 << 16));
    // 0x297550: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x297550u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297554: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x297554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x297558: 0xc0a5ee0  jal         func_297B80
    ctx->pc = 0x297558u;
    SET_GPR_U32(ctx, 31, 0x297560u);
    ctx->pc = 0x29755Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297558u;
    // 0x29755c: 0x2610a960  addiu       $s0, $s0, -0x56A0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B80u, 0x297558u, 0x297560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297560u;
label_297560:
    // 0x297560: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x297560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297564: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x297564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297568: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x297568u;
    SET_GPR_U32(ctx, 31, 0x297570u);
    ctx->pc = 0x29756Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297568u;
    // 0x29756c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x297568u, 0x297570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297570u;
label_297570:
    // 0x297570: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x297570u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x297574: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x297574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x297578: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x297578u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x29757c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29757cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297580: 0x8c473cf0  lw          $a3, 0x3CF0($v0)
    ctx->pc = 0x297580u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3C3CF0u));
    // 0x297584: 0x24843f20  addiu       $a0, $a0, 0x3F20
    ctx->pc = 0x297584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16160));
    // 0x297588: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x297588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x29758c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29758cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297590: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x297590u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297594: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x297594u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297598: 0xc08032c  jal         func_200CB0
    ctx->pc = 0x297598u;
    SET_GPR_U32(ctx, 31, 0x2975A0u);
    ctx->pc = 0x29759Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297598u;
    // 0x29759c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200CB0u, 0x297598u, 0x2975A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2975A0u;
label_2975a0:
    // 0x2975a0: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x2975a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2975a4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2975A4u;
    {
        const bool branch_taken_0x2975a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2975A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2975A4u;
        // 0x2975a8: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2975a4) {
            ctx->pc = 0x2975B8u;
            goto label_2975b8;
        }
    }
    ctx->pc = 0x2975ACu;
    // 0x2975ac: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2975acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2975b0: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x2975b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x2975b4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2975b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_2975b8:
    // 0x2975b8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2975b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2975bc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2975bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2975c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2975c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2975c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2975C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2975C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2975C4u;
        // 0x2975c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2975C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2975CCu;
    // 0x2975cc: 0x0  nop
    ctx->pc = 0x2975ccu;
    // NOP
    ctx->pc = 0x2975d0u;
}
