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

// Function: func_002826C8
// Address: 0x2826c8 - 0x2827c8
void func_002826C8_0x2826c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002826C8_0x2826c8");
#endif

    switch (ctx->pc) {
        case 0x282770u: goto label_282770;
        case 0x2827a0u: goto label_2827a0;
        case 0x2827b4u: goto label_2827b4;
        default: break;
    }

    ctx->pc = 0x2826c8u;

    // 0x2826c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2826c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2826cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2826ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2826d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2826d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2826d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2826d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2826d8: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x2826d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2826dc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2826DCu;
    {
        const bool branch_taken_0x2826dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2826E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2826DCu;
        // 0x2826e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2826dc) {
            ctx->pc = 0x2826F4u;
            goto label_2826f4;
        }
    }
    ctx->pc = 0x2826E4u;
    // 0x2826e4: 0x10620031  beq         $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2826E4u;
    {
        const bool branch_taken_0x2826e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2826e4) {
            ctx->pc = 0x2827ACu;
            goto label_2827ac;
        }
    }
    ctx->pc = 0x2826ECu;
    // 0x2826ec: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2826ECu;
    {
        const bool branch_taken_0x2826ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2826F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2826ECu;
        // 0x2826f0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2826ec) {
            ctx->pc = 0x2827B8u;
            goto label_2827b8;
        }
    }
    ctx->pc = 0x2826F4u;
label_2826f4:
    // 0x2826f4: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x2826f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x2826f8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2826F8u;
    {
        const bool branch_taken_0x2826f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2826FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2826F8u;
        // 0x2826fc: 0x920215b0  lbu         $v0, 0x15B0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2826f8) {
            ctx->pc = 0x282740u;
            goto label_282740;
        }
    }
    ctx->pc = 0x282700u;
    // 0x282700: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x282700u;
    {
        const bool branch_taken_0x282700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282700u;
        // 0x282704: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282700) {
            ctx->pc = 0x282724u;
            goto label_282724;
        }
    }
    ctx->pc = 0x282708u;
    // 0x282708: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x282708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28270c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28270cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282710: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x282710u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x282714: 0x8c450100  lw          $a1, 0x100($v0)
    ctx->pc = 0x282714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x282718: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x282718u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28271c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x28271Cu;
    {
        const bool branch_taken_0x28271c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28271Cu;
        // 0x282720: 0x8c460104  lw          $a2, 0x104($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28271c) {
            ctx->pc = 0x282760u;
            goto label_282760;
        }
    }
    ctx->pc = 0x282724u;
label_282724:
    // 0x282724: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x282724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x282728: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28272c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28272cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x282730: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x282730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x282734: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x282734u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282738: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x282738u;
    {
        const bool branch_taken_0x282738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28273Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282738u;
        // 0x28273c: 0x8c4600f4  lw          $a2, 0xF4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282738) {
            ctx->pc = 0x282760u;
            goto label_282760;
        }
    }
    ctx->pc = 0x282740u;
label_282740:
    // 0x282740: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x282740u;
    {
        const bool branch_taken_0x282740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282740u;
        // 0x282744: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282740) {
            ctx->pc = 0x282778u;
            goto label_282778;
        }
    }
    ctx->pc = 0x282748u;
    // 0x282748: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x282748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28274c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28274cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282750: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x282750u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x282754: 0x8c4500f8  lw          $a1, 0xF8($v0)
    ctx->pc = 0x282754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
    // 0x282758: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x282758u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28275c: 0x8c4600fc  lw          $a2, 0xFC($v0)
    ctx->pc = 0x28275cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_282760:
    // 0x282760: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x282760u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282764: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x282764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x282768: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x282768u;
    SET_GPR_U32(ctx, 31, 0x282770u);
    ctx->pc = 0x28276Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282768u;
    // 0x28276c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x282768u, 0x282770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282770u;
label_282770:
    // 0x282770: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x282770u;
    {
        const bool branch_taken_0x282770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282770u;
        // 0x282774: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282770) {
            ctx->pc = 0x2827A4u;
            goto label_2827a4;
        }
    }
    ctx->pc = 0x282778u;
label_282778:
    // 0x282778: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x282778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x28277c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28277cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282780: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x282780u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x282784: 0x8c4500e8  lw          $a1, 0xE8($v0)
    ctx->pc = 0x282784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x282788: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x282788u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28278c: 0x8c4600ec  lw          $a2, 0xEC($v0)
    ctx->pc = 0x28278cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
    // 0x282790: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x282790u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282794: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x282794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x282798: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x282798u;
    SET_GPR_U32(ctx, 31, 0x2827A0u);
    ctx->pc = 0x28279Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282798u;
    // 0x28279c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x282798u, 0x2827A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2827A0u;
label_2827a0:
    // 0x2827a0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2827a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_2827a4:
    // 0x2827a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2827a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2827a8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2827a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2827ac:
    // 0x2827ac: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2827ACu;
    SET_GPR_U32(ctx, 31, 0x2827B4u);
    ctx->pc = 0x2827B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2827ACu;
    // 0x2827b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2827ACu, 0x2827B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2827B4u;
label_2827b4:
    // 0x2827b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2827b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2827b8:
    // 0x2827b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2827b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2827bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2827BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2827C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2827BCu;
        // 0x2827c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2827BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2827C4u;
    // 0x2827c4: 0x0  nop
    ctx->pc = 0x2827c4u;
    // NOP
    ctx->pc = 0x2827c8u;
}
