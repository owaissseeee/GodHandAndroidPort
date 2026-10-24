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

// Function: func_00282388
// Address: 0x282388 - 0x282460
void func_00282388_0x282388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00282388_0x282388");
#endif

    switch (ctx->pc) {
        case 0x2823f4u: goto label_2823f4;
        case 0x282420u: goto label_282420;
        case 0x282434u: goto label_282434;
        default: break;
    }

    ctx->pc = 0x282388u;

    // 0x282388: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x282388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28238c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28238cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x282390: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x282390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x282394: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x282394u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282398: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x282398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28239c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28239cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2823a0: 0x920215b0  lbu         $v0, 0x15B0($s0)
    ctx->pc = 0x2823a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x2823a4: 0x920402f6  lbu         $a0, 0x2F6($s0)
    ctx->pc = 0x2823a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2823a8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2823A8u;
    {
        const bool branch_taken_0x2823a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2823ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2823A8u;
        // 0x2823ac: 0x62400b  movn        $t0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2823a8) {
            ctx->pc = 0x2823C4u;
            goto label_2823c4;
        }
    }
    ctx->pc = 0x2823B0u;
    // 0x2823b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2823b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2823b4: 0x1082001d  beq         $a0, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2823B4u;
    {
        const bool branch_taken_0x2823b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2823b4) {
            ctx->pc = 0x28242Cu;
            goto label_28242c;
        }
    }
    ctx->pc = 0x2823BCu;
    // 0x2823bc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2823BCu;
    {
        const bool branch_taken_0x2823bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2823C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2823BCu;
        // 0x2823c0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2823bc) {
            ctx->pc = 0x282450u;
            goto label_282450;
        }
    }
    ctx->pc = 0x2823C4u;
label_2823c4:
    // 0x2823c4: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x2823c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x2823c8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2823C8u;
    {
        const bool branch_taken_0x2823c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2823CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2823C8u;
        // 0x2823cc: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2823c8) {
            ctx->pc = 0x2823FCu;
            goto label_2823fc;
        }
    }
    ctx->pc = 0x2823D0u;
    // 0x2823d0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2823d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2823d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2823d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2823d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2823d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2823dc: 0x8c450094  lw          $a1, 0x94($v0)
    ctx->pc = 0x2823dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2823e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2823e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2823e4: 0x8c46009c  lw          $a2, 0x9C($v0)
    ctx->pc = 0x2823e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x2823e8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2823e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2823ec: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2823ECu;
    SET_GPR_U32(ctx, 31, 0x2823F4u);
    ctx->pc = 0x2823F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2823ECu;
    // 0x2823f0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2823ECu, 0x2823F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2823F4u;
label_2823f4:
    // 0x2823f4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2823F4u;
    {
        const bool branch_taken_0x2823f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2823F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2823F4u;
        // 0x2823f8: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2823f4) {
            ctx->pc = 0x282424u;
            goto label_282424;
        }
    }
    ctx->pc = 0x2823FCu;
label_2823fc:
    // 0x2823fc: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2823fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x282400: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282404: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x282404u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x282408: 0x8c450094  lw          $a1, 0x94($v0)
    ctx->pc = 0x282408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x28240c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28240cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282410: 0x8c460098  lw          $a2, 0x98($v0)
    ctx->pc = 0x282410u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x282414: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x282414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x282418: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x282418u;
    SET_GPR_U32(ctx, 31, 0x282420u);
    ctx->pc = 0x28241Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282418u;
    // 0x28241c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x282418u, 0x282420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282420u;
label_282420:
    // 0x282420: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x282420u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_282424:
    // 0x282424: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x282424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x282428: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x282428u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_28242c:
    // 0x28242c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x28242Cu;
    SET_GPR_U32(ctx, 31, 0x282434u);
    ctx->pc = 0x282430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28242Cu;
    // 0x282430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x28242Cu, 0x282434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282434u;
label_282434:
    // 0x282434: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x282434u;
    {
        const bool branch_taken_0x282434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x282434) {
            ctx->pc = 0x282438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282434u;
            // 0x282438: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282450u;
            goto label_282450;
        }
    }
    ctx->pc = 0x28243Cu;
    // 0x28243c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x28243cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x282440: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x282440u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x282444: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x282444u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x282448: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x282448u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x28244c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28244cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_282450:
    // 0x282450: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x282450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282454: 0x3e00008  jr          $ra
    ctx->pc = 0x282454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282454u;
        // 0x282458: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28245Cu;
    // 0x28245c: 0x0  nop
    ctx->pc = 0x28245cu;
    // NOP
    ctx->pc = 0x282460u;
}
