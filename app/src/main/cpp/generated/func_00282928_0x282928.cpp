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

// Function: func_00282928
// Address: 0x282928 - 0x282a18
void func_00282928_0x282928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00282928_0x282928");
#endif

    switch (ctx->pc) {
        case 0x2829acu: goto label_2829ac;
        case 0x2829c0u: goto label_2829c0;
        case 0x2829f0u: goto label_2829f0;
        case 0x282a04u: goto label_282a04;
        default: break;
    }

    ctx->pc = 0x282928u;

    // 0x282928: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x282928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28292c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x28292cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x282930: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x282930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x282934: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x282934u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282938: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x282938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28293c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28293cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282940: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x282940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x282944: 0x920215b0  lbu         $v0, 0x15B0($s0)
    ctx->pc = 0x282944u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x282948: 0x920402f6  lbu         $a0, 0x2F6($s0)
    ctx->pc = 0x282948u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x28294c: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x28294Cu;
    {
        const bool branch_taken_0x28294c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x282950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28294Cu;
        // 0x282950: 0xa2400b  movn        $t0, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28294c) {
            ctx->pc = 0x2829B8u;
            goto label_2829b8;
        }
    }
    ctx->pc = 0x282954u;
    // 0x282954: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x282954u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x282958: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x282958u;
    {
        const bool branch_taken_0x282958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x282958) {
            ctx->pc = 0x282970u;
            goto label_282970;
        }
    }
    ctx->pc = 0x282960u;
    // 0x282960: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x282960u;
    {
        const bool branch_taken_0x282960 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x282960) {
            ctx->pc = 0x282964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x282960u;
            // 0x282964: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282988u;
            goto label_282988;
        }
    }
    ctx->pc = 0x282968u;
    // 0x282968: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x282968u;
    {
        const bool branch_taken_0x282968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28296Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282968u;
        // 0x28296c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282968) {
            ctx->pc = 0x282A08u;
            goto label_282a08;
        }
    }
    ctx->pc = 0x282970u;
label_282970:
    // 0x282970: 0x10850015  beq         $a0, $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x282970u;
    {
        const bool branch_taken_0x282970 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x282974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282970u;
        // 0x282974: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282970) {
            ctx->pc = 0x2829C8u;
            goto label_2829c8;
        }
    }
    ctx->pc = 0x282978u;
    // 0x282978: 0x10820020  beq         $a0, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x282978u;
    {
        const bool branch_taken_0x282978 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x282978) {
            ctx->pc = 0x2829FCu;
            goto label_2829fc;
        }
    }
    ctx->pc = 0x282980u;
    // 0x282980: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x282980u;
    {
        const bool branch_taken_0x282980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282980u;
        // 0x282984: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282980) {
            ctx->pc = 0x282A08u;
            goto label_282a08;
        }
    }
    ctx->pc = 0x282988u;
label_282988:
    // 0x282988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28298c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28298cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x282990: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x282990u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x282994: 0x8c450158  lw          $a1, 0x158($v0)
    ctx->pc = 0x282994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
    // 0x282998: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x282998u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28299c: 0x8c46015c  lw          $a2, 0x15C($v0)
    ctx->pc = 0x28299cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 348)));
    // 0x2829a0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2829a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2829a4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2829A4u;
    SET_GPR_U32(ctx, 31, 0x2829ACu);
    ctx->pc = 0x2829A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2829A4u;
    // 0x2829a8: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2829A4u, 0x2829ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2829ACu;
label_2829ac:
    // 0x2829ac: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2829acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2829b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2829b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2829b4: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2829b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2829b8:
    // 0x2829b8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2829B8u;
    SET_GPR_U32(ctx, 31, 0x2829C0u);
    ctx->pc = 0x2829BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2829B8u;
    // 0x2829bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2829B8u, 0x2829C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2829C0u;
label_2829c0:
    // 0x2829c0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2829C0u;
    {
        const bool branch_taken_0x2829c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2829C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2829C0u;
        // 0x2829c4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2829c0) {
            ctx->pc = 0x282A08u;
            goto label_282a08;
        }
    }
    ctx->pc = 0x2829C8u;
label_2829c8:
    // 0x2829c8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2829c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2829cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2829ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2829d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2829d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2829d4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2829d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2829d8: 0x8c450160  lw          $a1, 0x160($v0)
    ctx->pc = 0x2829d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x2829dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2829dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2829e0: 0x8c460164  lw          $a2, 0x164($v0)
    ctx->pc = 0x2829e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 356)));
    // 0x2829e4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2829e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2829e8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2829E8u;
    SET_GPR_U32(ctx, 31, 0x2829F0u);
    ctx->pc = 0x2829ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2829E8u;
    // 0x2829ec: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2829E8u, 0x2829F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2829F0u;
label_2829f0:
    // 0x2829f0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2829f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2829f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2829f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2829f8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2829f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2829fc:
    // 0x2829fc: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2829FCu;
    SET_GPR_U32(ctx, 31, 0x282A04u);
    ctx->pc = 0x282A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2829FCu;
    // 0x282a00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2829FCu, 0x282A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282A04u;
label_282a04:
    // 0x282a04: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x282a04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_282a08:
    // 0x282a08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x282a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282a0c: 0x3e00008  jr          $ra
    ctx->pc = 0x282A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282A0Cu;
        // 0x282a10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282A0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282A14u;
    // 0x282a14: 0x0  nop
    ctx->pc = 0x282a14u;
    // NOP
    ctx->pc = 0x282a18u;
}
