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

// Function: func_002B04C0
// Address: 0x2b04c0 - 0x2b0610
void func_002B04C0_0x2b04c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B04C0_0x2b04c0");
#endif

    switch (ctx->pc) {
        case 0x2b05a0u: goto label_2b05a0;
        default: break;
    }

    ctx->pc = 0x2b04c0u;

    // 0x2b04c0: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x2b04c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b04c4: 0x313c2  srl         $v0, $v1, 15
    ctx->pc = 0x2b04c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 15));
    // 0x2b04c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B04C8u;
    {
        const bool branch_taken_0x2b04c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B04CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B04C8u;
        // 0x2b04cc: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b04c8) {
            ctx->pc = 0x2B04D8u;
            goto label_2b04d8;
        }
    }
    ctx->pc = 0x2B04D0u;
    // 0x2b04d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B04D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B04D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B04D0u;
        // 0x2b04d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B04D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B04D8u;
label_2b04d8:
    // 0x2b04d8: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b04d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b04dc: 0x3402b300  ori         $v0, $zero, 0xB300
    ctx->pc = 0x2b04dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)45824);
    // 0x2b04e0: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2B04E0u;
    {
        const bool branch_taken_0x2b04e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B04E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B04E0u;
        // 0x2b04e4: 0x43102a  slt         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b04e0) {
            ctx->pc = 0x2B0584u;
            goto label_2b0584;
        }
    }
    ctx->pc = 0x2B04E8u;
    // 0x2b04e8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B04E8u;
    {
        const bool branch_taken_0x2b04e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B04ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B04E8u;
        // 0x2b04ec: 0x3402b700  ori         $v0, $zero, 0xB700 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)46848);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b04e8) {
            ctx->pc = 0x2B050Cu;
            goto label_2b050c;
        }
    }
    ctx->pc = 0x2B04F0u;
    // 0x2b04f0: 0x3402b000  ori         $v0, $zero, 0xB000
    ctx->pc = 0x2b04f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)45056);
    // 0x2b04f4: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2B04F4u;
    {
        const bool branch_taken_0x2b04f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B04F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B04F4u;
        // 0x2b04f8: 0x3402b200  ori         $v0, $zero, 0xB200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)45568);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b04f4) {
            ctx->pc = 0x2B0540u;
            goto label_2b0540;
        }
    }
    ctx->pc = 0x2B04FCu;
    // 0x2b04fc: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2B04FCu;
    {
        const bool branch_taken_0x2b04fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B0500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B04FCu;
        // 0x2b0500: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b04fc) {
            ctx->pc = 0x2B0568u;
            goto label_2b0568;
        }
    }
    ctx->pc = 0x2B0504u;
    // 0x2b0504: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x2B0504u;
    {
        const bool branch_taken_0x2b0504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0504) {
            ctx->pc = 0x2B0608u;
            goto label_2b0608;
        }
    }
    ctx->pc = 0x2B050Cu;
label_2b050c:
    // 0x2b050c: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2B050Cu;
    {
        const bool branch_taken_0x2b050c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B0510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B050Cu;
        // 0x2b0510: 0x43102a  slt         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b050c) {
            ctx->pc = 0x2B05D8u;
            goto label_2b05d8;
        }
    }
    ctx->pc = 0x2B0514u;
    // 0x2b0514: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B0514u;
    {
        const bool branch_taken_0x2b0514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0514u;
        // 0x2b0518: 0x3402b800  ori         $v0, $zero, 0xB800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)47104);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0514) {
            ctx->pc = 0x2B0530u;
            goto label_2b0530;
        }
    }
    ctx->pc = 0x2B051Cu;
    // 0x2b051c: 0x3402b600  ori         $v0, $zero, 0xB600
    ctx->pc = 0x2b051cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)46592);
    // 0x2b0520: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2B0520u;
    {
        const bool branch_taken_0x2b0520 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B0524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0520u;
        // 0x2b0524: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0520) {
            ctx->pc = 0x2B05B8u;
            goto label_2b05b8;
        }
    }
    ctx->pc = 0x2B0528u;
    // 0x2b0528: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2B0528u;
    {
        const bool branch_taken_0x2b0528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0528) {
            ctx->pc = 0x2B0608u;
            goto label_2b0608;
        }
    }
    ctx->pc = 0x2B0530u;
label_2b0530:
    // 0x2b0530: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2B0530u;
    {
        const bool branch_taken_0x2b0530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B0534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0530u;
        // 0x2b0534: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0530) {
            ctx->pc = 0x2B05ECu;
            goto label_2b05ec;
        }
    }
    ctx->pc = 0x2B0538u;
    // 0x2b0538: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2B0538u;
    {
        const bool branch_taken_0x2b0538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0538) {
            ctx->pc = 0x2B0608u;
            goto label_2b0608;
        }
    }
    ctx->pc = 0x2B0540u;
label_2b0540:
    // 0x2b0540: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x2b0540u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2b0544: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b0544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b0548: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2b0548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2b054c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b054cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b0550: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b0550u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0554: 0x0  nop
    ctx->pc = 0x2b0554u;
    // NOP
    // 0x2b0558: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b0558u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b055c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2b055cu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x2b0560: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0560u;
        // 0x2b0564: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0568u;
label_2b0568:
    // 0x2b0568: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x2b0568u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2b056c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b056cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b0570: 0x94a40004  lhu         $a0, 0x4($a1)
    ctx->pc = 0x2b0570u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2b0574: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2b0574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2b0578: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2b0578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2b057c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B057Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B057Cu;
        // 0x2b0580: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B057Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0584u;
label_2b0584:
    // 0x2b0584: 0x8ce4004c  lw          $a0, 0x4C($a3)
    ctx->pc = 0x2b0584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 76)));
    // 0x2b0588: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2b0588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b058c: 0x8ce30050  lw          $v1, 0x50($a3)
    ctx->pc = 0x2b058cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x2b0590: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2b0590u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2b0594: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x2b0594u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2b0598: 0x24a523b0  addiu       $a1, $a1, 0x23B0
    ctx->pc = 0x2b0598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9136));
    // 0x2b059c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b059cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2b05a0:
    // 0x2b05a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b05a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b05a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b05a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b05a8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2b05a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2b05ac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b05acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b05b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B05B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B05B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B05B0u;
        // 0x2b05b4: 0xacc40004  sw          $a0, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B05B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B05B8u;
label_2b05b8:
    // 0x2b05b8: 0x8ce4004c  lw          $a0, 0x4C($a3)
    ctx->pc = 0x2b05b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 76)));
    // 0x2b05bc: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2b05bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b05c0: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x2b05c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2b05c4: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x2b05c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2b05c8: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2b05c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2b05cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b05ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b05d0: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x2B05D0u;
    {
        const bool branch_taken_0x2b05d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B05D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B05D0u;
        // 0x2b05d4: 0x24a523b0  addiu       $a1, $a1, 0x23B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b05d0) {
            ctx->pc = 0x2B05A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b05a0;
        }
    }
    ctx->pc = 0x2B05D8u;
label_2b05d8:
    // 0x2b05d8: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x2b05d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2b05dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b05dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b05e0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2b05e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2b05e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B05E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B05E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B05E4u;
        // 0x2b05e8: 0xacc30008  sw          $v1, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B05E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B05ECu;
label_2b05ec:
    // 0x2b05ec: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x2b05ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2b05f0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2b05f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2b05f4: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x2b05f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x2b05f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b05f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b05fc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x2b05fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2b0600: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0600u;
        // 0x2b0604: 0xacc40008  sw          $a0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0608u;
label_2b0608:
    // 0x2b0608: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0610u;
}
