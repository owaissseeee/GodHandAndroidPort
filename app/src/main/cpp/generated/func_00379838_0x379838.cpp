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

// Function: func_00379838
// Address: 0x379838 - 0x379910
void func_00379838_0x379838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00379838_0x379838");
#endif

    switch (ctx->pc) {
        case 0x3798e8u: goto label_3798e8;
        case 0x379900u: goto label_379900;
        default: break;
    }

    ctx->pc = 0x379838u;

    // 0x379838: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x379838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37983c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37983cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379840: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x379840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x379844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x379844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x379848: 0x80830007  lb          $v1, 0x7($a0)
    ctx->pc = 0x379848u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x37984c: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x37984Cu;
    {
        const bool branch_taken_0x37984c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x379850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37984Cu;
        // 0x379850: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37984c) {
            ctx->pc = 0x379894u;
            goto label_379894;
        }
    }
    ctx->pc = 0x379854u;
    // 0x379854: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x379854u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x379858: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x379858u;
    {
        const bool branch_taken_0x379858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x379858) {
            ctx->pc = 0x37985Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x379858u;
            // 0x37985c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x379870u;
            goto label_379870;
        }
    }
    ctx->pc = 0x379860u;
    // 0x379860: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x379860u;
    {
        const bool branch_taken_0x379860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x379864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379860u;
        // 0x379864: 0x108400  sll         $s0, $s0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379860) {
            ctx->pc = 0x379880u;
            goto label_379880;
        }
    }
    ctx->pc = 0x379868u;
    // 0x379868: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x379868u;
    {
        const bool branch_taken_0x379868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379868u;
        // 0x37986c: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379868) {
            ctx->pc = 0x3798D0u;
            goto label_3798d0;
        }
    }
    ctx->pc = 0x379870u;
label_379870:
    // 0x379870: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x379870u;
    {
        const bool branch_taken_0x379870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x379874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379870u;
        // 0x379874: 0x108400  sll         $s0, $s0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379870) {
            ctx->pc = 0x3798A8u;
            goto label_3798a8;
        }
    }
    ctx->pc = 0x379878u;
    // 0x379878: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x379878u;
    {
        const bool branch_taken_0x379878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379878u;
        // 0x37987c: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379878) {
            ctx->pc = 0x3798D0u;
            goto label_3798d0;
        }
    }
    ctx->pc = 0x379880u;
label_379880:
    // 0x379880: 0x80830025  lb          $v1, 0x25($a0)
    ctx->pc = 0x379880u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 37)));
    // 0x379884: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x379884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x379888: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x379888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x37988c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x37988Cu;
    {
        const bool branch_taken_0x37988c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37988Cu;
        // 0x379890: 0x244221e8  addiu       $v0, $v0, 0x21E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37988c) {
            ctx->pc = 0x3798B8u;
            goto label_3798b8;
        }
    }
    ctx->pc = 0x379894u;
label_379894:
    // 0x379894: 0x80830025  lb          $v1, 0x25($a0)
    ctx->pc = 0x379894u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 37)));
    // 0x379898: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x379898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x37989c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x37989cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3798a0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3798A0u;
    {
        const bool branch_taken_0x3798a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3798A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3798A0u;
        // 0x3798a4: 0x24422368  addiu       $v0, $v0, 0x2368 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9064));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3798a0) {
            ctx->pc = 0x3798B8u;
            goto label_3798b8;
        }
    }
    ctx->pc = 0x3798A8u;
label_3798a8:
    // 0x3798a8: 0x80830025  lb          $v1, 0x25($a0)
    ctx->pc = 0x3798a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 37)));
    // 0x3798ac: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x3798acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x3798b0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x3798b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3798b4: 0x244224d0  addiu       $v0, $v0, 0x24D0
    ctx->pc = 0x3798b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9424));
label_3798b8:
    // 0x3798b8: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x3798b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3798bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3798bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3798c0: 0x84640006  lh          $a0, 0x6($v1)
    ctx->pc = 0x3798c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x3798c4: 0x24900003  addiu       $s0, $a0, 0x3
    ctx->pc = 0x3798c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x3798c8: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x3798c8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x3798cc: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3798ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
label_3798d0:
    // 0x3798d0: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x3798d0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x3798d4: 0x24e7b758  addiu       $a3, $a3, -0x48A8
    ctx->pc = 0x3798d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948696));
    // 0x3798d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3798d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3798dc: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x3798dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x3798e0: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3798E0u;
    SET_GPR_U32(ctx, 31, 0x3798E8u);
    ctx->pc = 0x3798E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3798E0u;
    // 0x3798e4: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3798E0u, 0x3798E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3798E8u;
label_3798e8:
    // 0x3798e8: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3798e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3798ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3798ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3798f0: 0x24e7b760  addiu       $a3, $a3, -0x48A0
    ctx->pc = 0x3798f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948704));
    // 0x3798f4: 0x2404002e  addiu       $a0, $zero, 0x2E
    ctx->pc = 0x3798f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x3798f8: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3798F8u;
    SET_GPR_U32(ctx, 31, 0x379900u);
    ctx->pc = 0x3798FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3798F8u;
    // 0x3798fc: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3798F8u, 0x379900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379900u;
label_379900:
    // 0x379900: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x379900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x379904: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x379904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x379908: 0x3e00008  jr          $ra
    ctx->pc = 0x379908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379908u;
        // 0x37990c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x379910u;
}
