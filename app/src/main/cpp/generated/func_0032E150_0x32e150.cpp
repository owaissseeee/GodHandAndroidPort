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

// Function: func_0032E150
// Address: 0x32e150 - 0x32e1f0
void func_0032E150_0x32e150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032E150_0x32e150");
#endif

    switch (ctx->pc) {
        case 0x32e170u: goto label_32e170;
        case 0x32e194u: goto label_32e194;
        default: break;
    }

    ctx->pc = 0x32e150u;

    // 0x32e150: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32e150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32e154: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32e154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32e158: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32e158u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e15c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32E15Cu;
    {
        const bool branch_taken_0x32e15c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x32E160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E15Cu;
        // 0x32e160: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e15c) {
            ctx->pc = 0x32E178u;
            goto label_32e178;
        }
    }
    ctx->pc = 0x32E164u;
    // 0x32e164: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32e164u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x32e168: 0xc0cff2c  jal         func_33FCB0
    ctx->pc = 0x32E168u;
    SET_GPR_U32(ctx, 31, 0x32E170u);
    ctx->pc = 0x32E16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E168u;
    // 0x32e16c: 0x24842d78  addiu       $a0, $a0, 0x2D78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCB0u, 0x32E168u, 0x32E170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E170u;
label_32e170:
    // 0x32e170: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x32E170u;
    {
        const bool branch_taken_0x32e170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E170u;
        // 0x32e174: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e170) {
            ctx->pc = 0x32E1E0u;
            goto label_32e1e0;
        }
    }
    ctx->pc = 0x32E178u;
label_32e178:
    // 0x32e178: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x32e178u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x32e17c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32e17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x32e180: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x32e180u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x32e184: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x32E184u;
    {
        const bool branch_taken_0x32e184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e184) {
            ctx->pc = 0x32E188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32E184u;
            // 0x32e188: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32E1E0u;
            goto label_32e1e0;
        }
    }
    ctx->pc = 0x32E18Cu;
    // 0x32e18c: 0xc0cbd5c  jal         func_32F570
    ctx->pc = 0x32E18Cu;
    SET_GPR_U32(ctx, 31, 0x32E194u);
    ctx->pc = 0x32E190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E18Cu;
    // 0x32e190: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F570u, 0x32E18Cu, 0x32E194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E194u;
label_32e194:
    // 0x32e194: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32E194u;
    {
        const bool branch_taken_0x32e194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E194u;
        // 0x32e198: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e194) {
            ctx->pc = 0x32E1B0u;
            goto label_32e1b0;
        }
    }
    ctx->pc = 0x32E19Cu;
    // 0x32e19c: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x32E19Cu;
    {
        const bool branch_taken_0x32e19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x32E1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E19Cu;
        // 0x32e1a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e19c) {
            ctx->pc = 0x32E1C8u;
            goto label_32e1c8;
        }
    }
    ctx->pc = 0x32E1A4u;
    // 0x32e1a4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x32E1A4u;
    {
        const bool branch_taken_0x32e1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E1A4u;
        // 0x32e1a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e1a4) {
            ctx->pc = 0x32E1E4u;
            goto label_32e1e4;
        }
    }
    ctx->pc = 0x32E1ACu;
    // 0x32e1ac: 0x0  nop
    ctx->pc = 0x32e1acu;
    // NOP
label_32e1b0:
    // 0x32e1b0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x32e1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x32e1b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32e1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32e1b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32e1b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32e1bc: 0x80cbd4e  j           func_32F538
    ctx->pc = 0x32E1BCu;
    ctx->pc = 0x32E1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E1BCu;
    // 0x32e1c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F538u, 0x32E1BCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32E1C4u;
    // 0x32e1c4: 0x0  nop
    ctx->pc = 0x32e1c4u;
    // NOP
label_32e1c8:
    // 0x32e1c8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x32e1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x32e1cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32e1ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32e1d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32e1d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32e1d4: 0x80ca92a  j           func_32A4A8
    ctx->pc = 0x32E1D4u;
    ctx->pc = 0x32E1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E1D4u;
    // 0x32e1d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A4A8u, 0x32E1D4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32E1DCu;
    // 0x32e1dc: 0x0  nop
    ctx->pc = 0x32e1dcu;
    // NOP
label_32e1e0:
    // 0x32e1e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32e1e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32e1e4:
    // 0x32e1e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32e1e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32e1e8: 0x3e00008  jr          $ra
    ctx->pc = 0x32E1E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E1E8u;
        // 0x32e1ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E1E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E1F0u;
}
