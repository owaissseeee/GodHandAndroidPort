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

// Function: func_00323568
// Address: 0x323568 - 0x323618
void func_00323568_0x323568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00323568_0x323568");
#endif

    switch (ctx->pc) {
        case 0x323590u: goto label_323590;
        case 0x3235b8u: goto label_3235b8;
        case 0x3235c0u: goto label_3235c0;
        case 0x3235d4u: goto label_3235d4;
        case 0x3235e8u: goto label_3235e8;
        case 0x3235f4u: goto label_3235f4;
        default: break;
    }

    ctx->pc = 0x323568u;

    // 0x323568: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x323568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32356c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x32356cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323570: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x323570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x323574: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x323574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323578: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x323578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32357c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x32357Cu;
    {
        const bool branch_taken_0x32357c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x323580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32357Cu;
        // 0x323580: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32357c) {
            ctx->pc = 0x323598u;
            goto label_323598;
        }
    }
    ctx->pc = 0x323584u;
    // 0x323584: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x323584u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x323588: 0xc0cfc4c  jal         func_33F130
    ctx->pc = 0x323588u;
    SET_GPR_U32(ctx, 31, 0x323590u);
    ctx->pc = 0x32358Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323588u;
    // 0x32358c: 0x24841658  addiu       $a0, $a0, 0x1658 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x323588u, 0x323590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323590u;
label_323590:
    // 0x323590: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x323590u;
    {
        const bool branch_taken_0x323590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323590u;
        // 0x323594: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323590) {
            ctx->pc = 0x323608u;
            goto label_323608;
        }
    }
    ctx->pc = 0x323598u;
label_323598:
    // 0x323598: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x323598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x32359c: 0x3c08000f  lui         $t0, 0xF
    ctx->pc = 0x32359cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)15 << 16));
    // 0x3235a0: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x3235a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x3235a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3235a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3235a8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3235a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3235ac: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x3235acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x3235b0: 0xc0c9fc0  jal         func_327F00
    ctx->pc = 0x3235B0u;
    SET_GPR_U32(ctx, 31, 0x3235B8u);
    ctx->pc = 0x3235B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3235B0u;
    // 0x3235b4: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327F00u, 0x3235B0u, 0x3235B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3235B8u;
label_3235b8:
    // 0x3235b8: 0xc0ca026  jal         func_328098
    ctx->pc = 0x3235B8u;
    SET_GPR_U32(ctx, 31, 0x3235C0u);
    ctx->pc = 0x3235BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3235B8u;
    // 0x3235bc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328098u, 0x3235B8u, 0x3235C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3235C0u;
label_3235c0:
    // 0x3235c0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3235c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3235c4: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3235C4u;
    {
        const bool branch_taken_0x3235c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3235c4) {
            ctx->pc = 0x3235E0u;
            goto label_3235e0;
        }
    }
    ctx->pc = 0x3235CCu;
    // 0x3235cc: 0xc0ca006  jal         func_328018
    ctx->pc = 0x3235CCu;
    SET_GPR_U32(ctx, 31, 0x3235D4u);
    ctx->pc = 0x3235D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3235CCu;
    // 0x3235d0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328018u, 0x3235CCu, 0x3235D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3235D4u;
label_3235d4:
    // 0x3235d4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3235D4u;
    {
        const bool branch_taken_0x3235d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3235D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3235D4u;
        // 0x3235d8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3235d4) {
            ctx->pc = 0x323608u;
            goto label_323608;
        }
    }
    ctx->pc = 0x3235DCu;
    // 0x3235dc: 0x0  nop
    ctx->pc = 0x3235dcu;
    // NOP
label_3235e0:
    // 0x3235e0: 0xc0ca350  jal         func_328D40
    ctx->pc = 0x3235E0u;
    SET_GPR_U32(ctx, 31, 0x3235E8u);
    ctx->pc = 0x3235E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3235E0u;
    // 0x3235e4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328D40u, 0x3235E0u, 0x3235E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3235E8u;
label_3235e8:
    // 0x3235e8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3235e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3235ec: 0xc0ca360  jal         func_328D80
    ctx->pc = 0x3235ECu;
    SET_GPR_U32(ctx, 31, 0x3235F4u);
    ctx->pc = 0x3235F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3235ECu;
    // 0x3235f0: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328D80u, 0x3235ECu, 0x3235F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3235F4u;
label_3235f4:
    // 0x3235f4: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x3235f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x3235f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3235f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3235fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3235fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323600: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x323600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x323604: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x323604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_323608:
    // 0x323608: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x323608u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32360c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32360cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x323610: 0x3e00008  jr          $ra
    ctx->pc = 0x323610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323610u;
        // 0x323614: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323618u;
}
