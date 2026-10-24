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

// Function: func_00282460
// Address: 0x282460 - 0x282578
void func_00282460_0x282460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00282460_0x282460");
#endif

    switch (ctx->pc) {
        case 0x282508u: goto label_282508;
        case 0x282538u: goto label_282538;
        case 0x28254cu: goto label_28254c;
        default: break;
    }

    ctx->pc = 0x282460u;

    // 0x282460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x282460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x282464: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x282464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x282468: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x282468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28246c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28246cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282470: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x282470u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x282474: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x282474u;
    {
        const bool branch_taken_0x282474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x282478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282474u;
        // 0x282478: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282474) {
            ctx->pc = 0x28248Cu;
            goto label_28248c;
        }
    }
    ctx->pc = 0x28247Cu;
    // 0x28247c: 0x10620031  beq         $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x28247Cu;
    {
        const bool branch_taken_0x28247c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28247c) {
            ctx->pc = 0x282544u;
            goto label_282544;
        }
    }
    ctx->pc = 0x282484u;
    // 0x282484: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x282484u;
    {
        const bool branch_taken_0x282484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282484u;
        // 0x282488: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282484) {
            ctx->pc = 0x282568u;
            goto label_282568;
        }
    }
    ctx->pc = 0x28248Cu;
label_28248c:
    // 0x28248c: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x28248cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x282490: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x282490u;
    {
        const bool branch_taken_0x282490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282490u;
        // 0x282494: 0x920215b0  lbu         $v0, 0x15B0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282490) {
            ctx->pc = 0x2824D8u;
            goto label_2824d8;
        }
    }
    ctx->pc = 0x282498u;
    // 0x282498: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x282498u;
    {
        const bool branch_taken_0x282498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282498u;
        // 0x28249c: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282498) {
            ctx->pc = 0x2824BCu;
            goto label_2824bc;
        }
    }
    ctx->pc = 0x2824A0u;
    // 0x2824a0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2824a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2824a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2824a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2824a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2824a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2824ac: 0x8c4500ac  lw          $a1, 0xAC($v0)
    ctx->pc = 0x2824acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
    // 0x2824b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2824b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2824b4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2824B4u;
    {
        const bool branch_taken_0x2824b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2824B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2824B4u;
        // 0x2824b8: 0x8c4600b4  lw          $a2, 0xB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2824b4) {
            ctx->pc = 0x2824F8u;
            goto label_2824f8;
        }
    }
    ctx->pc = 0x2824BCu;
label_2824bc:
    // 0x2824bc: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2824bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2824c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2824c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2824c4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2824c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2824c8: 0x8c4500a0  lw          $a1, 0xA0($v0)
    ctx->pc = 0x2824c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x2824cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2824ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2824d0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2824D0u;
    {
        const bool branch_taken_0x2824d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2824D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2824D0u;
        // 0x2824d4: 0x8c4600a8  lw          $a2, 0xA8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2824d0) {
            ctx->pc = 0x2824F8u;
            goto label_2824f8;
        }
    }
    ctx->pc = 0x2824D8u;
label_2824d8:
    // 0x2824d8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2824D8u;
    {
        const bool branch_taken_0x2824d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2824DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2824D8u;
        // 0x2824dc: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2824d8) {
            ctx->pc = 0x282510u;
            goto label_282510;
        }
    }
    ctx->pc = 0x2824E0u;
    // 0x2824e0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2824e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2824e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2824e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2824e8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2824e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2824ec: 0x8c4500ac  lw          $a1, 0xAC($v0)
    ctx->pc = 0x2824ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
    // 0x2824f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2824f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2824f4: 0x8c4600b0  lw          $a2, 0xB0($v0)
    ctx->pc = 0x2824f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_2824f8:
    // 0x2824f8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2824f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2824fc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2824fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x282500: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x282500u;
    SET_GPR_U32(ctx, 31, 0x282508u);
    ctx->pc = 0x282504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282500u;
    // 0x282504: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x282500u, 0x282508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282508u;
label_282508:
    // 0x282508: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x282508u;
    {
        const bool branch_taken_0x282508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28250Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282508u;
        // 0x28250c: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282508) {
            ctx->pc = 0x28253Cu;
            goto label_28253c;
        }
    }
    ctx->pc = 0x282510u;
label_282510:
    // 0x282510: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x282510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x282514: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282518: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x282518u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28251c: 0x8c4500a0  lw          $a1, 0xA0($v0)
    ctx->pc = 0x28251cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x282520: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x282520u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282524: 0x8c4600a4  lw          $a2, 0xA4($v0)
    ctx->pc = 0x282524u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x282528: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x282528u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28252c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x28252cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x282530: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x282530u;
    SET_GPR_U32(ctx, 31, 0x282538u);
    ctx->pc = 0x282534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282530u;
    // 0x282534: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x282530u, 0x282538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282538u;
label_282538:
    // 0x282538: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x282538u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_28253c:
    // 0x28253c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28253cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x282540: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x282540u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_282544:
    // 0x282544: 0xc055f06  jal         func_157C18
    ctx->pc = 0x282544u;
    SET_GPR_U32(ctx, 31, 0x28254Cu);
    ctx->pc = 0x282548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282544u;
    // 0x282548: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x282544u, 0x28254Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28254Cu;
label_28254c:
    // 0x28254c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x28254Cu;
    {
        const bool branch_taken_0x28254c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28254c) {
            ctx->pc = 0x282550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28254Cu;
            // 0x282550: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282568u;
            goto label_282568;
        }
    }
    ctx->pc = 0x282554u;
    // 0x282554: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x282554u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x282558: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x282558u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x28255c: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x28255cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x282560: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x282560u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x282564: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x282564u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_282568:
    // 0x282568: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x282568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28256c: 0x3e00008  jr          $ra
    ctx->pc = 0x28256Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28256Cu;
        // 0x282570: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28256Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282574u;
    // 0x282574: 0x0  nop
    ctx->pc = 0x282574u;
    // NOP
    ctx->pc = 0x282578u;
}
