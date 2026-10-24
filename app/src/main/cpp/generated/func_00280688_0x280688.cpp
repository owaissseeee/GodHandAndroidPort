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

// Function: func_00280688
// Address: 0x280688 - 0x280770
void func_00280688_0x280688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00280688_0x280688");
#endif

    switch (ctx->pc) {
        case 0x280700u: goto label_280700;
        case 0x280714u: goto label_280714;
        case 0x280748u: goto label_280748;
        case 0x28075cu: goto label_28075c;
        default: break;
    }

    ctx->pc = 0x280688u;

    // 0x280688: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x280688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28068c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28068cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280690: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x280690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x280694: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x280694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x280698: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x280698u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28069c: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x28069cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2806a0: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2806A0u;
    {
        const bool branch_taken_0x2806a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2806A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2806A0u;
        // 0x2806a4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2806a0) {
            ctx->pc = 0x28070Cu;
            goto label_28070c;
        }
    }
    ctx->pc = 0x2806A8u;
    // 0x2806a8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2806A8u;
    {
        const bool branch_taken_0x2806a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2806a8) {
            ctx->pc = 0x2806ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2806A8u;
            // 0x2806ac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2806C0u;
            goto label_2806c0;
        }
    }
    ctx->pc = 0x2806B0u;
    // 0x2806b0: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2806B0u;
    {
        const bool branch_taken_0x2806b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2806b0) {
            ctx->pc = 0x2806B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2806B0u;
            // 0x2806b4: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2806D8u;
            goto label_2806d8;
        }
    }
    ctx->pc = 0x2806B8u;
    // 0x2806b8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2806B8u;
    {
        const bool branch_taken_0x2806b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2806BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2806B8u;
        // 0x2806bc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2806b8) {
            ctx->pc = 0x280760u;
            goto label_280760;
        }
    }
    ctx->pc = 0x2806C0u;
label_2806c0:
    // 0x2806c0: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2806C0u;
    {
        const bool branch_taken_0x2806c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2806C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2806C0u;
        // 0x2806c4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2806c0) {
            ctx->pc = 0x28071Cu;
            goto label_28071c;
        }
    }
    ctx->pc = 0x2806C8u;
    // 0x2806c8: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2806C8u;
    {
        const bool branch_taken_0x2806c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2806c8) {
            ctx->pc = 0x280754u;
            goto label_280754;
        }
    }
    ctx->pc = 0x2806D0u;
    // 0x2806d0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2806D0u;
    {
        const bool branch_taken_0x2806d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2806D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2806D0u;
        // 0x2806d4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2806d0) {
            ctx->pc = 0x280760u;
            goto label_280760;
        }
    }
    ctx->pc = 0x2806D8u;
label_2806d8:
    // 0x2806d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2806d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2806dc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2806dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2806e0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2806e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2806e4: 0x8c450158  lw          $a1, 0x158($v0)
    ctx->pc = 0x2806e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
    // 0x2806e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2806e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2806ec: 0x8c46015c  lw          $a2, 0x15C($v0)
    ctx->pc = 0x2806ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 348)));
    // 0x2806f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2806f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2806f4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2806f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2806f8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2806F8u;
    SET_GPR_U32(ctx, 31, 0x280700u);
    ctx->pc = 0x2806FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2806F8u;
    // 0x2806fc: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2806F8u, 0x280700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280700u;
label_280700:
    // 0x280700: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x280700u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x280704: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x280704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x280708: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x280708u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_28070c:
    // 0x28070c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x28070Cu;
    SET_GPR_U32(ctx, 31, 0x280714u);
    ctx->pc = 0x280710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28070Cu;
    // 0x280710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x28070Cu, 0x280714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280714u;
label_280714:
    // 0x280714: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x280714u;
    {
        const bool branch_taken_0x280714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280714u;
        // 0x280718: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280714) {
            ctx->pc = 0x280760u;
            goto label_280760;
        }
    }
    ctx->pc = 0x28071Cu;
label_28071c:
    // 0x28071c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x28071cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x280720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x280720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280724: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x280724u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x280728: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x280728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28072c: 0x8c450160  lw          $a1, 0x160($v0)
    ctx->pc = 0x28072cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x280730: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x280730u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280734: 0x8c460164  lw          $a2, 0x164($v0)
    ctx->pc = 0x280734u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 356)));
    // 0x280738: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x280738u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28073c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x28073cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x280740: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x280740u;
    SET_GPR_U32(ctx, 31, 0x280748u);
    ctx->pc = 0x280744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280740u;
    // 0x280744: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x280740u, 0x280748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280748u;
label_280748:
    // 0x280748: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x280748u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x28074c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28074cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x280750: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x280750u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_280754:
    // 0x280754: 0xc055f06  jal         func_157C18
    ctx->pc = 0x280754u;
    SET_GPR_U32(ctx, 31, 0x28075Cu);
    ctx->pc = 0x280758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280754u;
    // 0x280758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x280754u, 0x28075Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28075Cu;
label_28075c:
    // 0x28075c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28075cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_280760:
    // 0x280760: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x280760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280764: 0x3e00008  jr          $ra
    ctx->pc = 0x280764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280764u;
        // 0x280768: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28076Cu;
    // 0x28076c: 0x0  nop
    ctx->pc = 0x28076cu;
    // NOP
    ctx->pc = 0x280770u;
}
