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

// Function: func_00282120
// Address: 0x282120 - 0x2821f0
void func_00282120_0x282120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00282120_0x282120");
#endif

    switch (ctx->pc) {
        case 0x282180u: goto label_282180;
        case 0x2821b0u: goto label_2821b0;
        case 0x2821c4u: goto label_2821c4;
        default: break;
    }

    ctx->pc = 0x282120u;

    // 0x282120: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x282120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x282124: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x282124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x282128: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x282128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28212c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28212cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282130: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x282130u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x282134: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x282134u;
    {
        const bool branch_taken_0x282134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x282138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282134u;
        // 0x282138: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282134) {
            ctx->pc = 0x28214Cu;
            goto label_28214c;
        }
    }
    ctx->pc = 0x28213Cu;
    // 0x28213c: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x28213Cu;
    {
        const bool branch_taken_0x28213c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28213c) {
            ctx->pc = 0x2821BCu;
            goto label_2821bc;
        }
    }
    ctx->pc = 0x282144u;
    // 0x282144: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x282144u;
    {
        const bool branch_taken_0x282144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282144u;
        // 0x282148: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282144) {
            ctx->pc = 0x2821E0u;
            goto label_2821e0;
        }
    }
    ctx->pc = 0x28214Cu;
label_28214c:
    // 0x28214c: 0x920215b0  lbu         $v0, 0x15B0($s0)
    ctx->pc = 0x28214cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x282150: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x282150u;
    {
        const bool branch_taken_0x282150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282150u;
        // 0x282154: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282150) {
            ctx->pc = 0x282188u;
            goto label_282188;
        }
    }
    ctx->pc = 0x282158u;
    // 0x282158: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x282158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28215c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28215cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282160: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x282160u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x282164: 0x8c45008c  lw          $a1, 0x8C($v0)
    ctx->pc = 0x282164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x282168: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x282168u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28216c: 0x8c460090  lw          $a2, 0x90($v0)
    ctx->pc = 0x28216cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x282170: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x282170u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282174: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x282174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x282178: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x282178u;
    SET_GPR_U32(ctx, 31, 0x282180u);
    ctx->pc = 0x28217Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282178u;
    // 0x28217c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x282178u, 0x282180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282180u;
label_282180:
    // 0x282180: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x282180u;
    {
        const bool branch_taken_0x282180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282180u;
        // 0x282184: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282180) {
            ctx->pc = 0x2821B4u;
            goto label_2821b4;
        }
    }
    ctx->pc = 0x282188u;
label_282188:
    // 0x282188: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x282188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28218c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28218cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282190: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x282190u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x282194: 0x8c450084  lw          $a1, 0x84($v0)
    ctx->pc = 0x282194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x282198: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x282198u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28219c: 0x8c460088  lw          $a2, 0x88($v0)
    ctx->pc = 0x28219cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x2821a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2821a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2821a4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2821a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2821a8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2821A8u;
    SET_GPR_U32(ctx, 31, 0x2821B0u);
    ctx->pc = 0x2821ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2821A8u;
    // 0x2821ac: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2821A8u, 0x2821B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2821B0u;
label_2821b0:
    // 0x2821b0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2821b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_2821b4:
    // 0x2821b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2821b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2821b8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2821b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2821bc:
    // 0x2821bc: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2821BCu;
    SET_GPR_U32(ctx, 31, 0x2821C4u);
    ctx->pc = 0x2821C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2821BCu;
    // 0x2821c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2821BCu, 0x2821C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2821C4u;
label_2821c4:
    // 0x2821c4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2821C4u;
    {
        const bool branch_taken_0x2821c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2821c4) {
            ctx->pc = 0x2821C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2821C4u;
            // 0x2821c8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2821E0u;
            goto label_2821e0;
        }
    }
    ctx->pc = 0x2821CCu;
    // 0x2821cc: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x2821ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2821d0: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x2821d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x2821d4: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x2821d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x2821d8: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x2821d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x2821dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2821dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2821e0:
    // 0x2821e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2821e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2821e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2821E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2821E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2821E4u;
        // 0x2821e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2821E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2821ECu;
    // 0x2821ec: 0x0  nop
    ctx->pc = 0x2821ecu;
    // NOP
    ctx->pc = 0x2821f0u;
}
